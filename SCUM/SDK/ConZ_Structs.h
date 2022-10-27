#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Enum ConZ.EPrisonerMontage
	 */
	enum class EPrisonerMontage : uint8_t
	{
		None                          = 0,
		WeaponEquipRifle              = 1,
		WeaponUnequipRifle            = 2,
		WeaponEquipHandgun            = 3,
		WeaponUnequipHandgun          = 4,
		Urinate                       = 5,
		UrinateForced                 = 6,
		Defecate                      = 7,
		DefecateForced                = 8,
		Vomit                         = 9,
		VomitForced                   = 10,
		SearchObject                  = 11,
		SearchPrisoner                = 12,
		SearchZombie                  = 13,
		PatchWounds                   = 14,
		PatchWoundsEnd                = 15,
		DrinkInteraction              = 16,
		Eat                           = 17,
		EatCan                        = 18,
		Drink                         = 19,
		Throw                         = 20,
		LongThrow                     = 21,
		LongThrowLoop                 = 22,
		ShortThrow                    = 23,
		ThrowbackGrenade              = 24,
		SwapWeapons                   = 25,
		ChopTree                      = 26,
		ChopTreeEnd                   = 27,
		ChopLog                       = 28,
		ChopLogEnd                    = 29,
		BreakStone                    = 30,
		BreakStoneEnd                 = 31,
		SwapItemsNotWeaponToNotWeapon = 32,
		SwapItemsWeaponToWeapon       = 33,
		SwapItemsNotWeaponToWeapon    = 34,
		SwapItemsWeaponToNotWeapon    = 35,
		SwapItemsThrowingItemToWeapon = 36,
		SwapItemsWeaponToThrowingItem = 37,
		Craft                         = 38,
		Uncraft                       = 39,
		CheckTime                     = 40,
		CheckTimeWhileItemInHands     = 41,
		CheckTimeWhileWeaponInHands   = 42,
		CheckTemperature              = 43,
		GestureShowFinger             = 44,
		GestureStandSurrender         = 45,
		GestureWaveHi                 = 46,
		GestureYouAreDead             = 47,
		GestureFY                     = 48,
		GesturePoint                  = 49,
		GestureHeart                  = 50,
		GestureBallpalm               = 51,
		GestureFacepalm               = 52,
		GestureFingerGun              = 53,
		GestureLaughing               = 54,
		GestureSmellWave              = 55,
		GestureSquat                  = 56,
		GestureCharge                 = 57,
		GestureFreeze                 = 58,
		GestureGetDown                = 59,
		GestureGetUp                  = 60,
		GestureHalt                   = 61,
		GestureHurryUp                = 62,
		GesturePointMe                = 63,
		GesturePointYou               = 64,
		GestureRally                  = 65,
		GestureThumbsUp               = 66,
		GestureThumbsDown             = 67,
		GestureUnderstandNot          = 68,
		GestureUnderstandYes          = 69,
		CommitSuicide                 = 70,
		CommitSuicideRare             = 71,
		CommitSuicideCaptured         = 72,
		LockpickRegular               = 73,
		Whistle                       = 74,
		TuneBow                       = 75,
		RepairVehicle                 = 76,
		WashCloth                     = 77,
		Bury                          = 78,
		BuryRest                      = 79,
		ResumeBury                    = 80,
		SitOnGroundStart              = 81,
		SitOnGroundEnd                = 82,
		LayOnGroundStart              = 83,
		LayOnGroundEnd                = 84,
		IgniteFlare                   = 85,
		ArmTrap                       = 86,
		FishingEnter                  = 87,
		FishingLeave                  = 88,
		FishingCast                   = 89,
		FishingLongCastEnd            = 90,
		FishingShortCastEnd           = 91,
		FishingPullStart              = 92,
		FishingPullEnd                = 93,
		FishingFishCaught             = 94,
		FishingKeepFish               = 95,
		FishingDiscardFish            = 96,
		FishingWireBreak              = 97,
		ForceUnlockStanding           = 98,
		ForceUnlockStandingEnd        = 99,
		ForceUnlockStandingStop       = 100,
		Spill                         = 101,
		StompOutFire                  = 102,
		BasicDance1                   = 103,
		BasicDance2                   = 104,
		BasicDance3                   = 105,
		BasicDance4                   = 106,
		BasicDance5                   = 107,
		AdvanceDance1                 = 108,
		AdvanceDance2                 = 109,
		AdvanceDance3                 = 110,
		AdvanceDance4                 = 111,
		AdvanceDance5                 = 112,
		AdvanceDance6                 = 113,
		AdvanceDance7                 = 114,
		InjectSelf                    = 115,
		InjectOther                   = 116,
		Count                         = 117,
		MAX                           = 118
	};

	/**
	 * Enum ConZ.EPrisonerAnimationSet
	 */
	enum class EPrisonerAnimationSet : uint8_t
	{
		Base                   = 0,
		Rifle                  = 1,
		RifleRelaxed           = 2,
		UnarmedCombat          = 3,
		Handgun                = 4,
		BowRelaxed             = 5,
		Bow                    = 6,
		CarryingItem           = 7,
		HandsBound             = 8,
		BaseLimping            = 9,
		RifleLimping           = 10,
		RifleRelaxedLimping    = 11,
		UnarmedCombatLimping   = 12,
		HandgunLimping         = 13,
		BowRelaxedLimping      = 14,
		BowLimping             = 15,
		CarryingItemLimping    = 16,
		HandsBoundLimping      = 17,
		ChainsawRelaxed        = 18,
		ChainsawRelaxedLimping = 19,
		Chainsaw               = 20,
		ChainsawLimping        = 21,
		Count                  = 22,
		MAX                    = 23
	};

	/**
	 * Enum ConZ.EWidgetDisplayInfoType
	 */
	enum class EWidgetDisplayInfoType : uint8_t
	{
		None            = 0,
		FirstOverSecond = 1,
		Single          = 2,
		MAX             = 3
	};

	/**
	 * Enum ConZ.EInteractionType
	 */
	enum class EInteractionType : uint8_t
	{
		None                                  = 0,
		Search                                = 1,
		Examine                               = 2,
		PickUp                                = 3,
		PickUpAllExamined                     = 4,
		PickUpAllSelected                     = 5,
		Use                                   = 6,
		Operate                               = 7,
		Drop                                  = 8,
		DropAllSelected                       = 9,
		Throw                                 = 10,
		Open                                  = 11,
		Close                                 = 12,
		Lock                                  = 13,
		Unlock                                = 14,
		Push                                  = 15,
		GodModeFill                           = 16,
		Fill                                  = 17,
		AdjustHeight                          = 18,
		ConfirmHeight                         = 19,
		Tank                                  = 20,
		Craft                                 = 21,
		Uncraft                               = 22,
		Create                                = 23,
		FixTire                               = 24,
		Fix                                   = 25,
		Refuel                                = 26,
		Charge                                = 27,
		FillResourceContainer                 = 28,
		Eat                                   = 29,
		EatAll                                = 30,
		Drink                                 = 31,
		DrinkAll                              = 32,
		Inject                                = 33,
		CheckTaste                            = 34,
		Equip                                 = 35,
		UnEquip                               = 36,
		Cut                                   = 37,
		Collect                               = 38,
		LightFire                             = 39,
		AddFuel                               = 40,
		Extinguish                            = 41,
		Prepare                               = 42,
		Cook                                  = 43,
		Chop                                  = 44,
		SmokeFood                             = 45,
		Destroy                               = 46,
		Store                                 = 47,
		TakeInHands                           = 48,
		Clean                                 = 49,
		WashCloth                             = 50,
		WashClothAll                          = 51,
		RemoveFromHands                       = 52,
		CarryItem                             = 53,
		AddToQuickAccess                      = 54,
		AddToThrowAccess                      = 55,
		RemoveFromQuickAccess                 = 56,
		RemoveFromThrowAccess                 = 57,
		ChamberBullet                         = 58,
		LoadAmmo                              = 59,
		UnloadAmmo                            = 60,
		CheckAmmo                             = 61,
		Swap                                  = 62,
		Tune                                  = 63,
		Treat                                 = 64,
		Join                                  = 65,
		Split                                 = 66,
		Unpack                                = 67,
		Anchor                                = 68,
		CheckTemperature                      = 69,
		RollRevolverDrum                      = 70,
		CommitSuicide                         = 71,
		TreatPatient                          = 72,
		InviteToSquad                         = 73,
		RemoveFromSquad                       = 74,
		LeaveSquad                            = 75,
		Urinate                               = 76,
		Defecate                              = 77,
		Vomit                                 = 78,
		CheckTime                             = 79,
		Resuscitate                           = 80,
		BindHands                             = 81,
		TightenBinds                          = 82,
		RemoveBinds                           = 83,
		LoosenBinds                           = 84,
		BreakBinds                            = 85,
		Bury                                  = 86,
		Unbury                                = 87,
		Rest                                  = 88,
		SitOnGround                           = 89,
		LayOnGround                           = 90,
		ExamineInventory                      = 91,
		Loot                                  = 92,
		ClaimKill                             = 93,
		Disarm                                = 94,
		GestureShowFinger                     = 95,
		GestureStandSurrender                 = 96,
		GestureWaveHi                         = 97,
		GestureYouAreDead                     = 98,
		GestureFY                             = 99,
		GesturePoint                          = 100,
		GestureHeart                          = 101,
		GestureBallpalm                       = 102,
		GestureFacepalm                       = 103,
		GestureFingerGun                      = 104,
		GestureLaughing                       = 105,
		GestureSmellWave                      = 106,
		GestureSquat                          = 107,
		GestureCharge                         = 108,
		GestureFreeze                         = 109,
		GestureGetDown                        = 110,
		GestureGetUp                          = 111,
		GestureHalt                           = 112,
		GestureHurryUp                        = 113,
		GesturePointMe                        = 114,
		GesturePointYou                       = 115,
		GestureRally                          = 116,
		GestureThumbsUp                       = 117,
		GestureThumbsDown                     = 118,
		GestureUnderstandNot                  = 119,
		GestureUnderstandYes                  = 120,
		PlayInstrument                        = 121,
		Whistle                               = 122,
		CutHair                               = 123,
		CutFacialHair                         = 124,
		EnterPhotoMode                        = 125,
		PacifyAnimal                          = 126,
		TameAnimal                            = 127,
		LearnAnimal                           = 128,
		CommandAnimal                         = 129,
		FeedAnimal                            = 130,
		Buy                                   = 131,
		Maintain                              = 132,
		Lockpick                              = 133,
		RemoveLocks                           = 134,
		RemoveLocksAdmin                      = 135,
		ForceUnlock                           = 136,
		AddUpgrade                            = 137,
		RadioTurnOn                           = 138,
		RadioTurnOff                          = 139,
		RadioIncreaseVolume                   = 140,
		RadioDecreaseVolume                   = 141,
		RadioChangeRadioStation               = 142,
		StackAdd                              = 143,
		StackSplit                            = 144,
		RepairBaseElement                     = 145,
		RepairBaseElementArea                 = 146,
		RepairBaseElementsUnder25Percent      = 147,
		RepairBaseElementsUnder50Percent      = 148,
		RepairBaseElementsUnder75Percent      = 149,
		ClaimBase                             = 150,
		ShowBaseFlagInfluence                 = 151,
		HideBaseFlagInfluence                 = 152,
		StartBaseFlagOvertake                 = 153,
		StopBaseFlagOvertake                  = 154,
		UpgradeBaseElement                    = 155,
		FlipPlaceable                         = 156,
		OpenContainer                         = 157,
		ChangeItemText                        = 158,
		CommitItemText                        = 159,
		TurnOn                                = 160,
		TurnOff                               = 161,
		IncreaseAngle                         = 162,
		DecreaseAngle                         = 163,
		IncreaseLightIntensity                = 164,
		DecreaseLightIntensity                = 165,
		AddMotionTrigger                      = 166,
		AddLaserTrigger                       = 167,
		AddTripwireTrigger                    = 168,
		AddTimedTrigger                       = 169,
		RemoveTrigger                         = 170,
		ShowTrigger                           = 171,
		ArmTrap                               = 172,
		DisarmTrap                            = 173,
		RefuelTrap                            = 174,
		StartFishing                          = 175,
		ActivateKillbox                       = 176,
		FillItemWithReplenishableResource     = 177,
		FillItemWithInfiniteResource          = 178,
		DrinkFromReplenishableResource        = 179,
		WashClothWithReplenishableResource    = 180,
		WashClothAllWithReplenishableResource = 181,
		Spill                                 = 182,
		CheckResourceType                     = 183,
		SetPrivateAccess                      = 184,
		SetPublicAccess                       = 185,
		SetRank1Access                        = 186,
		SetRank2Access                        = 187,
		SetRank3Access                        = 188,
		SetRank4Access                        = 189,
		MusicPlayerTurnOn                     = 190,
		MusicPlayerPlay                       = 191,
		MusicPlayerNext                       = 192,
		MusicPlayerPrevious                   = 193,
		MusicPlayerShuffle                    = 194,
		MusicPlayerRepeat                     = 195,
		MusicPlayerIncreaseVolume             = 196,
		MusicPlayerDecreaseVolume             = 197,
		MusicPlayerRadio                      = 198,
		BasicDance1                           = 199,
		BasicDance2                           = 200,
		BasicDance3                           = 201,
		BasicDance4                           = 202,
		BasicDance5                           = 203,
		AdvanceDance1                         = 204,
		AdvanceDance2                         = 205,
		AdvanceDance3                         = 206,
		AdvanceDance4                         = 207,
		AdvanceDance5                         = 208,
		AdvanceDance6                         = 209,
		AdvanceDance7                         = 210,
		TradeBuy                              = 211,
		TradeSell                             = 212,
		OpenBankAccount                       = 213,
		Withdraw100Money                      = 214,
		Withdraw250Money                      = 215,
		Withdraw1000Money                     = 216,
		WithdrawRemainingMoney                = 217,
		Deposit100Money                       = 218,
		Deposit250Money                       = 219,
		Deposit1000Money                      = 220,
		DepositAllMoney                       = 221,
		Pair                                  = 222,
		Unpair                                = 223,
		SayVoiceline                          = 224,
		RemoveClothingAt0                     = 225,
		RemoveClothingAt1                     = 226,
		RemoveClothingAt2                     = 227,
		RemoveClothingAt3                     = 228,
		RemoveClothingAt4                     = 229,
		RemoveClothingAt5                     = 230,
		AddClothingAt0                        = 231,
		AddClothingAt1                        = 232,
		AddClothingAt2                        = 233,
		AddClothingAt3                        = 234,
		AddClothingAt4                        = 235,
		AddClothingAt5                        = 236,
		MAX                                   = 237
	};

	/**
	 * Enum ConZ.ENoiseLevel
	 */
	enum class ENoiseLevel : uint8_t
	{
		Mute       = 0,
		VerySilent = 1,
		Silent     = 2,
		Moderate   = 3,
		Loud       = 4,
		VeryLoud   = 5,
		Count      = 6,
		MAX        = 7
	};

	/**
	 * Enum ConZ.EItemRarity
	 */
	enum class EItemRarity : uint8_t
	{
		ExtremelyRare = 0,
		VeryRare      = 1,
		Rare          = 2,
		Uncommon      = 3,
		Common        = 4,
		Abundant      = 5,
		Count         = 6,
		MAX           = 7
	};

	/**
	 * Enum ConZ.EItemExhausted
	 */
	enum class EItemExhausted : uint8_t
	{
		DoNothing = 0,
		Destroy   = 1,
		Uncraft   = 2,
		MAX       = 3
	};

	/**
	 * Enum ConZ.EDoorStateFlags
	 */
	enum class EDoorStateFlags : uint8_t
	{
		None       = 0,
		Open       = 1,
		Locked     = 2,
		Empty      = 3,
		ChangeSide = 4,
		HasLock    = 5,
		MAX        = 6
	};

	/**
	 * Enum ConZ.ELockDifficulty
	 */
	enum class ELockDifficulty : uint8_t
	{
		VeryEasy = 0,
		Basic    = 1,
		Medium   = 2,
		Advanced = 3,
		Num      = 4,
		MAX      = 5
	};

	/**
	 * Enum ConZ.EDoorType
	 */
	enum class EDoorType : uint8_t
	{
		Regular  = 0,
		BaseDoor = 1,
		MAX      = 2
	};

	/**
	 * Enum ConZ.ERawByteStreamType
	 */
	enum class ERawByteStreamType : uint8_t
	{
		Generic                   = 0,
		AdminCommandSquadInfoDump = 1,
		AdminCommandLootDump      = 2,
		MAX                       = 3
	};

	/**
	 * Enum ConZ.ERespawnOption
	 */
	enum class ERespawnOption : uint8_t
	{
		Random  = 0,
		Sector  = 1,
		Shelter = 2,
		Squad   = 3,
		MAX     = 4
	};

	/**
	 * Enum ConZ.EConZSquadMemberRank
	 */
	enum class EConZSquadMemberRank : uint8_t
	{
		None      = 0,
		Member    = 1,
		Enforcer  = 2,
		Underboss = 3,
		Boss      = 4,
		MAX       = 5
	};

	/**
	 * Enum ConZ.EFishSpecies
	 */
	enum class EFishSpecies : uint8_t
	{
		None         = 0,
		Bass         = 1,
		Catfish      = 2,
		Pike         = 3,
		Carp         = 4,
		Amur         = 5,
		Bleak        = 6,
		Chub         = 7,
		Ruffe        = 8,
		PrussianCarp = 9,
		CrucianCarp  = 10,
		Sardine      = 11,
		Dentex       = 12,
		Orata        = 13,
		Tuna         = 14,
		Count        = 15,
		MAX          = 16
	};

	/**
	 * Enum ConZ.EChatType
	 */
	enum class EChatType : uint8_t
	{
		Default       = 0,
		Local         = 1,
		Global        = 2,
		Squad         = 3,
		Admin         = 4,
		CommandsOnly  = 5,
		ServerMessage = 6,
		Error         = 7,
		MAX           = 8
	};

	/**
	 * Enum ConZ.EConZGender
	 */
	enum class EConZGender : uint8_t
	{
		Unspecified = 0,
		Female      = 1,
		Male        = 2,
		Count       = 3,
		MAX         = 4
	};

	/**
	 * Enum ConZ.ESortOrder
	 */
	enum class ESortOrder : uint8_t
	{
		Ascending  = 0,
		Descending = 1,
		MAX        = 2
	};

	/**
	 * Enum ConZ.EEventsRankingStatsOrderByField
	 */
	enum class EEventsRankingStatsOrderByField : uint8_t
	{
		FamePoints  = 0,
		EventScore  = 1,
		EventKills  = 2,
		EventDeaths = 3,
		MAX         = 4
	};

	/**
	 * Enum ConZ.ESkillLevel
	 */
	enum class ESkillLevel : uint8_t
	{
		NoSkill       = 0,
		Basic         = 1,
		Medium        = 2,
		Advanced      = 3,
		AboveAdvanced = 4,
		Count         = 5,
		MAX           = 6
	};

	/**
	 * Enum ConZ.EAnimalAction
	 */
	enum class EAnimalAction : uint8_t
	{
		None       = 0,
		Eat        = 1,
		Rest       = 2,
		Attack     = 3,
		Sit        = 4,
		Wait       = 5,
		Intimidate = 6,
		Alert      = 7,
		Turn       = 8,
		MAX        = 9
	};

	/**
	 * Enum ConZ.EFishingState
	 */
	enum class EFishingState : uint8_t
	{
		None            = 0,
		Idle            = 1,
		EnterActive     = 2,
		Active          = 3,
		LeaveActive     = 4,
		CastInitiated   = 5,
		LongCast        = 6,
		ShortCast       = 7,
		LongCasting     = 8,
		ShortCasting    = 9,
		LongCastingEnd  = 10,
		ShortCastingEnd = 11,
		Bait            = 12,
		PullStart       = 13,
		PullEnd         = 14,
		Hook            = 15,
		FishCaught      = 16,
		KeepFish        = 17,
		DiscardFish     = 18,
		WireBreak       = 19,
		MAX             = 20
	};

	/**
	 * Enum ConZ.EFishingActionNotifyType
	 */
	enum class EFishingActionNotifyType : uint8_t
	{
		None              = 0,
		EnterActive       = 1,
		LeaveActive       = 2,
		StartCastEnd      = 3,
		CastingThreshold  = 4,
		ShortRelease      = 5,
		Release           = 6,
		LongCastEnd       = 7,
		ShortCastEnd      = 8,
		FishingActionEnd  = 9,
		PullStartFinished = 10,
		PullEndFinished   = 11,
		ShowCaughtFish    = 12,
		KeepFish          = 13,
		DiscardFish       = 14,
		WireBreakEnd      = 15,
		MAX               = 16
	};

	/**
	 * Enum ConZ.EClothesType
	 */
	enum class EClothesType : uint8_t
	{
		None              = 0,
		Back              = 1,
		HeadUpper         = 2,
		HeadLower         = 3,
		Eyes              = 4,
		Ears              = 5,
		HeadUpperSkeletal = 6,
		Head              = 7,
		Neck              = 8,
		Body_Armor        = 9,
		Body_LongSleeves  = 10,
		Body_ShortSleeves = 11,
		Waist             = 12,
		Hands             = 13,
		Legs              = 14,
		Feet              = 15,
		Underwear         = 16,
		PenisWarmer       = 17,
		Suit              = 18,
		Count             = 19,
		MAX               = 20
	};

	/**
	 * Enum ConZ.EBodyPart
	 */
	enum class EBodyPart : uint8_t
	{
		Unknown       = 0,
		Head          = 1,
		Chest         = 2,
		Abdomen       = 3,
		ArmLeftLower  = 4,
		ArmLeftUpper  = 5,
		ArmRightLower = 6,
		ArmRightUpper = 7,
		LegLeftLower  = 8,
		LegLeftUpper  = 9,
		LegRightLower = 10,
		LegRightUpper = 11,
		Count         = 12,
		MAX           = 13
	};

	/**
	 * Enum ConZ.EEnvironmentClass
	 */
	enum class EEnvironmentClass : uint8_t
	{
		Indoor_Small  = 0,
		Indoor_Medium = 1,
		Indoor_Large  = 2,
		Outdoor_Large = 3,
		Count         = 4,
		MAX           = 5
	};

	/**
	 * Enum ConZ.EDetectHitCollisionType
	 */
	enum class EDetectHitCollisionType : uint8_t
	{
		None = 0,
		Head = 1,
		Body = 2,
		Legs = 3,
		MAX  = 4
	};

	/**
	 * Enum ConZ.ECharacterActionEndState
	 */
	enum class ECharacterActionEndState : uint8_t
	{
		None            = 0,
		Regular         = 1,
		ConditionNotMet = 2,
		Canceled        = 3,
		Failed          = 4,
		Terminated      = 5,
		MAX             = 6
	};

	/**
	 * Enum ConZ.ECharacterActionAckType
	 */
	enum class ECharacterActionAckType : uint8_t
	{
		None  = 0,
		Begin = 1,
		End   = 2,
		MAX   = 3
	};

	/**
	 * Enum ConZ.EAttackType
	 */
	enum class EAttackType : uint8_t
	{
		Slash  = 0,
		Pierce = 1,
		MAX    = 2
	};

	/**
	 * Enum ConZ.EHitSeverity
	 */
	enum class EHitSeverity : uint8_t
	{
		VeryLight = 0,
		Light     = 1,
		Medium    = 2,
		Heavy     = 3,
		VeryHeavy = 4,
		Count     = 5,
		MAX       = 6
	};

	/**
	 * Enum ConZ.ECharacterImpactSourceSoundCategory
	 */
	enum class ECharacterImpactSourceSoundCategory : uint8_t
	{
		Any          = 0,
		Head_Bare    = 1,
		Hands_Bare   = 2,
		Hands_Gloved = 3,
		Legs_Bare    = 4,
		Claws        = 5,
		Jaws         = 6,
		Blunt_Wood   = 7,
		Blunt_Metal  = 8,
		Sharp_Metal  = 9,
		MAX          = 10
	};

	/**
	 * Enum ConZ.EAITeam
	 */
	enum class EAITeam : uint8_t
	{
		Prisoner = 0,
		Zombie   = 1,
		Animal   = 2,
		TEC1     = 3,
		Vehicle  = 4,
		Neutral  = 5,
		Num      = 6,
		None     = 7,
		MAX      = 8
	};

	/**
	 * Enum ConZ.EConZPxDominanceGroup
	 */
	enum class EConZPxDominanceGroup : uint8_t
	{
		Default     = 0,
		MediumPawns = 1,
		LargePawns  = 2,
		MAX         = 3
	};

	/**
	 * Enum ConZ.EPrisonerBorderCrossingPenalty
	 */
	enum class EPrisonerBorderCrossingPenalty : uint8_t
	{
		None        = 0,
		Penalty1    = 1,
		Penalty2    = 2,
		Penalty3    = 3,
		Penalty4    = 4,
		DeadPenalty = 5,
		MAX         = 6
	};

	/**
	 * Enum ConZ.EPrisonerCommonSpawnLocation
	 */
	enum class EPrisonerCommonSpawnLocation : uint8_t
	{
		None   = 0,
		Random = 1,
		Sector = 2,
		Home   = 3,
		Squad  = 4,
		Event  = 5,
		MAX    = 6
	};

	/**
	 * Enum ConZ.ETabMode
	 */
	enum class ETabMode : uint8_t
	{
		None      = 0,
		Inventory = 1,
		BCU       = 2,
		Crafting  = 3,
		Journal   = 4,
		Squad     = 5,
		Events    = 6,
		Health    = 7,
		Buy       = 8,
		Sell      = 9,
		Last      = 10,
		MAX       = 11
	};

	/**
	 * Enum ConZ.EWeaponMalfunction
	 */
	enum class EWeaponMalfunction : uint8_t
	{
		None                 = 0,
		BadRound             = 1,
		StovePipe            = 2,
		RoundNotLoaded       = 3,
		DoubleFeed           = 4,
		StuckBullet          = 5,
		ClipPartiallyEjected = 6,
		Count                = 7,
		MAX                  = 8
	};

	/**
	 * Enum ConZ.EAmmunitionCartridgeState
	 */
	enum class EAmmunitionCartridgeState : uint8_t
	{
		Default    = 0,
		Used       = 1,
		Bad        = 2,
		BadAndUsed = 3,
		MAX        = 4
	};

	/**
	 * Enum ConZ.EThrowingAnimationType
	 */
	enum class EThrowingAnimationType : uint8_t
	{
		Default    = 0,
		FromWeapon = 1,
		FromCombat = 2,
		FromIdle   = 3,
		MAX        = 4
	};

	/**
	 * Enum ConZ.EPrisonerMovementPace
	 */
	enum class EPrisonerMovementPace : uint8_t
	{
		NotMoving = 0,
		Slow      = 1,
		Medium    = 2,
		Fast      = 3,
		Count     = 4,
		First     = 5,
		Last      = 6,
		MAX       = 7
	};

	/**
	 * Enum ConZ.EPrisonerNearbyFoliageType
	 */
	enum class EPrisonerNearbyFoliageType : uint8_t
	{
		None = 0,
		Tree = 1,
		Bush = 2,
		MAX  = 3
	};

	/**
	 * Enum ConZ.EPrisonerCombatMode
	 */
	enum class EPrisonerCombatMode : uint8_t
	{
		None         = 0,
		MeleeUnarmed = 1,
		MeleeWeapon  = 2,
		Firearm      = 3,
		MAX          = 4
	};

	/**
	 * Enum ConZ.EHoldBreathState
	 */
	enum class EHoldBreathState : uint8_t
	{
		None             = 0,
		BreathIn         = 1,
		HoldBreath       = 2,
		BreathOut        = 3,
		Breathless       = 4,
		BreathInRecovery = 5,
		Count            = 6,
		MAX              = 7
	};

	/**
	 * Enum ConZ.EPrisonerWettablePart
	 */
	enum class EPrisonerWettablePart : uint8_t
	{
		Head      = 0,
		UpperBody = 1,
		LowerBody = 2,
		Feet      = 3,
		Count     = 4,
		MAX       = 5
	};

	/**
	 * Enum ConZ.EPrisonerMeleeTargetSelectionMode
	 */
	enum class EPrisonerMeleeTargetSelectionMode : uint8_t
	{
		Manual        = 0,
		SemiAutomatic = 1,
		Automatic     = 2,
		MAX           = 3
	};

	/**
	 * Enum ConZ.EMotionIntensity
	 */
	enum class EMotionIntensity : uint8_t
	{
		None   = 0,
		Light  = 1,
		Medium = 2,
		Heavy  = 3,
		MAX    = 4
	};

	/**
	 * Enum ConZ.EPrisonerStance
	 */
	enum class EPrisonerStance : uint8_t
	{
		Standing  = 0,
		Crouching = 1,
		Prone     = 2,
		Swimming  = 3,
		Count     = 4,
		MAX       = 5
	};

	/**
	 * Enum ConZ.EVehicleWeaponAimingStance
	 */
	enum class EVehicleWeaponAimingStance : uint8_t
	{
		Default = 0,
		Leaning = 1,
		Count   = 2,
		MAX     = 3
	};

	/**
	 * Enum ConZ.ESkillAttribute
	 */
	enum class ESkillAttribute : uint8_t
	{
		Constitution = 0,
		Dexterity    = 1,
		Intelligence = 2,
		Strength     = 3,
		MAX          = 4
	};

	/**
	 * Enum ConZ.EDeluxeVersion
	 */
	enum class EDeluxeVersion : uint8_t
	{
		SupporterPack1       = 0,
		SupporterPack2       = 1,
		Character_DannyTrejo = 2,
		MAX                  = 3
	};

	/**
	 * Enum ConZ.EPlayableInstrumentTone
	 */
	enum class EPlayableInstrumentTone : uint8_t
	{
		C     = 0,
		Db    = 1,
		D     = 2,
		Eb    = 3,
		E     = 4,
		F     = 5,
		Gb    = 6,
		G     = 7,
		Ab    = 8,
		A     = 9,
		Bb    = 10,
		B     = 11,
		C2    = 12,
		Count = 13,
		MAX   = 14
	};

	/**
	 * Enum ConZ.EHandsHolstersType
	 */
	enum class EHandsHolstersType : uint8_t
	{
		Hands        = 0,
		HolsterLeft  = 1,
		HolsterRight = 2,
		MAX          = 3
	};

	/**
	 * Enum ConZ.EDamageChannel
	 */
	enum class EDamageChannel : uint8_t
	{
		UncategorizedDamage = 0,
		FallDamage          = 1,
		PuppetDamage        = 2,
		SuicidePuppetDamage = 3,
		SentryDamage        = 4,
		AnimalDamage        = 5,
		BaseDefenseDamage   = 6,
		VehicleDamage       = 7,
		BoxingDamage        = 8,
		MeleeWeaponDamage   = 9,
		ThrowingDamage      = 10,
		ProjectileDamage    = 11,
		ExplosiveDamage     = 12,
		TrapDamage          = 13,
		DamageToBases       = 14,
		DamageToVehicles    = 15,
		Count               = 16,
		MAX                 = 17
	};

	/**
	 * Enum ConZ.ECarryingItemState
	 */
	enum class ECarryingItemState : uint8_t
	{
		None = 0,
		Idle = 1,
		MAX  = 2
	};

	/**
	 * Enum ConZ.EPlayingInstrumentState
	 */
	enum class EPlayingInstrumentState : uint8_t
	{
		None    = 0,
		Exiting = 1,
		Idle    = 2,
		Playing = 3,
		MAX     = 4
	};

	/**
	 * Enum ConZ.EScopingWithItemInHandsState
	 */
	enum class EScopingWithItemInHandsState : uint8_t
	{
		None               = 0,
		Starting           = 1,
		Scoping            = 2,
		StoppingWithEffect = 3,
		StoppingNoEffect   = 4,
		MAX                = 5
	};

	/**
	 * Enum ConZ.EWeaponFiringMode
	 */
	enum class EWeaponFiringMode : uint8_t
	{
		Automatic  = 0,
		SingleShot = 1,
		Burst      = 2,
		Count      = 3,
		MAX        = 4
	};

	/**
	 * Enum ConZ.EUnmountFlags
	 */
	enum class EUnmountFlags : uint8_t
	{
		None                       = 0,
		TeleportOutside            = 1,
		SaveMounteesToDatabase     = 2,
		ShouldFindUnmountTransform = 3,
		ForceUnmount               = 4,
		MAX                        = 5
	};

	/**
	 * Enum ConZ.EWeaponAimingType
	 */
	enum class EWeaponAimingType : uint8_t
	{
		None          = 0,
		Hip           = 1,
		DownTheSights = 2,
		MAX           = 3
	};

	/**
	 * Enum ConZ.EDodgeDirectionType
	 */
	enum class EDodgeDirectionType : uint8_t
	{
		Front = 0,
		Back  = 1,
		Left  = 2,
		Right = 3,
		MAX   = 4
	};

	/**
	 * Enum ConZ.EPrisonerMountSlotFlags
	 */
	enum class EPrisonerMountSlotFlags : uint8_t
	{
		None                    = 0,
		HasMountedSlot          = 1,
		ShouldHideAttachedItems = 2,
		MAX                     = 3
	};

	/**
	 * Enum ConZ.EWeaponMalfunctionEvent
	 */
	enum class EWeaponMalfunctionEvent : uint8_t
	{
		RoundAdded                 = 0,
		ChamberOpened              = 1,
		ChamberOpenedCasingEjected = 2,
		ChamberOpenedRoundEjected  = 3,
		ChamberClosed              = 4,
		ChamberClosedRoundLoaded   = 5,
		AttachmentAdded            = 6,
		MAX                        = 7
	};

	/**
	 * Enum ConZ.EWeaponType
	 */
	enum class EWeaponType : uint8_t
	{
		Rifle   = 0,
		Handgun = 1,
		Bow     = 2,
		Count   = 3,
		MAX     = 4
	};

	/**
	 * Enum ConZ.EWeaponActionNotifyType
	 */
	enum class EWeaponActionNotifyType : uint8_t
	{
		None                           = 0,
		ChamberOpened                  = 1,
		ChamberClosed                  = 2,
		ChamberOpenedClosed            = 3,
		BowInsertArrow                 = 4,
		BowRemoveArrow                 = 5,
		CompoundBowTuneDrawWeight      = 6,
		StaminaDrained                 = 7,
		DropMagazine                   = 8,
		ClearMalfunction               = 9,
		ChamberOpenedSync              = 10,
		ChamberClosedSync              = 11,
		ChamberOpenedClosedSync        = 12,
		ClearMalfunctionRoundNotLoaded = 13,
		ShowEjectCasing                = 14,
		ShowEjectLiveRound             = 15,
		CrossbowCock                   = 16,
		Fire                           = 17,
		SetupForReload                 = 18,
		DrumRolled                     = 19,
		MAX                            = 20
	};

	/**
	 * Enum ConZ.EWeaponBehaviourMode
	 */
	enum class EWeaponBehaviourMode : uint8_t
	{
		Default = 0,
		Inspect = 1,
		MAX     = 2
	};

	/**
	 * Enum ConZ.EWeaponMuzzleEffectsSpawType
	 */
	enum class EWeaponMuzzleEffectsSpawType : uint8_t
	{
		AttachedToBarrel = 0,
		AtLocation       = 1,
		MAX              = 2
	};

	/**
	 * Enum ConZ.EWeaponCategory
	 */
	enum class EWeaponCategory : uint8_t
	{
		ThrowingWeapons = 0,
		RangedWeapons   = 1,
		Handguns        = 2,
		SubmachineGuns  = 3,
		Rifles          = 4,
		Shotguns        = 5,
		AutomaticRifles = 6,
		SniperRifles    = 7,
		Bow             = 8,
		Count           = 9,
		MAX             = 10
	};

	/**
	 * Enum ConZ.EWeaponFiringStateType
	 */
	enum class EWeaponFiringStateType : uint8_t
	{
		Automatic     = 0,
		SemiAutomatic = 1,
		Manual        = 2,
		MAX           = 3
	};

	/**
	 * Enum ConZ.EPrisonerHUDMode
	 */
	enum class EPrisonerHUDMode : uint8_t
	{
		Normal      = 0,
		Target      = 1,
		Map         = 2,
		DroneNormal = 3,
		DroneMap    = 4,
		MAX         = 5
	};

	/**
	 * Enum ConZ.EBodySlot
	 */
	enum class EBodySlot : uint8_t
	{
		Head  = 0,
		Chest = 1,
		Legs  = 2,
		Feet  = 3,
		Count = 4,
		MAX   = 5
	};

	/**
	 * Enum ConZ.EClothesPart
	 */
	enum class EClothesPart : uint8_t
	{
		None      = 0,
		BodyUpper = 1,
		BodyLower = 2,
		Head      = 3,
		Eyes      = 4,
		Neck      = 5,
		Hands     = 6,
		ArmUpper  = 7,
		ArmLower  = 8,
		Legs      = 9,
		Feet      = 10,
		Count     = 11,
		MAX       = 12
	};

	/**
	 * Enum ConZ.EOptionalState
	 */
	enum class EOptionalState : uint8_t
	{
		None   = 0,
		Add    = 1,
		Remove = 2,
		MAX    = 3
	};

	/**
	 * Enum ConZ.ERecipeAvailabilityState
	 */
	enum class ERecipeAvailabilityState : uint8_t
	{
		None            = 0,
		SkillLow        = 1,
		NoIngredients   = 2,
		SomeIngredients = 3,
		AllIngredients  = 4,
		MAX             = 5
	};

	/**
	 * Enum ConZ.EInventoryNodeWidgetType
	 */
	enum class EInventoryNodeWidgetType : uint8_t
	{
		None               = 0,
		Inventory          = 1,
		InventoryContainer = 2,
		HandsAndHolsters   = 3,
		QuickAccess        = 4,
		ClothesSideLayer   = 5,
		ToolTip            = 6,
		Vicinity           = 7,
		VicinityContainer  = 8,
		MAX                = 9
	};

	/**
	 * Enum ConZ.EListSpawnedVehiclesAdminCommandVehicleCategory
	 */
	enum class EListSpawnedVehiclesAdminCommandVehicleCategory : uint8_t
	{
		MotorizedVehicles    = 0,
		HumanPoweredVehicles = 1,
		SUVs                 = 2,
		Quads                = 3,
		Pickups              = 4,
		Tractors             = 5,
		Wheelbarrows         = 6,
		Motorcycles          = 7,
		Count                = 8,
		MAX                  = 9
	};

	/**
	 * Enum ConZ.EFlyingFindPathFailureResponse
	 */
	enum class EFlyingFindPathFailureResponse : uint8_t
	{
		None                 = 0,
		RandomNewDestination = 1,
		ReturnToPrevious     = 2,
		ForceMovement        = 3,
		MAX                  = 4
	};

	/**
	 * Enum ConZ.EAnimalSpecies
	 */
	enum class EAnimalSpecies : uint8_t
	{
		None    = 0,
		Bear    = 1,
		Bird    = 2,
		Boar    = 3,
		Chicken = 4,
		Cow     = 5,
		Crow    = 6,
		Deer    = 7,
		Donkey  = 8,
		Goat    = 9,
		Horse   = 10,
		Pig     = 11,
		Rabbit  = 12,
		Seagull = 13,
		Sheep   = 14,
		Wolf    = 15,
		Count   = 16,
		MAX     = 17
	};

	/**
	 * Enum ConZ.EAnimalStance
	 */
	enum class EAnimalStance : uint8_t
	{
		Breathing = 0,
		Idle      = 1,
		Agressive = 2,
		Alerted   = 3,
		MAX       = 4
	};

	/**
	 * Enum ConZ.EAnimalActivityCycle
	 */
	enum class EAnimalActivityCycle : uint8_t
	{
		Diurnal   = 0,
		Nocturnal = 1,
		Both      = 2,
		MAX       = 3
	};

	/**
	 * Enum ConZ.EAnimal2Sound
	 */
	enum class EAnimal2Sound : uint8_t
	{
		None       = 0,
		Idle       = 1,
		Angry      = 2,
		Attack     = 3,
		TakeDamage = 4,
		Kill       = 5,
		Scared     = 6,
		Alerted    = 7,
		MAX        = 8
	};

	/**
	 * Enum ConZ.EAnimNotifyStaminDrainType
	 */
	enum class EAnimNotifyStaminDrainType : uint8_t
	{
		OnBegin   = 0,
		Continous = 1,
		MAX       = 2
	};

	/**
	 * Enum ConZ.AnimNotifyState_FadeForAction
	 */
	enum class EAnimNotifyState_FadeForAction : uint8_t
	{
		AnimNotifyState_FadeForAction_All                 = 0,
		AnimNotifyState_FadeForAction_InFirstPersonView   = 1,
		AnimNotifyState_FadeForAction_InThirdPersonView   = 2,
		AnimNotifyState_FadeForAction_AnimNotifyState_MAX = 3
	};

	/**
	 * Enum ConZ.EWaterZoneType
	 */
	enum class EWaterZoneType : uint8_t
	{
		None    = 0,
		Shallow = 1,
		Deep    = 2,
		Weeds   = 3,
		MAX     = 4
	};

	/**
	 * Enum ConZ.ECraftingRecipeCategory
	 */
	enum class ECraftingRecipeCategory : uint8_t
	{
		None           = 0,
		Tools          = 1,
		Weapons        = 2,
		Drinks         = 3,
		Food           = 4,
		Clothes        = 5,
		BaseBuilding   = 6,
		Fortifications = 7,
		Security       = 8,
		MAX            = 9
	};

	/**
	 * Enum ConZ.EBlueprintItemActionType
	 */
	enum class EBlueprintItemActionType : uint8_t
	{
		BlueprintPlaced    = 0,
		BlueprintFilled    = 1,
		BlueprintCompleted = 2,
		MAX                = 3
	};

	/**
	 * Enum ConZ.ESplineAxis
	 */
	enum class ESplineAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum ConZ.EWireType
	 */
	enum class EWireType : uint8_t
	{
		Green  = 0,
		Yellow = 1,
		Red    = 2,
		Count  = 3,
		MAX    = 4
	};

	/**
	 * Enum ConZ.EBoundBodyPart
	 */
	enum class EBoundBodyPart : uint8_t
	{
		Hands = 0,
		Feet  = 1,
		MAX   = 2
	};

	/**
	 * Enum ConZ.EBruiseZone
	 */
	enum class EBruiseZone : uint8_t
	{
		Left   = 0,
		Middle = 1,
		Right  = 2,
		Count  = 3,
		MAX    = 4
	};

	/**
	 * Enum ConZ.EBruiseLayer
	 */
	enum class EBruiseLayer : uint8_t
	{
		Light  = 0,
		Medium = 1,
		Hard   = 2,
		Count  = 3,
		MAX    = 4
	};

	/**
	 * Enum ConZ.ECardinalDirection
	 */
	enum class ECardinalDirection : uint8_t
	{
		None  = 0,
		North = 1,
		East  = 2,
		South = 3,
		West  = 4,
		MAX   = 5
	};

	/**
	 * Enum ConZ.EChainsawEngineState
	 */
	enum class EChainsawEngineState : uint8_t
	{
		TurnedOff = 0,
		TurnedOn  = 1,
		MAX       = 2
	};

	/**
	 * Enum ConZ.EChainsawOwnerRelatedFunctionalityState
	 */
	enum class EChainsawOwnerRelatedFunctionalityState : uint8_t
	{
		Default        = 0,
		PlayingSound   = 1,
		PendingTurnOn  = 2,
		PendingTurnOff = 3,
		MAX            = 4
	};

	/**
	 * Enum ConZ.ECharacterActionActivity
	 */
	enum class ECharacterActionActivity : uint8_t
	{
		None             = 0,
		AimDownTheSights = 1,
		MAX              = 2
	};

	/**
	 * Enum ConZ.ECharacterActionTerminatingEvent
	 */
	enum class ECharacterActionTerminatingEvent : uint8_t
	{
		Generic         = 0,
		InputKeyEsc     = 1,
		ToolUnavailable = 2,
		FirePressed     = 3,
		MAX             = 4
	};

	/**
	 * Enum ConZ.ECharacterActionNotifyType
	 */
	enum class ECharacterActionNotifyType : uint8_t
	{
		None                     = 0,
		AddMagazine              = 1,
		RemoveMagazine           = 2,
		InsertCartridge          = 3,
		InsertCartridgeAtFront   = 4,
		SwapWeapons              = 5,
		Chop                     = 6,
		CommitSuicide            = 7,
		IgniteFlare              = 8,
		BuryBreach               = 9,
		BuryDump                 = 10,
		ThrowFPReleased          = 11,
		ThrowTPReleased          = 12,
		ThrowFinished            = 13,
		StopUsingHandCorrections = 14,
		PinPulled                = 15,
		Unmount                  = 16,
		ChangeWeaponFiringMode   = 17,
		OpenDoor                 = 18,
		CloseDoor                = 19,
		RemoveAmmoFromWeapon     = 20,
		CheckWeaponAmmo          = 21,
		CheckWeaponFiringMode    = 22,
		ChainsawStartEngineLoop  = 23,
		ShowItemStatus           = 24,
		SpawnParticles           = 25,
		DestroyParticles         = 26,
		StartFire                = 27,
		Urinate                  = 28,
		ShowPenis                = 29,
		HidePenis                = 30,
		MAX                      = 31
	};

	/**
	 * Enum ConZ.ECharacterActionState
	 */
	enum class ECharacterActionState : uint8_t
	{
		None                 = 0,
		WaitingBeginOnServer = 1,
		Executing            = 2,
		Ended                = 3,
		MAX                  = 4
	};

	/**
	 * Enum ConZ.ECharacterActionFlags
	 */
	enum class ECharacterActionFlags : uint8_t
	{
		None                     = 0,
		ClientWaitBeginOnServer  = 1,
		AllWaitEndOnOwningClient = 2,
		CanBeAborted             = 3,
		MAX                      = 4
	};

	/**
	 * Enum ConZ.ECharacterActionConstraint
	 */
	enum class ECharacterActionConstraint : uint8_t
	{
		None       = 0,
		Move       = 1,
		Turn       = 2,
		Stance     = 3,
		ProneInOut = 4,
		Lean       = 5,
		MAX        = 6
	};

	/**
	 * Enum ConZ.ECharacterLegsImpactSoundCategory
	 */
	enum class ECharacterLegsImpactSoundCategory : uint8_t
	{
		Any            = 0,
		Bare           = 1,
		Blocked        = 2,
		LightlyClothed = 3,
		MAX            = 4
	};

	/**
	 * Enum ConZ.ECharacterArmsImpactSoundCategory
	 */
	enum class ECharacterArmsImpactSoundCategory : uint8_t
	{
		Any            = 0,
		Bare           = 1,
		Blocked        = 2,
		LightlyClothed = 3,
		MAX            = 4
	};

	/**
	 * Enum ConZ.ECharacterTorsoImpactSoundCategory
	 */
	enum class ECharacterTorsoImpactSoundCategory : uint8_t
	{
		Any            = 0,
		Bare           = 1,
		Blocked        = 2,
		LightlyClothed = 3,
		MAX            = 4
	};

	/**
	 * Enum ConZ.ECharacterHeadImpactSoundCategory
	 */
	enum class ECharacterHeadImpactSoundCategory : uint8_t
	{
		Any     = 0,
		Bare    = 1,
		Blocked = 2,
		Helmet  = 3,
		MAX     = 4
	};

	/**
	 * Enum ConZ.ECharacterPainSoundSeverity
	 */
	enum class ECharacterPainSoundSeverity : uint8_t
	{
		Light    = 0,
		Medium   = 1,
		Heavy    = 2,
		Stun     = 3,
		Knockout = 4,
		Death    = 5,
		MAX      = 6
	};

	/**
	 * Enum ConZ.ECharacterSpawnerRange
	 */
	enum class ECharacterSpawnerRange : uint8_t
	{
		Long  = 0,
		Short = 1,
		MAX   = 2
	};

	/**
	 * Enum ConZ.ESpawnType
	 */
	enum class ESpawnType : uint8_t
	{
		POI      = 0,
		Exterior = 1,
		Interior = 2,
		MAX      = 3
	};

	/**
	 * Enum ConZ.ECharacterStatsOrderByField
	 */
	enum class ECharacterStatsOrderByField : uint8_t
	{
		FamePoints  = 0,
		EventScore  = 1,
		EventKills  = 2,
		EventDeaths = 3,
		MAX         = 4
	};

	/**
	 * Enum ConZ.EMusicPlayerCommandType
	 */
	enum class EMusicPlayerCommandType : uint8_t
	{
		TurnOnOff        = 0,
		PlayPause        = 1,
		RadioMusicPlayer = 2,
		MAX              = 3
	};

	/**
	 * Enum ConZ.EInteractionTargetType
	 */
	enum class EInteractionTargetType : uint8_t
	{
		Self                = 0,
		HoveredInteractable = 1,
		Specified           = 2,
		MAX                 = 3
	};

	/**
	 * Enum ConZ.EClientSettingCategory
	 */
	enum class EClientSettingCategory : uint8_t
	{
		Game     = 0,
		Mouse    = 1,
		Video    = 2,
		Graphics = 3,
		Sound    = 4,
		Controls = 5,
		Count    = 6,
		MAX      = 7
	};

	/**
	 * Enum ConZ.ECollisionDamageType
	 */
	enum class ECollisionDamageType : uint8_t
	{
		Undefined  = 0,
		Melee      = 1,
		Projectile = 2,
		Throw      = 3,
		MAX        = 4
	};

	/**
	 * Enum ConZ.ECompassType
	 */
	enum class ECompassType : uint8_t
	{
		None                     = 0,
		NorthOnly                = 1,
		CardinalOnly             = 2,
		CardinalAndIntercardinal = 3,
		Everything               = 4,
		Count                    = 5,
		MAX                      = 6
	};

	/**
	 * Enum ConZ.EAnimalMovementPace
	 */
	enum class EAnimalMovementPace : uint8_t
	{
		Sneak = 0,
		Walk  = 1,
		Trot  = 2,
		Run   = 3,
		MAX   = 4
	};

	/**
	 * Enum ConZ.EAnimalAgressivness
	 */
	enum class EAnimalAgressivness : uint8_t
	{
		Timid     = 0,
		Moderate  = 1,
		Agressive = 2,
		MAX       = 3
	};

	/**
	 * Enum ConZ.EAnimalMode
	 */
	enum class EAnimalMode : uint8_t
	{
		None     = 0,
		Roam     = 1,
		Alert    = 2,
		Observe  = 3,
		TrotAway = 4,
		Aggro    = 5,
		Flee     = 6,
		MAX      = 7
	};

	/**
	 * Enum ConZ.EConfigFile
	 */
	enum class EConfigFile : uint8_t
	{
		None             = 0,
		Engine           = 1,
		GameUserSettings = 2,
		ServerSettings   = 3,
		MAX              = 4
	};

	/**
	 * Enum ConZ.EBaseBuildingDebugMode
	 */
	enum class EBaseBuildingDebugMode : uint8_t
	{
		None             = 0,
		Basic            = 1,
		RadialDamage     = 2,
		InteractionZones = 3,
		BaseBounds       = 4,
		MAX              = 5
	};

	/**
	 * Enum ConZ.EConZBaseErrorMessage
	 */
	enum class EConZBaseErrorMessage : uint8_t
	{
		None                        = 0,
		CantPlaceMask               = 1,
		CantPlaceDuplicateFlag      = 2,
		CantPlaceEnemyFlag          = 3,
		CantPlaceMustBeOnFoundation = 4,
		CantPlaceOnOtherElements    = 5,
		CantPlaceNoBase             = 6,
		CantPlaceNoFlag             = 7,
		CantPlaceMaxInstances       = 8,
		MAX                         = 9
	};

	/**
	 * Enum ConZ.EConZBaseEventType
	 */
	enum class EConZBaseEventType : uint8_t
	{
		None               = 0,
		ElementConstructed = 1,
		ElementRepaired    = 2,
		MAX                = 3
	};

	/**
	 * Enum ConZ.EConZPlacementHeightType
	 */
	enum class EConZPlacementHeightType : uint8_t
	{
		LowestPointHeight  = 0,
		HighestPointHeight = 1,
		AveragePointHeight = 2,
		MAX                = 3
	};

	/**
	 * Enum ConZ.FConZBaseFlagType
	 */
	enum class EFConZBaseFlagType : uint8_t
	{
		FConZBaseFlagType_None                  = 0,
		FConZBaseFlagType_Friendly              = 1,
		FConZBaseFlagType_Enemy                 = 2,
		FConZBaseFlagType_FConZBaseFlagType_MAX = 3
	};

	/**
	 * Enum ConZ.EElementSnapMarkerSocketType
	 */
	enum class EElementSnapMarkerSocketType : uint8_t
	{
		None            = 0,
		Horizontal      = 1,
		VerticalTop     = 2,
		VerticalBottom  = 3,
		TowerLevel1     = 4,
		TowerLevel2     = 5,
		Door            = 6,
		WallSocket      = 7,
		CeilingSocket   = 8,
		Stairs          = 9,
		WallPlatform    = 10,
		BedTop          = 11,
		HorizontalLeft  = 12,
		HorizontalRight = 13,
		EmptySocket13   = 14,
		EmptySocket14   = 15,
		EmptySocket15   = 16,
		MAX             = 17
	};

	/**
	 * Enum ConZ.EBaseElementType
	 */
	enum class EBaseElementType : uint8_t
	{
		None            = 0,
		Default         = 1,
		WoodenPalisade  = 2,
		SandBox         = 3,
		Door            = 4,
		Well            = 5,
		Platform        = 6,
		Watchtower      = 7,
		GunRack         = 8,
		Foundation      = 9,
		Flag            = 10,
		WallOrnament    = 11,
		CeilingOrnament = 12,
		Cabin           = 13,
		Stairs          = 14,
		NewWalls        = 15,
		WallGunRack     = 16,
		All             = 17,
		MAX             = 18
	};

	/**
	 * Enum ConZ.EConZBoatMeshType
	 */
	enum class EConZBoatMeshType : uint8_t
	{
		None            = 0,
		SM_MotorBoat_01 = 1,
		SM_MotorBoat_02 = 2,
		MAX             = 3
	};

	/**
	 * Enum ConZ.EBoatSailsState
	 */
	enum class EBoatSailsState : uint8_t
	{
		Folded   = 0,
		Deployed = 1,
		Broken   = 2,
		MAX      = 3
	};

	/**
	 * Enum ConZ.EBoatMountControlType
	 */
	enum class EBoatMountControlType : uint8_t
	{
		MotorProppeled = 0,
		Rowing         = 1,
		Paddling       = 2,
		Sailing        = 3,
		MAX            = 4
	};

	/**
	 * Enum ConZ.ECharacterHostileState
	 */
	enum class ECharacterHostileState : uint8_t
	{
		None                      = 0,
		Idle                      = 1,
		AlertedWithoutLineOfSight = 2,
		AlertedWithLineOfSight    = 3,
		MAX                       = 4
	};

	/**
	 * Enum ConZ.EMultiplayerDisabledReason
	 */
	enum class EMultiplayerDisabledReason : uint8_t
	{
		None                     = 0,
		FileIntegrityCompromised = 1,
		DllIntegrityCompromised  = 2,
		MAX                      = 3
	};

	/**
	 * Enum ConZ.EPlayPreparationsState
	 */
	enum class EPlayPreparationsState : uint8_t
	{
		StreamingCheck       = 0,
		AuthSend             = 1,
		AuthReceive          = 2,
		InitialSyncSend      = 3,
		InitialSyncReceive   = 4,
		ProcessInitialSync   = 5,
		SucceededSyncSend    = 6,
		SucceededSyncReceive = 7,
		Succeeded            = 8,
		Failed               = 9,
		MAX                  = 10
	};

	/**
	 * Enum ConZ.EConZWaterSplineType
	 */
	enum class EConZWaterSplineType : uint8_t
	{
		None   = 0,
		River  = 1,
		Lake   = 2,
		Ocean  = 3,
		Island = 4,
		MAX    = 5
	};

	/**
	 * Enum ConZ.ECraftingItemCategory
	 */
	enum class ECraftingItemCategory : uint8_t
	{
		None            = 0,
		ToolsAndWeapons = 1,
		Items           = 2,
		Food            = 3,
		BaseBuilding    = 4,
		MAX             = 5
	};

	/**
	 * Enum ConZ.ECraftingIngredientConsumptionHint
	 */
	enum class ECraftingIngredientConsumptionHint : uint8_t
	{
		None    = 0,
		Use     = 1,
		Destroy = 2,
		MAX     = 3
	};

	/**
	 * Enum ConZ.ECraftingType
	 */
	enum class ECraftingType : uint8_t
	{
		Use      = 0,
		Assemble = 1,
		Destroy  = 2,
		Attach   = 3,
		MAX      = 4
	};

	/**
	 * Enum ConZ.ECustomZoneEvent
	 */
	enum class ECustomZoneEvent : uint8_t
	{
		FallDamage          = 0,
		PuppetDamage        = 1,
		SuicidePuppetDamage = 2,
		SentryDamage        = 3,
		AnimalDamage        = 4,
		BaseDefenseDamage   = 5,
		VehicleDamage       = 6,
		BoxingDamage        = 7,
		MeleeWeaponDamage   = 8,
		ThrowingDamage      = 9,
		ProjectileDamage    = 10,
		ExplosiveDamage     = 11,
		TrapDamage          = 12,
		DamageToBases       = 13,
		DamageToVehicles    = 14,
		PlayerLockpicking   = 15,
		WorldLockpicking    = 16,
		BaseBuilding        = 17,
		VehicleParking      = 18,
		Count               = 19,
		MAX                 = 20
	};

	/**
	 * Enum ConZ.EDefaultCustomZoneState
	 */
	enum class EDefaultCustomZoneState : uint8_t
	{
		NotDefault = 0,
		Unmodified = 1,
		Modified   = 2,
		Deleted    = 3,
		MAX        = 4
	};

	/**
	 * Enum ConZ.ECustomZoneShape
	 */
	enum class ECustomZoneShape : uint8_t
	{
		Circle    = 0,
		Rectangle = 1,
		MAX       = 2
	};

	/**
	 * Enum ConZ.ECustomZoneEventHandlingMethod
	 */
	enum class ECustomZoneEventHandlingMethod : uint8_t
	{
		Ignore = 0,
		Allow  = 1,
		Block  = 2,
		Count  = 3,
		MAX    = 4
	};

	/**
	 * Enum ConZ.ECustomZoneSettingsMapMode
	 */
	enum class ECustomZoneSettingsMapMode : uint8_t
	{
		None               = 0,
		AddCircleRegion    = 1,
		AddRectangleRegion = 2,
		RemoveRegion       = 3,
		MAX                = 4
	};

	/**
	 * Enum ConZ.EDamageMagnitudeType
	 */
	enum class EDamageMagnitudeType : uint8_t
	{
		Small    = 0,
		Medium   = 1,
		Large    = 2,
		Knockout = 3,
		MAX      = 4
	};

	/**
	 * Enum ConZ.EHitDirectionType
	 */
	enum class EHitDirectionType : uint8_t
	{
		Front = 0,
		Left  = 1,
		Back  = 2,
		Right = 3,
		MAX   = 4
	};

	/**
	 * Enum ConZ.EDayPeriod
	 */
	enum class EDayPeriod : uint8_t
	{
		Nighttime = 0,
		Dawn      = 1,
		Daytime   = 2,
		Dusk      = 3,
		MAX       = 4
	};

	/**
	 * Enum ConZ.EDbConnectionOpenMode
	 */
	enum class EDbConnectionOpenMode : uint8_t
	{
		None      = 0,
		ReadOnly  = 1,
		ReadWrite = 2,
		MAX       = 3
	};

	/**
	 * Enum ConZ.EDialogAnimationState
	 */
	enum class EDialogAnimationState : uint8_t
	{
		None = 0,
		Show = 1,
		Hide = 2,
		MAX  = 3
	};

	/**
	 * Enum ConZ.EMineral
	 */
	enum class EMineral : uint8_t
	{
		Calcium    = 0,
		Iron       = 1,
		Magnesium  = 2,
		Phosphorus = 3,
		Potassium  = 4,
		Zinc       = 5,
		Copper     = 6,
		Manganese  = 7,
		Selenium   = 8,
		Count      = 9,
		MAX        = 10
	};

	/**
	 * Enum ConZ.EVitamin
	 */
	enum class EVitamin : uint8_t
	{
		A     = 0,
		B1    = 1,
		B2    = 2,
		B3    = 3,
		B4    = 4,
		B5    = 5,
		B6    = 6,
		B9    = 7,
		B12   = 8,
		C     = 9,
		D     = 10,
		E     = 11,
		K     = 12,
		Count = 13,
		MAX   = 14
	};

	/**
	 * Enum ConZ.EDisposition
	 */
	enum class EDisposition : uint8_t
	{
		Neutral = 0,
		Good    = 1,
		Bad     = 2,
		MAX     = 3
	};

	/**
	 * Enum ConZ.EDistantMeshStreamingBehavior
	 */
	enum class EDistantMeshStreamingBehavior : uint8_t
	{
		Default              = 0,
		LoadAsSoonAsPossible = 1,
		MAX                  = 2
	};

	/**
	 * Enum ConZ.EDoorUnlockDataType
	 */
	enum class EDoorUnlockDataType : uint8_t
	{
		Default = 0,
		Killbox = 1,
		MAX     = 2
	};

	/**
	 * Enum ConZ.ESlotType
	 */
	enum class ESlotType : uint8_t
	{
		None             = 0,
		LockSlot         = 1,
		ZapperSlot       = 2,
		RemoteSensorSlot = 3,
		MAX              = 4
	};

	/**
	 * Enum ConZ.EDroneSound
	 */
	enum class EDroneSound : uint8_t
	{
		None   = 0,
		Idle   = 1,
		Attack = 2,
		Kill   = 3,
		MAX    = 4
	};

	/**
	 * Enum ConZ.EDroneSightingMode
	 */
	enum class EDroneSightingMode : uint8_t
	{
		Follow   = 0,
		Flyby    = 1,
		Crashing = 2,
		Num      = 3,
		MAX      = 4
	};

	/**
	 * Enum ConZ.EDroneState
	 */
	enum class EDroneState : uint8_t
	{
		Initial     = 0,
		Leaving     = 1,
		Approaching = 2,
		Following   = 3,
		Flybying    = 4,
		Crashing    = 5,
		Num         = 6,
		MAX         = 7
	};

	/**
	 * Enum ConZ.EDropZoneGameEventPhase
	 */
	enum class EDropZoneGameEventPhase : uint8_t
	{
		Warmup  = 0,
		Search  = 1,
		Drop    = 2,
		Capture = 3,
		MAX     = 4
	};

	/**
	 * Enum ConZ.EFishBehavior
	 */
	enum class EFishBehavior : uint8_t
	{
		None           = 0,
		Normal         = 1,
		Fleeing        = 2,
		Aggressive     = 3,
		Attacking      = 4,
		Alerted        = 5,
		ForcedMovement = 6,
		Count          = 7,
		MAX            = 8
	};

	/**
	 * Enum ConZ.EFlareIgniteState
	 */
	enum class EFlareIgniteState : uint8_t
	{
		None       = 0,
		Start      = 1,
		Burning    = 2,
		Extinguish = 3,
		Finished   = 4,
		MAX        = 5
	};

	/**
	 * Enum ConZ.ESelectSource
	 */
	enum class ESelectSource : uint8_t
	{
		Child   = 0,
		Parent  = 1,
		Unknown = 2,
		MAX     = 3
	};

	/**
	 * Enum ConZ.EDigestionGroup
	 */
	enum class EDigestionGroup : uint8_t
	{
		Water                 = 0,
		Juices                = 1,
		SemiLiquid            = 2,
		Fruits1               = 3,
		Fruits3               = 4,
		Fruits4               = 5,
		Fruits5               = 6,
		Vegetables1           = 7,
		Vegetables2           = 8,
		Vegetables3           = 9,
		Vegetables4           = 10,
		SemiConcentratedCarbs = 11,
		ConcentratedCarbs1    = 12,
		ConcentratedCarbs2    = 13,
		ConcentratedCarbs3    = 14,
		SeedsNuts1            = 15,
		SeedsNuts2            = 16,
		Dairy1                = 17,
		Dairy2                = 18,
		Dairy3                = 19,
		Animal1               = 20,
		Animal2               = 21,
		Animal3               = 22,
		Animal4               = 23,
		Animal5               = 24,
		Animal6               = 25,
		Fish1                 = 26,
		Fish2                 = 27,
		Vitamins              = 28,
		CookedMeals           = 29,
		OilFat                = 30,
		MAX                   = 31
	};

	/**
	 * Enum ConZ.EGameEventPlayerRoundResult
	 */
	enum class EGameEventPlayerRoundResult : uint8_t
	{
		None = 0,
		Win  = 1,
		Lose = 2,
		Draw = 3,
		MAX  = 4
	};

	/**
	 * Enum ConZ.EGameEventNotificationType
	 */
	enum class EGameEventNotificationType : uint8_t
	{
		EventStarted          = 0,
		EventCanceled         = 1,
		EventEnded            = 2,
		NotEnoughParticipants = 3,
		ParticipantJoined     = 4,
		ParticipantLeft       = 5,
		MAX                   = 6
	};

	/**
	 * Enum ConZ.EGameEventParticipantState
	 */
	enum class EGameEventParticipantState : uint8_t
	{
		Registered = 0,
		Spawning   = 1,
		Alive      = 2,
		Dead       = 3,
		Left       = 4,
		MAX        = 5
	};

	/**
	 * Enum ConZ.EGameEventState
	 */
	enum class EGameEventState : uint8_t
	{
		Announced    = 0,
		RoundStarted = 1,
		RoundEnded   = 2,
		Ended        = 3,
		MAX          = 4
	};

	/**
	 * Enum ConZ.EGameEventBorderState
	 */
	enum class EGameEventBorderState : uint8_t
	{
		Off    = 0,
		On     = 1,
		Bright = 2,
		MAX    = 3
	};

	/**
	 * Enum ConZ.EGameEventTransportState
	 */
	enum class EGameEventTransportState : uint8_t
	{
		StandBy    = 0,
		Travelling = 1,
		Leaving    = 2,
		Landing    = 3,
		LiftOff    = 4,
		MAX        = 5
	};

	/**
	 * Enum ConZ.EGameResourceConsumptionMethod
	 */
	enum class EGameResourceConsumptionMethod : uint8_t
	{
		Eating   = 0,
		Drinking = 1,
		MAX      = 2
	};

	/**
	 * Enum ConZ.EGrappleEndType
	 */
	enum class EGrappleEndType : uint8_t
	{
		Normal      = 0,
		Successful  = 1,
		Interrupted = 2,
		MAX         = 3
	};

	/**
	 * Enum ConZ.ERagdollTransitionState
	 */
	enum class ERagdollTransitionState : uint8_t
	{
		None                   = 0,
		GoTo                   = 1,
		RecoverFrom            = 2,
		RecoverFromImmediately = 3,
		MAX                    = 4
	};

	/**
	 * Enum ConZ.EHitReactState
	 */
	enum class EHitReactState : uint8_t
	{
		None      = 0,
		Hit       = 1,
		Stun      = 2,
		Knockout  = 3,
		GettingUp = 4,
		Ragdoll   = 5,
		MAX       = 6
	};

	/**
	 * Enum ConZ.EGoToRagdollCaller
	 */
	enum class EGoToRagdollCaller : uint8_t
	{
		Default = 0,
		Montage = 1,
		MAX     = 2
	};

	/**
	 * Enum ConZ.EHUDVisibilityFlag
	 */
	enum class EHUDVisibilityFlag : uint8_t
	{
		None           = 0,
		UserInput      = 1,
		IntroCinematic = 2,
		PlasticSurgery = 3,
		All            = 4,
		MAX            = 5
	};

	/**
	 * Enum ConZ.EHUDMessageType
	 */
	enum class EHUDMessageType : uint8_t
	{
		Regular   = 0,
		Important = 1,
		MAX       = 2
	};

	/**
	 * Enum ConZ.EWarningType
	 */
	enum class EWarningType : uint8_t
	{
		Danger     = 0,
		Explosion  = 1,
		LifeThreat = 2,
		Watching   = 3,
		Traps      = 4,
		MAX        = 5
	};

	/**
	 * Enum ConZ.EInteractionState
	 */
	enum class EInteractionState : uint8_t
	{
		Busy                 = 0,
		NoInteractionDefined = 1,
		CanInteract          = 2,
		UnableToInteract     = 3,
		MAX                  = 4
	};

	/**
	 * Enum ConZ.EInventoryNodeWidgetDataType
	 */
	enum class EInventoryNodeWidgetDataType : uint8_t
	{
		Number     = 0,
		Text       = 1,
		Icon       = 2,
		Visibility = 3,
		Animation  = 4,
		MAX        = 5
	};

	/**
	 * Enum ConZ.EItemDebugMode
	 */
	enum class EItemDebugMode : uint8_t
	{
		None  = 0,
		Basic = 1,
		Count = 2,
		MAX   = 3
	};

	/**
	 * Enum ConZ.EItemFlags
	 */
	enum class EItemFlags : uint8_t
	{
		None                      = 0,
		IsCrafted                 = 1,
		IsBusy                    = 2,
		Examined                  = 3,
		IsPartOfEvent             = 4,
		BlinkOnSpawn              = 5,
		ShouldBeVisibleInVicinity = 6,
		All                       = 7,
		MAX                       = 8
	};

	/**
	 * Enum ConZ.EItemDropPlaceholderDebugMode
	 */
	enum class EItemDropPlaceholderDebugMode : uint8_t
	{
		None  = 0,
		Basic = 1,
		Count = 2,
		MAX   = 3
	};

	/**
	 * Enum ConZ.EItemActionKeyInput
	 */
	enum class EItemActionKeyInput : uint8_t
	{
		ToggleLight                               = 0,
		IncrementScopeDisplayBrightnessMultiplier = 1,
		DecrementScopeDisplayBrightnessMultiplier = 2,
		ReloadWeapon                              = 3,
		CheckStatus                               = 4,
		CancelAllActions                          = 5,
		MAX                                       = 6
	};

	/**
	 * Enum ConZ.ERPCType
	 */
	enum class ERPCType : uint8_t
	{
		None         = 0,
		Client       = 1,
		Server       = 2,
		NetMulticast = 3,
		MAX          = 4
	};

	/**
	 * Enum ConZ.ETooltipPanelType
	 */
	enum class ETooltipPanelType : uint8_t
	{
		Overview   = 0,
		Additional = 1,
		MAX        = 2
	};

	/**
	 * Enum ConZ.ELockPickingDifficulty
	 */
	enum class ELockPickingDifficulty : uint8_t
	{
		Normal = 0,
		Medium = 1,
		Hard   = 2,
		MAX    = 3
	};

	/**
	 * Enum ConZ.EAccessLevel
	 */
	enum class EAccessLevel : uint8_t
	{
		Public  = 0,
		Private = 1,
		Rank1   = 2,
		Rank2   = 3,
		Rank3   = 4,
		Rank4   = 5,
		Num     = 6,
		MAX     = 7
	};

	/**
	 * Enum ConZ.EConZMenu
	 */
	enum class EConZMenu : uint8_t
	{
		None               = 0,
		Main               = 1,
		Pause              = 2,
		ServerBrowser      = 3,
		ClientSettings     = 4,
		CustomZoneSettings = 5,
		PlayerManagement   = 6,
		CharacterSelection = 7,
		CharacterCreation  = 8,
		Statistics         = 9,
		Count              = 10,
		MAX                = 11
	};

	/**
	 * Enum ConZ.EMSCServerEnrollReason
	 */
	enum class EMSCServerEnrollReason : uint8_t
	{
		Unspecified           = 0,
		Startup               = 1,
		ServerSettingsChanged = 2,
		MasterServerRequested = 3,
		MAX                   = 4
	};

	/**
	 * Enum ConZ.EMSPPlaystyle
	 */
	enum class EMSPPlaystyle : uint8_t
	{
		PVE   = 0,
		PVP   = 1,
		PVPVE = 2,
		First = 3,
		Last  = 4,
		MAX   = 5
	};

	/**
	 * Enum ConZ.EMedicationRepeatedAbuseReaction
	 */
	enum class EMedicationRepeatedAbuseReaction : uint8_t
	{
		None     = 0,
		Vomiting = 1,
		Diarrhea = 2,
		MAX      = 3
	};

	/**
	 * Enum ConZ.EMedicationType
	 */
	enum class EMedicationType : uint8_t
	{
		Painkillers    = 0,
		Sedatives      = 1,
		Antibiotics    = 2,
		Antiparasitics = 3,
		Stimulants     = 4,
		MAX            = 5
	};

	/**
	 * Enum ConZ.EMedicationUsage
	 */
	enum class EMedicationUsage : uint8_t
	{
		Pills      = 0,
		Injections = 1,
		Infusions  = 2,
		MAX        = 3
	};

	/**
	 * Enum ConZ.EMeleeActionType
	 */
	enum class EMeleeActionType : uint8_t
	{
		None                   = 0,
		Attack                 = 1,
		PrepareForBlockOrDodge = 2,
		Block                  = 3,
		Dodge                  = 4,
		MAX                    = 5
	};

	/**
	 * Enum ConZ.EMeleeState
	 */
	enum class EMeleeState : uint8_t
	{
		Idle                    = 0,
		Attacking               = 1,
		PreparedForBlockOrDodge = 2,
		Block                   = 3,
		Dodge                   = 4,
		HitReact                = 5,
		MAX                     = 6
	};

	/**
	 * Enum ConZ.EAttackCollisionType
	 */
	enum class EAttackCollisionType : uint8_t
	{
		None            = 0,
		WeaponLeftHand  = 1,
		WeaponRightHand = 2,
		Head            = 3,
		LeftHand        = 4,
		RightHand       = 5,
		LeftLeg         = 6,
		RightLeg        = 7,
		MAX             = 8
	};

	/**
	 * Enum ConZ.EHumanBodyPanelSegmentGenderGroup
	 */
	enum class EHumanBodyPanelSegmentGenderGroup : uint8_t
	{
		Male   = 0,
		Female = 1,
		Both   = 2,
		Count  = 3,
		MAX    = 4
	};

	/**
	 * Enum ConZ.EMinigameState
	 */
	enum class EMinigameState : uint8_t
	{
		None             = 0,
		Intro            = 1,
		WaitingForPlayer = 2,
		Game             = 3,
		Outro            = 4,
		MAX              = 5
	};

	/**
	 * Enum ConZ.EEndMinigameReason
	 */
	enum class EEndMinigameReason : uint8_t
	{
		Success = 0,
		Fail    = 1,
		Cancel  = 2,
		MAX     = 3
	};

	/**
	 * Enum ConZ.EObjectiveAnimationState
	 */
	enum class EObjectiveAnimationState : uint8_t
	{
		None     = 0,
		Start    = 1,
		Complete = 2,
		MAX      = 3
	};

	/**
	 * Enum ConZ.EMissionManagerState
	 */
	enum class EMissionManagerState : uint8_t
	{
		None             = 0,
		MainStorySuccess = 1,
		SideStorySuccess = 2,
		TutorialSuccess  = 3,
		MainStoryFailed  = 4,
		SideStoryFailed  = 5,
		TutorialFailed   = 6,
		MAX              = 7
	};

	/**
	 * Enum ConZ.EDialogType
	 */
	enum class EDialogType : uint8_t
	{
		Subtitle = 0,
		Action   = 1,
		Wait     = 2,
		MAX      = 3
	};

	/**
	 * Enum ConZ.EDialogEvent
	 */
	enum class EDialogEvent : uint8_t
	{
		Intro                     = 0,
		OpenInteface              = 1,
		OpenCraftingInterface     = 2,
		ChooseKnife               = 3,
		OpenCraftingInterface_Bag = 4,
		MAX                       = 5
	};

	/**
	 * Enum ConZ.EFaction
	 */
	enum class EFaction : uint8_t
	{
		None  = 0,
		Rebel = 1,
		TEC   = 2,
		MAX   = 3
	};

	/**
	 * Enum ConZ.EObjectiveState
	 */
	enum class EObjectiveState : uint8_t
	{
		None        = 0,
		Initialized = 1,
		Started     = 2,
		Completed   = 3,
		Failed      = 4,
		Belated     = 5,
		MAX         = 6
	};

	/**
	 * Enum ConZ.EMissionType
	 */
	enum class EMissionType : uint8_t
	{
		None      = 0,
		MainStory = 1,
		SideStory = 2,
		Tutorial  = 3,
		MAX       = 4
	};

	/**
	 * Enum ConZ.EMissionState
	 */
	enum class EMissionState : uint8_t
	{
		Available   = 0,
		Unavailable = 1,
		Started     = 2,
		Completed   = 3,
		Failed      = 4,
		Belated     = 5,
		MAX         = 6
	};

	/**
	 * Enum ConZ.EMovableCollisionFieldMovementCurveType
	 */
	enum class EMovableCollisionFieldMovementCurveType : uint8_t
	{
		Linear      = 0,
		SquareRoot  = 1,
		Exponential = 2,
		MAX         = 3
	};

	/**
	 * Enum ConZ.EMovableCollisionFieldMoveType
	 */
	enum class EMovableCollisionFieldMoveType : uint8_t
	{
		TowardsStart = 0,
		TowardsEnd   = 1,
		None         = 2,
		Count        = 3,
		MAX          = 4
	};

	/**
	 * Enum ConZ.RestState
	 */
	enum class ERestState : uint8_t
	{
		RestState_AT_REST       = 0,
		RestState_MOVING        = 1,
		RestState_RestState_MAX = 2
	};

	/**
	 * Enum ConZ.SyncMode
	 */
	enum class ESyncMode : uint8_t
	{
		SyncMode_XYZ          = 0,
		SyncMode_XY           = 1,
		SyncMode_XZ           = 2,
		SyncMode_YZ           = 3,
		SyncMode_X            = 4,
		SyncMode_Y            = 5,
		SyncMode_Z            = 6,
		SyncMode_NONE         = 7,
		SyncMode_SyncMode_MAX = 8
	};

	/**
	 * Enum ConZ.ENotificationTarget
	 */
	enum class ENotificationTarget : uint8_t
	{
		Everybody    = 0,
		SingleClient = 1,
		MAX          = 2
	};

	/**
	 * Enum ConZ.ENutrient
	 */
	enum class ENutrient : uint8_t
	{
		Protein      = 0,
		SaturatedFat = 1,
		OtherFats    = 2,
		Fiber        = 3,
		Sugars       = 4,
		OtherCarbs   = 5,
		Alcohol      = 6,
		Water        = 7,
		VitaminA     = 8,
		VitaminB1    = 9,
		VitaminB2    = 10,
		VitaminB3    = 11,
		VitaminB4    = 12,
		VitaminB5    = 13,
		VitaminB6    = 14,
		VitaminB9    = 15,
		VitaminB12   = 16,
		VitaminC     = 17,
		VitaminD     = 18,
		VitaminE     = 19,
		VitaminK     = 20,
		Calcium      = 21,
		Magnesium    = 22,
		Potassium    = 23,
		Copper       = 24,
		Selenium     = 25,
		Iron         = 26,
		Phosphorus   = 27,
		Zinc         = 28,
		Manganese    = 29,
		Sodium       = 30,
		Other        = 31,
		Count        = 32,
		MAX          = 33
	};

	/**
	 * Enum ConZ.EPickupItemOperation
	 */
	enum class EPickupItemOperation : uint8_t
	{
		PickupOnly      = 0,
		PickupAndEat    = 1,
		PickupAndEatAll = 2,
		MAX             = 3
	};

	/**
	 * Enum ConZ.EPlaceableActorDebugMode
	 */
	enum class EPlaceableActorDebugMode : uint8_t
	{
		None          = 0,
		Basic         = 1,
		GroundedCheck = 2,
		Walls         = 3,
		Count         = 4,
		MAX           = 5
	};

	/**
	 * Enum ConZ.EStateFlags
	 */
	enum class EStateFlags : uint8_t
	{
		None     = 0,
		Flipped  = 1,
		Snapping = 2,
		MAX      = 3
	};

	/**
	 * Enum ConZ.EPlacementBaseBuildingState
	 */
	enum class EPlacementBaseBuildingState : uint8_t
	{
		Placing            = 0,
		PlacingSecondPoint = 1,
		Placed             = 2,
		MAX                = 3
	};

	/**
	 * Enum ConZ.EPlaceableStatusFlags
	 */
	enum class EPlaceableStatusFlags : uint8_t
	{
		None             = 0,
		PlacementAllowed = 1,
		PlacingOnWater   = 2,
		All              = 3,
		MAX              = 4
	};

	/**
	 * Enum ConZ.EPlacementTraceHitActor
	 */
	enum class EPlacementTraceHitActor : uint8_t
	{
		None          = 0,
		Item          = 1,
		BaseElement   = 2,
		VehicleCorpse = 3,
		All           = 4,
		MAX           = 5
	};

	/**
	 * Enum ConZ.EPlaceableIngredientType
	 */
	enum class EPlaceableIngredientType : uint8_t
	{
		Mandatory = 0,
		Tool      = 1,
		MAX       = 2
	};

	/**
	 * Enum ConZ.EPlacementAllowedStatus
	 */
	enum class EPlacementAllowedStatus : uint8_t
	{
		None                               = 0,
		Allowed                            = 1,
		NotAllowedGeneric                  = 2,
		NotAllowedPlacementLineTraceFailed = 3,
		NotAllowedNormalTestFailed         = 4,
		NotAllowedInteractionDistance      = 5,
		NotAllowedReachability             = 6,
		NotAllowedWater                    = 7,
		NotAllowedAngle                    = 8,
		NotAllowedMeshOverlap              = 9,
		NotAllowedTopOverlap               = 10,
		NotAllowedTopOverlapSimple         = 11,
		NotAllowedBottomOverlap            = 12,
		NotAllowedFullBoxOverlap           = 13,
		NotAllowedExtendedOverlap          = 14,
		NotAllowedFloating                 = 15,
		NotAllowedTeleportSpot             = 16,
		NotAllowedHitCharacter             = 17,
		NotAllowedHitItem                  = 18,
		NotAllowedHitVehicle               = 19,
		NotAllowedMapRegion                = 20,
		NotAllowedNotSnapping              = 21,
		NotAllowedCantPlaceAtLocation      = 22,
		NotAllowedLocationMask             = 23,
		NotAllowedLocationDupFlag          = 24,
		NotAllowedLocationEnemyFlag        = 25,
		NotAllowedLocationFoundation       = 26,
		NotAllowedLocationOtherElement     = 27,
		NotAllowedLocationNoBase           = 28,
		NotAllowedLocationNoFlag           = 29,
		NotAllowedLocationMaxInstances     = 30,
		NotAllowedEnemyFlag                = 31,
		NotAllowedBaseBuildingMask         = 32,
		NotAllowedInBuilding               = 33,
		NotAllowedActorTag                 = 34,
		NotAllowedVehicleCorpse            = 35,
		NotAllowedPointsTooClose           = 36,
		NotAllowedTwoPointsConstaints      = 37,
		NotAllowedHeightDifference         = 38,
		NotAllowedTopSweep                 = 39,
		NotAllowedMidSweep                 = 40,
		NotAllowedTilesNotGrounded         = 41,
		NotAllowedPlacedDistance           = 42,
		NotAllowedUnknown                  = 43,
		MAX                                = 44
	};

	/**
	 * Enum ConZ.EPlacementAlgorithm
	 */
	enum class EPlacementAlgorithm : uint8_t
	{
		Classic = 0,
		New     = 1,
		MAX     = 2
	};

	/**
	 * Enum ConZ.EPlacementBaseState
	 */
	enum class EPlacementBaseState : uint8_t
	{
		None             = 0,
		Placing          = 1,
		Placed           = 2,
		HeightAdjustment = 3,
		MAX              = 4
	};

	/**
	 * Enum ConZ.EPlantGrowthStage
	 */
	enum class EPlantGrowthStage : uint8_t
	{
		None       = 0,
		Seeding    = 1,
		Vegetating = 2,
		Flowering  = 3,
		Ripening   = 4,
		Dead       = 5,
		MAX        = 6
	};

	/**
	 * Enum ConZ.EPlayableInstrumentView
	 */
	enum class EPlayableInstrumentView : uint8_t
	{
		FirstPerson = 0,
		ThirdPerson = 1,
		MAX         = 2
	};

	/**
	 * Enum ConZ.EPlayableInstrumentChord
	 */
	enum class EPlayableInstrumentChord : uint8_t
	{
		Count = 0,
		MAX   = 1
	};

	/**
	 * Enum ConZ.EDroneVisibility
	 */
	enum class EDroneVisibility : uint8_t
	{
		Visible   = 0,
		Invisible = 1,
		Hidden    = 2,
		MAX       = 3
	};

	/**
	 * Enum ConZ.EInstrumentEventType
	 */
	enum class EInstrumentEventType : uint8_t
	{
		PlayTone = 0,
		StopTone = 1,
		MAX      = 2
	};

	/**
	 * Enum ConZ.EStanceChangeFlag
	 */
	enum class EStanceChangeFlag : uint8_t
	{
		Exact = 0,
		Min   = 1,
		Max   = 2
	};

	/**
	 * Enum ConZ.ESwapItemsType
	 */
	enum class ESwapItemsType : uint8_t
	{
		None                 = 0,
		NotWeaponToNotWeapon = 1,
		WeaponToWeapon       = 2,
		NotWeaponToWeapon    = 3,
		WeaponToNotWeapon    = 4,
		WeaponToThrowingItem = 5,
		ThrowingItemToWeapon = 6,
		MAX                  = 7
	};

	/**
	 * Enum ConZ.EPrisonerAnimationCurve
	 */
	enum class EPrisonerAnimationCurve : uint8_t
	{
		LegsPose                     = 0,
		CanStartGoToLoop             = 1,
		CanStartGoToStopLU           = 2,
		CanStartGoToStopRU           = 3,
		DistanceToPivot              = 4,
		DistanceToApex               = 5,
		CanLandGoToLoop              = 6,
		CanFireWeapon                = 7,
		LeftHandIK                   = 8,
		MoveInputScale               = 9,
		MoveInputModifierScale       = 10,
		MoveInputModifierCourseAngle = 11,
		IgnoreMoveInput              = 12,
		IgnoreTurnInput              = 13,
		IsStanceTransitionActive     = 14,
		MeshOffsetWhenInWater        = 15,
		ViewRoll                     = 16,
		ViewPitch                    = 17,
		ViewYaw                      = 18,
		IgnoreAimOffset              = 19,
		IgnoreFistCorrections        = 20,
		IgnoreRotation               = 21,
		IgnoreFPBoneRotation         = 22,
		Vehicle2WPickupRotation      = 23,
		Vehicle2WPickupTranslation   = 24,
		Vehicle2WPedalRotation       = 25,
		Count                        = 26,
		MAX                          = 27
	};

	/**
	 * Enum ConZ.EPrisonerAnimationMountType
	 */
	enum class EPrisonerAnimationMountType : uint8_t
	{
		None        = 0,
		Car         = 1,
		Sledge      = 2,
		WheelBarrow = 3,
		Boat        = 4,
		Vehicle2W   = 5,
		Airplane    = 6,
		Count       = 7,
		MAX         = 8
	};

	/**
	 * Enum ConZ.EPrisonerAnimationState
	 */
	enum class EPrisonerAnimationState : uint8_t
	{
		Unknown               = 0,
		Entry                 = 1,
		StandIdle             = 2,
		StandIdleToCrouchIdle = 3,
		StandIdleToProneIdle  = 4,
		StandWalkStart        = 5,
		StandWalkLoop         = 6,
		StandWalkStop         = 7,
		StandJogStart         = 8,
		StandJogLoop          = 9,
		StandJogStop          = 10,
		StandRunStart         = 11,
		StandRunLoop          = 12,
		StandRunStop          = 13,
		CrouchIdle            = 14,
		CrouchIdleToStandIdle = 15,
		CrouchIdleToProneIdle = 16,
		CrouchWalkStart       = 17,
		CrouchWalkLoop        = 18,
		CrouchWalkStop        = 19,
		ProneIdle             = 20,
		ProneIdleToStandIdle  = 21,
		ProneIdleToCrouchIdle = 22,
		ProneWalkLoop         = 23,
		Count                 = 24,
		MAX                   = 25
	};

	/**
	 * Enum ConZ.EPrisonerBodyConditionState
	 */
	enum class EPrisonerBodyConditionState : uint8_t
	{
		Incubating  = 0,
		Untreated   = 1,
		Stabilizing = 2,
		Recovering  = 3,
		Count       = 4,
		MAX         = 5
	};

	/**
	 * Enum ConZ.EPrisonerBodyHeatGroup
	 */
	enum class EPrisonerBodyHeatGroup : uint8_t
	{
		Head  = 0,
		Torso = 1,
		Hands = 2,
		Legs  = 3,
		Feet  = 4,
		Count = 5,
		MAX   = 6
	};

	/**
	 * Enum ConZ.EPrisonerBodyConditionTissueGroup
	 */
	enum class EPrisonerBodyConditionTissueGroup : uint8_t
	{
		Unspecified = 0,
		Muscle      = 1,
		Bone        = 2,
		Organ       = 3,
		Count       = 4,
		MAX         = 5
	};

	/**
	 * Enum ConZ.EPrisonerBodyOrganGroup
	 */
	enum class EPrisonerBodyOrganGroup : uint8_t
	{
		Unspecified       = 0,
		SpinalCord        = 1,
		Lungs             = 2,
		RespiratorySystem = 3,
		CirculatorySystem = 4,
		Colon             = 5,
		Intestine         = 6,
		Bladder           = 7,
		Liver             = 8,
		Kidneys           = 9,
		AdrenalGlands     = 10,
		Gallbladder       = 11,
		Pancreas          = 12,
		Stomach           = 13,
		Heart             = 14,
		Spleen            = 15,
		Brain             = 16,
		Reproductive      = 17,
		Count             = 18,
		MAX               = 19
	};

	/**
	 * Enum ConZ.EPrisonerBodyMuscleGroup
	 */
	enum class EPrisonerBodyMuscleGroup : uint8_t
	{
		Unspecified   = 0,
		Head          = 1,
		Neck          = 2,
		Trapezius     = 3,
		Chest         = 4,
		UpperAbdomen  = 5,
		LowerAbdomen  = 6,
		LeftEar       = 7,
		RightEar      = 8,
		LeftThigh     = 9,
		RightThigh    = 10,
		LeftLeg       = 11,
		RightLeg      = 12,
		LeftFoot      = 13,
		RightFoot     = 14,
		LeftShoulder  = 15,
		RightShoulder = 16,
		LeftArm       = 17,
		RightArm      = 18,
		LeftForearm   = 19,
		RightForearm  = 20,
		LeftHand      = 21,
		RightHand     = 22,
		LeftKneecap   = 23,
		RightKneecap  = 24,
		Count         = 25,
		MAX           = 26
	};

	/**
	 * Enum ConZ.EPrisonerBodyBoneGroup
	 */
	enum class EPrisonerBodyBoneGroup : uint8_t
	{
		Unspecified   = 0,
		Ribcage       = 1,
		Spine         = 2,
		Skull         = 3,
		Pelvis        = 4,
		LeftThigh     = 5,
		RightThigh    = 6,
		LeftLeg       = 7,
		RightLeg      = 8,
		LeftFoot      = 9,
		RightFoot     = 10,
		LeftShoulder  = 11,
		RightShoulder = 12,
		LeftArm       = 13,
		RightArm      = 14,
		LeftForearm   = 15,
		RightForearm  = 16,
		LeftHand      = 17,
		RightHand     = 18,
		Count         = 19,
		MAX           = 20
	};

	/**
	 * Enum ConZ.EPrisonerBodyRegion
	 */
	enum class EPrisonerBodyRegion : uint8_t
	{
		Unspecified = 0,
		Head        = 1,
		Torso       = 2,
		LeftArm     = 3,
		RightArm    = 4,
		LeftLeg     = 5,
		RightLeg    = 6,
		Count       = 7,
		MAX         = 8
	};

	/**
	 * Enum ConZ.EPrisonerBodyState
	 */
	enum class EPrisonerBodyState : uint8_t
	{
		UnableToMove                    = 0,
		Unconscious                     = 1,
		Comatose                        = 2,
		Dead                            = 3,
		AbleToConsume                   = 4,
		Consuming                       = 5,
		AbleToVomit                     = 6,
		Vomiting                        = 7,
		AbleToUrinate                   = 8,
		Urinating                       = 9,
		AbleToDefecate                  = 10,
		Defecating                      = 11,
		ShallDefecateDiarrhea           = 12,
		CannotBeRevivedWithPhoenixTears = 13,
		Count                           = 14,
		MAX                             = 15
	};

	/**
	 * Enum ConZ.EBuryState
	 */
	enum class EBuryState : uint8_t
	{
		None       = 0,
		Bury       = 1,
		ResumeBury = 2,
		Rest       = 3,
		Finish     = 4,
		MAX        = 5
	};

	/**
	 * Enum ConZ.EPrisonerFacialExpression
	 */
	enum class EPrisonerFacialExpression : uint8_t
	{
		None         = 0,
		Angry1       = 1,
		Angry2       = 2,
		Hit          = 3,
		Punching     = 4,
		Fear1        = 5,
		Fear2        = 6,
		Fear3        = 7,
		WhatTheHell1 = 8,
		WhatTheHell2 = 9,
		Whistling1   = 10,
		Whistling2   = 11,
		Ouch1        = 12,
		Ouch2        = 13,
		Count        = 14,
		MAX          = 15
	};

	/**
	 * Enum ConZ.EPrisonerFirstPersonSubview
	 */
	enum class EPrisonerFirstPersonSubview : uint8_t
	{
		Standing                                = 0,
		Crouching                               = 1,
		Prone                                   = 2,
		StandingMelee                           = 3,
		StandingAiming                          = 4,
		CrouchingAiming                         = 5,
		ProneAiming                             = 6,
		StandingAimingDownTheSights             = 7,
		CrouchingAimingDownTheSights            = 8,
		ProneAimingDownTheSights                = 9,
		ClimbingWindow                          = 10,
		Mounted                                 = 11,
		Lying                                   = 12,
		MountedDefaultStanceAiming              = 13,
		MountedLeaningStanceAiming              = 14,
		MountedDefaultStanceAimingDownTheSights = 15,
		MountedLeaningStanceAimingDownTheSights = 16,
		Count                                   = 17,
		MAX                                     = 18
	};

	/**
	 * Enum ConZ.EPrisonerVicinityItemSets
	 */
	enum class EPrisonerVicinityItemSets : uint8_t
	{
		None       = 0,
		Items      = 1,
		Containers = 2,
		All        = 3,
		MAX        = 4
	};

	/**
	 * Enum ConZ.EPrisonerInventoryItemSets
	 */
	enum class EPrisonerInventoryItemSets : uint8_t
	{
		None            = 0,
		EquippedClothes = 1,
		ContainedItems  = 2,
		All             = 3,
		MAX             = 4
	};

	/**
	 * Enum ConZ.EPrisonerItemEquipType
	 */
	enum class EPrisonerItemEquipType : uint8_t
	{
		Inventory = 0,
		Hands     = 1,
		Holsters  = 2,
		MAX       = 3
	};

	/**
	 * Enum ConZ.EPrisonerDivingState
	 */
	enum class EPrisonerDivingState : uint8_t
	{
		None        = 0,
		WantsToDive = 1,
		Diving      = 2,
		MAX         = 3
	};

	/**
	 * Enum ConZ.EPrisonerMovementMode
	 */
	enum class EPrisonerMovementMode : uint8_t
	{
		None                          = 0,
		Climbing_Anchoring            = 1,
		Climbing_PlayingMontage       = 2,
		ClimbingLadder                = 3,
		ClimbingWindow_Anchoring      = 4,
		ClimbingWindow_PlayingMontage = 5,
		Anchoring                     = 6,
		RootMotionOnly                = 7,
		MAX                           = 8
	};

	/**
	 * Enum ConZ.EPrisonerPhotoModePoseGroup
	 */
	enum class EPrisonerPhotoModePoseGroup : uint8_t
	{
		Unarmed = 0,
		Rifle   = 1,
		Handgun = 2,
		Melee   = 3,
		MAX     = 4
	};

	/**
	 * Enum ConZ.EPrisonWalletChoiceType
	 */
	enum class EPrisonWalletChoiceType : uint8_t
	{
		JustFirst  = 0,
		PickRandom = 1,
		AllOfThem  = 2,
		MAX        = 3
	};

	/**
	 * Enum ConZ.EPrisonerRestingMode
	 */
	enum class EPrisonerRestingMode : uint8_t
	{
		None    = 0,
		Sitting = 1,
		Lying   = 2,
		Count   = 3,
		MAX     = 4
	};

	/**
	 * Enum ConZ.EThrowingType
	 */
	enum class EThrowingType : uint8_t
	{
		None      = 0,
		Near      = 1,
		Far       = 2,
		Aim       = 3,
		Throwback = 4,
		MAX       = 5
	};

	/**
	 * Enum ConZ.EEquipmentMeshComponent
	 */
	enum class EEquipmentMeshComponent : uint8_t
	{
		None                           = 0,
		HeadMeshComponent              = 1,
		UpperHeadMeshComponent         = 2,
		UpperHeadSkeletalMeshComponent = 3,
		EarsMeshComponent              = 4,
		EyewearMeshComponent           = 5,
		LowerHeadMeshComponent         = 6,
		UpperMouthMeshComponent        = 7,
		LowerMouthMeshComponent        = 8,
		LeyeMeshComponent              = 9,
		ReyeMeshComponent              = 10,
		HairMeshComponent              = 11,
		FacialHairMeshComponent        = 12,
		ChipMeshComponent              = 13,
		TorsoMeshComponent             = 14,
		BodyArmorMeshComponent         = 15,
		NeckMeshComponent              = 16,
		ArmsMeshComponent              = 17,
		HandsMeshComponent             = 18,
		WaistMeshComponent             = 19,
		LegsMeshComponent              = 20,
		FeetMeshComponent              = 21,
		BackpackMeshComponent          = 22,
		PenisMeshComponent             = 23,
		Count                          = 24,
		MAX                            = 25
	};

	/**
	 * Enum ConZ.EPrisonerVisibilityFlag
	 */
	enum class EPrisonerVisibilityFlag : uint8_t
	{
		None      = 0,
		Default   = 1,
		View      = 2,
		Awareness = 3,
		All       = 4,
		MAX       = 5
	};

	/**
	 * Enum ConZ.EPrisonerAimOffsetType
	 */
	enum class EPrisonerAimOffsetType : uint8_t
	{
		Standing             = 0,
		Crouching            = 1,
		Prone                = 2,
		ProneMoving          = 3,
		FirstPersonView      = 4,
		FirstPersonViewProne = 5,
		AimingDownTheSights  = 6,
		Count                = 7,
		MAX                  = 8
	};

	/**
	 * Enum ConZ.EPrisonerMontageBlendType
	 */
	enum class EPrisonerMontageBlendType : uint8_t
	{
		All       = 0,
		LeftHand  = 1,
		RightHand = 2,
		MAX       = 3
	};

	/**
	 * Enum ConZ.EPrisonerPostTeleportBehavior
	 */
	enum class EPrisonerPostTeleportBehavior : uint8_t
	{
		None             = 0,
		ReviveIfDead     = 1,
		GameEventLoadout = 2,
		MAX              = 3
	};

	/**
	 * Enum ConZ.EPrisonerHolsterSide
	 */
	enum class EPrisonerHolsterSide : uint8_t
	{
		None          = 0,
		LeftShoulder  = 1,
		RightShoulder = 2,
		MAX           = 3
	};

	/**
	 * Enum ConZ.EWeaponAnimationPose
	 */
	enum class EWeaponAnimationPose : uint8_t
	{
		None                              = 0,
		Relaxed                           = 1,
		AimingHip                         = 2,
		AimingDownTheSights               = 3,
		AimingDownTheSightsStill          = 4,
		AimingDownTheSightsWalking        = 5,
		AimingDownTheSightsLimpingWalking = 6,
		Count                             = 7,
		MAX                               = 8
	};

	/**
	 * Enum ConZ.EPrisonerFallingPose
	 */
	enum class EPrisonerFallingPose : uint8_t
	{
		None            = 0,
		JumpNormal      = 1,
		JumpDive        = 2,
		FallShort       = 3,
		FallLong        = 4,
		SkydiveSlow     = 5,
		SkydiveFast     = 6,
		DiveHeadFirst   = 7,
		DiveFeetFirst   = 8,
		Parachute       = 9,
		HandsBound      = 10,
		RagdollRecovery = 11,
		JumpSuper       = 12,
		Count           = 13,
		MAX             = 14
	};

	/**
	 * Enum ConZ.EPrisonerReplicatedComponent
	 */
	enum class EPrisonerReplicatedComponent : uint8_t
	{
		SkillComponent          = 0,
		InventoryComponent      = 1,
		HitReactComponent       = 2,
		InteractionComponent    = 3,
		BodySimulationComponent = 4,
		Count                   = 5,
		MAX                     = 6
	};

	/**
	 * Enum ConZ.EPrisonerThirdPersonSubview
	 */
	enum class EPrisonerThirdPersonSubview : uint8_t
	{
		Standing        = 0,
		Crouching       = 1,
		Prone           = 2,
		StandingMelee   = 3,
		StandingAiming  = 4,
		CrouchingAiming = 5,
		ProneAiming     = 6,
		Ragdoll         = 7,
		Grappled        = 8,
		NarrowLadder    = 9,
		Swimming        = 10,
		Diving          = 11,
		ClimbingWindow  = 12,
		Defecating      = 13,
		Throwing        = 14,
		Falling         = 15,
		Count           = 16,
		MAX             = 17
	};

	/**
	 * Enum ConZ.EPlayerSideView
	 */
	enum class EPlayerSideView : uint8_t
	{
		Left  = 0,
		Right = 1,
		Count = 2,
		MAX   = 3
	};

	/**
	 * Enum ConZ.EThrowingState
	 */
	enum class EThrowingState : uint8_t
	{
		None         = 0,
		Cancelled    = 1,
		Aiming       = 2,
		ThrowFromAim = 3,
		Throwing     = 4,
		Lobbing      = 5,
		Throwback    = 6,
		Finish       = 7,
		MAX          = 8
	};

	/**
	 * Enum ConZ.EPrisonerUITooltipSectionName
	 */
	enum class EPrisonerUITooltipSectionName : uint8_t
	{
		None       = 0,
		Affects    = 1,
		AffectedBy = 2,
		CausedBy   = 3,
		Symptoms   = 4,
		Count      = 5,
		MAX        = 6
	};

	/**
	 * Enum ConZ.EPrisonerUIAttribute
	 */
	enum class EPrisonerUIAttribute : uint8_t
	{
		CA_Strength                = 0,
		CA_Constitution            = 1,
		CA_Dexterity               = 2,
		CA_Intelligence            = 3,
		BI_Age                     = 4,
		BI_Lifetime                = 5,
		BI_Weight                  = 6,
		BI_Health                  = 7,
		BI_Teeth                   = 8,
		BI_BloodType               = 9,
		BI_BloodVolume             = 10,
		BI_Temperature             = 11,
		PD_Stamina                 = 12,
		PD_StaminaChangeRate       = 13,
		PD_Unused1                 = 14,
		PD_Unused2                 = 15,
		PD_ActionDifficulty        = 16,
		PD_WeightLoad              = 17,
		PD_WalkSpeed               = 18,
		PD_JogSpeed                = 19,
		PD_RunSpeed                = 20,
		PD_CaloriesOverloadPenalty = 21,
		PD_WaterOverloadPenalty    = 22,
		PI_HealingSpeed            = 23,
		PI_BloodRecoveryRate       = 24,
		PI_ImmuneSystem            = 25,
		PI_PerformanceScore        = 26,
		PI_StealthFactor           = 27,
		PI_MeleeDamage             = 28,
		NAS_Protein                = 29,
		NAS_Carbs                  = 30,
		NAS_Fat                    = 31,
		NAS_Minerals               = 32,
		NAS_Vitamins               = 33,
		NAS_Water                  = 34,
		NAS_Alcohol                = 35,
		BMD_Bones                  = 36,
		BMD_Blood                  = 37,
		BMD_Intestines             = 38,
		BMD_Skin                   = 39,
		BMD_Organs                 = 40,
		BMD_Fat                    = 41,
		BMD_Muscle                 = 42,
		BS_Unconsciousness         = 43,
		BS_Coma                    = 44,
		BS_Death                   = 45,
		NU_Calories                = 46,
		NU_Water                   = 47,
		MR_Protein                 = 48,
		MR_Carbs                   = 49,
		MR_Fat                     = 50,
		MR_Fiber                   = 51,
		MR_Sugar                   = 52,
		MR_SaturatedFat            = 53,
		MR_Alcohol                 = 54,
		BR_Muscle                  = 55,
		BR_Fat                     = 56,
		VI_VitaminA                = 57,
		VI_VitaminB1               = 58,
		VI_VitaminB2               = 59,
		VI_VitaminB3               = 60,
		VI_VitaminB4               = 61,
		VI_VitaminB5               = 62,
		VI_VitaminB6               = 63,
		VI_VitaminB9               = 64,
		VI_VitaminB12              = 65,
		VI_VitaminC                = 66,
		VI_VitaminD                = 67,
		VI_VitaminE                = 68,
		VI_VitaminK                = 69,
		MI_MineralCa               = 70,
		MI_MineralFe               = 71,
		MI_MineralMg               = 72,
		MI_MineralP                = 73,
		MI_MineralK                = 74,
		MI_MineralZn               = 75,
		MI_MineralCu               = 76,
		MI_MineralMn               = 77,
		MI_MineralSe               = 78,
		MI_MineralNa               = 79,
		DI_Stomach                 = 80,
		DI_Intestine               = 81,
		DI_Colon                   = 82,
		DI_Bladder                 = 83,
		Count                      = 84,
		MAX                        = 85
	};

	/**
	 * Enum ConZ.EPenetrationType
	 */
	enum class EPenetrationType : uint8_t
	{
		None  = 0,
		Entry = 1,
		Exit  = 2,
		Both  = 3,
		MAX   = 4
	};

	/**
	 * Enum ConZ.EWindSpeedCategory
	 */
	enum class EWindSpeedCategory : uint8_t
	{
		Zero   = 0,
		Low    = 1,
		Medium = 2,
		High   = 3,
		MAX    = 4
	};

	/**
	 * Enum ConZ.EBallisticDragModel
	 */
	enum class EBallisticDragModel : uint8_t
	{
		G1  = 0,
		G2  = 1,
		G5  = 2,
		G6  = 3,
		G7  = 4,
		G8  = 5,
		MAX = 6
	};

	/**
	 * Enum ConZ.EQuiverActiveMesh
	 */
	enum class EQuiverActiveMesh : uint8_t
	{
		Static              = 0,
		Skeletal            = 1,
		SkeletalAlternative = 2,
		MAX                 = 3
	};

	/**
	 * Enum ConZ.ERepairType
	 */
	enum class ERepairType : uint8_t
	{
		None         = 0,
		RepairHealth = 1,
		MAX          = 2
	};

	/**
	 * Enum ConZ.EEngineeringEventType
	 */
	enum class EEngineeringEventType : uint8_t
	{
		Build         = 0,
		Repair        = 1,
		FillContainer = 2,
		FillVehicle   = 3,
		DrainVehicle  = 4,
		FillItem      = 5,
		MAX           = 6
	};

	/**
	 * Enum ConZ.ERotationDirection
	 */
	enum class ERotationDirection : uint8_t
	{
		Clockwise        = 0,
		CounterClockwise = 1,
		MAX              = 2
	};

	/**
	 * Enum ConZ.EScopingView
	 */
	enum class EScopingView : uint8_t
	{
		FirstPerson = 0,
		ThirdPerson = 1,
		MAX         = 2
	};

	/**
	 * Enum ConZ.EScopingStance
	 */
	enum class EScopingStance : uint8_t
	{
		Standing  = 0,
		Crouching = 1,
		Prone     = 2,
		MAX       = 3
	};

	/**
	 * Enum ConZ.EBackgroundInteractionPlayType
	 */
	enum class EBackgroundInteractionPlayType : uint8_t
	{
		OneShot = 0,
		Begin   = 1,
		Tick    = 2,
		End     = 3,
		MAX     = 4
	};

	/**
	 * Enum ConZ.EBackgroundInteractionType
	 */
	enum class EBackgroundInteractionType : uint8_t
	{
		None                 = 0,
		Random               = 1,
		Greeting             = 2,
		TradeBegin           = 3,
		BuyTab               = 4,
		SellTab              = 5,
		TradeEnd             = 6,
		Parting              = 7,
		Angry                = 8,
		AngerRecovery        = 9,
		GreetingSpecialOffer = 10,
		Num                  = 11,
		MAX                  = 12
	};

	/**
	 * Enum ConZ.ESentryAttackMode
	 */
	enum class ESentryAttackMode : uint8_t
	{
		None        = 0,
		Melee       = 1,
		MediumRange = 2,
		LongRange   = 3,
		MAX         = 4
	};

	/**
	 * Enum ConZ.ESentryStance
	 */
	enum class ESentryStance : uint8_t
	{
		None    = 0,
		Relaxed = 1,
		Alerted = 2,
		Combat  = 3,
		Offline = 4,
		MAX     = 5
	};

	/**
	 * Enum ConZ.ESentryMovementPace2
	 */
	enum class ESentryMovementPace2 : uint8_t
	{
		Walking = 0,
		Running = 1,
		Count   = 2,
		MAX     = 3
	};

	/**
	 * Enum ConZ.ESentryState2
	 */
	enum class ESentryState2 : uint8_t
	{
		None                         = 0,
		Initial                      = 1,
		Patrolling_Walking           = 2,
		Patrolling_CheckSurroundings = 3,
		InvestigatingLocation        = 4,
		InvestigatingBuilding        = 5,
		GuardLocation                = 6,
		EnemySpotted                 = 7,
		Alerted                      = 8,
		ObserveEnemyMovement         = 9,
		Combat                       = 10,
		Combat_LostSight             = 11,
		DestroyingVehicle            = 12,
		Count                        = 13,
		MAX                          = 14
	};

	/**
	 * Enum ConZ.ESentryThirdPersonSubview
	 */
	enum class ESentryThirdPersonSubview : uint8_t
	{
		Standing       = 0,
		StandingAiming = 1,
		Count          = 2,
		MAX            = 3
	};

	/**
	 * Enum ConZ.ESortType
	 */
	enum class ESortType : uint8_t
	{
		None     = 0,
		Host     = 1,
		Password = 2,
		Mode     = 3,
		Version  = 4,
		Time     = 5,
		Friends  = 6,
		Players  = 7,
		Ping     = 8,
		MAX      = 9
	};

	/**
	 * Enum ConZ.EServerBrowserTab
	 */
	enum class EServerBrowserTab : uint8_t
	{
		Internet   = 0,
		Favorites  = 1,
		LastPlayed = 2,
		MAX        = 3
	};

	/**
	 * Enum ConZ.EServerSettingsCategory
	 */
	enum class EServerSettingsCategory : uint8_t
	{
		None  = 0,
		Count = 1,
		MAX   = 2
	};

	/**
	 * Enum ConZ.ESharkState
	 */
	enum class ESharkState : uint8_t
	{
		None                    = 0,
		Wandering               = 1,
		Pursuing                = 2,
		Circling                = 3,
		Aggressive              = 4,
		GrabAttack              = 5,
		Fleeing                 = 6,
		PreparingForDestruction = 7,
		MAX                     = 8
	};

	/**
	 * Enum ConZ.ESimpleAnimalMode
	 */
	enum class ESimpleAnimalMode : uint8_t
	{
		Wander = 0,
		Flee   = 1,
		MAX    = 2
	};

	/**
	 * Enum ConZ.ESkillReplicationID
	 */
	enum class ESkillReplicationID : uint8_t
	{
		None                = 0,
		EnduranceSkill      = 1,
		ResistanceSkill     = 2,
		RunningSkill        = 3,
		SwimmingSkill       = 4,
		MedicalSkill        = 5,
		AwarenessSkill      = 6,
		StealthSkill        = 7,
		AnimalHandlingSkill = 8,
		CookingSkill        = 9,
		SurvivalSkill       = 10,
		BioChemSkill        = 11,
		BoxingSkill         = 12,
		MeleeWeaponsSkill   = 13,
		RiflesSkill         = 14,
		HandgunSkill        = 15,
		SnipingSkill        = 16,
		CamouflageSkill     = 17,
		TacticsSkill        = 18,
		ThrowingSkill       = 19,
		ArcherySkill        = 20,
		ThieverySkill       = 21,
		DrivingSkill        = 22,
		MotorcycleSkill     = 23,
		EngineeringSkill    = 24,
		DemolitionSkill     = 25,
		AviationSkill       = 26,
		MAX                 = 27
	};

	/**
	 * Enum ConZ.EStartLocationTypeFlags
	 */
	enum class EStartLocationTypeFlags : uint8_t
	{
		None             = 0,
		Player           = 1,
		PlayerTournament = 2,
		CargoDrop        = 3,
		MAX              = 4
	};

	/**
	 * Enum ConZ.ESurvivalStatsSubcategory
	 */
	enum class ESurvivalStatsSubcategory : uint8_t
	{
		General    = 0,
		Food       = 1,
		Hunting    = 2,
		Fishing    = 3,
		Travel     = 4,
		Metabolism = 5,
		Crafting   = 6,
		Combat     = 7,
		Events     = 8,
		MAX        = 9
	};

	/**
	 * Enum ConZ.ESurvivalStatsCategory
	 */
	enum class ESurvivalStatsCategory : uint8_t
	{
		Survival = 0,
		Weapons  = 1,
		Combat   = 2,
		MAX      = 3
	};

	/**
	 * Enum ConZ.EConZUnit
	 */
	enum class EConZUnit : uint8_t
	{
		None        = 0,
		Second      = 1,
		Minute      = 2,
		Hour        = 3,
		Day         = 4,
		Year        = 5,
		Gram        = 6,
		Milligram   = 7,
		Microgram   = 8,
		Kilogram    = 9,
		Liter       = 10,
		Milliliter  = 11,
		Calorie     = 12,
		Kilocalorie = 13,
		Meter       = 14,
		Centimeter  = 15,
		Kilometer   = 16,
		Percentage  = 17,
		Health      = 18,
		Stamina     = 19,
		Celsius     = 20,
		MAX         = 21
	};

	/**
	 * Enum ConZ.EItemThrowingBehavior
	 */
	enum class EItemThrowingBehavior : uint8_t
	{
		None     = 0,
		Default  = 1,
		Piercing = 2,
		Fragile  = 3,
		Sticky   = 4,
		MAX      = 5
	};

	/**
	 * Enum ConZ.EBleedingSeverity
	 */
	enum class EBleedingSeverity : uint8_t
	{
		NoBleeding = 0,
		VeryLight  = 1,
		Light      = 2,
		Moderate   = 3,
		Heavy      = 4,
		Severe     = 5,
		MAX        = 6
	};

	/**
	 * Enum ConZ.ETradeableSellFlags
	 */
	enum class ETradeableSellFlags : uint8_t
	{
		None              = 0,
		IgnoreLackOfFunds = 1,
		MAX               = 2
	};

	/**
	 * Enum ConZ.ETradeErrorMessage
	 */
	enum class ETradeErrorMessage : uint8_t
	{
		None                              = 0,
		TradeAttemptedOnClient            = 1,
		TraderOrTradeableInvalid          = 2,
		NotEnoughFunds                    = 3,
		TradeableOutOfStock               = 4,
		TraderInvalidCategory             = 5,
		TradeableCannotBePurchased        = 6,
		TradeableInvalidPrice             = 7,
		NoValidTradeCandidates            = 8,
		TradingOnCooldown                 = 9,
		WorldSpawnLocationBlocked         = 10,
		PlayerBasedPriceMultiplierChanged = 11,
		Unknown                           = 12,
		MAX                               = 13
	};

	/**
	 * Enum ConZ.ETradeOutpostProsperityLevel
	 */
	enum class ETradeOutpostProsperityLevel : uint8_t
	{
		None       = 0,
		VeryPoor   = 1,
		Poor       = 2,
		Prosperous = 3,
		Wealthy    = 4,
		Rich       = 5,
		Count      = 6,
		MAX        = 7
	};

	/**
	 * Enum ConZ.ETradeableSpawnType
	 */
	enum class ETradeableSpawnType : uint8_t
	{
		None       = 0,
		DepotSpawn = 1,
		WorldSpawn = 2,
		MAX        = 3
	};

	/**
	 * Enum ConZ.ETraderType
	 */
	enum class ETraderType : uint8_t
	{
		None             = 0,
		Armorer          = 1,
		GeneralGoods     = 2,
		Mechanic         = 3,
		Doctor           = 4,
		Harbourmaster    = 5,
		Bartender        = 6,
		TradesEverything = 7,
		Count            = 8,
		MAX              = 9
	};

	/**
	 * Enum ConZ.ETradeCategory
	 */
	enum class ETradeCategory : uint8_t
	{
		None                    = 0,
		Armour                  = 1,
		Helmets                 = 2,
		Jackets                 = 3,
		Pants                   = 4,
		Headwear                = 5,
		Tops                    = 6,
		Underwear               = 7,
		Neckwaist               = 8,
		Hands                   = 9,
		Face                    = 10,
		Feet                    = 11,
		Backpacks               = 12,
		RangedWeapon            = 13,
		RangedWeaponAccessories = 14,
		Ammo                    = 15,
		MeleeWeapon             = 16,
		Explosives              = 17,
		Crafting                = 18,
		Fishing                 = 19,
		Alcohol                 = 20,
		Food                    = 21,
		Drink                   = 22,
		FirstAid                = 23,
		Vehicles                = 24,
		Misc                    = 25,
		WaterVehicles           = 26,
		Count                   = 27,
		MAX                     = 28
	};

	/**
	 * Enum ConZ.ETrapType
	 */
	enum class ETrapType : uint8_t
	{
		Default       = 0,
		SuicideZombie = 1,
		MAX           = 2
	};

	/**
	 * Enum ConZ.ETrapTriggerType
	 */
	enum class ETrapTriggerType : uint8_t
	{
		None            = 0,
		MotionTrigger   = 1,
		LaserTrigger    = 2,
		TripwireTrigger = 3,
		TimedTrigger    = 4,
		MAX             = 5
	};

	/**
	 * Enum ConZ.EWidgetType
	 */
	enum class EWidgetType : uint8_t
	{
		InteractionWidgetClass             = 0,
		InteractionGroupWidgetClass        = 1,
		InteractionContainerWidgetClass    = 2,
		ItemWidgetClass                    = 3,
		InventoryWidgetClass               = 4,
		InventorySlotWidgetClass           = 5,
		WarningWidgetClass                 = 6,
		HudWidgetClass                     = 7,
		LoadingWidgetClass                 = 8,
		LoadingIconWidgetClass             = 9,
		SpawnScreenWidgetClass             = 10,
		WaypointScreenWidgetClass          = 11,
		HoverPanelWidgetClass              = 12,
		ActionProgressWidgetClass          = 13,
		ItemSelectionWidgetClass           = 14,
		ExamineWidgetClass                 = 15,
		HandsInventoryWidgetClass          = 16,
		GenericItemInventoryWidgetClass    = 17,
		InventoryContainersWidgetClass     = 18,
		CombinedInventoryWidgetClass       = 19,
		TeamInvitationWidgetClass          = 20,
		CraftingInfoWidgetClass            = 21,
		CraftingComponentWidgetClass       = 22,
		CraftingRecipeWidgetClass          = 23,
		EmptySlotWidgetClass               = 24,
		TeamInfoWidgetClass                = 25,
		TeammateNameWidgetClass            = 26,
		PreviousNextSwitchWidgetClass      = 27,
		VicinityItemContainerWidgetClass   = 28,
		QuickAccessItemWidget              = 29,
		GameEventPanelWidgetClass          = 30,
		GameEventCardWidgetClass           = 31,
		GameEventScoreboardWidgetClass     = 32,
		GameEventMiniScoreboardWidgetClass = 33,
		TournamentScoreboardWidgetClass    = 34,
		CircularMenuWidgetClass            = 35,
		CircularMenuSegmentWidgetClass     = 36,
		LockpickingWidgetClass             = 37,
		DoorUpgradeWidgetClass             = 38,
		UpgradeWidgetClass                 = 39,
		ObjectivesWidget                   = 40,
		MissionPrompt                      = 41,
		MissionResult                      = 42,
		MissionItem                        = 43,
		ObjectiveItem                      = 44,
		MissionReward                      = 45,
		InventoryContainerWidget2Test      = 46,
		InventoryItemWidget2Test           = 47,
		ItemInventoryWidget2               = 48,
		ItemInventoryWidget2Holsters       = 49,
		InventoryPanelSideLayerWidget      = 50,
		ItemWidget2                        = 51,
		ItemWidget2VicinityContainer       = 52,
		ItemTooltipWidget                  = 53,
		TooltipPanelFoodOverview           = 54,
		TooltipPanelFoodNutritionsSingle   = 55,
		TooltipPanelFoodNutritionsFull     = 56,
		TooltipPanelFoodGraphs             = 57,
		TooltipPanelWeaponAbsolute         = 58,
		TooltipPanelWeaponRelative         = 59,
		StatisticsListRow                  = 60,
		RewardItemWidget                   = 61,
		ThrowingQuickAccessMenu            = 62,
		ItemSplitWidgetClass               = 63,
		MAX                                = 64
	};

	/**
	 * Enum ConZ.EUnarmedCombatInput
	 */
	enum class EUnarmedCombatInput : uint8_t
	{
		WalkForward    = 0,
		WalkBackward   = 1,
		WalkRight      = 2,
		WalkLeft       = 3,
		Punch          = 4,
		Kick           = 5,
		BlockPressed   = 6,
		BlockReleased  = 7,
		PreviousTarget = 8,
		NextTarget     = 9,
		ReleaseCursor  = 10,
		MAX            = 11
	};

	/**
	 * Enum ConZ.EUserProfileType
	 */
	enum class EUserProfileType : uint8_t
	{
		Singleplayer         = 0,
		MultiplayerAuthority = 1,
		MultiplayerCache     = 2,
		MAX                  = 3
	};

	/**
	 * Enum ConZ.EChangeSource
	 */
	enum class EChangeSource : uint8_t
	{
		Unknown = 0,
		Code    = 1,
		Player  = 2,
		MAX     = 3
	};

	/**
	 * Enum ConZ.EVehicle2WType
	 */
	enum class EVehicle2WType : uint8_t
	{
		Motorcycle = 0,
		Bicycle    = 1,
		MAX        = 2
	};

	/**
	 * Enum ConZ.EAerodynamicSurfaceType
	 */
	enum class EAerodynamicSurfaceType : uint8_t
	{
		None          = 0,
		LeftAilerons  = 1,
		RightAilerons = 2,
		Elevators     = 3,
		Flaps         = 4,
		Rudder        = 5,
		MAX           = 6
	};

	/**
	 * Enum ConZ.EUnmountReason
	 */
	enum class EUnmountReason : uint8_t
	{
		None    = 0,
		Regular = 1,
		EndPlay = 2,
		MAX     = 3
	};

	/**
	 * Enum ConZ.EVehicleEngineState
	 */
	enum class EVehicleEngineState : uint8_t
	{
		Unavailable                 = 0,
		TurnedOff                   = 1,
		StartingViaIgnition         = 2,
		StartingViaMotion           = 3,
		ReadyDelay                  = 4,
		Ready                       = 5,
		FailedToStartDelay          = 6,
		FailedToStart               = 7,
		FailedToStartNoFuelDelay    = 8,
		FailedToStartNoFuel         = 9,
		FailedToStartNoBatteryDelay = 10,
		FailedToStartNoBattery      = 11,
		StalledDelay                = 12,
		Stalled                     = 13,
		Broken                      = 14,
		MAX                         = 15
	};

	/**
	 * Enum ConZ.EVehicleSeatType
	 */
	enum class EVehicleSeatType : uint8_t
	{
		Driver    = 0,
		Passenger = 1,
		MAX       = 2
	};

	/**
	 * Enum ConZ.EWaypointTraverseType
	 */
	enum class EWaypointTraverseType : uint8_t
	{
		Clockwise        = 0,
		CounterClockwise = 1,
		Random           = 2,
		MAX              = 3
	};

	/**
	 * Enum ConZ.EAnimalWaypointType
	 */
	enum class EAnimalWaypointType : uint8_t
	{
		PassThrough = 0,
		Wait        = 1,
		Rest        = 2,
		Eat         = 3,
		All         = 4,
		MAX         = 5
	};

	/**
	 * Enum ConZ.EWeaponAnimationCurve
	 */
	enum class EWeaponAnimationCurve : uint8_t
	{
		DrawAmount     = 0,
		StrengthAmount = 1,
		HideBone       = 2,
		Count          = 3,
		MAX            = 4
	};

	/**
	 * Enum ConZ.EMagazineAmmoCountType
	 */
	enum class EMagazineAmmoCountType : uint8_t
	{
		Countable = 0,
		Even      = 1,
		Odd       = 2,
		MAX       = 3
	};

	/**
	 * Enum ConZ.EBowAimingTestType
	 */
	enum class EBowAimingTestType : uint8_t
	{
		DotOnly    = 0,
		ViewOnly   = 1,
		DotAndView = 2,
		MAX        = 3
	};

	/**
	 * Enum ConZ.EBowDrawPercentage
	 */
	enum class EBowDrawPercentage : uint8_t
	{
		Draw50percent  = 0,
		Draw75percent  = 1,
		Draw100percent = 2,
		Count          = 3,
		MAX            = 4
	};

	/**
	 * Enum ConZ.EWeaponBowState
	 */
	enum class EWeaponBowState : uint8_t
	{
		None               = 0,
		InsertArrow        = 1,
		RemoveArrow        = 2,
		Draw               = 3,
		CancelFiring       = 4,
		FireDummy          = 5,
		Fire               = 6,
		FireAndInsertArrow = 7,
		Active             = 8,
		MAX                = 9
	};

	/**
	 * Enum ConZ.EWeaponCrossbowDrawCategory
	 */
	enum class EWeaponCrossbowDrawCategory : uint8_t
	{
		UnableToDraw = 0,
		Slow         = 1,
		Normal       = 2,
		Count        = 3,
		MAX          = 4
	};

	/**
	 * Enum ConZ.EWeaponDownTheSightsMode
	 */
	enum class EWeaponDownTheSightsMode : uint8_t
	{
		IronSights = 0,
		Scope      = 1,
		MAX        = 2
	};

	/**
	 * Enum ConZ.EWeaponEjectFromChamberType
	 */
	enum class EWeaponEjectFromChamberType : uint8_t
	{
		Casing    = 0,
		LiveRound = 1,
		MAX       = 2
	};

	/**
	 * Enum ConZ.EReloadWeaponSequence
	 */
	enum class EReloadWeaponSequence : uint8_t
	{
		None                           = 0,
		InsertMagazine                 = 1,
		RemoveMagazineInstertMagazine  = 2,
		InstertCartridge               = 3,
		RemoveMagazineInstertCartridge = 4,
		MAX                            = 5
	};

	/**
	 * Enum ConZ.EWeaponCombatModeType
	 */
	enum class EWeaponCombatModeType : uint8_t
	{
		Relaxed = 0,
		Aiming  = 1,
		Count   = 2,
		MAX     = 3
	};

	/**
	 * Enum ConZ.EWeaponAttachmentActionType
	 */
	enum class EWeaponAttachmentActionType : uint8_t
	{
		Add    = 0,
		Remove = 1,
		Swap   = 2,
		Count  = 3,
		MAX    = 4
	};

	/**
	 * Enum ConZ.EWeatherControllerDebugOverrideType
	 */
	enum class EWeatherControllerDebugOverrideType : uint8_t
	{
		WindAzimuth           = 0,
		WindIntensity         = 1,
		WindAzimuthForWaves   = 2,
		WindIntensityForWaves = 3,
		Count                 = 4,
		MAX                   = 5
	};

	/**
	 * Enum ConZ.ECraftingMarkerMode
	 */
	enum class ECraftingMarkerMode : uint8_t
	{
		Marker   = 0,
		FullInfo = 1,
		MAX      = 2
	};

	/**
	 * Enum ConZ.EZombieRagdollAutoRecoveryType
	 */
	enum class EZombieRagdollAutoRecoveryType : uint8_t
	{
		None                    = 0,
		WhenAtRest              = 1,
		AfterTimeSpan           = 2,
		WhenAtRestAfterTimeSpan = 3,
		MAX                     = 4
	};

	/**
	 * Enum ConZ.EZombieTurnMontage
	 */
	enum class EZombieTurnMontage : uint8_t
	{
		RelaxedIdle              = 0,
		AlertedIdle              = 1,
		CombatIdle               = 2,
		RelaxedIdleToAlertedIdle = 3,
		Count                    = 4,
		MAX                      = 5
	};

	/**
	 * Enum ConZ.EZombieStance
	 */
	enum class EZombieStance : uint8_t
	{
		Relaxed = 0,
		Lying   = 1,
		Alerted = 2,
		Combat  = 3,
		MAX     = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ConZ.AdminCommandArgumentDescription
	 * Size -> 0x0020
	 */
	struct FAdminCommandArgumentDescription
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowCompletionValuesInHelpText;                          // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDD1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Completion;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AerodynamicSurfaceControlData
	 * Size -> 0x0018
	 */
	struct FAerodynamicSurfaceControlData
	{
	public:
		TArray<unsigned char>                                      Indices;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2N3J[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WeaponMountData
	 * Size -> 0x0018
	 */
	struct FWeaponMountData
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AWeapon>                              Weapon;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.RepairableParams
	 * Size -> 0x0038
	 */
	struct FRepairableParams
	{
	public:
		struct FGameplayTagContainer                               RepairableTypes;                                         // 0x0000(0x0020) Edit, NativeAccessSpecifierPublic
		float                                                      HealthRepairedPerUse;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExperienceAwardedPerHealthRepaired;                      // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRepairDuration;                                       // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRepairDuration;                                       // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldRepairZeroHealth;                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESkillLevel                                                MinSkillLevelRequired;                                   // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJ8D[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VehicleDamagedEffectsParameters
	 * Size -> 0x0060
	 */
	struct FVehicleDamagedEffectsParameters
	{
	public:
		struct FFloatRange                                         HealthRatioRange;                                        // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StartAudioEvent;                                         // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StopAudioEvent;                                          // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeactivationDelay;                                       // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YX8B[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VehicleImpactEffects
	 * Size -> 0x0038
	 */
	struct FVehicleImpactEffects
	{
	public:
		float                                                      HitImpulseThreshold;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CZA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ParticlesScale;                                          // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWKB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CameraShake;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraShakeScale;                                        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJNF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VehicleSpawnParameters
	 * Size -> 0x0038
	 */
	struct FVehicleSpawnParameters
	{
	public:
		struct FGameplayTag                                        SpawnGroup;                                              // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinSpawnLocationOffset;                                  // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxSpawnLocationOffset;                                  // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AdminSpawnLocationOffset;                                // 0x0020(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthAmountOverride;                                    // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FuelAmountOverride;                                      // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BatteryAmountOverride;                                   // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleEngineStallingParameters
	 * Size -> 0x0058
	 */
	struct FVehicleEngineStallingParameters
	{
	public:
		float                                                      MinDuration;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDuration;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopEngineChance;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldStallingStopOnThrottleOrBreakRelease;              // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldEngineStopOnThrottleOrBreakRelease;                // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8H0D[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         ThrottleCurve;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleCurveFrequencyMultiplier;                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TO7L[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         BrakeCurve;                                              // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakeCurveFrequencyMultiplier;                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceMagnitudeScale;                                     // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ForceMagnitudeScaleCurve;                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceMagnitudeScaleCurveFrequencyMultiplier;             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceDirectionRandomizationAngle;                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              AudioEventTriggerTimeRatios;                             // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleTireEffectProperties
	 * Size -> 0x0014
	 */
	struct FVehicleTireEffectProperties
	{
	public:
		struct FVector                                             TireLocalOffset;                                         // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OEX2[0x8];                                   // 0x000C(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VehicleExhaustParticles
	 * Size -> 0x0018
	 */
	struct FVehicleExhaustParticles
	{
	public:
		class FName                                                AttachSocketName;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1GL[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VehicleExhaustEffects
	 * Size -> 0x0048
	 */
	struct FVehicleExhaustEffects
	{
	public:
		TArray<struct FVehicleExhaustParticles>                    Particles;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ThrottleImpulseMinValue;                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleImpulseMaxValue;                                 // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleImpulseSpeedTermMaxValue;                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleImpulseAttackDuration;                           // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleImpulseSustainDuration;                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleImpulseReleaseDuration;                          // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticlesDestructionDelay;                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_49AO[0x1C];                                  // 0x002C(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VehicleMaterialParameterDescription
	 * Size -> 0x0010
	 */
	struct FVehicleMaterialParameterDescription
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MountSlotEntryPoint
	 * Size -> 0x00A0
	 */
	struct FMountSlotEntryPoint
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QLH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EntryTransform;                                          // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TransformSnapRadius;                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DoorIndex;                                               // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        VehicleOpenDoorMontage;                                  // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        VehicleCloseDoorMontage;                                 // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        VehicleMountSlotMontage;                                 // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        VehicleUnmountSlotMontage;                               // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PrisonerOpenDoorMontage;                                 // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PrisonerCloseDoorMontage;                                // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PrisonerMountSlotMontage;                                // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PrisonerUnmountSlotMontage;                              // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PrisonerPickUpVehicle2WMontage;                          // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PrisonerAirplaneJumpExitMontage;                         // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PickUpSocketName;                                        // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ReachableMountSlot
	 * Size -> 0x0018
	 */
	struct FReachableMountSlot
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2N6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        TransitionMontage;                                       // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransitionTimeWithoutMontage;                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWN4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ItemLocation
	 * Size -> 0x000F
	 */
	struct FItemLocation
	{
	public:
		bool                                                       Coastal;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Continantal;                                             // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Mountain;                                                // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Urban;                                                   // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Rural;                                                   // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Industrial;                                              // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Police;                                                  // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MilitaryBasic;                                           // 0x0007(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MilitaryMedium;                                          // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MilitaryAdvanced;                                        // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MilitaryWW2;                                             // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Sport;                                                   // 0x000B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Market;                                                  // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GasStation;                                              // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Airfield;                                                // 0x000E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ItemMotionNoise
	 * Size -> 0x0008
	 */
	struct FItemMotionNoise
	{
	public:
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CraftingPart
	 * Size -> 0x0020
	 */
	struct FCraftingPart
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7AO1[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.AttachmentSocketDataItem
	 * Size -> 0x0018
	 */
	struct FAttachmentSocketDataItem
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MountType;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              MountedItem;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AttachmentSocket
	 * Size -> 0x0010
	 */
	struct FAttachmentSocket
	{
	public:
		TArray<struct FAttachmentSocketDataItem>                   Items;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AttachmentSocketOffset
	 * Size -> 0x0020
	 */
	struct FAttachmentSocketOffset
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ItemStackData
	 * Size -> 0x0010
	 */
	struct FItemStackData
	{
	public:
		TArray<class UItemStateBase*>                              Stacks;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DbIntegerId
	 * Size -> 0x0008
	 */
	struct FDbIntegerId
	{
	public:
		int64_t                                                    Value;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VisibilityReplication
	 * Size -> 0x0008
	 */
	struct FVisibilityReplication
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AYLI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RepHelper;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.InventoryStackData
	 * Size -> 0x0080
	 */
	struct FInventoryStackData
	{
	public:
		class UClass*                                              _stackClass;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _approximateCount;                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _approximateMaxCount;                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _weight;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LJXR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      _data;                                                   // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KQ3T[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.HitEffects
	 * Size -> 0x0038
	 */
	struct FHitEffects
	{
	public:
		float                                                      SpeedThreshold;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2S9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ParticlesScale;                                          // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YE03[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CameraShake;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraShakeScale;                                        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DNO[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.AnimalSpawnInfo
	 * Size -> 0x0008
	 */
	struct FAnimalSpawnInfo
	{
	public:
		int32_t                                                    MaxSpawnInstances;                                       // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnProbability;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AnimalManagementData
	 * Size -> 0x0030
	 */
	struct FAnimalManagementData
	{
	public:
		class UClass*                                              AnimalClass;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AAnimal2*>                                    AliveAnimals;                                            // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class ACorpse*>                                     DeadAnimals;                                             // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    VirtualAnimalAmount;                                     // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BHRB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CarcassManagementData
	 * Size -> 0x0018
	 */
	struct FCarcassManagementData
	{
	public:
		class UClass*                                              CarcassClass;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AStaticMeshActor*>                            SpawnedCarcasses;                                        // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MeleeHitDetectionMarker
	 * Size -> 0x0080
	 */
	struct FMeleeHitDetectionMarker
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9242[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          RootMotion;                                              // 0x0040(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      damageMultiplier;                                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelectionWeight;                                         // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FX8O[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.RangedWeaponSkillParametersPerSkillLevel
	 * Size -> 0x0004
	 */
	struct FRangedWeaponSkillParametersPerSkillLevel
	{
	public:
		float                                                      CrosshairHidingDuration;                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DrivingSkillExperienceAwards
	 * Size -> 0x0008
	 */
	struct FDrivingSkillExperienceAwards
	{
	public:
		float                                                      StartEngine;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsPerDrivenDistanceInKm;                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DrivingSkillEngineStallingParameters
	 * Size -> 0x0040
	 */
	struct FDrivingSkillEngineStallingParameters
	{
	public:
		float                                                      Chance;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDuration;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDuration;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopEngineChance;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ThrottleCurve;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleCurveFrequencyMultiplier;                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UC4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         BrakeCurve;                                              // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakeCurveFrequencyMultiplier;                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceMagnitudeScale;                                     // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ForceMagnitudeScaleCurve;                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceMagnitudeScaleCurveFrequencyMultiplier;             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceDirectionRandomizationAngle;                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AviationSkillParametersPerSkillLevel
	 * Size -> 0x0100
	 */
	struct FAviationSkillParametersPerSkillLevel
	{
	public:
		bool                                                       ShouldHaveMouseInput;                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDTN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EngineStartDuration;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineStartFailureChance;                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineReadyDelay;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineFailedToStartDelay;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineFailedToStartNoFuelDelay;                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineFailedToStartNoBatteryDelay;                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineStalledDelay;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleLerpMultiplier;                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakeLerpMultiplier;                                     // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RollLerpMultiplier;                                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawLerpMultiplier;                                       // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchLerpMultiplier;                                     // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlResetLerpMultiplier;                              // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindInfluenceMultiplier;                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD3W[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDrivingSkillEngineStallingParameters               EngineStallingByAccelerationParameters;                  // 0x0040(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDrivingSkillEngineStallingParameters               EngineStallingByUpShiftParameters;                       // 0x0080(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDrivingSkillEngineStallingParameters               EngineStallingWhenStartingViaMotion;                     // 0x00C0(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ElementSnapMarker
	 * Size -> 0x0060
	 */
	struct FElementSnapMarker
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Slack;                                                   // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ElementTypesMustMatch;                                   // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncreaseLevelOnSnap;                                     // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevelToSnap;                                          // 0x003E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPWW[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RequiredElementSize;                                     // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RequiredElementSizeTolerance;                            // 0x004C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DestroySnappedElementWhenDestroyed;                      // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UURN[0x1];                                   // 0x0059(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   OutSocketTypes;                                          // 0x005A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   InSocketTypes;                                           // 0x005C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N9P6[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.BaseBuildingSizeVariation
	 * Size -> 0x0018
	 */
	struct FBaseBuildingSizeVariation
	{
	public:
		class UClass*                                              Component;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3TJ[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.LadderMarker
	 * Size -> 0x00A0
	 */
	struct FLadderMarker
	{
	public:
		struct FTransform                                          FirstStep;                                               // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LastStep;                                                // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOXP[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Edge;                                                    // 0x0040(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CapsuleBias;                                             // 0x0070(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepHeight;                                              // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepWidth;                                               // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitDetectionExtraAboveLastStep;                          // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitDetectionExtraBelowFirstStep;                         // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitDetectionExtraOnTheSides;                             // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasEdge;                                                 // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNarrow;                                                // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           PhysicalSurfaceForSounds;                                // 0x0092(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KEC[0xD];                                   // 0x0093(0x000D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.BaseElementDamageZone
	 * Size -> 0x0028
	 */
	struct FBaseElementDamageZone
	{
	public:
		struct FVector                                             BoundsMin;                                               // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoundsMax;                                               // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDamagePerSecond;                                      // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDamagePerSecond;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpeedForDamage;                                       // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeedForDamage;                                       // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BaseElementDestructionZone
	 * Size -> 0x002C
	 */
	struct FBaseElementDestructionZone
	{
	public:
		struct FBox                                                Bounds;                                                  // 0x0000(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DamageToItems;                                           // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FallDamagePerMeter;                                      // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFallDamage;                                           // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MustElementBeAboveZone;                                  // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreElementsThatCantBePlacedOnOtherElements;           // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBP6[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PeriodicallyReplenishedResourceDescription
	 * Size -> 0x0010
	 */
	struct FPeriodicallyReplenishedResourceDescription
	{
	public:
		float                                                      InitialAmount;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAmount;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReplenishInterval;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReplenishAmount;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ProximityReplenishedResourceDescription
	 * Size -> 0x0010
	 */
	struct FProximityReplenishedResourceDescription
	{
	public:
		float                                                      ReplenishChance;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ReplenishAmount;                                         // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReplenishTimeout;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ReplenishableResourceDescription
	 * Size -> 0x0098
	 */
	struct FReplenishableResourceDescription
	{
	public:
		unsigned char                                              UnknownData_4SFW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Type;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               InSocketTypes;                                           // 0x0010(0x0020) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               OutSocketTypes;                                          // 0x0030(0x0020) Edit, NativeAccessSpecifierPublic
		bool                                                       IsReplenishedPeriodically;                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADJI[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPeriodicallyReplenishedResourceDescription         PeriodicReplenishment;                                   // 0x0054(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FProximityReplenishedResourceDescription            ProximityReplenishment;                                  // 0x0064(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      InitialAmount;                                           // 0x0074(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAmount;                                               // 0x0078(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReplenishInterval;                                       // 0x007C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReplenishAmount;                                         // 0x0080(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JBJ[0x14];                                  // 0x0084(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CraftingSlot
	 * Size -> 0x0018
	 */
	struct FCraftingSlot
	{
	public:
		class FString                                              SlotName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SlotType;                                                // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CraftingSlotAmountNeededPerSkillLevel
	 * Size -> 0x0020
	 */
	struct FCraftingSlotAmountNeededPerSkillLevel
	{
	public:
		class UClass*                                              Skill;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NoSkillAmount;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BasicAmount;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MediumAmount;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AdvancedAmount;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AboveAdvancedAmount;                                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRVV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CraftingIngredientTypeModifier
	 * Size -> 0x0010
	 */
	struct FCraftingIngredientTypeModifier
	{
	public:
		class UClass*                                              IngredientType;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmountMultiplier;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YECM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CraftingSlotRequirement
	 * Size -> 0x0068
	 */
	struct FCraftingSlotRequirement
	{
	public:
		class FString                                              SlotName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LimitIngredientTypes;                                    // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CE6C[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      IngredientTypes;                                         // 0x0018(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		ECraftingIngredientConsumptionHint                         ConsumptionHint;                                         // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQOZ[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AmountNeeded;                                            // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideAmountNeededSkill;                               // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGL0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCraftingSlotAmountNeededPerSkillLevel              AmountNeededSkillLevelOverride;                          // 0x0038(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FCraftingIngredientTypeModifier>             IngredientTypeModifiers;                                 // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CraftingRecipeSkillReward
	 * Size -> 0x0040
	 */
	struct FCraftingRecipeSkillReward
	{
	public:
		unsigned char                                              Skill[0x28];                                             // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    NoSkillReward;                                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BasicReward;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MediumReward;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AdvancedReward;                                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AboveAdvancedReward;                                     // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_513N[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CraftingProductDescription
	 * Size -> 0x00C8
	 */
	struct FCraftingProductDescription
	{
	public:
		unsigned char                                              ProductClass[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class FString                                              ProductClassName;                                        // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ProductCaption;                                          // 0x0038(0x0018) Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic
		class UTexture2D*                                          ProductIcon;                                             // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCraftingSlotRequirement>                    SlotRequirements;                                        // 0x0058(0x0010) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UCraftingCondition*>                          Conditions;                                              // 0x0068(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UCraftingAction*>                             Actions;                                                 // 0x0078(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FCraftingRecipeSkillReward                          SkillReward;                                             // 0x0088(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DialogueInfo
	 * Size -> 0x0028
	 */
	struct FDialogueInfo
	{
	public:
		class UAkAudioEvent*                                       VoiceOver;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Text;                                                    // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDialogType                                                DialogType;                                              // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25L5[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WireDescription
	 * Size -> 0x0050
	 */
	struct FWireDescription
	{
	public:
		unsigned char                                              UnknownData_4R4M[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SplineDescription
	 * Size -> 0x0030
	 */
	struct FSplineDescription
	{
	public:
		class USplineComponent*                                    SplineComponent;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USplineMeshComponent*>                        SplineMeshComponents;                                    // 0x0008(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SplineStartConnector;                                    // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SplineEndConnector;                                      // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_30XE[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MeleeSkillExperienceAwards
	 * Size -> 0x0010
	 */
	struct FMeleeSkillExperienceAwards
	{
	public:
		float                                                      Hit;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Kill;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ComboHitMultiplier;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkillLevelBonus;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ObjectConditionContainer
	 * Size -> 0x0010
	 */
	struct FObjectConditionContainer
	{
	public:
		TArray<class UClass*>                                      _objectConditions;                                       // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ConZ.BruisePatch
	 * Size -> 0x0038
	 */
	struct FBruisePatch
	{
	public:
		EBruiseLayer                                               Layer;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7V0U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EBruiseZone>                                        AllowedZones;                                            // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Order;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASV5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Texture;                                                 // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Offset;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Mute;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67H4[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WindowMarker
	 * Size -> 0x0050
	 */
	struct FWindowMarker
	{
	public:
		bool                                                       IsVaultable;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFortifiable;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3QQ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWindowFortificationsType*                           WindowFortificationsType;                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            AdditionalMarkerIndicesToModify;                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       DidIFailToCorrectlyPlaceWindowMarkers;                   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWDT[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vertex1;                                                 // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vertex2;                                                 // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FortificationOffset;                                     // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionBoxVertBias;                                    // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionBoxHorzBias;                                    // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BU08[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WindowMarkerModifier
	 * Size -> 0x0008
	 */
	struct FWindowMarkerModifier
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsVaultable;                                             // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFortifiable;                                           // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JYE[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.BuildingsArray
	 * Size -> 0x0010
	 */
	struct FBuildingsArray
	{
	public:
		TArray<class ABuilding*>                                   _buildings;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ConZ.FortificationData
	 * Size -> 0x0020
	 */
	struct FFortificationData
	{
	public:
		int32_t                                                    MarkerIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNZO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FortificationClass;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDbIntegerId                                        OwnerUserProfileId;                                      // 0x0010(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      health;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQWD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.BuildingData
	 * Size -> 0x0028
	 */
	struct FBuildingData
	{
	public:
		bool                                                       IsCleared;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KNR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWindowMarkerModifier>                       WindowMarkerModifiers;                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFortificationData>                          Fortifications;                                          // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BuildingsReplicationHelper
	 * Size -> 0x0070
	 */
	struct FBuildingsReplicationHelper
	{
	public:
		TMap<class FString, struct FBuildingData>                  BuildingsData;                                           // 0x0000(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ST17[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.BurialInformation
	 * Size -> 0x0018
	 */
	struct FBurialInformation
	{
	public:
		struct FDbIntegerId                                        BurierUserId;                                            // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldBury;                                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIOQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BurialLocation;                                          // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BuryMaterialData
	 * Size -> 0x0028
	 */
	struct FBuryMaterialData
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     BreachActionParticles;                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       BreachActionSound;                                       // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DumpActionParticles;                                     // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       DumpActionSound;                                         // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CamouflageSkillExperienceAwards
	 * Size -> 0x0004
	 */
	struct FCamouflageSkillExperienceAwards
	{
	public:
		float                                                      BonusExperience;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CamouflageSkillParametersPerSkillLevel
	 * Size -> 0x0010
	 */
	struct FCamouflageSkillParametersPerSkillLevel
	{
	public:
		float                                                      Modifier;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bonus;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoliageAIPerceptionOuterRadius;                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoliageAIPerceptionInnerRadius;                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CargoDropSpawnerPreset
	 * Size -> 0x0010
	 */
	struct FCargoDropSpawnerPreset
	{
	public:
		class UClass*                                              Preset;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceMultiplier;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BU2M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SpawnCharacterAroundInfo
	 * Size -> 0x0050
	 */
	struct FSpawnCharacterAroundInfo
	{
	public:
		TArray<class UClass*>                                      AvailablePawns;                                          // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinSpawnRadius;                                          // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpawnRadius;                                          // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumOfCharactersToSpawn;                                  // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreLimit;                                             // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P092[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CarouselTextStyle
	 * Size -> 0x0080
	 */
	struct FCarouselTextStyle
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCN7[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0018(0x0058) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0070(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CarouselStyle
	 * Size -> 0x0570
	 */
	struct FCarouselStyle
	{
	public:
		struct FButtonStyle                                        LeftArrowIcon;                                           // 0x0000(0x0278) Edit, NativeAccessSpecifierPublic
		struct FButtonStyle                                        RightArrowIcon;                                          // 0x0278(0x0278) Edit, NativeAccessSpecifierPublic
		struct FCarouselTextStyle                                  ValueText;                                               // 0x04F0(0x0080) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CarouselWithLabelStyle
	 * Size -> 0x0108
	 */
	struct FCarouselWithLabelStyle
	{
	public:
		struct FSlateBrush                                         FocusBackgroundImage;                                    // 0x0000(0x0088) Edit, NativeAccessSpecifierPublic
		struct FCarouselTextStyle                                  LabelText;                                               // 0x0088(0x0080) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterAndItemAnimation
	 * Size -> 0x0010
	 */
	struct FCharacterAndItemAnimation
	{
	public:
		class UAnimMontage*                                        CharacterMontage;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ItemMontage;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BodyWeaponAnimation
	 * Size -> 0x0010
	 */
	struct FBodyWeaponAnimation
	{
	public:
		class UAnimMontage*                                        Body;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Weapon;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponAttachmentAnimations
	 * Size -> 0x0020
	 */
	struct FWeaponAttachmentAnimations
	{
	public:
		struct FBodyWeaponAnimation                                Add;                                                     // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBodyWeaponAnimation                                Remove;                                                  // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponSpreadItem
	 * Size -> 0x000C
	 */
	struct FWeaponSpreadItem
	{
	public:
		float                                                      Idle;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Moving;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedTarget;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponSpreadData
	 * Size -> 0x0040
	 */
	struct FWeaponSpreadData
	{
	public:
		struct FWeaponSpreadItem                                   ByStance[0x4];                                           // 0x0000(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      IncrementPerShot;                                        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IncrementFromShotsMax;                                   // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IncrementSpeed;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecrementSpeed;                                          // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponViewKickData
	 * Size -> 0x0018
	 */
	struct FWeaponViewKickData
	{
	public:
		float                                                      PitchMin;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMax;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawMin;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawMax;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchDecrementSpeed;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawDecrementSpeed;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.FireAnimationData
	 * Size -> 0x00C0
	 */
	struct FFireAnimationData
	{
	public:
		struct FBodyWeaponAnimation                                BodyWeaponAnimation;                                     // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TimeBetweenShots;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYM9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyWeaponAnimation                                BodyWeaponAnimationChamber;                              // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TimeForChamber;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CA5[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Conditions;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  ProbabilityWeightCurve;                                  // 0x0038(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponMalfunctionChances
	 * Size -> 0x0038
	 */
	struct FWeaponMalfunctionChances
	{
	public:
		struct FFloatInterval                                      Value[0x7];                                              // 0x0000(0x0038) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponMalfunctionData
	 * Size -> 0x00A8
	 */
	struct FWeaponMalfunctionData
	{
	public:
		bool                                                       UseCustomProbabilityCurve;                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ATH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  ProbabilityCurve;                                        // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		class UClass*                                              ClearMalfunctionSequence;                                // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ClearMalfunctionSequences;                               // 0x0098(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AmmunitionData
	 * Size -> 0x0018
	 */
	struct FAmmunitionData
	{
	public:
		class UClass*                                              AmmunitionItemClass;                                     // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      health;                                                  // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultMaxHealth;                                        // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAmmunitionCartridgeState                                  State;                                                   // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGK5[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WeaponStateSyncData
	 * Size -> 0x0048
	 */
	struct FWeaponStateSyncData
	{
	public:
		int32_t                                                    ZeroRange;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDK0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAmmunitionData>                             LoadedAmmoData;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAmmunitionData>                             InternalMagazineAmmoData;                                // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              LoadedAmmunitionItemClass;                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LoadedProjectileClass;                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponFiringMode                                          FiringMode;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8LZ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    malfunction;                                             // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsChamberOpened;                                         // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WO1H[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SkillTemplate
	 * Size -> 0x0038
	 */
	struct FSkillTemplate
	{
	public:
		ESkillAttribute                                            Attribute;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CIZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              ClassName;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESkillLevel                                                Level;                                                   // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8D0U[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Experience;                                              // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CCNonImplementedSkill
	 * Size -> 0x0020
	 */
	struct FCCNonImplementedSkill
	{
	public:
		ESkillAttribute                                            Attribute;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RB2Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Caption;                                                 // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.NonImplementedSkill
	 * Size -> 0x0020
	 */
	struct FNonImplementedSkill
	{
	public:
		ESkillAttribute                                            Attribute;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0BC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Caption;                                                 // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterImpactSounds
	 * Size -> 0x0008
	 */
	struct FCharacterImpactSounds
	{
	public:
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterHeadImpactSoundData
	 * Size -> 0x0028
	 */
	struct FCharacterHeadImpactSoundData
	{
	public:
		TArray<ECharacterImpactSourceSoundCategory>                ImpactSourceCategories;                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ECharacterHeadImpactSoundCategory>                  ImpactTargetCategories;                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCharacterImpactSounds                              Sounds;                                                  // 0x0020(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterHeadImpactSoundsData
	 * Size -> 0x0018
	 */
	struct FCharacterHeadImpactSoundsData
	{
	public:
		TArray<struct FCharacterHeadImpactSoundData>               SoundsData;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCharacterImpactSounds                              FallbackSounds;                                          // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterTorsoImpactSoundData
	 * Size -> 0x0028
	 */
	struct FCharacterTorsoImpactSoundData
	{
	public:
		TArray<ECharacterImpactSourceSoundCategory>                ImpactSourceCategories;                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ECharacterTorsoImpactSoundCategory>                 ImpactTargetCategories;                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCharacterImpactSounds                              Sounds;                                                  // 0x0020(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterTorsoImpactSoundsData
	 * Size -> 0x0018
	 */
	struct FCharacterTorsoImpactSoundsData
	{
	public:
		TArray<struct FCharacterTorsoImpactSoundData>              SoundsData;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCharacterImpactSounds                              FallbackSounds;                                          // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterArmsImpactSoundData
	 * Size -> 0x0028
	 */
	struct FCharacterArmsImpactSoundData
	{
	public:
		TArray<ECharacterImpactSourceSoundCategory>                ImpactSourceCategories;                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ECharacterArmsImpactSoundCategory>                  ImpactTargetCategories;                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCharacterImpactSounds                              Sounds;                                                  // 0x0020(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterArmsImpactSoundsData
	 * Size -> 0x0018
	 */
	struct FCharacterArmsImpactSoundsData
	{
	public:
		TArray<struct FCharacterArmsImpactSoundData>               SoundsData;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCharacterImpactSounds                              FallbackSounds;                                          // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterLegsImpactSoundData
	 * Size -> 0x0028
	 */
	struct FCharacterLegsImpactSoundData
	{
	public:
		TArray<ECharacterImpactSourceSoundCategory>                ImpactSourceCategories;                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ECharacterLegsImpactSoundCategory>                  ImpactTargetCategories;                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCharacterImpactSounds                              Sounds;                                                  // 0x0020(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterLegsImpactSoundsData
	 * Size -> 0x0018
	 */
	struct FCharacterLegsImpactSoundsData
	{
	public:
		TArray<struct FCharacterLegsImpactSoundData>               SoundsData;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCharacterImpactSounds                              FallbackSounds;                                          // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterMeshMorphTarget
	 * Size -> 0x0050
	 */
	struct FCharacterMeshMorphTarget
	{
	public:
		struct FGameplayTagQuery                                   Condition;                                               // 0x0000(0x0048) Edit, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T6BS[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CharacterMeshMorphTargetArray
	 * Size -> 0x0010
	 */
	struct FCharacterMeshMorphTargetArray
	{
	public:
		TArray<struct FCharacterMeshMorphTarget>                   MorphTargetArray;                                        // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterMeshMaterialOverride
	 * Size -> 0x0070
	 */
	struct FCharacterMeshMaterialOverride
	{
	public:
		struct FGameplayTagQuery                                   Condition;                                               // 0x0000(0x0048) Edit, NativeAccessSpecifierPublic
		unsigned char                                              OverrideMaterial[0x28];                                  // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct ConZ.CharacterMeshSlice
	 * Size -> 0x0180
	 */
	struct FCharacterMeshSlice
	{
	public:
		struct FGameplayTagQuery                                   Condition;                                               // 0x0000(0x0048) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               Slots;                                                   // 0x0048(0x0020) Edit, NativeAccessSpecifierPublic
		unsigned char                                              SkeletalMesh[0x28];                                      // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTag                                        SkeletalMeshSocket;                                      // 0x0090(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FCharacterMeshMorphTargetArray>   SkeletalMeshMorphTargets;                                // 0x0098(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              StaticMesh[0x28];                                        // 0x00E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTag                                        StaticMeshSocket;                                        // 0x0110(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCharacterMeshMaterialOverride>              OverrideMaterials;                                       // 0x0118(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              SpecificAnimationBlueprintClass[0x28];                   // 0x0128(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FTransform                                          SpecificTransform;                                       // 0x0150(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterMeshClassSet
	 * Size -> 0x0050
	 */
	struct FCharacterMeshClassSet
	{
	public:
		unsigned char                                              Classes[0x50];                                           // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct ConZ.CharacterMeshClassArray
	 * Size -> 0x0010
	 */
	struct FCharacterMeshClassArray
	{
	public:
		TArray<class UClass*>                                      Classes;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterSpawnerDataBasedOnPreset
	 * Size -> 0x0020
	 */
	struct FCharacterSpawnerDataBasedOnPreset
	{
	public:
		class UClass*                                              Preset;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideCharacterClasses;                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1NL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      CharacterClasses;                                        // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterSpawnerMarker
	 * Size -> 0x0050
	 */
	struct FCharacterSpawnerMarker
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterSpawnerDataBasedOnPreset                  Spawner;                                                 // 0x0030(0x0020) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SpawnedPawnInfo
	 * Size -> 0x0014
	 */
	struct FSpawnedPawnInfo
	{
	public:
		unsigned char                                              UnknownData_PK7Q[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PawnCharacterInfo
	 * Size -> 0x00B8
	 */
	struct FPawnCharacterInfo
	{
	public:
		class UClass*                                              SpawnablePawn;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      CharacterPreset;                                         // 0x0008(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      PoiCharacterIdleThresholdTimeMP;                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExteriorCharacterIdleThresholdTimeMP;                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteriorCharacterIdleThresholdTimeMP;                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoiCharacterIdleThresholdTimeSP;                         // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExteriorCharacterIdleThresholdTimeSP;                    // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteriorCharacterIdleThresholdTimeSP;                    // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinShortRangeSpawnDistance;                              // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxShortRangeSpawnDistance;                              // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinLongRangeSpawnDistance;                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLongRangeSpawnDistance;                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PawnCullDuration;                                        // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinWildCharactersPerPawnGroup;                           // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxWildCharactersPerPawnGroup;                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxExteriorCharactersPerPawnGroup;                       // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInteriorCharactersPerPawnGroup;                       // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PawnFieldOfView;                                         // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawningFieldOfView;                                     // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAllowedPawns;                                         // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAllowedWildPawns;                                     // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUM0[0x8];                                   // 0x0064(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxAllowedExteriorPawns;                                 // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TB1E[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxAllowedInteriorPawns;                                 // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3950[0x8];                                   // 0x007C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExteriorPawnAmountModifier;                              // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZJ4[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteriorPawnAmountModifier;                              // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YO6U[0x8];                                   // 0x0094(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WildPawnAmountModifier;                                  // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HVV[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpawnedPawnInfo>                            SpawnedPawns;                                            // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterSpawnerData
	 * Size -> 0x0010
	 */
	struct FCharacterSpawnerData
	{
	public:
		TArray<class UClass*>                                      CharacterClasses;                                        // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.LockData
	 * Size -> 0x0088
	 */
	struct FLockData
	{
	public:
		class UClass*                                              LockMinigameClass;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FailurePenaltyClass;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AreFamePointsRequired;                                   // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELockDifficulty                                            LockDifficulty;                                          // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04WZ[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExperienceOnSuccess;                                     // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExperienceOnFailure;                                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULH3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LockedMessage;                                           // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                LockpickMessage;                                         // 0x0038(0x0018) Edit, NativeAccessSpecifierPublic
		class UStaticMesh*                                         LockMeshOuter;                                           // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         LockMeshInner;                                           // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotatingTresholdAngle;                                   // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleTolerance;                                          // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PickBreakingMultiplier;                                  // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PickBreakingAtNumberOfFailedPushAttempts;                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfNeutralizationAttempts;                          // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumRemainingNeutralizationAttempts;                      // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LockHP;                                                  // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlovePickBreakingModifier;                               // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KUI[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ChoppingIngredient
	 * Size -> 0x0050
	 */
	struct FChoppingIngredient
	{
	public:
		unsigned char                                              Item[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    MinQuantity;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxQuantity;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsQuantityAffectedByTool;                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZBC[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialDamage;                                           // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomizeDamage;                                         // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideAutoDestructTime;                                // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXYM[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoDestructTime;                                        // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHealthAffectedByChoppedItem;                           // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QZX[0xB];                                   // 0x0045(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ChoppingTool2
	 * Size -> 0x0050
	 */
	struct FChoppingTool2
	{
	public:
		TArray<class UBaseItemTag*>                                ItemTags;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              ItemTagClass;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ItemClass[0x28];                                         // 0x0018(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       OverrideChoppingTime;                                    // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TQ1[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChoppingTimeMultiplier;                                  // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideIngredientsQuantity;                             // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74IR[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IngredientsQuantityBonus;                                // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PossibleChoppingTools
	 * Size -> 0x0010
	 */
	struct FPossibleChoppingTools
	{
	public:
		TArray<struct FChoppingTool2>                              PossibleTools;                                           // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ExperienceDependentFloat
	 * Size -> 0x0008
	 */
	struct FExperienceDependentFloat
	{
	public:
		float                                                      ValueWhenExperienceIsMinimal;                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValueWhenExperienceIsMaximal;                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ChoppingParametersPerSkillLevel
	 * Size -> 0x000C
	 */
	struct FChoppingParametersPerSkillLevel
	{
	public:
		struct FExperienceDependentFloat                           ChoppingTime;                                            // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    IngredientsQuantityBonus;                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ChoppingRecipe
	 * Size -> 0x0098
	 */
	struct FChoppingRecipe
	{
	public:
		class FText                                                InteractionCaption;                                      // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ChopAudioEvent;                                          // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENoiseLevel                                                noiseLevel;                                              // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrisonerMontage                                           ChoppingMontage;                                         // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrisonerMontage                                           ChoppingMontageEnd;                                      // 0x0022(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnforceDroppingItemOnGround;                             // 0x0023(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldResultUsesDependOnSourceHP;                        // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65IJ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FChoppingIngredient>                         Ingredients;                                             // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FPossibleChoppingTools                              ToolRequiredToBeInRightHand;                             // 0x0038(0x0010) Edit, NativeAccessSpecifierPublic
		TArray<struct FPossibleChoppingTools>                      AdditionalToolsRequired;                                 // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              Skill;                                                   // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExperiencePointsAwarded;                                 // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChoppingParametersPerSkillLevel                    NoSkillLevelData;                                        // 0x0064(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChoppingParametersPerSkillLevel                    BasicLevelData;                                          // 0x0070(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChoppingParametersPerSkillLevel                    MediumLevelData;                                         // 0x007C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChoppingParametersPerSkillLevel                    AdvancedLevelData;                                       // 0x0088(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIJD[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.InteractionStruct
	 * Size -> 0x0078
	 */
	struct FInteractionStruct
	{
	public:
		EInteractionType                                           interactionType;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOCU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InteractionCaption;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NM7R[0x60];                                  // 0x0018(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CircularLayerData
	 * Size -> 0x0008
	 */
	struct FCircularLayerData
	{
	public:
		float                                                      CenterCutoffPercentage;                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CircularSegmentContainer
	 * Size -> 0x0018
	 */
	struct FCircularSegmentContainer
	{
	public:
		TArray<class UCircularMenuSegmentWidget*>                  SegmentWidgets;                                          // 0x0000(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    SegmentCountOverride;                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ClearMalfunctionData
	 * Size -> 0x0018
	 */
	struct FClearMalfunctionData
	{
	public:
		bool                                                       ShouldClearMalfunction;                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0E0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyWeaponAnimation                                Animations;                                              // 0x0008(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ClothesMeshPair
	 * Size -> 0x0040
	 */
	struct FClothesMeshPair
	{
	public:
		class UStaticMesh*                                         MaleStaticMesh;                                          // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       MaleSkeletalMesh;                                        // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInstance*>                           MaleMaterials;                                           // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UStaticMesh*                                         FemaleStaticMesh;                                        // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       FemaleSkeletalMesh;                                      // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInstance*>                           FemaleMaterials;                                         // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AnimalPaceSettings
	 * Size -> 0x0010
	 */
	struct FAnimalPaceSettings
	{
	public:
		float                                                      RunSpeed;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrotSpeed;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WalkSpeed;                                               // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SneakSpeed;                                              // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AnimalStationaryRotationRateSettings
	 * Size -> 0x003C
	 */
	struct FAnimalStationaryRotationRateSettings
	{
	public:
		struct FRotator                                            RunRotationRate;                                         // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            TrotRotationRate;                                        // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            WalkRotationRate;                                        // 0x0018(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            SneakRotationRate;                                       // 0x0024(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            StandRotationRate;                                       // 0x0030(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ChargeAttackData
	 * Size -> 0x0020
	 */
	struct FChargeAttackData
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegainControlDurationModifier;                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Range;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      lengthOverride;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TUF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CloseRangeAttackData
	 * Size -> 0x0018
	 */
	struct FCloseRangeAttackData
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegainControlDurationModifier;                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Range;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalHalfAngleRange;                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TurnMontages
	 * Size -> 0x0010
	 */
	struct FTurnMontages
	{
	public:
		class UAnimMontage*                                        TurnInPlaceLeft;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        TurnInPlaceRight;                                        // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AnimalActionMontageData
	 * Size -> 0x0018
	 */
	struct FAnimalActionMontageData
	{
	public:
		class UAnimMontage*                                        SleepMontage;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        EatMontage;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        IntimidateMontage;                                       // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ContainerItemDescriptorData
	 * Size -> 0x0050
	 */
	struct FContainerItemDescriptorData
	{
	public:
		unsigned char                                              UnknownData_8FN1[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      health;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultMaxHealth;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Usage;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalWeight;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisplayAmountLeft;                                       // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisplayAmountRight;                                      // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldDisplayTextLeft;                                   // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldDisplayTextRight;                                  // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JLX[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               UniqueItemId;                                            // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageOverTime;                                          // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TradePriceModifier;                                      // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmmoCount;                                               // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HILK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ImageAssetToLoad
	 * Size -> 0x0018
	 */
	struct FImageAssetToLoad
	{
	public:
		struct FGameplayTag                                        Name;                                                    // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FilePath;                                                // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZBaseRepairAreaDuration
	 * Size -> 0x0008
	 */
	struct FConZBaseRepairAreaDuration
	{
	public:
		int32_t                                                    NumberOfBaseElementsTreshold;                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepairDuration;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BuoyancyTestPoint
	 * Size -> 0x0014
	 */
	struct FBuoyancyTestPoint
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Density;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BoatParametersPerMovementPace
	 * Size -> 0x0018
	 */
	struct FBoatParametersPerMovementPace
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RW6V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseMaxForwardSpeed;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanReverse;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QH6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseMaxReverseSpeed;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPrisonerStrength;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleMultiplier;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TradeOutpostProsperityLevelInfo
	 * Size -> 0x0018
	 */
	struct FTradeOutpostProsperityLevelInfo
	{
	public:
		class FString                                              ProsperityLevelName;                                     // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProsperityLevelThreshold;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FundsChangeRatePerHour;                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PendingTraderPersonalityDataHelperStruct
	 * Size -> 0x0018
	 */
	struct FPendingTraderPersonalityDataHelperStruct
	{
	public:
		unsigned char                                              UnknownData_6SK3[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTraderPersonalityDataAsset*                         Personality;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CommonMapNames
	 * Size -> 0x0018
	 */
	struct FCommonMapNames
	{
	public:
		class FName                                                MainMenu;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CharacterCreationMenu;                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Singleplayer;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterCreationMenuContext
	 * Size -> 0x0030
	 */
	struct FCharacterCreationMenuContext
	{
	public:
		bool                                                       IsPreferringMultiplayer;                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMPU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerIp;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerResponsePort;                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerGameplayPort;                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerAuthToken;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerConditionalSpawnEquipment
	 * Size -> 0x0078
	 */
	struct FPrisonerConditionalSpawnEquipment
	{
	public:
		struct FGameplayTagQuery                                   Condition;                                               // 0x0000(0x0048) Edit, NativeAccessSpecifierPublic
		unsigned char                                              ItemClass[0x28];                                         // 0x0048(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		EPrisonerItemEquipType                                     EquipType;                                               // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9DT[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZSliderStyle
	 * Size -> 0x0228
	 */
	struct FConZSliderStyle
	{
	public:
		struct FProgressBarStyle                                   Slider;                                                  // 0x0000(0x01A0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Thumb;                                                   // 0x01A0(0x0088) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZSquadEmblemElement
	 * Size -> 0x0004
	 */
	struct FConZSquadEmblemElement
	{
	public:
		unsigned char                                              ShapeIndex;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PrimaryColorIndex;                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SecondaryColorIndex;                                     // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TertiaryColorIndex;                                      // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZSquadEmblem
	 * Size -> 0x0008
	 */
	struct FConZSquadEmblem
	{
	public:
		struct FConZSquadEmblemElement                             Background;                                              // 0x0000(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FConZSquadEmblemElement                             Symbol;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZSquadPendingMember
	 * Size -> 0x0010
	 */
	struct FConZSquadPendingMember
	{
	public:
		struct FDbIntegerId                                        UserProfileId;                                           // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PH53[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZSquadMember
	 * Size -> 0x0010
	 */
	struct FConZSquadMember
	{
	public:
		struct FDbIntegerId                                        UserProfileId;                                           // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConZSquadMemberRank                                       Rank;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       online;                                                  // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InDanger;                                                // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAlive;                                                 // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A37O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZVehicleFlatTireWheelConfiguration
	 * Size -> 0x0050
	 */
	struct FConZVehicleFlatTireWheelConfiguration
	{
	public:
		struct FDcxVehicleWheelData                                FlatTireWheelData;                                       // 0x0000(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3OP9[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDcxVehicleTire*                                     FlatTire;                                                // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDcxVehicleTire*                                     OriginalTire;                                            // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZVehicleTireParticleData
	 * Size -> 0x0014
	 */
	struct FConZVehicleTireParticleData
	{
	public:
		float                                                      MinLateralSlip;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLateralSlip;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinLongitudinalSlip;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLongitudinalSlip;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleScaleModifier;                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZWaterSplineControlPoint
	 * Size -> 0x0014 (FullSize[0x0058] - InheritedSize[0x0044])
	 */
	struct FConZWaterSplineControlPoint : public FSplinePoint
	{
	public:
		bool                                                       Selected;                                                // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAQC[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Width;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDepth;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Opacity;                                                 // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZGerstnerWavesParameters
	 * Size -> 0x0010
	 */
	struct FConZGerstnerWavesParameters
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Steepness;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ItemSpawningSettings
	 * Size -> 0x0058
	 */
	struct FItemSpawningSettings
	{
	public:
		bool                                                       UseQuadTreeToDetermineRelevantSpawnerGroups;             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B405[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RelevantSpawnerGroupsUpdateInterval;                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlayerLocationDeltaToUpdateRelevantSpawnerGroups;     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnerGroupsCullDistance;                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnerGroupsExpirationTimeInMinutes;                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExamineSpawnerExpirationTimeInMinutes;                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnerTasksProcessingInterval;                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnerTasksProcessingBudgetInMilliseconds;              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfSpawnerTasksPerUpdate;                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldDestroySpawnedItemsIfNoPlayersAround;              // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_253H[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RarityRatio;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnerProbabilityMultiplier;                            // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExamineSpawnerProbabilityMultiplier;                     // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemHealthMultiplierWhenUnderwater;                      // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SaveFileName;                                            // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableSerialization;                                    // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreSpawnerProbability;                                // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreItemLimit;                                         // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreItemZone;                                          // 0x004B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreItemRarity;                                        // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DebugDrawItemSpawnTransforms;                            // 0x004D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0490[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugDrawItemSpawnTransformsDuration;                    // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_09PW[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZPrisonerSpawnEquipmentProperties
	 * Size -> 0x0018
	 */
	struct FConZPrisonerSpawnEquipmentProperties
	{
	public:
		float                                                      Elevation;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearEquipment;                                          // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideDefaultOutfit;                                   // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YOB4[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrisonerLoadout*                                    LoadoutFemale;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrisonerLoadout*                                    LoadoutMale;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CorpseSkeletalMeshRepData
	 * Size -> 0x0070
	 */
	struct FCorpseSkeletalMeshRepData
	{
	public:
		class FName                                                DisplayName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       Mesh;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Visibility;                                              // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GM0K[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AttachSocket;                                            // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVBU[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CorpseStaticMeshRepData
	 * Size -> 0x0070
	 */
	struct FCorpseStaticMeshRepData
	{
	public:
		class FName                                                DisplayName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         Mesh;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Visibility;                                              // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96NU[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AttachSocket;                                            // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PMZ[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CorpsePoseData
	 * Size -> 0x0040
	 */
	struct FCorpsePoseData
	{
	public:
		struct FVector_NetQuantize                                 Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHWB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 LinearVelocity;                                          // 0x0020(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 AngularVelocity;                                         // 0x002C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9X1F[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CraftingPair
	 * Size -> 0x0028
	 */
	struct FCraftingPair
	{
	public:
		class UClass*                                              CraftedItem;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CraftingItem;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CraftedItemCount;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWS4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      BonusItems;                                              // 0x0018(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PossibleItem
	 * Size -> 0x0030
	 */
	struct FPossibleItem
	{
	public:
		class UCraftingItemTag*                                    CraftingTag;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Item;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Usage;                                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      usageWeight;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECraftingType                                              CraftingType;                                            // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IS0X[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QuantityVariation;                                       // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightVariation;                                         // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SpawnHere;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36UU[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CraftingItem
	 * Size -> 0x0028
	 */
	struct FCraftingItem
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPossibleItem>                               PossibleItems;                                           // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       FillSound;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CraftingSkillLevelData
	 * Size -> 0x0014
	 */
	struct FCraftingSkillLevelData
	{
	public:
		float                                                      CraftingTime;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProcessingTime;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Points;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Probability_Add;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Probability_Multiply;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.IngredientClassesArray
	 * Size -> 0x0010
	 */
	struct FIngredientClassesArray
	{
	public:
		unsigned char                                              IngredientClasses[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct ConZ.ItemClassesArray
	 * Size -> 0x0010
	 */
	struct FItemClassesArray
	{
	public:
		TArray<class UClass*>                                      ItemClasses;                                             // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CraftingRecipeCraftableItem
	 * Size -> 0x0010
	 */
	struct FCraftingRecipeCraftableItem
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnoughSkill;                                             // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLV9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CraftingRecipeCraftingItem
	 * Size -> 0x0010
	 */
	struct FCraftingRecipeCraftingItem
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isOptional;                                              // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0WA[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CraftingRecipeCraftingIngredient
	 * Size -> 0x0018
	 */
	struct FCraftingRecipeCraftingIngredient
	{
	public:
		TArray<struct FCraftingRecipeCraftingItem>                 CraftingItems;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       IsTool;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isOptional;                                              // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78XE[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CraftingRecipe
	 * Size -> 0x0038
	 */
	struct FCraftingRecipe
	{
	public:
		TArray<struct FCraftingRecipeCraftableItem>                CraftableItems;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCraftingRecipeCraftingIngredient>           CraftingIngredients;                                     // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              SkillNeeded;                                             // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESkillLevel                                                SkillLevelNeeded;                                        // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EG22[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCraftableItem*                                      CraftableItem;                                           // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.GameEventParticipantInfo
	 * Size -> 0x0078
	 */
	struct FGameEventParticipantInfo
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APrisoner>                            Prisoner;                                                // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameEventParticipantState                                 State;                                                   // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2C5B[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TeamIndex;                                               // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGameEventParticipantStats*>                  RoundStats;                                              // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class UGameEventParticipantStats*                          EventStats;                                              // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class APrisoner*>                                   HurtBy;                                                  // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    RepHelper;                                               // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6HU[0x1C];                                  // 0x005C(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.GameEventRewardPoints
	 * Size -> 0x000C
	 */
	struct FGameEventRewardPoints
	{
	public:
		int32_t                                                    Cash;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FamePoints;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.GameEventParameters
	 * Size -> 0x0188
	 */
	struct FGameEventParameters
	{
	public:
		float                                                      AnnounceDuration;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CancelDuration;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RoundDuration;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundLimit;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WinLimit;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RespawnDelay;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeoutDuration;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinParticipants;                                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxParticipants;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowRespawn;                                            // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FriendlyFire;                                            // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7A6G[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            TeamLimit;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    EntryFee;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsPerEnemyKill;                                      // 0x003C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsPerTeamKill;                                       // 0x0048(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsPerDeath;                                          // 0x0054(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsPerSuicide;                                        // 0x0060(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsPerAssist;                                         // 0x006C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsPerHeadshot;                                       // 0x0078(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsPerRoundWin;                                       // 0x0084(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGameEventRewardPoints>                      PointsPerRank;                                           // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsForParticipation;                                  // 0x00A0(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ScoreToFameConversionFactor;                             // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UItemSelection*>                              PossiblePrimaryWeapons;                                  // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UItemSelection*>                              PossibleSecondaryWeapons;                                // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UItemSelection*>                              PossibleTertiaryWeapons;                                 // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UItemSelection*>                              PossibleOutfits;                                         // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UItemSelection*>                              PossibleSupportItems;                                    // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UItemSelection*>                              MandatoryGear;                                           // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                EventName;                                               // 0x0110(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                EventDescription;                                        // 0x0128(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                PrerequisitesText;                                       // 0x0140(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                WeaponText;                                              // 0x0158(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                RewardsText;                                             // 0x0170(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CTFParameters
	 * Size -> 0x0030
	 */
	struct FCTFParameters
	{
	public:
		float                                                      FlagResetDuration;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowReturns;                                            // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I8BU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CaptureLimit;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsPerPickup;                                         // 0x000C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsPerCapture;                                        // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGameEventRewardPoints                              PointsPerReturn;                                         // 0x0024(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SpawnArea
	 * Size -> 0x0014
	 */
	struct FSpawnArea
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamIndex;                                               // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CustomZoneDisplayData
	 * Size -> 0x0040
	 */
	struct FCustomZoneDisplayData
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CustomZoneConfiguration
	 * Size -> 0x0040
	 */
	struct FCustomZoneConfiguration
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomZoneEventHandlingMethod                             EventHandlingMethod[0x13];                               // 0x0010(0x0013) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6IF[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0024(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UniqueDefaultZoneName;                                   // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDefaultCustomZoneState                                    DefaultZoneState;                                        // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H2ER[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CustomZoneRegion
	 * Size -> 0x0038
	 */
	struct FCustomZoneRegion
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Location;                                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomZoneShape                                           Shape;                                                   // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVMI[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ConfigurationIndex;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UniqueDefaultZoneName;                                   // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDefaultCustomZoneState                                    DefaultZoneState;                                        // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLC6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ProjectileImpulseMultiplier
	 * Size -> 0x0010
	 */
	struct FProjectileImpulseMultiplier
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW1Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WeaponMalfunctionProbabilityCurves
	 * Size -> 0x03B8
	 */
	struct FWeaponMalfunctionProbabilityCurves
	{
	public:
		struct FRuntimeFloatCurve                                  ProbabilityCurve[0x7];                                   // 0x0000(0x03B8) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.GameResourceMixingRule
	 * Size -> 0x0018
	 */
	struct FGameResourceMixingRule
	{
	public:
		class UClass*                                              Source;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Destination;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Result;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AITeamAttitudeData
	 * Size -> 0x0006
	 */
	struct FAITeamAttitudeData
	{
	public:
		ETeamAttitude                                              AttitudePerTeam[0x6];                                    // 0x0000(0x0006) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DeathmatchParameters
	 * Size -> 0x0014
	 */
	struct FDeathmatchParameters
	{
	public:
		int32_t                                                    RoundScoreLimit;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AreaRestrictionInterval;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AreaRestrictionDuration;                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AreaRestrictionStep;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarrierHeatUpDuration;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerInjuryTypeLikelihoods
	 * Size -> 0x0020
	 */
	struct FPrisonerInjuryTypeLikelihoods
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneInjuryLikelihood;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MuscleInjuryLikelihood;                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrganInjuryLikelihood;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q7O0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.DemolitionSkillParametersPerTrapType
	 * Size -> 0x0004
	 */
	struct FDemolitionSkillParametersPerTrapType
	{
	public:
		float                                                      DefuseTime;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DemolitionSkillParametersPerSkillLevel
	 * Size -> 0x0078
	 */
	struct FDemolitionSkillParametersPerSkillLevel
	{
	public:
		float                                                      TrapQuality;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmTrapXP;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisarmOwnedTrapXP;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisarmEnemyTrapXP;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AddTriggerXP;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraftTrapXP;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfWires;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GreenWiresNumber;                                        // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RedWiresNumber;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfDefuseAttempts;                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<ETrapType, struct FDemolitionSkillParametersPerTrapType> ParametersPerTrapType;                                   // 0x0028(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TooltipPanelData
	 * Size -> 0x0020
	 */
	struct FTooltipPanelData
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETooltipPanelType                                          PanelType;                                               // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MHC[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Layer;                                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEditorOnly;                                            // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KF0X[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TabButtonStyle
	 * Size -> 0x0288
	 */
	struct FTabButtonStyle
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CY8P[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0010(0x0278) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TabTextStyle
	 * Size -> 0x0098
	 */
	struct FTabTextStyle
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q4GI[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0018(0x0058) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0070(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0088(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DialogInfoContainer
	 * Size -> 0x0010
	 */
	struct FDialogInfoContainer
	{
	public:
		TArray<struct FDialogueInfo>                               DialogInfos;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DistantLevelDescription
	 * Size -> 0x00A0
	 */
	struct FDistantLevelDescription
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EDistantMeshStreamingBehavior                              MeshStreamingBehavior;                                   // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEU6[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDrawDistance;                                         // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NeverDistanceCull;                                       // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XOV[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoxSphereBounds                                    MeshBounds;                                              // 0x004C(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              CollisionMesh[0x28];                                     // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MeshLODs[0x10];                                          // 0x0090(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct ConZ.DoorRepData
	 * Size -> 0x0048
	 */
	struct FDoorRepData
	{
	public:
		EDoorStateFlags                                            StateFlags;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5YB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDbIntegerId                                        OwningUserProfileId;                                     // 0x0008(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      Locks;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RemainingNeutralizationAttemptsPerLock;                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              DoorAccessLevel;                                         // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZ19[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AItem*>                                       AttachedItems;                                           // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DoorUnlockDataDescription
	 * Size -> 0x0010
	 */
	struct FDoorUnlockDataDescription
	{
	public:
		class UClass*                                              DoorUnlockData;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProbabilityCount;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6IIQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.DoorUnlockDataCollection
	 * Size -> 0x0010
	 */
	struct FDoorUnlockDataCollection
	{
	public:
		TArray<struct FDoorUnlockDataDescription>                  Data;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DrivingSkillParametersPerSkillLevel
	 * Size -> 0x0100
	 */
	struct FDrivingSkillParametersPerSkillLevel
	{
	public:
		float                                                      EngineStartDuration;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineStartFailureChance;                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineStartViaMotionDuration;                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineStartViaMotionFailureChance;                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineReadyDelay;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineFailedToStartDelay;                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineFailedToStartNoFuelDelay;                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineFailedToStartNoBatteryDelay;                       // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineStalledDelay;                                      // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeedModifier;                                        // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleModifier;                                        // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakeModifier;                                           // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GearboxSwitchTime;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GearboxLatency;                                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SteerRaiseRate;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SteerFallRate;                                           // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDrivingSkillEngineStallingParameters               EngineStallingByAccelerationParameters;                  // 0x0040(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDrivingSkillEngineStallingParameters               EngineStallingByUpShiftParameters;                       // 0x0080(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDrivingSkillEngineStallingParameters               EngineStallingWhenStartingViaMotion;                     // 0x00C0(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DropZoneParameters
	 * Size -> 0x002C
	 */
	struct FDropZoneParameters
	{
	public:
		float                                                      IntroAnnouncementDelay;                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WarmupPhaseDuration;                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrateDropDuration;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchPhaseTimeLimit;                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CargoDropDuration;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapturePhaseTimeLimit;                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CargoOpeningDuration;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SkipKeyPhase;                                            // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHGK[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameEventRewardPoints                              PointsPerActivation;                                     // 0x0020(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DamageOverTimeUpdateGroup
	 * Size -> 0x0018
	 */
	struct FDamageOverTimeUpdateGroup
	{
	public:
		float                                                      UpdateInterval;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVAY[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.EnduranceSkillParametersPerSkillLevel
	 * Size -> 0x0018
	 */
	struct FEnduranceSkillParametersPerSkillLevel
	{
	public:
		struct FExperienceDependentFloat                           EnergyConsumptionMultiplier;                             // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           WaterConsumptionMultiplier;                              // 0x0008(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StaminaRecoveryMultiplier;                               // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterTemplate
	 * Size -> 0x0088
	 */
	struct FCharacterTemplate
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Constitution;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Dexterity;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intelligence;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Age;                                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConZGender                                                Gender;                                                  // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCVA[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    appearanceIndex;                                         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TattooIndex;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BreastSize;                                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenisSize;                                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GrowOverTime;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNAN[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TeamIndex;                                               // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BirthDate;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ArrestDate;                                              // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSkillTemplate>                              Skills;                                                  // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              Item0;                                                   // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Item1;                                                   // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Item2;                                                   // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PackedLocation
	 * Size -> 0x0008
	 */
	struct FPackedLocation
	{
	public:
		unsigned char                                              UnknownData_MUZT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfo
	 * Size -> 0x0060
	 */
	struct FPrisonerNearbyFoliageInstanceInfo
	{
	public:
		EPrisonerNearbyFoliageType                                 FoliageType;                                             // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3T3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInstancedStaticMeshComponent*                       InstancedMeshComponent;                                  // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPackedLocation                                     PackedLocation;                                          // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KLR[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TransformZeroOrigin;                                     // 0x0020(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UFoliageAssetData*                                   FoliageAssetData;                                        // 0x0050(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MJM[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerNearbyFoliageInfo
	 * Size -> 0x0010
	 */
	struct FPrisonerNearbyFoliageInfo
	{
	public:
		TArray<struct FPrisonerNearbyFoliageInstanceInfo>          InstancesInfo;                                           // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DeluxeVersion
	 * Size -> 0x0003
	 */
	struct FDeluxeVersion
	{
	public:
		bool                                                       SupporterPack1;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SupporterPack2;                                          // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Character_DannyTrejo;                                    // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMountReplication
	 * Size -> 0x0018
	 */
	struct FPrisonerMountReplication
	{
	public:
		class UObject*                                             MountedSlot;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPrisonerMountSlotFlags                                    _mountFlags;                                             // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EUnmountFlags                                              _unmountFlags;                                           // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _shouldForceMount;                                       // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FMGN[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _entryPointIndex;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _version;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UXIB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.EngineeringSkillExperienceAwards
	 * Size -> 0x0010
	 */
	struct FEngineeringSkillExperienceAwards
	{
	public:
		float                                                      RepairExperienceMultiplier;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FillFuelExperienceMultiplier;                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DrainFuelExperienceMultiplier;                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChargeBatteryExperienceMultiplier;                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.EngineeringSkillParametersPerSkillLevel
	 * Size -> 0x0020
	 */
	struct FEngineeringSkillParametersPerSkillLevel
	{
	public:
		float                                                      RepairRadius;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepairTimeMultiplier;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResultQuality;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IngredientMultiplier;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ToolUsageMultiplier;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FillFuelDurationMultiplier;                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DrainFuelDurationMultiplier;                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChargeBatteryDurationMultiplier;                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ItemSpawnerDataBasedOnPreset
	 * Size -> 0x0090
	 */
	struct FItemSpawnerDataBasedOnPreset
	{
	public:
		class UClass*                                              Preset;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideItemClasses;                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideItemSpawnTypes;                                  // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideAlwaysSpawn;                                     // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideProbability;                                     // 0x000B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideUseItemZone;                                     // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideUseItemRarity;                                   // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideUseItemSpawnGroup;                               // 0x000E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideInitialDamage;                                   // 0x000F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideRandomizeDamage;                                 // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideInitialUsage;                                    // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideRandomizeUsage;                                  // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideInitialDirtiness;                                // 0x0013(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideRandomizeDirtiness;                              // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMinAmmoCount;                                    // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMaxAmmoCount;                                    // 0x0016(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMinCashAmount;                                   // 0x0017(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMaxCashAmount;                                   // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideUseCollisionTraceToAdjustSpawnLocation;          // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideUseCollisionTraceToAdjustSpawnRotation;          // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverridePostItemsSpawnedActions;                         // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAJF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ItemClasses[0x10];                                       // 0x0020(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FGameplayTagContainer                               ItemSpawnTypes;                                          // 0x0030(0x0020) Edit, NativeAccessSpecifierPublic
		bool                                                       AlwaysSpawn;                                             // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0M87[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Probability;                                             // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseItemZone;                                             // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseItemRarity;                                           // 0x0059(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseItemSpawnGroup;                                       // 0x005A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_932Z[0x1];                                   // 0x005B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialDamage;                                           // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomizeDamage;                                         // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialUsage;                                            // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomizeUsage;                                          // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialDirtiness;                                        // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomizeDirtiness;                                      // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinAmmoCount;                                            // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAmmoCount;                                            // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCashAmount;                                           // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCashAmount;                                           // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCollisionTraceToAdjustSpawnLocation;                  // 0x0084(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCollisionTraceToAdjustSpawnRotation;                  // 0x0085(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YC75[0x2];                                   // 0x0086(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PostItemsSpawnedActions;                                 // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
	 * Size -> 0x0028
	 */
	struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
	{
	public:
		struct FGameplayTagContainer                               ItemSpawnTypes;                                          // 0x0000(0x0020) Edit, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfOccurrences;                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O56T[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ExamineItemSpawnerData
	 * Size -> 0x00B8
	 */
	struct FExamineItemSpawnerData
	{
	public:
		int32_t                                                    MinQuantity;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxQuantity;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowDuplicates;                                         // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNB4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemSpawnerDataBasedOnPreset                       Spawner;                                                 // 0x0010(0x0090) Edit, NativeAccessSpecifierPublic
		TArray<struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes;                             // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ExpirationTime;                                          // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28LI[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.FillItemWithReplenishableResourceInteractionData
	 * Size -> 0x0040
	 */
	struct FFillItemWithReplenishableResourceInteractionData
	{
	public:
		class FText                                                InteractionCaptionOverride;                              // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       CanShowDrinkAsDefaultInteraction;                        // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_006E[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseActionDuration;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActionDurationPerAmountFilled;                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResourceFillingExperiencePerAmount;                      // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PrisonerFillingMontage;                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StartItemNoiseAudioEvent;                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StopItemNoiseAudioEvent;                                 // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.HeatSourceParameters
	 * Size -> 0x0028
	 */
	struct FHeatSourceParameters
	{
	public:
		float                                                      Temperature;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PYO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         TemperatureCurve;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BurningSpeed;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Emissivity;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceScale;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerRadius;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterRadius;                                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXU2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.FishStateParameters
	 * Size -> 0x0010
	 */
	struct FFishStateParameters
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Deceleration;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnSpeed;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.FishSpawnData
	 * Size -> 0x0010
	 */
	struct FFishSpawnData
	{
	public:
		class UFishSpeciesData*                                    FishSpeciesData;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawningWeight;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ7X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.FoliageGeneralData
	 * Size -> 0x0010
	 */
	struct FFoliageGeneralData
	{
	public:
		float                                                      CollisionBoundsScale;                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionBoundsOffset;                                   // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.FoliageEffectsData
	 * Size -> 0x0018
	 */
	struct FFoliageEffectsData
	{
	public:
		class UAkAudioEvent*                                       StartMovingThroughFoliageAudioEvent;                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StopMovingThroughFoliageAudioEvent;                      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       OneShotMovingThroughFoliageAudioEvent;                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.FoliageAIPerceptionData
	 * Size -> 0x0002
	 */
	struct FFoliageAIPerceptionData
	{
	public:
		bool                                                       CanCoverPrisoner;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrisonerStance                                            MaxUndetectedPrisonerStance;                             // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TreeCanopySphere
	 * Size -> 0x0014
	 */
	struct FTreeCanopySphere
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CanopyDensity;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TreeCanopyCapsule
	 * Size -> 0x0024
	 */
	struct FTreeCanopyCapsule
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CanopyDensity;                                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.FoliageCanopyData
	 * Size -> 0x0040
	 */
	struct FFoliageCanopyData
	{
	public:
		bool                                                       UseSphere;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UUG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTreeCanopySphere                                   Sphere;                                                  // 0x0004(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       UseCapsule;                                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGHR[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTreeCanopyCapsule                                  Capsule;                                                 // 0x001C(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SubstancesData
	 * Size -> 0x00D0
	 */
	struct FSubstancesData
	{
	public:
		float                                                      Nutrients[0x20];                                         // 0x0000(0x0080) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, float>                                       ForeignSubstances;                                       // 0x0080(0x0050) SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MetabolismConfiguration
	 * Size -> 0x0460
	 */
	struct FMetabolismConfiguration
	{
	public:
		float                                                      InitialAbsorbedEnergyRatio;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialAbsorbedWaterRatio;                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialAbsorbedVitaminsRatio;                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialAbsorbedMineralsRatio;                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialColonFullness;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialBladderFullness;                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStomachVolume;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxIntestineVolume;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxColonVolume;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBladderVolume;                                        // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnergyAbsorptionCapacityMultiplier;                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterAbsorptionCapacityMultiplier;                       // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlcoholAbsorptionBaseCapacity;                           // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbsorbedAlcoholDiscardRate;                              // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxEnergyToRecoverFromFatPerHour;                        // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAbsorbedEnergyExcessToStoreAsFatPerHour;              // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSubstancesData                                     NutrientsAbsorptionRateModifier;                         // 0x0040(0x00D0) Edit, NativeAccessSpecifierPublic
		float                                                      MinSubstancesToAbsorbRatio;                              // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRCQ[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubstancesData                                     AbsorbedNonEnergyProvidingNutrientsExcessDiscardRateMultiplier; // 0x0118(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSubstancesData                                     AdditionalRequiredWaterPerNutrientAbsorbed;              // 0x01E8(0x00D0) Edit, NativeAccessSpecifierPublic
		float                                                      IntestineToColonFecesTransferRate;                       // 0x02B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEH5[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubstancesData                                     NutrientAbsorptionWasteFecesRatios;                      // 0x02C0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSubstancesData                                     NutrientAbsorptionWasteUrineRatios;                      // 0x0390(0x00D0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.EventsRankingStats
	 * Size -> 0x0030
	 */
	struct FEventsRankingStats
	{
	public:
		unsigned char                                              UnknownData_NXRP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FamePoints;                                              // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FameLevel;                                               // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventScore;                                              // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventKills;                                              // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventTeamKills;                                          // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventDeaths;                                             // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventSuicides;                                           // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventAssists;                                            // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventHeadshots;                                          // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBanned;                                                // 0x002C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZO1[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.EventsRankingStatsItem
	 * Size -> 0x0048
	 */
	struct FEventsRankingStatsItem
	{
	public:
		int32_t                                                    Rank;                                                    // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDU1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerName;                                              // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEventsRankingStats                                 CharacterStats;                                          // 0x0018(0x0030) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.GameResourceConsumptionDataForeignSubstance
	 * Size -> 0x0010
	 */
	struct FGameResourceConsumptionDataForeignSubstance
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amount;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7CC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.GardenSlot
	 * Size -> 0x00C4 (FullSize[0x00D0] - InheritedSize[0x000C])
	 */
	struct FGardenSlot : public FFastArraySerializerItem
	{
	public:
		struct FIntPoint                                           _slotPosition;                                           // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y4BN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlantSpecies*                                       _species;                                                // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPlantGrowthStage                                          _stage;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DIDW[0x1];                                   // 0x0021(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   _repWater;                                               // 0x0022(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E4IP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _repGrowthPercentage;                                    // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E1MX[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _organicFertilizer;                                      // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _industrialFertilizer;                                   // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SNOC[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlantPestSpecies*                                   _pests[0x3];                                             // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _repPestsIntensities[0x3];                               // 0x0050(0x0003) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JUHT[0xD];                                   // 0x0053(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlantDiseaseSpecies*                                _diseases[0x3];                                          // 0x0060(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _repDiseaseIntensities[0x3];                             // 0x0078(0x0003) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7KEQ[0xD];                                   // 0x007B(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _repWeedIntensity;                                       // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5210[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   _pesticideTimestamp;                                     // 0x0090(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   _fungicideTimestamp;                                     // 0x0092(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   _weedRepelentTimestamp;                                  // 0x0094(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _repHealth;                                              // 0x0096(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C4FI[0x39];                                  // 0x0097(0x0039) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.GardenSlotArray
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FGardenSlotArray : public FFastArraySerializer
	{
	public:
		TArray<struct FGardenSlot>                                 _gardenSlots;                                            // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PQ4S[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PlantGrowthStageData
	 * Size -> 0x002C
	 */
	struct FPlantGrowthStageData
	{
	public:
		float                                                      GrowthTimeGameHours;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWaterMililiters;                                      // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSunHours;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      OptimalAvgTemperature;                                   // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterDeficiencyGrowthExtendHours;                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterDeficiencyDeathTimeHours;                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TemperatureDeficiencyGrowthExtendHours;                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TemperatureDeficiencyDeathTimeHours;                     // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeficiencyRecoveryTimeHours;                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SunDeficiencyGrowthExtendHours;                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.StaticMeshMaterialPair
	 * Size -> 0x0018
	 */
	struct FStaticMeshMaterialPair
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.GlobalAnimalSpawnInfo
	 * Size -> 0x001C
	 */
	struct FGlobalAnimalSpawnInfo
	{
	public:
		int32_t                                                    MaxSpawnInstances;                                       // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RespawnPeriod;                                           // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfExistingWaypointGroups;                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WorldMaxSpawnInstances;                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentlyAssigned;                                       // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentlySpawned;                                        // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentlyDead;                                           // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AquaticLifeSpawningVolumeDescription
	 * Size -> 0x0068
	 */
	struct FAquaticLifeSpawningVolumeDescription
	{
	public:
		unsigned char                                              UnknownData_GEAS[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFishSpeciesPreset*                                  FishSpeciesPreset;                                       // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFishSpawningPreset*                                 FishSpawningPreset;                                      // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V707[0x38];                                  // 0x0030(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SentrySpawnerDescription
	 * Size -> 0x0068
	 */
	struct FSentrySpawnerDescription
	{
	public:
		unsigned char                                              UnknownData_H0L9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _sentryClass;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IMRC[0x58];                                  // 0x0010(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.GuardedZoneManagerDescription
	 * Size -> 0x0040
	 */
	struct FGuardedZoneManagerDescription
	{
	public:
		TArray<struct FSentrySpawnerDescription>                   _sentrySpawners;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6JFT[0x30];                                  // 0x0010(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.HeatSource
	 * Size -> 0x0048
	 */
	struct FHeatSource
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZVU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHeatSourceParameters                               parameters;                                              // 0x0010(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FuelDuration;                                            // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FuelCapacity;                                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesUpdatedWithoutMoving;                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9D1[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PhysicalHitReactData
	 * Size -> 0x0018
	 */
	struct FPhysicalHitReactData
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PelvisBoneName;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialStrengthMultiplier;                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendDuration;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.HitReactBodyPartDataItem
	 * Size -> 0x0018
	 */
	struct FHitReactBodyPartDataItem
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        FollowupMontage;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegainControlDurationMultiplier;                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGGK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.HitReactDirectionData
	 * Size -> 0x0048
	 */
	struct FHitReactDirectionData
	{
	public:
		TArray<struct FHitReactBodyPartDataItem>                   FrontHit;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHitReactBodyPartDataItem>                   LeftHit;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHitReactBodyPartDataItem>                   BackHit;                                                 // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHitReactBodyPartDataItem>                   RightHit;                                                // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      RegainControlDurationMultiplier;                         // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMSI[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.HitReactMagnitudeData
	 * Size -> 0x0120
	 */
	struct FHitReactMagnitudeData
	{
	public:
		struct FHitReactDirectionData                              SmallHit;                                                // 0x0000(0x0048) Edit, NativeAccessSpecifierPublic
		struct FHitReactDirectionData                              MediumHit;                                               // 0x0048(0x0048) Edit, NativeAccessSpecifierPublic
		struct FHitReactDirectionData                              LargeHit;                                                // 0x0090(0x0048) Edit, NativeAccessSpecifierPublic
		struct FHitReactDirectionData                              KnockoutHit;                                             // 0x00D8(0x0048) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.HitReactLandingData
	 * Size -> 0x0028
	 */
	struct FHitReactLandingData
	{
	public:
		float                                                      MinImpactSpeedToReact;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMAY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegainControlDurationMultiplier;                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanEverGoToRagdoll;                                      // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4GG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinImpactSpeedForRagdoll;                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRagdollDuration;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRagdollDuration;                                      // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RagdollDurationPerSpeedUnit;                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SpawnedItems
	 * Size -> 0x0018
	 */
	struct FSpawnedItems
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPickupItemOperation                                       Operation;                                               // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIOH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AItem*>                                       Items;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.InventoryContainerClothesElement
	 * Size -> 0x0020
	 */
	struct FInventoryContainerClothesElement
	{
	public:
		unsigned char                                              UnknownData_EGHH[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.InventoryPositionDataRepHelper
	 * Size -> 0x0020
	 */
	struct FInventoryPositionDataRepHelper
	{
	public:
		class UClass*                                              _dataClass;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInventoryPositionData*                              _positionData;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             _owner;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _repKey;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C6HZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.InventoryItemPositionPair
	 * Size -> 0x0028
	 */
	struct FInventoryItemPositionPair
	{
	public:
		struct FInventoryPositionDataRepHelper                     position;                                                // 0x0000(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Item;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.InventoryContainer2DRepData
	 * Size -> 0x0020
	 */
	struct FInventoryContainer2DRepData
	{
	public:
		TArray<struct FInventoryItemPositionPair>                  ItemsData;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UObject*                                             Parent;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeX;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeY;                                                   // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.InventoryContainerClothesData
	 * Size -> 0x0020
	 */
	struct FInventoryContainerClothesData
	{
	public:
		TArray<struct FInventoryItemPositionPair>                  ItemsData;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UObject*                                             Parent;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RepCounter;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSM5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.InventoryContainerHandsHolstersData
	 * Size -> 0x0020
	 */
	struct FInventoryContainerHandsHolstersData
	{
	public:
		TArray<struct FInventoryItemPositionPair>                  ItemsData;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UObject*                                             Parent;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RepCounter;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNBD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.InventoryContainerSelectionRepData
	 * Size -> 0x0028
	 */
	struct FInventoryContainerSelectionRepData
	{
	public:
		TArray<class UObject*>                                     Items;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInventoryItemPositionPair>                  ItemsData;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UObject*                                             Parent;                                                  // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.Inv2021_InventoryPosition
	 * Size -> 0x0008
	 */
	struct FInv2021_InventoryPosition
	{
	public:
		unsigned char                                              UnknownData_WYYQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.Inv2021_InventoryPosition2D
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FInv2021_InventoryPosition2D : public FInv2021_InventoryPosition
	{
	public:
		int32_t                                                    X;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Rotation;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1X2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.InventoryItemComponentElement
	 * Size -> 0x0030
	 */
	struct FInventoryItemComponentElement
	{
	public:
		unsigned char                                              UnknownData_ZGN8[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.InventoryItemComponentReplicatedPageData
	 * Size -> 0x0018
	 */
	struct FInventoryItemComponentReplicatedPageData
	{
	public:
		TArray<struct FInventoryItemComponentElement>              Elements;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TS4I[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.UnlockLocation
	 * Size -> 0x0030
	 */
	struct FUnlockLocation
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ItemContainersArray
	 * Size -> 0x0010
	 */
	struct FItemContainersArray
	{
	public:
		TArray<class AItemContainer*>                              _itemContainers;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ConZ.ItemContainerRepData
	 * Size -> 0x0020
	 */
	struct FItemContainerRepData
	{
	public:
		TArray<class UClass*>                                      Locks;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RemainingNeutralizationAttemptsPerLock;                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ItemContainersReplicationHelper
	 * Size -> 0x0070
	 */
	struct FItemContainersReplicationHelper
	{
	public:
		TMap<class FString, struct FItemContainerRepData>          ItemContainerData;                                       // 0x0000(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y55L[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ItemSpawnerMarker
	 * Size -> 0x00C0
	 */
	struct FItemSpawnerMarker
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FItemSpawnerDataBasedOnPreset                       Spawner;                                                 // 0x0030(0x0090) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ItemSpawnerData
	 * Size -> 0x0070
	 */
	struct FItemSpawnerData
	{
	public:
		unsigned char                                              ItemClasses[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FGameplayTagContainer                               ItemSpawnTypes;                                          // 0x0010(0x0020) Edit, NativeAccessSpecifierPublic
		bool                                                       AlwaysSpawn;                                             // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PO7S[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Probability;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseItemZone;                                             // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseItemRarity;                                           // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseItemSpawnGroup;                                       // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DKT[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialDamage;                                           // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomizeDamage;                                         // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialUsage;                                            // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomizeUsage;                                          // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialDirtiness;                                        // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomizeDirtiness;                                      // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinAmmoCount;                                            // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAmmoCount;                                            // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCashAmount;                                           // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCashAmount;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCollisionTraceToAdjustSpawnLocation;                  // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCollisionTraceToAdjustSpawnRotation;                  // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_199Y[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PostItemsSpawnedActions;                                 // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SpawnerConfiguration
	 * Size -> 0x0010
	 */
	struct FSpawnerConfiguration
	{
	public:
		class UClass*                                              Spawner;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimumItemsCount;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaximumItemsCount;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.RoomDifficultyConfiguration
	 * Size -> 0x0038
	 */
	struct FRoomDifficultyConfiguration
	{
	public:
		TArray<class UClass*>                                      Locks;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      Zappers;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       IsC4Present;                                             // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHAC[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpawnerConfiguration>                       PossibleSpawners;                                        // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.RoomDefinition
	 * Size -> 0x0020
	 */
	struct FRoomDefinition
	{
	public:
		class ADoor*                                               RoomDoor;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                Locker;                                                  // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AKillBoxC4SpawnPoint*                                C4;                                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KIRH[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.LandingEffectDataPerSeverity
	 * Size -> 0x0010
	 */
	struct FLandingEffectDataPerSeverity
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SpawnParticlesInDirectionOfVelocity;                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G9RI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.LandingEffectDataPerPhysicalSurface
	 * Size -> 0x0030
	 */
	struct FLandingEffectDataPerPhysicalSurface
	{
	public:
		struct FLandingEffectDataPerSeverity                       Light;                                                   // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FLandingEffectDataPerSeverity                       Medium;                                                  // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FLandingEffectDataPerSeverity                       Heavy;                                                   // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AerodynamicSurface
	 * Size -> 0x0080
	 */
	struct FAerodynamicSurface
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLZ9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LiftSlope;                                               // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkinFriction;                                            // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZeroLiftAoA;                                             // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StallAngleHigh;                                          // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StallAngleLow;                                           // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chord;                                                   // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Span;                                                    // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AspectRatio;                                             // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlapFraction;                                            // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsControlable;                                           // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YA5A[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlapAngle;                                               // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlapAngleSensitivity;                                    // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFlapAngle;                                            // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AreaMultiplier;                                          // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCLE[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.DroneVisitTimeData
	 * Size -> 0x0008
	 */
	struct FDroneVisitTimeData
	{
	public:
		float                                                      MinVisitTime;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVisitTime;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MeleeSkillAttack
	 * Size -> 0x0078
	 */
	struct FMeleeSkillAttack
	{
	public:
		struct FGameplayTagContainer                               AttackTypes;                                             // 0x0000(0x0020) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               IgnoreReason;                                            // 0x0020(0x0020) Edit, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Montage;                                                 // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageFP;                                               // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      PitchRange;                                              // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistance;                                             // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinStamina;                                              // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrientToTargetSpeedFactor;                               // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegainControlDurationMultiplier;                         // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaDrainMultiplier;                                  // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeUsedAsInitialAttack;                                // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeUsedToCloseLargeDistanceToTarget;                   // 0x0071(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Solo;                                                    // 0x0072(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Mute;                                                    // 0x0073(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAlwaysCandidate;                                       // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9OR[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MeleeSkillDodge
	 * Size -> 0x0018
	 */
	struct FMeleeSkillDodge
	{
	public:
		EDodgeDirectionType                                        DodgeDirectionType;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z78R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegainControlDurationMultiplier;                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGLM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MeleeSkillAnimations
	 * Size -> 0x0098
	 */
	struct FMeleeSkillAnimations
	{
	public:
		class UAnimSequenceBase*                                   PrimaryIdleAnimationTP;                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   PrimaryIdleAnimationFP;                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   TiredIdleAnimationTP;                                    // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   TiredIdleAnimationFP;                                    // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   WalkingIdleAnimationTP;                                  // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   WalkingIdleAnimationFP;                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   BlockIdleAnimationTP;                                    // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   BlockIdleAnimationFP;                                    // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         AimOffsetBlendSpaceTP;                                   // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         AimOffsetBlendSpaceFP;                                   // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        EnterCombatModeMontage;                                  // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        LeaveCombatModeMontage;                                  // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequenceBase*>                           InactivityIdleAnimations;                                // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      IdleToBlockBlendDuration;                                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockToIdleBlendDuration;                                // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMeleeSkillAttack>                           Attacks;                                                 // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMeleeSkillDodge>                            Dodges;                                                  // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MeleeSkillParametersPerSkillLevel
	 * Size -> 0x0088
	 */
	struct FMeleeSkillParametersPerSkillLevel
	{
	public:
		struct FExperienceDependentFloat                           StartDelay;                                              // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StartDelayPenaltyPerStrengthShortage;                    // 0x0008(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           AnimationPlayRateModifier;                               // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           AnimationPlayRatePenaltyPerStrengthShortage;             // 0x0018(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           RegainControlDurationModifier;                           // 0x0020(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StaminaDrain;                                            // 0x0028(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StaminaDrainPenaltyPerStrengthShortage;                  // 0x0030(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StaminaRecoveryDelay;                                    // 0x0038(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StaminaRecoveryDuration;                                 // 0x0040(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StaminaInfluenceWindowMin;                               // 0x0048(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StaminaInfluenceWindowMax;                               // 0x0050(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StaminaInfluenceWindowLinearity;                         // 0x0058(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StartDelayWhenExhausted;                                 // 0x0060(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           AnimationPlayRateModifierWhenExhausted;                  // 0x0068(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           RegainControlDurationModifierWhenExhausted;              // 0x0070(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StaminaMultiplierPerExcessGearWeight;                    // 0x0078(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           ComboCooldownDuration;                                   // 0x0080(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MetabolismAPBFontStyle
	 * Size -> 0x0030
	 */
	struct FMetabolismAPBFontStyle
	{
	public:
		class UFont*                                               Font;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FontSize;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             TitlePadding;                                            // 0x000C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ValuePadding;                                            // 0x001C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EVerticalAlignment                                         TitleVerticalAlignment;                                  // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       TitleHorizontalAlignment;                                // 0x002D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         ValueVerticalAlignment;                                  // 0x002E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       ValueHorizontalAlignment;                                // 0x002F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MetabolismRadialProgressBarColorScheme
	 * Size -> 0x0080
	 */
	struct FMetabolismRadialProgressBarColorScheme
	{
	public:
		struct FLinearColor                                        BackgroundColor;                                         // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PrimaryBarColor;                                         // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PrimaryBarGlowColor;                                     // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SecondaryBarColor;                                       // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SecondaryBarGlowColor;                                   // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FontColor;                                               // 0x0050(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FontInnerGlowColor;                                      // 0x0060(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FontOuterGlowColor;                                      // 0x0070(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MetabolismRadialAttributeProgressBarColor
	 * Size -> 0x0030
	 */
	struct FMetabolismRadialAttributeProgressBarColor
	{
	public:
		struct FLinearColor                                        PositiveColor;                                           // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NeutralColor;                                            // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NegativeColor;                                           // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MetabolismRadialProgressBarFontSettings
	 * Size -> 0x0014
	 */
	struct FMetabolismRadialProgressBarFontSettings
	{
	public:
		int32_t                                                    FontSize;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             FontPadding;                                             // 0x0004(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConsumableSave
	 * Size -> 0x0100
	 */
	struct FConsumableSave
	{
	public:
		float                                                      MassToConsume;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConsumptionDuration;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Density;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJ45[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubstancesData                                     Substances;                                              // 0x0010(0x00D0) NativeAccessSpecifierPublic
		TArray<class FString>                                      ForeignSubstanceClasses;                                 // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      UserData;                                                // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConsumableDigestionHandlerSave
	 * Size -> 0x0010
	 */
	struct FConsumableDigestionHandlerSave
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DigestionItemSave
	 * Size -> 0x02C0
	 */
	struct FDigestionItemSave
	{
	public:
		struct FConsumableSave                                     Consumable;                                              // 0x0000(0x0100) NativeAccessSpecifierPublic
		float                                                      RemainingMassToConsume;                                  // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MassConsumed;                                            // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalMassConsumed;                                       // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MassAbsorbed;                                            // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSubstancesData                                     SubstancesInStomach;                                     // 0x0110(0x00D0) NativeAccessSpecifierPublic
		struct FSubstancesData                                     SubstancesInIntestine;                                   // 0x01E0(0x00D0) NativeAccessSpecifierPublic
		TArray<struct FConsumableDigestionHandlerSave>             DigestionHandlers;                                       // 0x02B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ForeignSubstanceSave
	 * Size -> 0x0010
	 */
	struct FForeignSubstanceSave
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MetabolismSPBColorScheme
	 * Size -> 0x0050
	 */
	struct FMetabolismSPBColorScheme
	{
	public:
		struct FLinearColor                                        BaseColor;                                               // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FillColorBottom;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FillColorTop;                                            // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OutlineColorBottom;                                      // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OutlineColorTop;                                         // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ZombieMeshVariation2
	 * Size -> 0x0010
	 */
	struct FZombieMeshVariation2
	{
	public:
		class USkeletalMesh*                                       DressedMesh;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       StrippedMesh;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ZombieRelaxedStanceAnimations
	 * Size -> 0x0008
	 */
	struct FZombieRelaxedStanceAnimations
	{
	public:
		class UAnimSequenceBase*                                   WalkLoopAnimation;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ZombieRelaxedStanceVariation2
	 * Size -> 0x0020
	 */
	struct FZombieRelaxedStanceVariation2
	{
	public:
		struct FZombieRelaxedStanceAnimations                      Animations;                                              // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      WalkAcceleration;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WalkDeceleration;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WalkSpeed;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WalkSpeedInAnimation;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WalkTurnRate;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3LP[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ZombieCombatStanceAnimations
	 * Size -> 0x0018
	 */
	struct FZombieCombatStanceAnimations
	{
	public:
		class UAnimSequenceBase*                                   RunStartAnimation;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   RunLoopAnimation;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   RunStopAnimation;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ZombieCombatStanceVariation2
	 * Size -> 0x0030
	 */
	struct FZombieCombatStanceVariation2
	{
	public:
		struct FZombieCombatStanceAnimations                       Animations;                                              // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RunAcceleration;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunDeceleration;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunSpeed;                                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunSpeedInAnimation;                                     // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunTurnRate;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5I46[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ZombieTurnMontageDescription
	 * Size -> 0x0028
	 */
	struct FZombieTurnMontageDescription
	{
	public:
		class UAnimMontage*                                        MontageL90;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageL180;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageR90;                                              // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageR180;                                             // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TurnAngleCurveName;                                      // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ZombieAttackDescription
	 * Size -> 0x0020
	 */
	struct FZombieAttackDescription
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      PitchRange;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistance;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegainControlMultiplier;                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VAY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MissionReward
	 * Size -> 0x0018
	 */
	struct FMissionReward
	{
	public:
		TArray<class UClass*>                                      RewardItems;                                             // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      RewardFamePoints;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RewardReceived;                                          // 0x0014(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10YD[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ObjectiveData
	 * Size -> 0x0030
	 */
	struct FObjectiveData
	{
	public:
		class FString                                              ObjectiveAssetId;                                        // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObjectiveState                                            ObjectiveState;                                          // 0x0010(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COQZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MissionData
	 * Size -> 0x00B8
	 */
	struct FMissionData
	{
	public:
		class FText                                                MissionName;                                             // 0x0000(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                MissionCategory;                                         // 0x0018(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                MissionDescription;                                      // 0x0030(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		EMissionType                                               MissionType;                                             // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLE7[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MissionOrdinalNumber;                                    // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMissionState                                              MissionState;                                            // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFaction                                                   MissionFaction;                                          // 0x0051(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6RV[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MissionStartingLocations[0x10];                          // 0x0058(0x0010) UNKNOWN PROPERTY: ArrayProperty
		int32_t                                                    IntendedNumberOfPlayers;                                 // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MissionCooldown;                                         // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUEK[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MissionAssetId;                                          // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FObjectiveData>                              ObjectivesData;                                          // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FMissionReward                                      MissionReward;                                           // 0x0098(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class UTexture2D*                                          MissionBannerImage;                                      // 0x00B0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MissionItemInfo
	 * Size -> 0x0038
	 */
	struct FMissionItemInfo
	{
	public:
		unsigned char                                              ItemLocation[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              ItemClass;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldRemove;                                            // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8X9V[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToDestroy;                                           // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MovableCollisionFieldState
	 * Size -> 0x0003
	 */
	struct FMovableCollisionFieldState
	{
	public:
		bool                                                       IsTurnedOn;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PackedCurrentPercentage;                                 // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovableCollisionFieldMoveType                             MoveType;                                                // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MovableCollisionFieldMoveInfo
	 * Size -> 0x0008
	 */
	struct FMovableCollisionFieldMoveInfo
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovableCollisionFieldMovementCurveType                    curveType;                                               // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q1FC[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.NotificationAndDelay
	 * Size -> 0x0010
	 */
	struct FNotificationAndDelay
	{
	public:
		class UNotificationDescription*                            Notification;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delay;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HV9E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerAirMovementParameters
	 * Size -> 0x001C
	 */
	struct FPrisonerAirMovementParameters
	{
	public:
		float                                                      TerminalVelocity;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateralMaxSpeed;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateralDrag;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesiredPitch;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawRotationRateFactor;                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlChangeSpeed;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragIntensity;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ParachuteAnimParams
	 * Size -> 0x0010
	 */
	struct FParachuteAnimParams
	{
	public:
		class UAnimSequence*                                       OpeningAnimation;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      OpeningAnimationTimeRange;                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PhysicalSurfaceData
	 * Size -> 0x001C
	 */
	struct FPhysicalSurfaceData
	{
	public:
		float                                                      DirtinessFactor;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetnessFactor;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LandingImpactVelocityModifier;                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseLoudnessModifier;                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootstepEnhancerChance;                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootwearDamageMultiplier;                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootAbrasionsMultiplier;                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PhysicalSurfaceVehicleTireParticleData
	 * Size -> 0x0010
	 */
	struct FPhysicalSurfaceVehicleTireParticleData
	{
	public:
		class UParticleSystem*                                     ParticleTrail;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ParticleWave;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PhysicalSurfaceVehicleEffectsData
	 * Size -> 0x0050
	 */
	struct FPhysicalSurfaceVehicleEffectsData
	{
	public:
		class UParticleSystem*                                     ParticleTrail;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleTrailSlipModifier;                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleTrailDestructionDelay;                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ParticleWave;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleWaveSlipModifier;                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleWaveDestructionDelay;                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPhysicalSurfaceVehicleTireParticleData             SmallTireParticles;                                      // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPhysicalSurfaceVehicleTireParticleData             MediumTireParticles;                                     // 0x0030(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPhysicalSurfaceVehicleTireParticleData             LargeTireParticles;                                      // 0x0040(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PhysicalSurfaceEffectsData
	 * Size -> 0x0050
	 */
	struct FPhysicalSurfaceEffectsData
	{
	public:
		struct FPhysicalSurfaceVehicleEffectsData                  Vehicle;                                                 // 0x0000(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PlaceableIngredient
	 * Size -> 0x0050
	 */
	struct FPlaceableIngredient
	{
	public:
		TArray<class UCraftingItemTag*>                            Tags;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      SpecificItems;                                           // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<ECraftingType>                                      TagsCraftingTypes;                                       // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ECraftingType>                                      SpecificItemsCraftingTypes;                              // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EPlaceableIngredientType                                   Type;                                                    // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5988[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Required;                                                // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Satisfied;                                               // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMUN[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TilesData
	 * Size -> 0x0018
	 */
	struct FTilesData
	{
	public:
		class UHierarchicalInstancedStaticMeshComponent*           HISMComponentMain;                                       // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHierarchicalInstancedStaticMeshComponent*           HISMComponentOutline;                                    // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHierarchicalInstancedStaticMeshComponent*           HISMComponentDepth;                                      // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SizeVariatedTilesData
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FSizeVariatedTilesData : public FTilesData
	{
	public:
		unsigned char                                              UnknownData_DY5T[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZBaseElementIdentifier
	 * Size -> 0x0020
	 */
	struct FConZBaseElementIdentifier
	{
	public:
		int64_t                                                    BaseId;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ElementID;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WFF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PlantMesh
	 * Size -> 0x0060
	 */
	struct FPlantMesh
	{
	public:
		struct FStaticMeshMaterialPair                             Mesh;                                                    // 0x0000(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      StageMorphTargetInterpolationRange;                      // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GrowthExponents;                                         // 0x0020(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QMY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PlantStageMeshData
	 * Size -> 0x0010
	 */
	struct FPlantStageMeshData
	{
	public:
		TArray<struct FPlantMesh>                                  Meshes;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PlantMeshData
	 * Size -> 0x0030
	 */
	struct FPlantMeshData
	{
	public:
		struct FPlantStageMeshData                                 VegetatingPlantMesh;                                     // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FPlantStageMeshData                                 FloweringPlantMesh;                                      // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		struct FPlantStageMeshData                                 RipeningPlantMesh;                                       // 0x0020(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PowerCableMeshInfo
	 * Size -> 0x0010
	 */
	struct FPowerCableMeshInfo
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5D9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PowerNodeConnector
	 * Size -> 0x0020
	 */
	struct FPowerNodeConnector
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldHaveCable;                                         // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_91AP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CableMeshIndex;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetConnectorIndex;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRNA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                CableMeshComponent;                                      // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VisualParameter
	 * Size -> 0x0014
	 */
	struct FVisualParameter
	{
	public:
		class FName                                                MorphName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialParamName;                                       // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerTattooMaterialSet
	 * Size -> 0x0058
	 */
	struct FPrisonerTattooMaterialSet
	{
	public:
		bool                                                       RequiresGameUpgrade;                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDeluxeVersion                                             GameUpgradeRequired;                                     // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_794C[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TattooTextures[0x50];                                    // 0x0008(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct ConZ.PrisonerMaxMovementPaceVsSeverityKey
	 * Size -> 0x0014
	 */
	struct FPrisonerMaxMovementPaceVsSeverityKey
	{
	public:
		struct FFloatRange                                         SeverityRange;                                           // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrisonerMovementPace                                      MaxMovementPace;                                         // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ETJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerMaxMovementPaceVsSeverity
	 * Size -> 0x0010
	 */
	struct FPrisonerMaxMovementPaceVsSeverity
	{
	public:
		TArray<struct FPrisonerMaxMovementPaceVsSeverityKey>       Keys;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.Bandage
	 * Size -> 0x000C
	 */
	struct FBandage
	{
	public:
		float                                                      _ratio;                                                  // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _asepsis;                                                // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _stabilizationDurationReduction;                         // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ConZ.Bandages
	 * Size -> 0x0018
	 */
	struct FBandages
	{
	public:
		float                                                      _amount;                                                 // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PJ83[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBandage>                                    _bandages;                                               // 0x0008(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodyBoneGroupsVsSeverityKey
	 * Size -> 0x0060
	 */
	struct FPrisonerBodyBoneGroupsVsSeverityKey
	{
	public:
		struct FFloatRange                                         SeverityRange;                                           // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Values[0x50];                                            // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodyBoneGroupsVsSeverity
	 * Size -> 0x0010
	 */
	struct FPrisonerBodyBoneGroupsVsSeverity
	{
	public:
		TArray<struct FPrisonerBodyBoneGroupsVsSeverityKey>        Keys;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodyMuscleGroupsVsSeverityKey
	 * Size -> 0x0060
	 */
	struct FPrisonerBodyMuscleGroupsVsSeverityKey
	{
	public:
		struct FFloatRange                                         SeverityRange;                                           // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Values[0x50];                                            // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodyMuscleGroupsVsSeverity
	 * Size -> 0x0010
	 */
	struct FPrisonerBodyMuscleGroupsVsSeverity
	{
	public:
		TArray<struct FPrisonerBodyMuscleGroupsVsSeverityKey>      Keys;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodyOrganGroupsVsSeverityKey
	 * Size -> 0x0060
	 */
	struct FPrisonerBodyOrganGroupsVsSeverityKey
	{
	public:
		struct FFloatRange                                         SeverityRange;                                           // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Values[0x50];                                            // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodyOrganGroupsVsSeverity
	 * Size -> 0x0010
	 */
	struct FPrisonerBodyOrganGroupsVsSeverity
	{
	public:
		TArray<struct FPrisonerBodyOrganGroupsVsSeverityKey>       Keys;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PBCTIIT_ApplyBandagesOrDisinfect_Disinfect_PerSkillData
	 * Size -> 0x0010
	 */
	struct FPBCTIIT_ApplyBandagesOrDisinfect_Disinfect_PerSkillData
	{
	public:
		TArray<int32_t>                                            NumUsesPerSeverityLevel;                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PBCTIIT_ApplyBandagesOrDisinfect_ApplyBandages_PerSkillData
	 * Size -> 0x0010
	 */
	struct FPBCTIIT_ApplyBandagesOrDisinfect_ApplyBandages_PerSkillData
	{
	public:
		TArray<int32_t>                                            NumUsesPerSeverityLevel;                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PBCTI_ApplyBandagesOrDisinfect_DisinfectData
	 * Size -> 0x0038
	 */
	struct FPBCTI_ApplyBandagesOrDisinfect_DisinfectData
	{
	public:
		float                                                      BaseActionDuration;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         ActionDurationLimits;                                    // 0x0004(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseExperienceGainVsSkillLevel[0x5];                     // 0x0014(0x0014) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       BeginInteractionPatientAudioEvent;                       // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       EndInteractionPatientAudioEvent;                         // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PBCTI_ApplyBandagesOrDisinfect_ApplyBandagesData
	 * Size -> 0x003C
	 */
	struct FPBCTI_ApplyBandagesOrDisinfect_ApplyBandagesData
	{
	public:
		float                                                      BaseActionDuration;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         ActionDurationLimits;                                    // 0x0004(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseExperienceGainVsSkillLevel[0x5];                     // 0x0014(0x0014) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StabilizationDurationReductionVsSkillLevel[0x5];         // 0x0028(0x0014) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerActionDifficultyCurve
	 * Size -> 0x0018
	 */
	struct FPrisonerActionDifficultyCurve
	{
	public:
		float                                                      _resting;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _idle;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _easy;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _demanding;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _veryDemanding;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _extremelyDemanding;                                     // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodySimulationData_BodyHeatGroupClothesLayerFactors
	 * Size -> 0x0010
	 */
	struct FPrisonerBodySimulationData_BodyHeatGroupClothesLayerFactors
	{
	public:
		TArray<float>                                              Factors;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange
	 * Size -> 0x0028
	 */
	struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange
	{
	public:
		struct FFloatRange                                         ValueRange;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsConstrainedByConsumptionMethod;                        // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameResourceConsumptionMethod                             ConsumptionMethodConstraint;                             // 0x0011(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMJJ[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UConsumableDigestionHandler*>                 DigestionHandlers;                                       // 0x0018(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodySimulationData_ConsumableDigestionHandlersForValueRanges
	 * Size -> 0x0010
	 */
	struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRanges
	{
	public:
		TArray<struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange> ValueRanges;                                             // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodySimulationData_Effects
	 * Size -> 0x0030
	 */
	struct FPrisonerBodySimulationData_Effects
	{
	public:
		class UClass*                                              Knockout;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BasicInjury;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BleedingInjury;                                          // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Choking;                                                 // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FoodDisgust;                                             // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Limping;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodySimulationData_BodyPartMappingArray
	 * Size -> 0x0010
	 */
	struct FPrisonerBodySimulationData_BodyPartMappingArray
	{
	public:
		TArray<EBodyPart>                                          BodyParts;                                               // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerBodyEffectSave
	 * Size -> 0x0010
	 */
	struct FPrisonerBodyEffectSave
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerHallucinationSymptomSeverityLevelParams
	 * Size -> 0x0004
	 */
	struct FPrisonerHallucinationSymptomSeverityLevelParams
	{
	public:
		int32_t                                                    MaxNumHallucinationIllusions;                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerHallucinationIllusionInfo
	 * Size -> 0x0088
	 */
	struct FPrisonerHallucinationIllusionInfo
	{
	public:
		unsigned char                                              Class[0x28];                                             // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              IncompatibleClasses[0x50];                               // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FInt32Range                                         SeverityLevelConstraint;                                 // 0x0078(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BasicPrisonerBodySymptomNotificationParameters
	 * Size -> 0x0028
	 */
	struct FBasicPrisonerBodySymptomNotificationParameters
	{
	public:
		struct FFloatRange                                         SeverityRange;                                           // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Notification;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumTriggers;                                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      TriggerInterval;                                         // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SVG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerMeleeAttackTypes
	 * Size -> 0x0088
	 */
	struct FPrisonerMeleeAttackTypes
	{
	public:
		struct FGameplayTag                                        PrimaryMeleeAttackTypeWhenNotMoving;                     // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        PrimaryMeleeAttackTypeWhenWalking;                       // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        PrimaryMeleeAttackTypeWhenJogging;                       // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        PrimaryMeleeAttackTypeWhenRunning;                       // 0x0018(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        PrimaryMeleeAttackTypeWhenFalling;                       // 0x0020(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SecondaryMeleeAttackTypeWhenNotMoving;                   // 0x0028(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SecondaryMeleeAttackTypeWhenWalking;                     // 0x0030(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SecondaryMeleeAttackTypeWhenJogging;                     // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SecondaryMeleeAttackTypeWhenRunning;                     // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SecondaryMeleeAttackTypeWhenFalling;                     // 0x0048(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ComboMeleeAttackTypeWhenNotMoving;                       // 0x0050(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ComboMeleeAttackTypeWhenWalking;                         // 0x0058(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ComboMeleeAttackTypeWhenJogging;                         // 0x0060(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ComboMeleeAttackTypeWhenRunning;                         // 0x0068(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ComboMeleeAttackTypeWhenFalling;                         // 0x0070(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        BashMeleeAttackType;                                     // 0x0078(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        WeaponBayonetMeleeAttackType;                            // 0x0080(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerTurnMontageDescription
	 * Size -> 0x0030
	 */
	struct FPrisonerTurnMontageDescription
	{
	public:
		class UAnimSequenceBase*                                   AnimationL90;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   AnimationR90;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TurnAngleCurveName;                                      // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTriggerTime;                                     // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ThrowingAnimationSet
	 * Size -> 0x0020
	 */
	struct FThrowingAnimationSet
	{
	public:
		class UAnimMontage*                                        PlayerLongThrowMontage;                                  // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PlayerLongThrowLoopMontage;                              // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PlayerShortThrowMontage;                                 // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PlayerThrowbackMontage;                                  // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerCommonData_ResponseIdles
	 * Size -> 0x0008
	 */
	struct FPrisonerCommonData_ResponseIdles
	{
	public:
		class UClass*                                              DirtyAfterProne;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BasicNotificationDescriptionData
	 * Size -> 0x0030
	 */
	struct FBasicNotificationDescriptionData
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FontSize;                                                // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22OL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IconSize;                                                // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ping;                                                    // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFH0[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Delay;                                                   // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerFirstPersonSubviewBlendOverride
	 * Size -> 0x0008
	 */
	struct FPrisonerFirstPersonSubviewBlendOverride
	{
	public:
		EPrisonerFirstPersonSubview                                Source;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrisonerFirstPersonSubview                                Target;                                                  // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FUJ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MapHUDObject
	 * Size -> 0x0018
	 */
	struct FMapHUDObject
	{
	public:
		unsigned char                                              UnknownData_8BU7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _priority;                                               // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _showText;                                               // 0x000C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _showMarkers;                                            // 0x000D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VVCN[0xA];                                   // 0x000E(0x000A) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MapHUDPrisonerObject
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMapHUDPrisonerObject : public FMapHUDObject
	{
	public:
		struct FVector2D                                           _prisonerPositionTextureSize;                            // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            _myPrisonerPositionTexture;                              // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            _prisonerPingAnimationTexture;                           // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _prisonerPingSizeMultiplier;                             // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UM67[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MapHUDHomeLocationObject
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FMapHUDHomeLocationObject : public FMapHUDObject
	{
	public:
		class UFont*                                               _font;                                                   // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FVRH[0x28];                                  // 0x0020(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MapHUDWorldEventsObject
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMapHUDWorldEventsObject : public FMapHUDObject
	{	};

	/**
	 * ScriptStruct ConZ.MapHUDOtherPlayersObject
	 * Size -> 0x00A8 (FullSize[0x00C0] - InheritedSize[0x0018])
	 */
	struct FMapHUDOtherPlayersObject : public FMapHUDObject
	{
	public:
		class UTexture*                                            _otherPlayerPositionOuterRingTexture;                    // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _otherPlayerOuterRingColor;                              // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _otherPlayerHighlightOuterRingColor;                     // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            _otherPlayerPositionInnerCicleTexture;                   // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _otherPlayerInnerCircleColor;                            // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _otherPlayerHighlightInnerCircleColor;                   // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFont*                                               _otherPlayerFont;                                        // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _otherPlayerNameHighlightColor;                          // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _otherPlayerNameHighlightOutlineColor;                   // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _otherPlayerNameColor;                                   // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _otherPlayerNameOutlineColor;                            // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           _prisonerPositionTextureSize;                            // 0x00B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _otherPlayerTextStackOffset;                             // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TXFX[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MapHUDDroneObject
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMapHUDDroneObject : public FMapHUDObject
	{
	public:
		class UTexture*                                            _droneDirectionTexture;                                  // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            _dronePositionTexture;                                   // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            _dronePingAnimationTexture;                              // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0RT4[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MapHUDVehiclesObject
	 * Size -> 0x00A8 (FullSize[0x00C0] - InheritedSize[0x0018])
	 */
	struct FMapHUDVehiclesObject : public FMapHUDObject
	{
	public:
		class UTexture*                                            _vehiclePositionOuterRingTexture;                        // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _vehicleOuterRingColor;                                  // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _vehicleHighlightOuterRingColor;                         // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            _vehiclePositionInnerCircleTexture;                      // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _vehicleInnerCircleColor;                                // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _vehicleHighlightInnerCircleColor;                       // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFont*                                               _vehicleFont;                                            // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _vehicleNameHighlightColor;                              // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _vehicleNameHighlightOutlineColor;                       // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _vehicleNameColor;                                       // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _vehicleNameOutlineColor;                                // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           _vehiclePositionTextureSize;                             // 0x00B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _vehicleTextStackOffset;                                 // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O5OT[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MapHUDFlagsObject
	 * Size -> 0x00A8 (FullSize[0x00C0] - InheritedSize[0x0018])
	 */
	struct FMapHUDFlagsObject : public FMapHUDObject
	{
	public:
		class UTexture*                                            _flagPositionOuterRingTexture;                           // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _flagOuterRingColor;                                     // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _flagHighlightOuterRingColor;                            // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            _flagPositionInnerCircleTexture;                         // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _flagInnerCircleColor;                                   // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _flagHighlightInnerCircleColor;                          // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFont*                                               _flagFont;                                               // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _flagNameHighlightColor;                                 // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _flagNameHighlightOutlineColor;                          // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _flagNameColor;                                          // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _flagNameOutlineColor;                                   // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           _flagPositionTextureSize;                                // 0x00B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _flagTextStackOffset;                                    // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0GAA[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ClothesPartSet
	 * Size -> 0x0050
	 */
	struct FClothesPartSet
	{
	public:
		unsigned char                                              ClothesParts[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct ConZ.QuickAccessData
	 * Size -> 0x0018
	 */
	struct FQuickAccessData
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemClass;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsThrowingMode;                                          // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQLE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerClimbAnimationInfo
	 * Size -> 0x0040
	 */
	struct FPrisonerClimbAnimationInfo
	{
	public:
		float                                                      MinEdgeHeight;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxEdgeHeight;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultDistance;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVaultLandHeightError;                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AnchorOffset;                                            // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F02F[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   AnchoringAnimation;                                      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnchoringAnimationTime;                                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnchoringDuration;                                       // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ClimbingMontage;                                         // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaDrain;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresEmptyLHand;                                      // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresEmptyRHand;                                      // 0x003D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8SX[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WindowClimbingAnimationInfo
	 * Size -> 0x0048
	 */
	struct FWindowClimbingAnimationInfo
	{
	public:
		struct FVector                                             AnchorOffset;                                            // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFHH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   AnchoringAnimation;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnchoringAnimationTime;                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnchoringDuration;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ClimbingMontage;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWindowWidth;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWindowHeight;                                         // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpacingToLeftWindowEdge;                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpacingToRightWindowEdge;                             // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWindowDistanceToFloor;                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWindowDistanceToFloor;                                // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaDrain;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AN3B[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WaterForceWhenSwimmingParams
	 * Size -> 0x0014
	 */
	struct FWaterForceWhenSwimmingParams
	{
	public:
		float                                                      DownstreamWaterForceMultiplier;                          // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpstreamWaterForceMultiplier;                            // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpulseThreshold;                                        // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpulseMultiplier;                                       // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpeedForUpstream;                                     // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.LadderInfoRepData
	 * Size -> 0x0050
	 */
	struct FLadderInfoRepData
	{
	public:
		struct FTransform                                          LadderTransform;                                         // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CapsuleBias;                                             // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RootBoneOffset;                                          // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepHeight;                                              // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           PhysicalSurfaceForSounds;                                // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NumberOfSteps;                                           // 0x004D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BE4A[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerGroundMovementParameters
	 * Size -> 0x000C
	 */
	struct FPrisonerGroundMovementParameters
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Deceleration;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Walking
	 * Size -> 0x0030
	 */
	struct FPrisonerMovementSettings_Ground_Standing_Walking
	{
	public:
		struct FPrisonerGroundMovementParameters                   Default;                                                 // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerGroundMovementParameters                   MeleeCombat;                                             // 0x000C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerGroundMovementParameters                   WeaponAiming;                                            // 0x0018(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerGroundMovementParameters                   WeaponAimingDownTheSights;                               // 0x0024(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Jogging
	 * Size -> 0x0024
	 */
	struct FPrisonerMovementSettings_Ground_Standing_Jogging
	{
	public:
		struct FPrisonerGroundMovementParameters                   Default;                                                 // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerGroundMovementParameters                   MeleeCombat;                                             // 0x000C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerGroundMovementParameters                   WeaponAiming;                                            // 0x0018(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Running
	 * Size -> 0x000C
	 */
	struct FPrisonerMovementSettings_Ground_Standing_Running
	{
	public:
		struct FPrisonerGroundMovementParameters                   Default;                                                 // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing
	 * Size -> 0x00B4
	 */
	struct FPrisonerMovementSettings_Ground_Standing
	{
	public:
		struct FPrisonerMovementSettings_Ground_Standing_Walking   Walking;                                                 // 0x0000(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerMovementSettings_Ground_Standing_Walking   WalkLimping;                                             // 0x0030(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerMovementSettings_Ground_Standing_Jogging   Jogging;                                                 // 0x0060(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerMovementSettings_Ground_Standing_Jogging   JogLimping;                                              // 0x0084(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerMovementSettings_Ground_Standing_Running   Running;                                                 // 0x00A8(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching_Walking
	 * Size -> 0x0024
	 */
	struct FPrisonerMovementSettings_Ground_Crouching_Walking
	{
	public:
		struct FPrisonerGroundMovementParameters                   Default;                                                 // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerGroundMovementParameters                   WeaponAiming;                                            // 0x000C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerGroundMovementParameters                   WeaponAimingDownTheSights;                               // 0x0018(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching
	 * Size -> 0x006C
	 */
	struct FPrisonerMovementSettings_Ground_Crouching
	{
	public:
		struct FPrisonerMovementSettings_Ground_Crouching_Walking  Walking;                                                 // 0x0000(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerMovementSettings_Ground_Crouching_Walking  WalkingFaster;                                           // 0x0024(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerMovementSettings_Ground_Crouching_Walking  WalkLimping;                                             // 0x0048(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone_Walking
	 * Size -> 0x0024
	 */
	struct FPrisonerMovementSettings_Ground_Prone_Walking
	{
	public:
		struct FPrisonerGroundMovementParameters                   Default;                                                 // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerGroundMovementParameters                   WeaponAiming;                                            // 0x000C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerGroundMovementParameters                   WeaponAimingDownTheSights;                               // 0x0018(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone
	 * Size -> 0x0024
	 */
	struct FPrisonerMovementSettings_Ground_Prone
	{
	public:
		struct FPrisonerMovementSettings_Ground_Prone_Walking      Walking;                                                 // 0x0000(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Ground
	 * Size -> 0x016C
	 */
	struct FPrisonerMovementSettings_Ground
	{
	public:
		struct FPrisonerMovementSettings_Ground_Standing           Standing;                                                // 0x0000(0x00B4) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerMovementSettings_Ground_Crouching          Crouching;                                               // 0x00B4(0x006C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerMovementSettings_Ground_Prone              Prone;                                                   // 0x0120(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFloatInterval                                      MaxSpeedMultiplierVsPerformanceRatio;                    // 0x0144(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      AccelerationMultiplierVsPerformanceRatio;                // 0x014C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      DecelerationMultiplierVsPerformanceRatio;                // 0x0154(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      MaxSpeedWhenImmersedInWaterVsPerformanceRatio;           // 0x015C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelerationMultiplierWhenImmersedInWater;               // 0x0164(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecelerationMultiplierWhenImmersedInWater;               // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerFallingPosePair
	 * Size -> 0x0002
	 */
	struct FPrisonerFallingPosePair
	{
	public:
		EPrisonerFallingPose                                       poseA;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrisonerFallingPose                                       poseB;                                                   // 0x0001(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerFallingPoseTransitionParams
	 * Size -> 0x0020
	 */
	struct FPrisonerFallingPoseTransitionParams
	{
	public:
		float                                                      TransitionTime;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QM33[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       TransitionAnimation;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      TransitionAnimationTimeRange;                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         TransitionPitchBlendOverrideCurve;                       // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Air
	 * Size -> 0x0140
	 */
	struct FPrisonerMovementSettings_Air
	{
	public:
		struct FPrisonerAirMovementParameters                      Fall;                                                    // 0x0000(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerAirMovementParameters                      SkydiveSlow;                                             // 0x001C(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerAirMovementParameters                      SkydiveFast;                                             // 0x0038(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerAirMovementParameters                      DiveHeadFirst;                                           // 0x0054(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerAirMovementParameters                      DiveFeetFirst;                                           // 0x0070(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerAirMovementParameters                      HandsBound;                                              // 0x008C(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		TMap<struct FPrisonerFallingPosePair, struct FPrisonerFallingPoseTransitionParams> PoseTransitionParamsMap;                                 // 0x00A8(0x0050) Edit, EditFixedSize, NativeAccessSpecifierPublic
		float                                                      JumpZVelocity;                                           // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2P45[0x3C];                                  // 0x00FC(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      JumpZVelocityMultiplierVsPerformanceRatio;               // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerWaterMovementParameters
	 * Size -> 0x000C
	 */
	struct FPrisonerWaterMovementParameters
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Deceleration;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerMovementSettings_Water
	 * Size -> 0x0054
	 */
	struct FPrisonerMovementSettings_Water
	{
	public:
		struct FPrisonerWaterMovementParameters                    Slow;                                                    // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerWaterMovementParameters                    Medium;                                                  // 0x000C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerWaterMovementParameters                    Fast;                                                    // 0x0018(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerWaterMovementParameters                    DivingSlow;                                              // 0x0024(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrisonerWaterMovementParameters                    DivingMedium;                                            // 0x0030(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFloatInterval                                      MaxSpeedMultiplierVsPerformanceRatio;                    // 0x003C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      AccelerationMultiplierVsPerformanceRatio;                // 0x0044(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      DecelerationMultiplierVsPerformanceRatio;                // 0x004C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerRestingData
	 * Size -> 0x0010
	 */
	struct FPrisonerRestingData
	{
	public:
		EPrisonerRestingMode                                       mode;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRestingOnGround;                                       // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasChangedTransform;                                     // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasDisabledCapsuleCollision;                             // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UAnimSequenceBase>                    RestingAnimation;                                        // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FeetIKOffset;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerRestingDataAutonomous
	 * Size -> 0x001C
	 */
	struct FPrisonerRestingDataAutonomous
	{
	public:
		bool                                                       HasDisabledMovement;                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EJ6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize                                 Location;                                                // 0x0004(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 EulerRotation;                                           // 0x0010(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerInitialSkillInfo
	 * Size -> 0x0010
	 */
	struct FPrisonerInitialSkillInfo
	{
	public:
		class USkill*                                              Skill;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESkillLevel                                                InitialLevel;                                            // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZK8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialExperiencePoints;                                 // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SkillRecord
	 * Size -> 0x000C
	 */
	struct FSkillRecord
	{
	public:
		ESkillReplicationID                                        ID;                                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWDE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExperiencePoints;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESkillLevel                                                Level;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     counter;                                                 // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1ZG[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ActiveMovingThroughFoliageSounds
	 * Size -> 0x0020
	 */
	struct FActiveMovingThroughFoliageSounds
	{
	public:
		unsigned char                                              UnknownData_T1RV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       StartAudioEvent;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StopAudioEvent;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSN0[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.LocalOffsetCurves
	 * Size -> 0x0020
	 */
	struct FLocalOffsetCurves
	{
	public:
		class UCurveLinearColor*                                   YawIdle;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   YawMoving;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   PitchIdle;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   PitchMoving;                                             // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerThirdPersonSubviewBlendOverride
	 * Size -> 0x0008
	 */
	struct FPrisonerThirdPersonSubviewBlendOverride
	{
	public:
		EPrisonerThirdPersonSubview                                Source;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrisonerThirdPersonSubview                                Target;                                                  // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ODK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ProjectileData
	 * Size -> 0x0050
	 */
	struct FProjectileData
	{
	public:
		class FText                                                Caption;                                                 // 0x0000(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      Caliber;                                                 // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MuzzleVelocity;                                          // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BallisticCoefficient;                                    // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBallisticDragModel                                        BallisticDragModel;                                      // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EXO[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialDamage;                                           // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialDamageInGameEvent;                                // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenetrationFactor;                                       // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlancingAngle;                                           // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowGlanceOrForceBounce;                                // 0x003C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WYS[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BounceAngle;                                             // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmorPiercingFactor;                                     // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanCauseHeadExplosion;                                   // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHD3[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.FiredShotDescriptionRep
	 * Size -> 0x0004
	 */
	struct FFiredShotDescriptionRep
	{
	public:
		uint32_t                                                   PackedData;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ProjectileArrowData
	 * Size -> 0x0020
	 */
	struct FProjectileArrowData
	{
	public:
		class UClass*                                              AmmunitionArrowClass;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemsHealth;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StiffnessFactor;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlightRotationCorrectionSpeed;                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeviationDegrees;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPartOfEvent;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ETT3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ImpactEffectData
	 * Size -> 0x0010
	 */
	struct FImpactEffectData
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           Decal;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.RadioProgramData
	 * Size -> 0x0018
	 */
	struct FRadioProgramData
	{
	public:
		class UClass*                                              ProgramClass;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URadioProgram*                                       Program;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z153[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.RequiredRepairingItemTagParams
	 * Size -> 0x0010
	 */
	struct FRequiredRepairingItemTagParams
	{
	public:
		class UBaseItemTag*                                        ItemTag;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemUsageConsumption;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VM68[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.RepairToolItemParams
	 * Size -> 0x0058
	 */
	struct FRepairToolItemParams
	{
	public:
		struct FGameplayTagContainer                               RepairableItemTypes;                                     // 0x0000(0x0020) Edit, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StartRepairSound;                                        // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StopRepairSound;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        StartRepairMontage;                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        StopRepairMontage;                                       // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthGainPerUseMultiplier;                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZB2C[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRequiredRepairingItemTagParams>             RequiredRepairingItemTagsParms;                          // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.RespawnParameters
	 * Size -> 0x0058
	 */
	struct FRespawnParameters
	{
	public:
		int32_t                                                    RandomLocationPrice;                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SectorLocationPrice;                                     // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShelterLocationPrice;                                    // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SquadLocationPrice;                                      // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomPriceModifier;                                     // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SectorPriceModifier;                                     // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HomePriceModifier;                                       // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomInitialTime;                                       // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SectorInitialTime;                                       // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShelterInitialTime;                                      // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SquadInitialTime;                                        // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomCooldownTime;                                      // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SectorCooldownTime;                                      // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShelterCooldownTime;                                     // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SquadCooldownTime;                                       // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomCooldownResetMultiplier;                           // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SectorCooldownResetMultiplier;                           // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShelterCooldownResetMultiplier;                          // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SquadCooldownResetMultiplier;                            // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommitSuicideInitialTime;                                // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommitSuicideCooldownTime;                               // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CommitSuicideCooldownResetMultiplier;                    // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.RunningSkillParametersPerSkillLevel
	 * Size -> 0x0010
	 */
	struct FRunningSkillParametersPerSkillLevel
	{
	public:
		struct FExperienceDependentFloat                           MaxSpeedMultiplier;                                      // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FExperienceDependentFloat                           StaminaConsumptionMultiplier;                            // 0x0008(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ScopeZoomLevelSettings
	 * Size -> 0x0570
	 */
	struct FScopeZoomLevelSettings
	{
	public:
		float                                                      Magnification;                                           // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplayedMagnification;                                  // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MCF0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                PostProcessSettings;                                     // 0x0010(0x0560) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SearchPerItemData
	 * Size -> 0x0048
	 */
	struct FSearchPerItemData
	{
	public:
		unsigned char                                              ItemClass[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<class UPhysicalMaterial*>                           NeededMaterials;                                         // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Probability;                                             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinQuantity;                                             // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxQuantity;                                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGOP[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SedentaryNPCHeadAnimationAndAudio
	 * Size -> 0x0018
	 */
	struct FSedentaryNPCHeadAnimationAndAudio
	{
	public:
		class UAnimMontage*                                        HeadAnimation;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideNativeTrackingAnimations;                        // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FCL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.BodyPartData
	 * Size -> 0x0014
	 */
	struct FBodyPartData
	{
	public:
		float                                                      CollisionDamageMultiplierPerBodyPart;                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionDamageMultiplierPerBodyPart;                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyPartMaxHealth;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGG7[0x8];                                   // 0x000C(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SentryPatrolPoint
	 * Size -> 0x0020
	 */
	struct FSentryPatrolPoint
	{
	public:
		struct FVector                                             LocationRelativeToSentry;                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A70O[0x14];                                  // 0x000C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.DetectionDelayTimerData
	 * Size -> 0x0010
	 */
	struct FDetectionDelayTimerData
	{
	public:
		float                                                      MinDetectionDelayBasedOnDistance;                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDetectionDelayBasedOnDistance;                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDetectionDelayBasedOnVisibility;                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDetectionDelayBasedOnVisibility;                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ServerInfo
	 * Size -> 0x0050
	 */
	struct FServerInfo
	{
	public:
		class FString                                              Address;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVI9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlayerCount;                                             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxPlayerCount;                                          // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PasswordProtected;                                       // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZ9Y[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ping;                                                    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InGameTime;                                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNC7[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Version;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsComplete;                                              // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3D6[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SliderWithLabelAndNumberTextStyle
	 * Size -> 0x0068
	 */
	struct FSliderWithLabelAndNumberTextStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0000(0x0058) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0058(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SliderWithLabelAndNumberStyle
	 * Size -> 0x0158
	 */
	struct FSliderWithLabelAndNumberStyle
	{
	public:
		struct FSlateBrush                                         FocusBackgroundImage;                                    // 0x0000(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSliderWithLabelAndNumberTextStyle                  LabelText;                                               // 0x0088(0x0068) Edit, NativeAccessSpecifierPublic
		struct FSliderWithLabelAndNumberTextStyle                  NumberText;                                              // 0x00F0(0x0068) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ParticleCollisionDecalData
	 * Size -> 0x0018
	 */
	struct FParticleCollisionDecalData
	{
	public:
		class UMaterialInterface*                                  Decal;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSize;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSize;                                                 // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinLifetime;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLifetime;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.StartLocationDescription
	 * Size -> 0x0050
	 */
	struct FStartLocationDescription
	{
	public:
		unsigned char                                              TypeFlags;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WK4A[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsDisabled;                                              // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1D8[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CompassSkillParametersPerSkillLevel
	 * Size -> 0x0001
	 */
	struct FCompassSkillParametersPerSkillLevel
	{
	public:
		unsigned char                                              CompassSkillLevel;                                       // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.HandsPoseCorrections
	 * Size -> 0x0040
	 */
	struct FHandsPoseCorrections
	{
	public:
		class UAnimSequenceBase*                                   RightHand;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   RightFist;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   RightFistInCombatMode;                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightHandToIdleBlendAlpha;                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GI7U[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   LeftHand;                                                // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   LeftFist;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   LeftFistInCombatMode;                                    // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftHandToIdleBlendAlpha;                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXNK[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ItemFirstPersonUpperBodyAnimationsData
	 * Size -> 0x0050
	 */
	struct FItemFirstPersonUpperBodyAnimationsData
	{
	public:
		class UAnimSequenceBase*                                   StandIdle;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       StandWalk;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       StandWalkLimping;                                        // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       StandJog;                                                // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       StandJogLimping;                                         // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   StandRun;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   CrouchIdle;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       CrouchWalk;                                              // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       CrouchWalkLimping;                                       // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   ProneIdle;                                               // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TeamDeathmatchParameters
	 * Size -> 0x0014
	 */
	struct FTeamDeathmatchParameters
	{
	public:
		int32_t                                                    RoundScoreLimit;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AreaRestrictionInterval;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AreaRestrictionDuration;                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AreaRestrictionStep;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarrierHeatUpDuration;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TeleportUserDataReplicator
	 * Size -> 0x0008
	 */
	struct FTeleportUserDataReplicator
	{
	public:
		class UTeleportUserData*                                   UserData;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TeleportRepData
	 * Size -> 0x0030
	 */
	struct FTeleportRepData
	{
	public:
		unsigned char                                              RequestID;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInProgress;                                            // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L13D[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               Subject;                                                 // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetLocation;                                          // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZRS[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTeleportUserDataReplicator                         UserDataReplicator;                                      // 0x0028(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MeleeWeaponDesc
	 * Size -> 0x0028
	 */
	struct FMeleeWeaponDesc
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageInGameEvent;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Energy;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SharpnessSlash;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SharpnessPierce;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitSeverityChange;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterImpactSourceSoundCategory                        ImpactSoundCategory;                                     // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUEE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProjectileImpactEffects*                            ImpactEffects;                                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TireSurfaceAudioEntry
	 * Size -> 0x0018
	 */
	struct FTireSurfaceAudioEntry
	{
	public:
		class UAkAudioEvent*                                       SoundGroup;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPhysicalSurface>                                   RelatedPhysicalSurfaces;                                 // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TournamentStats
	 * Size -> 0x0030
	 */
	struct FTournamentStats
	{
	public:
		struct FDbIntegerId                                        UserProfileId;                                           // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerName;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       online;                                                  // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Alive;                                                   // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBGN[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FamePoints;                                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastDeathTime;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.Tractor4WAnimWheelData
	 * Size -> 0x0008
	 */
	struct FTractor4WAnimWheelData
	{
	public:
		float                                                      RollAngle;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SteerAngle;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SedentaryNPCMarker
	 * Size -> 0x0068
	 */
	struct FSedentaryNPCMarker
	{
	public:
		unsigned char                                              SedentaryNPCClass[0x28];                                 // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              UnknownData_YIHI[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0030(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ShouldRaycastSpawnPosition;                              // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5U2[0x7];                                   // 0x0061(0x0007) Fix size for supers
	};

	/**
	 * ScriptStruct ConZ.TraderMarker
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	struct FTraderMarker : public FSedentaryNPCMarker
	{
	public:
		class UTraderPersonalityDataAsset*                         TraderPersonality;                                       // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          PurchasedTradeablesSpawnTransform;                       // 0x0070(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          DepotSpawnTransform;                                     // 0x00A0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SpawnedDepotsHelperStruct
	 * Size -> 0x0058
	 */
	struct FSpawnedDepotsHelperStruct
	{
	public:
		unsigned char                                              UnknownData_JBU2[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TraderDropdownMenuEntry
	 * Size -> 0x0050
	 */
	struct FTraderDropdownMenuEntry
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		int32_t                                                    IndentationLevel;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BT0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               TradeCategories;                                         // 0x0020(0x0020) Edit, NativeAccessSpecifierPublic
		class UUserWidget*                                         RelatedCategoryButton;                                   // 0x0040(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPanelWidget*                                        PanelToOpenOnClick;                                      // 0x0048(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TraderMarkerTradeableOverrideStruct
	 * Size -> 0x0038
	 */
	struct FTraderMarkerTradeableOverrideStruct
	{
	public:
		unsigned char                                              TradeableClass[0x28];                                    // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    BasePlayerPurchasePrice;                                 // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BasePlayerSellPrice;                                     // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaPrice;                                              // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOverridingPurchaseAbility;                             // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePurchasedByPlayer;                                  // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QA1[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TradeablesResponseData
	 * Size -> 0x0050
	 */
	struct FTradeablesResponseData
	{
	public:
		unsigned char                                              UnknownData_FSGA[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VehicleCorpseBurningParticles
	 * Size -> 0x0070
	 */
	struct FVehicleCorpseBurningParticles
	{
	public:
		class UParticleSystem*                                     Particles;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XW03[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ParticlesTransform;                                      // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FHeatSourceParameters                               HeatSourceParameters;                                    // 0x0040(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDbIntegerId                                        HeatSourceId;                                            // 0x0068(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleHitZoneData
	 * Size -> 0x0030
	 */
	struct FVehicleHitZoneData
	{
	public:
		class UStaticMesh*                                         HitMesh;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2E6[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  HitZoneMaterial;                                         // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  DeactivatedHitZoneMaterial;                              // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X86A[0x4];                                   // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsHitMeshAttached;                                       // 0x002C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTH1[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.AirplaneWingHitZoneData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAirplaneWingHitZoneData : public FVehicleHitZoneData
	{
	public:
		EAerodynamicSurfaceType                                    Type;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKF7[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WeaponTypeMontage
	 * Size -> 0x0018
	 */
	struct FWeaponTypeMontage
	{
	public:
		EWeaponType                                                WeaponType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G9D6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         SupportedYawAngles;                                      // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleWeaponAimingStanceTransitionMontages
	 * Size -> 0x0018
	 */
	struct FVehicleWeaponAimingStanceTransitionMontages
	{
	public:
		EVehicleWeaponAimingStance                                 stance;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QD02[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponTypeMontage>                          WeaponTypeMontages;                                      // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleWeaponAimingStanceTransitionCurves
	 * Size -> 0x0010
	 */
	struct FVehicleWeaponAimingStanceTransitionCurves
	{
	public:
		EVehicleWeaponAimingStance                                 stance;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Y8E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SupportedYawAngles;                                      // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.FirstPersonViewParameters
	 * Size -> 0x0028
	 */
	struct FFirstPersonViewParameters
	{
	public:
		struct FFloatInterval                                      MinMaxViewPitch;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      MinMaxViewYaw;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      MinMaxViewYawInCombatMode;                               // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      MinMaxViewYawIfBlocked;                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   MinMaxViewPitchByYaw;                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleWeaponAimingFirstPersonData
	 * Size -> 0x0048
	 */
	struct FVehicleWeaponAimingFirstPersonData
	{
	public:
		struct FFirstPersonViewParameters                          ViewParameters;                                          // 0x0000(0x0028) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LocationOffset;                                          // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBSP[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        LocationOffsetByYaw;                                     // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        LocationOffsetByPitch;                                   // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BasePoseAimOffsetPair
	 * Size -> 0x0018
	 */
	struct FBasePoseAimOffsetPair
	{
	public:
		class UAnimSequenceBase*                                   UpperBodyPose;                                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   LowerBodyPose;                                           // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         AimOffset;                                               // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleThirdPersonWeaponTypeData
	 * Size -> 0x0038
	 */
	struct FVehicleThirdPersonWeaponTypeData
	{
	public:
		EWeaponType                                                WeaponType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       alwaysIgnorePreMountAimOffsets;                          // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YQ5[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBasePoseAimOffsetPair                              IdlePoseAndAimOffset[0x2];                               // 0x0008(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleWeaponAimingThirdPersonData
	 * Size -> 0x0010
	 */
	struct FVehicleWeaponAimingThirdPersonData
	{
	public:
		TArray<struct FVehicleThirdPersonWeaponTypeData>           WeaponTypeData;                                          // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleWeaponAimingStanceData
	 * Size -> 0x0078
	 */
	struct FVehicleWeaponAimingStanceData
	{
	public:
		TArray<struct FVehicleWeaponAimingStanceTransitionMontages> StanceTransitionMontages;                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FVehicleWeaponAimingStanceTransitionCurves>  SupportedAnglesForTransition;                            // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVehicleWeaponAimingFirstPersonData                 FirstPerson;                                             // 0x0020(0x0048) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FVehicleWeaponAimingThirdPersonData                 ThirdPerson;                                             // 0x0068(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleSpawnerDataBasedOnPreset
	 * Size -> 0x0028
	 */
	struct FVehicleSpawnerDataBasedOnPreset
	{
	public:
		class UClass*                                              Preset;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideVehicleAssets;                                   // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideProbability;                                     // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DS4G[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             VehicleAssets;                                           // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Probability;                                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SS6S[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VehicleSpawnerMarker
	 * Size -> 0x0060
	 */
	struct FVehicleSpawnerMarker
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVehicleSpawnerDataBasedOnPreset                    Spawner;                                                 // 0x0030(0x0028) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKE6[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ExpirableVehicleSpawner
	 * Size -> 0x0028
	 */
	struct FExpirableVehicleSpawner
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ExpirationTime;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     VehicleAssetId;                                          // 0x0014(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHHO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VehicleSpawnerData
	 * Size -> 0x0018
	 */
	struct FVehicleSpawnerData
	{
	public:
		TArray<struct FPrimaryAssetId>                             VehicleAssets;                                           // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Probability;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EU9I[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ClassesArray
	 * Size -> 0x0020
	 */
	struct FClassesArray
	{
	public:
		TArray<class UClass*>                                      Classes;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ProhibitedClasses;                                       // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WashItemData
	 * Size -> 0x0010
	 */
	struct FWashItemData
	{
	public:
		class UClass*                                              CleanItem;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WashItemUsage;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8GD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.Waypoint
	 * Size -> 0x0030
	 */
	struct FWaypoint
	{
	public:
		EAnimalWaypointType                                        Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7EP4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Center;                                                  // 0x0004(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AnimalsSpawnedNum;                                       // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9T6W[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class AAnimal2>>                     SpawnedAnimals;                                          // 0x0020(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MeshMaterialPair
	 * Size -> 0x0010
	 */
	struct FMeshMaterialPair
	{
	public:
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstance*                                   EquippedMaterialOverride;                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponBowAimOffsets
	 * Size -> 0x0018
	 */
	struct FWeaponBowAimOffsets
	{
	public:
		class UBlendSpace*                                         DrawPercentage[0x3];                                     // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponBowArmsShake
	 * Size -> 0x0030
	 */
	struct FWeaponBowArmsShake
	{
	public:
		class UAnimSequenceBase*                                   ThirdPerson[0x3];                                        // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   FirstPerson[0x3];                                        // 0x0018(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponBowStateDataReplicated
	 * Size -> 0x000C
	 */
	struct FWeaponBowStateDataReplicated
	{
	public:
		EBowDrawPercentage                                         BowDrawPercentage;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JS7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoldTimeInFullDraw;                                      // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponBowState                                            WeaponBowState;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2N7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.RandomRollStage
	 * Size -> 0x0098
	 */
	struct FRandomRollStage
	{
	public:
		struct FFloatInterval                                      BaseValueRollInterval;                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  BaseValueTargetCurve;                                    // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		float                                                      BaseValueTargetInterpSpeed;                              // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T115[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MultistageRandomRoll
	 * Size -> 0x0068
	 */
	struct FMultistageRandomRoll
	{
	public:
		struct FFloatInterval                                      _valueRange;                                             // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _shouldWrapValue;                                        // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FJ5B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRandomRollStage>                            _baseValueRollStages;                                    // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       _isVarianceEnabled;                                      // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I0TS[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      _varianceRollInterval;                                   // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFloatInterval                                      _varianceTargetInterval;                                 // 0x002C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _varianceTargetInterpSpeed;                              // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OT9A[0x2C];                                  // 0x0038(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _baseValueStageToSetWhenForcingBaseValue;                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ConZ.WheelBarrowParametersPerMovementPace
	 * Size -> 0x0020
	 */
	struct FWheelBarrowParametersPerMovementPace
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DB62[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseMaxForwardSpeed;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseMaxForwardSpeedLimping;                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanReverse;                                              // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASEV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseMaxReverseSpeed;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseMaxReverseSpeedLimping;                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseMaxLoad;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPrisonerStrength;                                     // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ZoneConfiguration
	 * Size -> 0x0018
	 */
	struct FZoneConfiguration
	{
	public:
		bool                                                       IsItemPlacementAllowed;                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AreVehiclesAllowed;                                      // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDM2[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EInteractionType>                                   InteractionsToDisable;                                   // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ItemObstructionTestCapsule
	 * Size -> 0x0050
	 */
	struct FItemObstructionTestCapsule
	{
	public:
		unsigned char                                              UnknownData_RYK3[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WidgetDisplayInfo
	 * Size -> 0x000C
	 */
	struct FWidgetDisplayInfo
	{
	public:
		EWidgetDisplayInfoType                                     DisplayType;                                             // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QL8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    First;                                                   // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Second;                                                  // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BaseInteractionParams
	 * Size -> 0x0008
	 */
	struct FBaseInteractionParams
	{
	public:
		struct FDbIntegerId                                        ElementID;                                               // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.InteractionData
	 * Size -> 0x0048
	 */
	struct FInteractionData
	{
	public:
		bool                                                       ModifierPressed;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWVJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntegerData;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             PointerData;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolData;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJL7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TextData;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
		struct FVector                                             InteractionLocation;                                     // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VectorData;                                              // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.GameplayRules
	 * Size -> 0x0018
	 */
	struct FGameplayRules
	{
	public:
		bool                                                       AllowFirstperson;                                        // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowThirdperson;                                        // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowCrosshair;                                          // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowGlobalChat;                                         // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowLocalChat;                                          // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowSquadChat;                                          // 0x0005(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowAdminChat;                                          // 0x0006(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowMapScreen;                                          // 0x0007(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToRemainInGameAfterLeaveGameRequest;                 // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToRemainInGameAfterLeaveGameRequestWhileCaptured;    // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LimitSquadMembers;                                       // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowComa;                                               // 0x0011(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowVoting;                                             // 0x0012(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowTraps;                                              // 0x0013(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HideKillNotification;                                    // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowKillClaiming;                                       // 0x0015(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTRH[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PlayerLoginInfo
	 * Size -> 0x0068
	 */
	struct FPlayerLoginInfo
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDbIntegerId                                        UserProfileId;                                           // 0x0010(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserProfileName;                                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUserAdmin;                                             // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayAsDrone;                                             // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDeluxeVersion                                      DeluxeVersion;                                           // 0x002A(0x0003) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L15K[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerName;                                              // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerResponsePort;                                      // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00A4[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDbIntegerId                                        ServerUserProfileId;                                     // 0x0048(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayRules                                      GameplayRules;                                           // 0x0050(0x0018) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CaughtFishData
	 * Size -> 0x0008
	 */
	struct FCaughtFishData
	{
	public:
		EFishSpecies                                               FishSpecies;                                             // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83ZZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.FishingStats
	 * Size -> 0x0028
	 */
	struct FFishingStats
	{
	public:
		int32_t                                                    FishCaught;                                              // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FishKept;                                                // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FishReleased;                                            // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LinesBroken;                                             // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeaviestFishCaught;                                      // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LongestFishCaught;                                       // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCaughtFishData>                             FishSpeciesCaught;                                       // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SurvivalStats
	 * Size -> 0x0180
	 */
	struct FSurvivalStats
	{
	public:
		unsigned char                                              UnknownData_UK7R[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HighestPositiveFamePoints;                               // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DoorsClaimed;                                            // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AnimalsKilled;                                           // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinutesSurvived;                                         // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LocksPicked;                                             // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PuppetsKilled;                                           // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GunsCrafted;                                             // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmmoCrafted;                                             // 0x002C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BulletsCrafted;                                          // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArrowsCrafted;                                           // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClothingCrafted;                                         // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LongestKillDistance;                                     // 0x003C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeleeKills;                                              // 0x0040(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArcheryKills;                                            // 0x0044(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayersKnockedOut;                                       // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalDefecations;                                        // 0x004C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalUrinations;                                         // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LightsFired;                                             // 0x0054(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ContainersLooted;                                        // 0x0058(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemsPutIntoContainers;                                  // 0x005C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeathsByPrisoners;                                       // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AnimalsSkinned;                                          // 0x0064(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoodEaten;                                               // 0x0068(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceTravelledByFoot;                                 // 0x006C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WoundsPatched;                                           // 0x0070(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemsPickedUp;                                           // 0x0074(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LiquidDrank;                                             // 0x0078(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeethLost;                                               // 0x007C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalCaloriesIntake;                                     // 0x0080(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShotsFired;                                              // 0x0084(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShotsHit;                                                // 0x0088(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeWeaponAccuracy;                                     // 0x008C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Headshots;                                               // 0x0090(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeleeWeaponSwings;                                       // 0x0094(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeleeWeaponHits;                                         // 0x0098(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeleeWeaponAccuracy;                                     // 0x009C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeleeWeaponsCrafted;                                     // 0x00A0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DroneKills;                                              // 0x00A4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SentryKills;                                             // 0x00A8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrisonerKills;                                           // 0x00AC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PuppetsKnockedOut;                                       // 0x00B0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Diarrheas;                                               // 0x00B4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Vomits;                                                  // 0x00B8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceTravelledInVehicle;                              // 0x00BC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MushroomsEaten;                                          // 0x00C0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighestMuscleMass;                                       // 0x00C4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighestFat;                                              // 0x00C8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeartAttacks;                                            // 0x00CC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Overdose;                                                // 0x00D0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Starvation;                                              // 0x00D4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighestDamageTaken;                                      // 0x00D8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighestWeightCarried;                                    // 0x00DC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventsWon;                                               // 0x00E0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventsLost;                                              // 0x00E4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowestNegativeFamePoints;                                // 0x00E8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceTravelledSwimming;                               // 0x00EC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventsEnemyKills;                                        // 0x00F0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventsDeaths;                                            // 0x00F4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FlagCaptures;                                            // 0x00F8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CrowsKilled;                                             // 0x00FC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SeagullsKilled;                                          // 0x0100(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HorsesKilled;                                            // 0x0104(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoarsKilled;                                             // 0x0108(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BearsKilled;                                             // 0x010C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GoatsKilled;                                             // 0x0110(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeersKilled;                                             // 0x0114(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChickensKilled;                                          // 0x0118(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RabbitsKilled;                                           // 0x011C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DonkeysKilled;                                           // 0x0120(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WolvesKilled;                                            // 0x0124(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesMauledByABear;                                      // 0x0128(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LongestAnimalKillDistance;                               // 0x012C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventTeamKills;                                          // 0x0130(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KillDeathRatio;                                          // 0x0134(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventsKillDeathRatio;                                    // 0x0138(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlcoholDrank;                                            // 0x013C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FoliageCut;                                              // 0x0140(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46NW[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFishingStats                                       FishingStats;                                            // 0x0148(0x0028) BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      DistanceTravelledByBoat;                                 // 0x0170(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceSailed;                                          // 0x0174(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesCaughtByShark;                                      // 0x0178(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesEscapedSharkBite;                                   // 0x017C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TeleportRequest
	 * Size -> 0x0028
	 */
	struct FTeleportRequest
	{
	public:
		TWeakObjectPtr<class AActor>                               Subject;                                                 // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x0014(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UTeleportUserData>                    UserData;                                                // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TriggeredEventData
	 * Size -> 0x0010
	 */
	struct FTriggeredEventData
	{
	public:
		unsigned char                                              UnknownData_IHEK[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CharacterActionReplicationHelper
	 * Size -> 0x0018
	 */
	struct FCharacterActionReplicationHelper
	{
	public:
		unsigned char                                              UnknownData_JOWG[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.EnvironmentDescription
	 * Size -> 0x0003
	 */
	struct FEnvironmentDescription
	{
	public:
		EEnvironmentClass                                          EnvironmentClass;                                        // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnderground;                                           // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldBlockWeatherEffects;                               // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterActionAck
	 * Size -> 0x000C
	 */
	struct FCharacterActionAck
	{
	public:
		int32_t                                                    ActionId;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubActionIndex;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterActionAckType                                    Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterActionEndState                                   EndState;                                                // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLU8[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MeleeAttackCapsule
	 * Size -> 0x0070
	 */
	struct FMeleeAttackCapsule
	{
	public:
		TWeakObjectPtr<class AActor>                               AttachParent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        attachment;                                              // 0x0008(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      UnscaledRadius;                                          // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnscaledHalfHeight;                                      // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMeleeWeaponDesc                                    WeaponDesc;                                              // 0x0048(0x0028) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MeleeAttackCapsuleHitInfo
	 * Size -> 0x0120
	 */
	struct FMeleeAttackCapsuleHitInfo
	{
	public:
		struct FMeleeAttackCapsule                                 MeleeAttackCapsule;                                      // 0x0000(0x0070) NoDestructor, NativeAccessSpecifierPublic
		struct FHitResult                                          HitResult;                                               // 0x0070(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		EHitSeverity                                               HitSeverity;                                             // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttackType                                                AttackType;                                              // 0x00F9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3U9X[0x2];                                   // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize100                              AttackerLocation;                                        // 0x00FC(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              VictimLocation;                                          // 0x0108(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6IB[0xC];                                   // 0x0114(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.BaseInteractionEvent
	 * Size -> 0x0008
	 */
	struct FBaseInteractionEvent
	{
	public:
		unsigned char                                              UnknownData_ASUL[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfoReplicated
	 * Size -> 0x0010
	 */
	struct FPrisonerNearbyFoliageInstanceInfoReplicated
	{
	public:
		TWeakObjectPtr<class UInstancedStaticMeshComponent>        InstancedMeshComponent;                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPackedLocation                                     PackedLocation;                                          // 0x0008(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerTeleportRequest
	 * Size -> 0x001C
	 */
	struct FPrisonerTeleportRequest
	{
	public:
		unsigned char                                              UnknownData_NOF4[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SectorId
	 * Size -> 0x0008
	 */
	struct FSectorId
	{
	public:
		unsigned char                                              UnknownData_JAJA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ScumPointDamageEvent
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	struct FScumPointDamageEvent : public FPointDamageEvent
	{
	public:
		unsigned char                                              UnknownData_EGJV[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.NetPackedProjectileDamageEvent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	struct FNetPackedProjectileDamageEvent : public FScumPointDamageEvent
	{
	public:
		struct FVector_NetQuantize100                              DealerLocation;                                          // 0x00B0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              TargetLocation;                                          // 0x00BC(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileMass;                                          // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileSpeed;                                         // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileMuzzleVelocity;                                // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SharpnessHardnessPacked;                                 // 0x00D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ArmorPiercingFactorPacked;                               // 0x00D5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EventDataPacked;                                         // 0x00D6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVWS[0x1];                                   // 0x00D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WeaponClass;                                             // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             DamageDealer;                                            // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceTravelled;                                       // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExperienceMultiplier;                                    // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.AmmunitionArrowSpawningParamsHelper
	 * Size -> 0x0018
	 */
	struct FAmmunitionArrowSpawningParamsHelper
	{
	public:
		unsigned char                                              UnknownData_WC37[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WeaponReloadData
	 * Size -> 0x0030
	 */
	struct FWeaponReloadData
	{
	public:
		bool                                                       IsQuick;                                                 // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTGM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItem*                                               Item;                                                    // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItem*                                               Item2;                                                   // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LJR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ReloadSequenceClass;                                     // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationPlayRate;                                       // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RY1J[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WeaponMalfunctionProbability
	 * Size -> 0x0008
	 */
	struct FWeaponMalfunctionProbability
	{
	public:
		EWeaponMalfunction                                         malfunction;                                             // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DK8B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Probability;                                             // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponMalfunctionEventDescription
	 * Size -> 0x0008
	 */
	struct FWeaponMalfunctionEventDescription
	{
	public:
		unsigned char                                              UnknownData_5ZW6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.FireShotDescription
	 * Size -> 0x0008
	 */
	struct FFireShotDescription
	{
	public:
		unsigned char                                              UnknownData_B03G[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.FireShotProjectileDescription
	 * Size -> 0x0001
	 */
	struct FFireShotProjectileDescription
	{
	public:
		unsigned char                                              UnknownData_D9HD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.FireShotProjectileData
	 * Size -> 0x002C
	 */
	struct FFireShotProjectileData
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           shootDirection;                                          // 0x000C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZeroRange;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Windage;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomFactor;                                            // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConeHalfAngle;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFireShotProjectileDescription                      Description;                                             // 0x0028(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JEDH[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.QuickAccessClientSyncData
	 * Size -> 0x001C
	 */
	struct FQuickAccessClientSyncData
	{
	public:
		unsigned char                                              UnknownData_5MQQ[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.QuickAccessSlotData
	 * Size -> 0x0014
	 */
	struct FQuickAccessSlotData
	{
	public:
		unsigned char                                              UnknownData_9KFW[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.AchievementStats
	 * Size -> 0x0001
	 */
	struct FAchievementStats
	{
	public:
		unsigned char                                              UnknownData_0XEY[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.Achievements
	 * Size -> 0x0001
	 */
	struct FAchievements
	{
	public:
		unsigned char                                              UnknownData_SKSS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.AnimalData
	 * Size -> 0x0028
	 */
	struct FAnimalData
	{
	public:
		class UClass*                                              AnimalClass;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AAnimal2*>                                    AliveAnimals;                                            // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class ACorpse*>                                     DeadAnimals;                                             // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CraftingIngredientCost
	 * Size -> 0x0018
	 */
	struct FCraftingIngredientCost
	{
	public:
		unsigned char                                              UnknownData_TSX2[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CraftingSlotParams
	 * Size -> 0x0010
	 */
	struct FCraftingSlotParams
	{
	public:
		unsigned char                                              Ingredients[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct ConZ.CraftingRecipeParams
	 * Size -> 0x0088
	 */
	struct FCraftingRecipeParams
	{
	public:
		unsigned char                                              ProductClass[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TMap<class UClass*, ESkillLevel>                           SkillLevels;                                             // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FCraftingSlotParams>                         Slots;                                                   // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BaseDamageInteractionEvent
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FBaseDamageInteractionEvent : public FBaseInteractionEvent
	{
	public:
		unsigned char                                              UnknownData_S1PE[0x90];                                  // 0x0008(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.BurnPointDamageEvent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	struct FBurnPointDamageEvent : public FScumPointDamageEvent
	{
	public:
		unsigned char                                              UnknownData_F21R[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CharacterActionAnimationDescription
	 * Size -> 0x0020
	 */
	struct FCharacterActionAnimationDescription
	{
	public:
		unsigned char                                              UnknownData_KB8M[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.HitByMeleeImpactSoundsInfo
	 * Size -> 0x0010
	 */
	struct FHitByMeleeImpactSoundsInfo
	{
	public:
		ECharacterImpactSourceSoundCategory                        ImpactSourceSoundCategory;                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHitSeverity                                               HitSeverity;                                             // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetectHitCollisionType                                    ImpactBodyPart;                                          // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWN1[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ImpactPoint;                                             // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.CharacterSpawneeInfo
	 * Size -> 0x0010
	 */
	struct FCharacterSpawneeInfo
	{
	public:
		unsigned char                                              UnknownData_IDLD[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SpawnCharacterGroupInfo
	 * Size -> 0x0050
	 */
	struct FSpawnCharacterGroupInfo
	{
	public:
		TArray<class UClass*>                                      AvailablePawns;                                          // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumOfCharactersToSpawn;                                  // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreLimit;                                             // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVNZ[0xB];                                   // 0x0045(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CharacterStats
	 * Size -> 0x0030
	 */
	struct FCharacterStats
	{
	public:
		unsigned char                                              UnknownData_0VEU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FamePoints;                                              // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FameLevel;                                               // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventScore;                                              // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventKills;                                              // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventTeamKills;                                          // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventDeaths;                                             // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventSuicides;                                           // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventAssists;                                            // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventHeadshots;                                          // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBanned;                                                // 0x002C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHXT[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CharacterStatsItem
	 * Size -> 0x0048
	 */
	struct FCharacterStatsItem
	{
	public:
		int32_t                                                    Rank;                                                    // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCP4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerName;                                              // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterStats                                     CharacterStats;                                          // 0x0018(0x0030) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SelectedChoppingTool
	 * Size -> 0x0060
	 */
	struct FSelectedChoppingTool
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChoppingTool2                                      Tool;                                                    // 0x0008(0x0050) NativeAccessSpecifierPublic
		bool                                                       IsRequiredToBeInHands;                                   // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRNJ[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PlayerUnsubscribeData
	 * Size -> 0x0078
	 */
	struct FPlayerUnsubscribeData
	{
	public:
		unsigned char                                              UnknownData_Y0N9[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TraderUnsubscribeData
	 * Size -> 0x0028
	 */
	struct FTraderUnsubscribeData
	{
	public:
		unsigned char                                              UnknownData_M613[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.RepActionData
	 * Size -> 0x0003
	 */
	struct FRepActionData
	{
	public:
		EAnimalAction                                              Action;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IndexParameter;                                          // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Version;                                                 // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BaseElementSpawnParams
	 * Size -> 0x0040
	 */
	struct FBaseElementSpawnParams
	{
	public:
		float                                                      Quality;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NP3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      DoorUpgrades;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDbIntegerId                                        ShelterId;                                               // 0x0018(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ItemGuid;                                                // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AItem*>                                       AttachedItems;                                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.BaseInteractionVisitor
	 * Size -> 0x0020
	 */
	struct FBaseInteractionVisitor
	{
	public:
		unsigned char                                              UnknownData_1SNZ[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZOnDemandElementData
	 * Size -> 0x0030
	 */
	struct FConZOnDemandElementData
	{
	public:
		struct FConZBaseElementIdentifier                          ElementIdentifier;                                       // 0x0000(0x0020) NoDestructor, NativeAccessSpecifierPublic
		class FString                                              OwnerName;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZPlacementQueryParams
	 * Size -> 0x0018
	 */
	struct FConZPlacementQueryParams
	{
	public:
		bool                                                       IsSnapping;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MustBePlacedOnFoundations;                               // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanEverBePlacedOnFoundations;                            // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedOnOtherBaseElements;                          // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMLZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrisoner*                                           User;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInstancesPerFlagArea;                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1365[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZBaseElementInteractionData
	 * Size -> 0x0020
	 */
	struct FConZBaseElementInteractionData
	{
	public:
		int64_t                                                    BaseElementId;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaseElementLocation;                                     // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepairValue;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    InteractionTimestamp;                                    // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZBaseInteractionData
	 * Size -> 0x0018
	 */
	struct FConZBaseInteractionData
	{
	public:
		int64_t                                                    BaseId;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaseLocation;                                            // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHVD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZBaseData
	 * Size -> 0x0140
	 */
	struct FConZBaseData
	{
	public:
		int64_t                                                    BaseId;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BaseName;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BaseSize;                                                // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaseLocation;                                            // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTAS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    BaseOwnerPlayerId;                                       // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOwnedByPlayer;                                         // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z5K6[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BaseBoundsMin;                                           // 0x003C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BaseBoundsMax;                                           // 0x0044(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAW1[0xF4];                                  // 0x004C(0x00F4) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZItemElementData
	 * Size -> 0x0001
	 */
	struct FConZItemElementData
	{
	public:
		unsigned char                                              UnknownData_QW24[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZFlagElementData
	 * Size -> 0x0010
	 */
	struct FConZFlagElementData
	{
	public:
		int64_t                                                    OvertakeEndTime;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDbIntegerId                                        OvertakerId;                                             // 0x0008(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZBaseElementData
	 * Size -> 0x0090
	 */
	struct FConZBaseElementData
	{
	public:
		int64_t                                                    ElementID;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    OwnerPlayerId;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    CreatorPrisonerId;                                       // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OwnerName;                                               // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KUZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              ElementClass;                                            // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthPoints;                                            // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Quality;                                                 // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DoorElementStateFlags;                                   // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADVH[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      DoorUpgrades;                                            // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EAccessLevel                                               DoorAccessLevel;                                         // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4LSB[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ActiveHit
	 * Size -> 0x000C
	 */
	struct FActiveHit
	{
	public:
		unsigned char                                              UnknownData_GMI1[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VirtualizedWaterSpline
	 * Size -> 0x00A0
	 */
	struct FVirtualizedWaterSpline
	{
	public:
		unsigned char                                              UnknownData_KRBU[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WaterQueryResult
	 * Size -> 0x00F0
	 */
	struct FWaterQueryResult
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InWaterIncludingWaves;                                   // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InWaterExcludingWaves;                                   // 0x000D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBottomValid;                                           // 0x000E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2GK[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Surface;                                                 // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Bottom;                                                  // 0x001C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0028(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveHeight;                                              // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNormal;                                              // 0x0038(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRSL[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVirtualizedWaterSpline                             WaterSpline;                                             // 0x0050(0x00A0) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZOceanLocationProperties
	 * Size -> 0x0024
	 */
	struct FConZOceanLocationProperties
	{
	public:
		unsigned char                                              UnknownData_28LZ[0x24];                                  // 0x0000(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZMapLocationProperties
	 * Size -> 0x0004
	 */
	struct FConZMapLocationProperties
	{
	public:
		unsigned char                                              UnknownData_B03I[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.RecipeAvailabilityState
	 * Size -> 0x00C8
	 */
	struct FRecipeAvailabilityState
	{
	public:
		unsigned char                                              UnknownData_0534[0xC8];                                  // 0x0000(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.RecipeItemState
	 * Size -> 0x001C
	 */
	struct FRecipeItemState
	{
	public:
		unsigned char                                              UnknownData_YVQU[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.RadialDamageDescription
	 * Size -> 0x0024
	 */
	struct FRadialDamageDescription
	{
	public:
		float                                                      RandomDamageMultiplier;                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRandomMultiplierChance;                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRandomMultiplierChance;                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BlastDirection;                                          // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlastInnerAngle;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlastOuterAngle;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlastAngleDamageFalloff;                                 // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DamageMultiplierTracker
	 * Size -> 0x0028
	 */
	struct FDamageMultiplierTracker
	{
	public:
		float                                                      _baseDamage;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _finalDamage;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FString>                                      _appliedMultiplierNames;                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<float>                                              _appliedMultiplierValues;                                // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ConZ.ScumRadialDamageEvent
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FScumRadialDamageEvent : public FRadialDamageEvent
	{
	public:
		unsigned char                                              UnknownData_ZWAQ[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SlidingDoorPartInfo
	 * Size -> 0x0020
	 */
	struct FSlidingDoorPartInfo
	{
	public:
		unsigned char                                              UnknownData_9435[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.DummyCollisionCapsuleInfo
	 * Size -> 0x0050
	 */
	struct FDummyCollisionCapsuleInfo
	{
	public:
		TWeakObjectPtr<class AActor>                               AttachParent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        attachment;                                              // 0x0008(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      UnscaledRadius;                                          // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnscaledHalfHeight;                                      // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E5U5[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ExamineDataPerItemGroup
	 * Size -> 0x0004
	 */
	struct FExamineDataPerItemGroup
	{
	public:
		int32_t                                                    MaxNumberOfOccurrences;                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ExplosionRadialDamageEvent
	 * Size -> 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
	 */
	struct FExplosionRadialDamageEvent : public FScumRadialDamageEvent
	{
	public:
		class UClass*                                              DamageCustomizationClass;                                // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      force;                                                   // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOWO[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             DamageDealer;                                            // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HY1S[0x28];                                  // 0x0060(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.FishingMinigameData
	 * Size -> 0x0074
	 */
	struct FFishingMinigameData
	{
	public:
		unsigned char                                              UnknownData_GAB7[0x74];                                  // 0x0000(0x0074) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.FishingData
	 * Size -> 0x0018
	 */
	struct FFishingData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HookDepth;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XEG[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.AttachComponentData
	 * Size -> 0x0018
	 */
	struct FAttachComponentData
	{
	public:
		class UMeshComponent*                                      MeshComponent;                                           // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticleIndex;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SimulateTension;                                         // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXL7[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.FortificationMarkerParams
	 * Size -> 0x0030
	 */
	struct FFortificationMarkerParams
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGQ6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MarkerIndex;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         Mesh;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7B9H[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.GameEventTeamColours
	 * Size -> 0x0060
	 */
	struct FGameEventTeamColours
	{
	public:
		struct FLinearColor                                        TeamName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParticipantStatsDarker;                                  // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParticipantStatsLighter;                                 // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParticipantStatsHighlighted;                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParticipantStatsDisabled;                                // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParticipantStatsMini;                                    // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PlayerPawnBirdInfo
	 * Size -> 0x0010
	 */
	struct FPlayerPawnBirdInfo
	{
	public:
		int32_t                                                    CoastalBirdsinProximity;                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ContinetalBirdsinProximity;                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VirtualAssignedCoastalBirds;                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VirtualAssignedContinentalBirds;                         // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.HitReactResult
	 * Size -> 0x0018
	 */
	struct FHitReactResult
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        FollowupMontage;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegainControlDurationMultiplier;                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKK7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PhysicalAnimationDesc
	 * Size -> 0x0034
	 */
	struct FPhysicalAnimationDesc
	{
	public:
		unsigned char                                              UnknownData_95BD[0x34];                                  // 0x0000(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.InteractionQueryParameters
	 * Size -> 0x0020
	 */
	struct FInteractionQueryParameters
	{
	public:
		struct FVector                                             InteractionLocation;                                     // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CZF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 Component;                                               // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInDroneMode;                                           // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZS9U[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.Inv2021_InventoryElementRepHelper
	 * Size -> 0x0020
	 */
	struct FInv2021_InventoryElementRepHelper
	{
	public:
		unsigned char                                              UnknownData_N5XX[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.Inv2021_InventoryPositionObjectRepHelper
	 * Size -> 0x0018
	 */
	struct FInv2021_InventoryPositionObjectRepHelper
	{
	public:
		unsigned char                                              UnknownData_BSOQ[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.InventoryStackMemberData
	 * Size -> 0x0008
	 */
	struct FInventoryStackMemberData
	{
	public:
		int32_t                                                    position;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Size;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.InventoryNodeWidgetData
	 * Size -> 0x0038
	 */
	struct FInventoryNodeWidgetData
	{
	public:
		class FName                                                slot;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryNodeWidgetDataType                               Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KX0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NumberData;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                TextData;                                                // 0x0010(0x0018) NativeAccessSpecifierPublic
		class UTexture2D*                                          IconData;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           VisibilityData;                                          // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAnimated;                                              // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQLN[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Opacity;                                                 // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleMarkerData
	 * Size -> 0x0020
	 */
	struct FVehicleMarkerData
	{
	public:
		unsigned char                                              UnknownData_W49W[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MeleeAction
	 * Size -> 0x0020
	 */
	struct FMeleeAction
	{
	public:
		EMeleeActionType                                           ActionType;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97GJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UAnimMontage>                         Montage;                                                 // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDelay;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockDuration;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrientToTargetSpeedFactor;                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegainControlDurationModifier;                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MeleeDodge
	 * Size -> 0x0010
	 */
	struct FMeleeDodge
	{
	public:
		unsigned char                                              UnknownData_CKZ1[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MeleeAttack
	 * Size -> 0x0020
	 */
	struct FMeleeAttack
	{
	public:
		unsigned char                                              UnknownData_1G8N[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.CheckMeleeAttackCapsuleCollisionData
	 * Size -> 0x00D0
	 */
	struct FCheckMeleeAttackCapsuleCollisionData
	{
	public:
		unsigned char                                              UnknownData_HUTN[0xD0];                                  // 0x0000(0x00D0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.AttackedByMeleeData
	 * Size -> 0x0018
	 */
	struct FAttackedByMeleeData
	{
	public:
		TWeakObjectPtr<class AActor>                               attacker;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UAnimMontage>                         Montage;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MeshHitZone
	 * Size -> 0x001C
	 */
	struct FMeshHitZone
	{
	public:
		unsigned char                                              UnknownData_LERJ[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MeshInstanceId
	 * Size -> 0x0008
	 */
	struct FMeshInstanceId
	{
	public:
		unsigned char                                              UnknownData_QA9E[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MeshItemData
	 * Size -> 0x0048
	 */
	struct FMeshItemData
	{
	public:
		unsigned char                                              UnknownData_OUF6[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MissionLevelInfo
	 * Size -> 0x0010
	 */
	struct FMissionLevelInfo
	{
	public:
		unsigned char                                              UnknownData_JXVW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ActiveManagers
	 * Size -> 0x0010
	 */
	struct FActiveManagers
	{
	public:
		TArray<class AMissionManager*>                             MissionManagers;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ObjectiveDataGroup
	 * Size -> 0x0018
	 */
	struct FObjectiveDataGroup
	{
	public:
		unsigned char                                              RewardItems[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
		float                                                      RewardFamePoints;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWKT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ModularTooltipSectionData
	 * Size -> 0x0028
	 */
	struct FModularTooltipSectionData
	{
	public:
		unsigned char                                              UnknownData_TZ8U[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UModularTooltipElementData*>                  Elements;                                                // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MovableMeshComponentData
	 * Size -> 0x0014
	 */
	struct FMovableMeshComponentData
	{
	public:
		unsigned char                                              UnknownData_HC2O[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.NotificationDescriptionReplicationHelper
	 * Size -> 0x0018
	 */
	struct FNotificationDescriptionReplicationHelper
	{
	public:
		unsigned char                                              UnknownData_93R9[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.NutrientsRDA
	 * Size -> 0x006C
	 */
	struct FNutrientsRDA
	{
	public:
		float                                                      MinProteinsPerLeanBodyMass;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxProteinsPerLeanBodyMass;                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Fats;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Water;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminA;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminB1;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminB2;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminB3;                                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminB4;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminB5;                                               // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminB6;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminB9;                                               // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminB12;                                              // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminC;                                                // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminD;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminE;                                                // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VitaminK;                                                // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Calcium;                                                 // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Magnesium;                                               // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Potassium;                                               // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Copper;                                                  // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Selenium;                                                // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Iron;                                                    // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Phosphorus;                                              // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Zinc;                                                    // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Manganese;                                               // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Sodium;                                                  // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ObjectiveTrackableData
	 * Size -> 0x0008
	 */
	struct FObjectiveTrackableData
	{
	public:
		unsigned char                                              UnknownData_2MXK[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PlaceableActorStateReplicationHelper
	 * Size -> 0x0008
	 */
	struct FPlaceableActorStateReplicationHelper
	{
	public:
		unsigned char                                              UnknownData_EPK4[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PlayerRpcChannelServerDataResponseNetSerializer
	 * Size -> 0x0008
	 */
	struct FPlayerRpcChannelServerDataResponseNetSerializer
	{
	public:
		unsigned char                                              UnknownData_21NB[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PlayerRpcChannelServerDataRequestNetSerializer
	 * Size -> 0x0008
	 */
	struct FPlayerRpcChannelServerDataRequestNetSerializer
	{
	public:
		unsigned char                                              UnknownData_OP1O[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerFPWeaponFOVSettings
	 * Size -> 0x0010
	 */
	struct FPrisonerFPWeaponFOVSettings
	{
	public:
		unsigned char                                              UnknownData_A8TR[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.InstrumentEvent
	 * Size -> 0x0010
	 */
	struct FInstrumentEvent
	{
	public:
		unsigned char                                              UnknownData_BJ3W[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerAppearanceId
	 * Size -> 0x0008
	 */
	struct FPrisonerAppearanceId
	{
	public:
		EConZGender                                                Gender;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9ZB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ControllerDigestionItem
	 * Size -> 0x0028
	 */
	struct FControllerDigestionItem
	{
	public:
		unsigned char                                              UnknownData_YLFO[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WindowInfo
	 * Size -> 0x00D0
	 */
	struct FWindowInfo
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          TransformInverse;                                        // 0x0030(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Anchor;                                                  // 0x0060(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTP1[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWindowClimbingAnimationInfo                        AnimationInfo;                                           // 0x0078(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    AnimationIndex;                                          // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNEB[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WindowDetectionParams
	 * Size -> 0x0038
	 */
	struct FWindowDetectionParams
	{
	public:
		struct FVector                                             CharacterHeadLocation;                                   // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CharacterFeetLocation;                                   // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CharacterForwardVector;                                  // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHorzDistanceToWindow;                                 // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCharacterToWindowAngle;                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorzHitDetectionBias;                                    // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitDetectionBiasBelowWindow;                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitDetectionBiasAboveWindow;                             // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.LadderInfo
	 * Size -> 0x00B0
	 */
	struct FLadderInfo
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          TransformInverse;                                        // 0x0030(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Edge;                                                    // 0x0060(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CapsuleBias;                                             // 0x0090(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepHeight;                                              // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepWidth;                                               // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasEdge;                                                 // 0x00A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNarrow;                                                // 0x00A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           PhysicalSurfaceForSounds;                                // 0x00A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YX1J[0x1];                                   // 0x00A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfSteps;                                           // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitStepIndex;                                            // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.LadderDetectionParams
	 * Size -> 0x0020
	 */
	struct FLadderDetectionParams
	{
	public:
		struct FVector                                             RayOrigin;                                               // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RayDirection;                                            // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHorzDistanceToLadder;                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRayToLadderAngle;                                     // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ClimbableObstacleInfo
	 * Size -> 0x0088
	 */
	struct FClimbableObstacleInfo
	{
	public:
		struct FVector                                             EdgeLocationZero;                                        // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeHeight;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HWallNormal;                                             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VWallNormal;                                             // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CapsuleLocationAtAnchorZero;                             // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CapsuleRotationAtAnchor;                                 // 0x0034(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  BaseComponent;                                           // 0x0040(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrisonerClimbAnimationInfo                         AnimationInfo;                                           // 0x0048(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.PrisonerClothesDecayMultiplierData
	 * Size -> 0x002C
	 */
	struct FPrisonerClothesDecayMultiplierData
	{
	public:
		float                                                      DamageMultiplierPerPace[0x4];                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageMultiplierPerStance[0x4];                          // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetnessDamageThreshold;                                  // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetnessDamageMultiplier;                                 // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DamagedByFloor;                                          // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXEV[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerPerCharacterMeshClassData
	 * Size -> 0x0030
	 */
	struct FPrisonerPerCharacterMeshClassData
	{
	public:
		EBodySlot                                                  BodySlotMapping;                                         // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5ER[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrisonerClothesDecayMultiplierData                 DecayMultiplierData;                                     // 0x0004(0x002C) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MusicPlayerPlaybackOptions
	 * Size -> 0x0028
	 */
	struct FMusicPlayerPlaybackOptions
	{
	public:
		TArray<class FString>                                      MusicPlaylist;                                           // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    CurrentPlaylistIndex;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlaybackPaused;                                          // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TP9S[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentPlaybackVolume;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldRepeatCurrent;                                     // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldLoop;                                              // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldShuffle;                                           // 0x001E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldPlayRadio;                                         // 0x001F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTurnedOn;                                              // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AA8Q[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerRestingParameters
	 * Size -> 0x0060
	 */
	struct FPrisonerRestingParameters
	{
	public:
		unsigned char                                              UnknownData_GWC3[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ThrowingItemData
	 * Size -> 0x0010
	 */
	struct FThrowingItemData
	{
	public:
		unsigned char                                              UnknownData_N4S3[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerDistanceTravelledContext
	 * Size -> 0x0018
	 */
	struct FPrisonerDistanceTravelledContext
	{
	public:
		unsigned char                                              UnknownData_Y7Q9[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerViolation
	 * Size -> 0x0010
	 */
	struct FPrisonerViolation
	{
	public:
		unsigned char                                              UnknownData_C1P0[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SkillExperienceChange
	 * Size -> 0x0008
	 */
	struct FSkillExperienceChange
	{
	public:
		float                                                      ExperienceChange;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.DerivedPrisonerSkillComponentUIData
	 * Size -> 0x0038
	 */
	struct FDerivedPrisonerSkillComponentUIData
	{
	public:
		unsigned char                                              UnknownData_AG3V[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.BodyConditionSpriteData
	 * Size -> 0x0160
	 */
	struct FBodyConditionSpriteData
	{
	public:
		unsigned char                                              UnknownData_3Q7O[0x160];                                 // 0x0000(0x0160) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PrisonerViewInfo
	 * Size -> 0x0020 (FullSize[0x0610] - InheritedSize[0x05F0])
	 */
	struct FPrisonerViewInfo : public FMinimalViewInfo
	{
	public:
		float                                                      WeaponFOV;                                               // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WeaponFoveationOffset;                                   // 0x05F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinViewYaw;                                              // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxViewYaw;                                              // 0x0604(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinViewPitch;                                            // 0x0608(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxViewPitch;                                            // 0x060C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.EngineeringEventData
	 * Size -> 0x0008
	 */
	struct FEngineeringEventData
	{
	public:
		unsigned char                                              UnknownData_52XC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.RequiredItemForItemTagParams
	 * Size -> 0x000C
	 */
	struct FRequiredItemForItemTagParams
	{
	public:
		unsigned char                                              UnknownData_5J36[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ReplenishableResource
	 * Size -> 0x00B0
	 */
	struct FReplenishableResource
	{
	public:
		unsigned char                                              UnknownData_89ZJ[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ReplenishableResourceSlotDescription
	 * Size -> 0x001C
	 */
	struct FReplenishableResourceSlotDescription
	{
	public:
		unsigned char                                              UnknownData_VFAX[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.RequestSpamFilter
	 * Size -> 0x0014
	 */
	struct FRequestSpamFilter
	{
	public:
		unsigned char                                              UnknownData_ELPA[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ResourceNetworkGUID
	 * Size -> 0x0004
	 */
	struct FResourceNetworkGUID
	{
	public:
		unsigned char                                              UnknownData_I17Z[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.AreaResourceLockNetwork
	 * Size -> 0x0020
	 */
	struct FAreaResourceLockNetwork
	{
	public:
		struct FResourceNetworkGUID                                LockOwnerGUID;                                           // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                Area;                                                    // 0x0004(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ActorResourceLockNetwork
	 * Size -> 0x000C
	 */
	struct FActorResourceLockNetwork
	{
	public:
		struct FResourceNetworkGUID                                LockOwnerGUID;                                           // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FResourceNetworkGUID                                ResourceGUID;                                            // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResourceId;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.MeshInstancesRestoreOptions
	 * Size -> 0x0004
	 */
	struct FMeshInstancesRestoreOptions
	{
	public:
		float                                                      RestoreInterval;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.RestorableMeshInstanceId
	 * Size -> 0x0018
	 */
	struct FRestorableMeshInstanceId
	{
	public:
		unsigned char                                              UnknownData_BAH6[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ServerUsedItem
	 * Size -> 0x0018
	 */
	struct FServerUsedItem
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Usage;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      usageWeight;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECraftingType                                              CraftingType;                                            // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SpawnHere;                                               // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMGH[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ServerCraftableItem
	 * Size -> 0x00A8
	 */
	struct FServerCraftableItem
	{
	public:
		uint32_t                                                   ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAZB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemClass;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CraftedItemCount;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BNID[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      BonusItemClasses;                                        // 0x0018(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FServerUsedItem>                             MandatoryItems;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FServerUsedItem>                             MandatoryParts;                                          // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FServerUsedItem>                             OptionalItems;                                           // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FServerUsedItem>                             OptionalParts;                                           // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FServerUsedItem>                             ToolsNeeded;                                             // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CustomCraftingMontage;                                   // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StartCraftingAudioEvent;                                 // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StopCraftingAudioEvent;                                  // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6DO[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PriceUpdateData
	 * Size -> 0x0090
	 */
	struct FPriceUpdateData
	{
	public:
		unsigned char                                              UnknownData_HCZT[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.MultiplierByClass
	 * Size -> 0x0010
	 */
	struct FMultiplierByClass
	{
	public:
		class UClass*                                              ObjectClass;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHGV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.DamageMultipliers
	 * Size -> 0x0018
	 */
	struct FDamageMultipliers
	{
	public:
		class UClass*                                              DamageCauserClass;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMultiplierByClass>                          DamageMultipliers;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SkillEventWeapon
	 * Size -> 0x0001
	 */
	struct FSkillEventWeapon
	{
	public:
		EWeaponCategory                                            WeaponCategory;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SkillEventWeaponClearedMalfunction
	 * Size -> 0x0001 (FullSize[0x0002] - InheritedSize[0x0001])
	 */
	struct FSkillEventWeaponClearedMalfunction : public FSkillEventWeapon
	{
	public:
		EWeaponMalfunction                                         malfunction;                                             // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SkillEventThrownItemHitTarget
	 * Size -> 0x0008
	 */
	struct FSkillEventThrownItemHitTarget
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.SkillEventItemThrown
	 * Size -> 0x0001
	 */
	struct FSkillEventItemThrown
	{
	public:
		unsigned char                                              UnknownData_9GU2[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SkillEventWeaponProjectileHitTarget
	 * Size -> 0x0027 (FullSize[0x0028] - InheritedSize[0x0001])
	 */
	struct FSkillEventWeaponProjectileHitTarget : public FSkillEventWeapon
	{
	public:
		unsigned char                                              UnknownData_D3L3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Target;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnergyRatio;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHeadShot;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsKill;                                                  // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WasSniping;                                              // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrisonerStance                                            stance;                                                  // 0x001B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWindSpeedCategory                                         WindSpeedCategory;                                       // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2B8J[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExperienceMultiplier;                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4F4[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.SkillEventWeaponReload
	 * Size -> 0x0000 (FullSize[0x0001] - InheritedSize[0x0001])
	 */
	struct FSkillEventWeaponReload : public FSkillEventWeapon
	{	};

	/**
	 * ScriptStruct ConZ.SkillEventWeaponFireShot
	 * Size -> 0x0000 (FullSize[0x0001] - InheritedSize[0x0001])
	 */
	struct FSkillEventWeaponFireShot : public FSkillEventWeapon
	{	};

	/**
	 * ScriptStruct ConZ.ConZWeaponDescRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FConZWeaponDescRow : public FTableRowBase
	{
	public:
		float                                                      Damage;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageInGameEvent;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Energy;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SharpnessSlash;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SharpnessPierce;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterImpactSourceSoundCategory                        ImpactSoundCategory;                                     // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JVDH[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProjectileImpactEffects*                            ImpactEffects;                                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZConsoleVariableRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FConZConsoleVariableRow : public FTableRowBase
	{
	public:
		class FString                                              ConsoleVariable;                                         // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZDimensionRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FConZDimensionRow : public FTableRowBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXG2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZFontRow
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FConZFontRow : public FTableRowBase
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0058) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ConZColorRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FConZColorRow : public FTableRowBase
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.ObjectiveItem
	 * Size -> 0x0010
	 */
	struct FObjectiveItem
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6MI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TournamentParameters
	 * Size -> 0x0010
	 */
	struct FTournamentParameters
	{
	public:
		unsigned char                                              UnknownData_E9Z5[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TradeOutpostManagerDescription
	 * Size -> 0x00A0
	 */
	struct FTradeOutpostManagerDescription
	{
	public:
		unsigned char                                              UnknownData_KOPJ[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TradeableClassAndQuantity
	 * Size -> 0x0030
	 */
	struct FTradeableClassAndQuantity
	{
	public:
		unsigned char                                              UnknownData_8LS7[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.EconomyManagerRequestData
	 * Size -> 0x00B0
	 */
	struct FEconomyManagerRequestData
	{
	public:
		unsigned char                                              UnknownData_ZMJJ[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ConZTradeableDescRow
	 * Size -> 0x0138 (FullSize[0x0140] - InheritedSize[0x0008])
	 */
	struct FConZTradeableDescRow : public FTableRowBase
	{
	public:
		unsigned char                                              TradeableClass[0x28];                                    // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0030(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePurchasedByPlayer;                                  // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETradeCategory                                             TradeCategory;                                           // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z453[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TraderTypes[0x50];                                       // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      BasePurchasePriceModifier;                               // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseSalePriceReductionModifier;                          // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETradeableSpawnType                                        SpawnType;                                               // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INF4[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TradingEntryCaption;                                     // 0x00A8(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              TradingEntryIconTexture[0x28];                           // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    MaxAmountPurchasedAtOnce;                                // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsStockAmountUnlimited;                                  // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZK9[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TradeableDiscountCondition;                              // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TraderSearchTypes;                                       // 0x00F8(0x0020) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TraderSearchRelated;                                     // 0x0118(0x0020) Edit, NativeAccessSpecifierPublic
		bool                                                       IsImmuneToUserOverrides;                                 // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5C13[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TradeableClassDataOverrideReplicationHelper
	 * Size -> 0x0070
	 */
	struct FTradeableClassDataOverrideReplicationHelper
	{
	public:
		unsigned char                                              UnknownData_UBUJ[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.PerTraderOverrideDataHelper
	 * Size -> 0x0070
	 */
	struct FPerTraderOverrideDataHelper
	{
	public:
		unsigned char                                              UnknownData_VAG7[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TradeableOverrideData
	 * Size -> 0x0010
	 */
	struct FTradeableOverrideData
	{
	public:
		unsigned char                                              UnknownData_ZNUC[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.TrapTriggerParams
	 * Size -> 0x0010
	 */
	struct FTrapTriggerParams
	{
	public:
		class AActor*                                              TriggeredActor;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaTime;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84JA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.UsableObjectiveItem
	 * Size -> 0x0010
	 */
	struct FUsableObjectiveItem
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMGR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.UserProfileAuthorityInfo
	 * Size -> 0x0040
	 */
	struct FUserProfileAuthorityInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Ip;                                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResponsePort;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameplayPort;                                            // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDbIntegerId                                        UserProfileId;                                           // 0x0028(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuthToken;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.UserServerHistoryItem
	 * Size -> 0x0028
	 */
	struct FUserServerHistoryItem
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Host;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LR11[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.BicycleParametersPerMovementPace
	 * Size -> 0x0014
	 */
	struct FBicycleParametersPerMovementPace
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BLB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseMaxForwardSpeed;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanReverse;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHTW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseMaxReverseSpeed;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPrisonerStrength;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.TireParticleData
	 * Size -> 0x0028
	 */
	struct FTireParticleData
	{
	public:
		struct FConZVehicleTireParticleData                        ParticleTrail;                                           // 0x0000(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConZVehicleTireParticleData                        ParticleWave;                                            // 0x0014(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehiclePartDescription
	 * Size -> 0x000C
	 */
	struct FVehiclePartDescription
	{
	public:
		struct FGameplayTag                                        PartType;                                                // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      health;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.VehicleExhaustEffectsParameters
	 * Size -> 0x0070
	 */
	struct FVehicleExhaustEffectsParameters
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UParticleSystem*                                     EngineStartedParticleSystem;                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     EngineIdleParticleSystem;                                // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ThrottlePressedParticleSystem;                           // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ThrottlePressedAudioEvent;                               // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDurationBetweenThrottlePressedEffects;                // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeactivationDelay;                                       // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COO4[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.VehicleSpawnerInfo
	 * Size -> 0x0080
	 */
	struct FVehicleSpawnerInfo
	{
	public:
		struct FDbIntegerId                                        DatabaseId;                                              // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     VehicleAssetId;                                          // 0x0008(0x0010) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VehicleAlias;                                            // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EAKS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          VehicleTransform;                                        // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int64_t                                                    VehicleLastAccessTime;                                   // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               VehicleActor;                                            // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsVehiclePurchased;                                      // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLKS[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.Version
	 * Size -> 0x0010
	 */
	struct FVersion
	{
	public:
		int32_t                                                    Major;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minor;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Build;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Revision;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponBowDrawData
	 * Size -> 0x000C
	 */
	struct FWeaponBowDrawData
	{
	public:
		unsigned char                                              UnknownData_39JL[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WeaponTypeAimOffset
	 * Size -> 0x0018
	 */
	struct FWeaponTypeAimOffset
	{
	public:
		EWeaponType                                                WeaponType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOKT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace*                                         AimOffset[0x2];                                          // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponCheckAmmoData
	 * Size -> 0x0008
	 */
	struct FWeaponCheckAmmoData
	{
	public:
		class UClass*                                              ActionSequenceClass;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConZ.WeaponUnloadAmmoData
	 * Size -> 0x0010
	 */
	struct FWeaponUnloadAmmoData
	{
	public:
		class UClass*                                              ActionSequenceClass;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmmoCount;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9T6F[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WeatherReplicatedStateSnapshot
	 * Size -> 0x0034
	 */
	struct FWeatherReplicatedStateSnapshot
	{
	public:
		unsigned char                                              UnknownData_E7Y5[0x34];                                  // 0x0000(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.WorldEventDrawData
	 * Size -> 0x0050
	 */
	struct FWorldEventDrawData
	{
	public:
		unsigned char                                              UnknownData_H34Q[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConZ.ZombieRagdollAutoRecovery
	 * Size -> 0x0008
	 */
	struct FZombieRagdollAutoRecovery
	{
	public:
		EZombieRagdollAutoRecoveryType                             Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TC6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timespan;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
