#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Enum Insurgency.EWeaponUpgradeSlot
	 */
	enum class EWeaponUpgradeSlot : uint8_t
	{
		Invalid                = 0,
		Optics                 = 1,
		Chamber                = 2,
		Underbarrel            = 3,
		UnderbarrelHiddenBonus = 4,
		Barrel                 = 5,
		Magazine               = 6,
		Siderail               = 7,
		Ammo                   = 8,
		Stock                  = 9,
		Training               = 10,
		Aesthetic              = 11,
		Misc                   = 12,
		NightVision            = 13,
		Count                  = 14,
		MAX                    = 15
	};

	/**
	 * Enum Insurgency.EItemSlot
	 */
	enum class EItemSlot : uint8_t
	{
		None          = 0,
		Primary       = 1,
		Secondary     = 2,
		Explosive     = 3,
		FireSupport   = 4,
		Miscellaneous = 5,
		Vest          = 6,
		AmmoCarrier   = 7,
		Armor         = 8,
		Head          = 9,
		Accessory     = 10,
		Melee         = 11,
		Backpack      = 12,
		GearMisc1     = 13,
		GearMisc2     = 14,
		Cinematic     = 15,
		Count         = 16,
		MAX           = 17
	};

	/**
	 * Enum Insurgency.EEquipableState
	 */
	enum class EEquipableState : uint8_t
	{
		ES_Unequipped    = 0,
		ES_Equipping     = 1,
		ES_Equipped      = 2,
		ES_Unequipping   = 3,
		ES_Transitioning = 4,
		ES_MAX           = 5
	};

	/**
	 * Enum Insurgency.EIKDirection
	 */
	enum class EIKDirection : uint8_t
	{
		Left  = 0,
		Right = 1,
		Both  = 2,
		None  = 3,
		MAX   = 4
	};

	/**
	 * Enum Insurgency.EUsablePriority
	 */
	enum class EUsablePriority : uint8_t
	{
		Low    = 0,
		Normal = 1,
		High   = 2,
		MAX    = 3
	};

	/**
	 * Enum Insurgency.EAIControllerState
	 */
	enum class EAIControllerState : uint8_t
	{
		AIS_IDLE    = 0,
		AIS_COMBAT  = 1,
		AIS_NOSTATE = 2,
		MAX_STATES  = 3,
		MAX         = 4
	};

	/**
	 * Enum Insurgency.ETaglineContextType
	 */
	enum class ETaglineContextType : uint8_t
	{
		None       = 0,
		Int        = 1,
		Float      = 2,
		Percentage = 3,
		MAX        = 4
	};

	/**
	 * Enum Insurgency.ERoundConclusion
	 */
	enum class ERoundConclusion : uint8_t
	{
		Generic                                   = 0,
		Objective                                 = 1,
		Objective_FullCapture                     = 2,
		Elimination                               = 3,
		EliminationLastStand                      = 4,
		PointLimitReached                         = 5,
		TargetPlayerEliminated                    = 6,
		TargetPlayerExtracted                     = 7,
		RegainedCheckpoint                        = 8,
		OutpostCaptured                           = 9,
		Evacuation                                = 10,
		Survived                                  = 11,
		TimeExpired                               = 12,
		TimeExpired_DefendersPreventedFullCapture = 13,
		TimeExpired_MajorityControlled            = 14,
		TimeExpired_MostRemainingWaves            = 15,
		TimeExpired_MostPoints                    = 16,
		TimeExpired_OwnHillObjective              = 17,
		TimeExpired_OvertimeObjectiveReset        = 18,
		Abandoned                                 = 19,
		EndedByAdmin                              = 20,
		MAX                                       = 21
	};

	/**
	 * Enum Insurgency.EMeleeSwingDirection
	 */
	enum class EMeleeSwingDirection : uint8_t
	{
		North     = 0,
		South     = 1,
		East      = 2,
		West      = 3,
		NorthEast = 4,
		SouthEast = 5,
		SouthWest = 6,
		NorthWest = 7,
		MAX       = 8
	};

	/**
	 * Enum Insurgency.EMusicDirectorState
	 */
	enum class EMusicDirectorState : uint8_t
	{
		MDS_None               = 0,
		MDS_MainMenu           = 1,
		MDS_InitialClassSelect = 2,
		MDS_KitUI              = 3,
		MDS_InGame             = 4,
		MDS_MAX                = 5
	};

	/**
	 * Enum Insurgency.ESoundscapeVehicleState
	 */
	enum class ESoundscapeVehicleState : uint8_t
	{
		NotInVehicle      = 0,
		InVehicleExternal = 1,
		InVehicleInternal = 2,
		MAX               = 3
	};

	/**
	 * Enum Insurgency.ECharacterAppearanceSlot
	 */
	enum class ECharacterAppearanceSlot : uint8_t
	{
		Character     = 0,
		Patches       = 1,
		Headgear      = 2,
		Eyewear       = 3,
		Facewear      = 4,
		Arm           = 5,
		Wrist         = 6,
		Hands         = 7,
		Torso         = 8,
		Legs          = 9,
		Feet          = 10,
		Camo          = 11,
		MergedMesh    = 12,
		Equipment     = 13,
		CharacterMenu = 14,
		Voice         = 15,
		None          = 16,
		Count         = 17,
		MAX           = 18
	};

	/**
	 * Enum Insurgency.ECharacterResponse
	 */
	enum class ECharacterResponse : uint8_t
	{
		Bot_Contact                             = 0,
		Bot_Engage                              = 1,
		Bot_Flanking                            = 2,
		Bot_HearEnemy                           = 3,
		Bot_Retreating                          = 4,
		Bot_Spot                                = 5,
		Bot_Startled                            = 6,
		Bot_Suppressing                         = 7,
		Bot_SpotFlashlight                      = 8,
		Chatter_AskStatus                       = 9,
		Chatter_EnterVehicle                    = 10,
		Chatter_EnterVehicleMachineGun          = 11,
		Chatter_LeaveVehicle                    = 12,
		Chatter_FlashOut                        = 13,
		Chatter_FragOut                         = 14,
		Chatter_IncendiaryOut                   = 15,
		Chatter_MineOut                         = 16,
		Chatter_MolotovOut                      = 17,
		Chatter_ObjectiveClear                  = 18,
		Chatter_ObjectiveHostile                = 19,
		Chatter_Reloading                       = 20,
		Chatter_Reloading_Magazine              = 21,
		Chatter_RemoteOut                       = 22,
		Chatter_SmokeOut                        = 23,
		Chatter_Breaching                       = 24,
		Chatter_ChemicalGasSpotted              = 25,
		Chatter_DestroyedEnemySupport           = 26,
		Chatter_EnemyVehicleCrash               = 27,
		Chatter_EnteringCombatArea              = 28,
		Chatter_EnteringCombatAreaResponse      = 29,
		Chatter_FiringMachineGun                = 30,
		Chatter_FriendlyDown                    = 31,
		Chatter_FriendlyFire                    = 32,
		Chatter_FriendlyVehicleCrash            = 33,
		Chatter_HeavyMeleeSwing                 = 34,
		Chatter_LostFriendlySupport             = 35,
		Chatter_LowAmmo                         = 36,
		Chatter_MeleeSwing                      = 37,
		Chatter_MotorAccident                   = 38,
		Chatter_PhysicalExertion                = 39,
		Chatter_Resupplied                      = 40,
		Chatter_SearchingWeaponCache            = 41,
		Chatter_SorryAlmostHit                  = 42,
		Chatter_SpotFrag                        = 43,
		Chatter_SpotRemote                      = 44,
		Chatter_SpotRocket                      = 45,
		Chatter_StatusFineResponse              = 46,
		Chatter_StatusSuppressedResponse        = 47,
		Chatter_StatusWoundedResponse           = 48,
		Chatter_SuppressedByExplosion           = 49,
		Chatter_SuppressedByFireSupport         = 50,
		Chatter_SuppressedByGunfire             = 51,
		Chatter_SuppressedByMachineGun          = 52,
		Chatter_SuppressedBySniper              = 53,
		Chatter_TossBackExplosive               = 54,
		Chatter_WitnessGruesomeDeath            = 55,
		Chatter_GameMode_LastOneStanding        = 56,
		Chatter_GameMode_LastOneSucceeds        = 57,
		Chatter_GameMode_LowReinforcements      = 58,
		Chatter_GameMode_MissingCommander       = 59,
		Chatter_GameMode_NoReinforcements       = 60,
		Chatter_GameMode_RestrictedArea         = 61,
		GameMode_AdvancingToObjective           = 62,
		GameMode_AttackingCache                 = 63,
		GameMode_CounterAttackBegins            = 64,
		GameMode_CounterAttackEnds              = 65,
		GameMode_DefendingCache                 = 66,
		GameMode_ObjectiveComplete              = 67,
		GameMode_PreGame                        = 68,
		GameMode_RetreatingToObjective          = 69,
		GameMode_CoopRoundStart                 = 70,
		GameMode_VersusRoundStart               = 71,
		GameMode_Survival_MovingToExtraction    = 72,
		GameMode_Survival_ReachesExtraction     = 73,
		Radial_Yes                              = 74,
		Radial_No                               = 75,
		Radial_EnemyDown                        = 76,
		Radial_EnemyDownMelee                   = 77,
		Radial_EnemySpotted                     = 78,
		Radial_EnemySpottedNorth                = 79,
		Radial_EnemySpottedNorthEast            = 80,
		Radial_EnemySpottedNorthWest            = 81,
		Radial_EnemySpottedWest                 = 82,
		Radial_EnemySpottedEast                 = 83,
		Radial_EnemySpottedSouth                = 84,
		Radial_EnemySpottedSouthEast            = 85,
		Radial_EnemySpottedSouthWest            = 86,
		Radial_GetIn                            = 87,
		Radial_Intimidate                       = 88,
		Radial_Intimidate_Response              = 89,
		Radial_NeedBackup                       = 90,
		Radial_NeedPickup                       = 91,
		Radial_NeedSmoke                        = 92,
		Radial_RequestRadio                     = 93,
		Radial_SuggestFireSupport               = 94,
		Pain_Generic                            = 95,
		Pain_Blinded                            = 96,
		Pain_Burn                               = 97,
		Pain_ChemicalCough                      = 98,
		Pain_SmokeCough                         = 99,
		Pain_FlameDeath                         = 100,
		Pain_DeathGrunt                         = 101,
		Pain_DeathShout                         = 102,
		Pain_DeathSqueal                        = 103,
		None                                    = 104,
		FireSupport_Incoming                    = 105,
		FireSupport_Incoming_Enemy              = 106,
		FireSupport_Officer_Request             = 107,
		FireSupport_Observer_Request            = 108,
		FireSupport_Observer_Thank              = 109,
		Objective_BeginCapturingEnemyObjective  = 110,
		Objective_FinishCapturingEnemyObjective = 111,
		Objective_BeingLosingFriendlyObjective  = 112,
		Objective_FinishLosingFriendlyObjective = 113,
		Objective_DestroyedFriendlyObjective    = 114,
		Objective_DestroyedEnemyObjective       = 115,
		Radio_BurstStaticNoize                  = 116,
		Max_Responses                           = 117,
		MAX                                     = 118
	};

	/**
	 * Enum Insurgency.EUseItem
	 */
	enum class EUseItem : uint8_t
	{
		None        = 0,
		Scavenging  = 1,
		SupplyCrate = 2,
		MAX         = 3
	};

	/**
	 * Enum Insurgency.EBloodSplatterType
	 */
	enum class EBloodSplatterType : uint8_t
	{
		Ground       = 0,
		WallGeneric  = 1,
		WallDrip     = 2,
		Headshot     = 3,
		Vaporization = 4,
		MAX          = 5
	};

	/**
	 * Enum Insurgency.ESoldierStance
	 */
	enum class ESoldierStance : uint8_t
	{
		Stand   = 0,
		Crouch  = 1,
		Prone   = 2,
		Vehicle = 3,
		Swim    = 4,
		Climb   = 5,
		MAX     = 6
	};

	/**
	 * Enum Insurgency.ESuppressionContext
	 */
	enum class ESuppressionContext : uint8_t
	{
		Default          = 0,
		Bullet           = 1,
		BulletSniper     = 2,
		BulletMG         = 3,
		Rocket           = 4,
		Stunned          = 5,
		ExplosionGeneral = 6,
		ExplosionRocket  = 7,
		ChemicalAgent    = 8,
		Impact           = 9,
		FireSupport      = 10,
		NoSound          = 11,
		MAX              = 12
	};

	/**
	 * Enum Insurgency.EFirearmCategory
	 */
	enum class EFirearmCategory : uint8_t
	{
		AssaultRifle    = 0,
		LightMachineGun = 1,
		BoltRifle       = 2,
		MarksmanRifle   = 3,
		Carbine         = 4,
		Shotgun         = 5,
		SubmachineGun   = 6,
		Pistol          = 7,
		Launcher        = 8,
		HeavyMachineGun = 9,
		Revolver        = 10,
		Count           = 11,
		MAX             = 12
	};

	/**
	 * Enum Insurgency.ELeanDirection
	 */
	enum class ELeanDirection : uint8_t
	{
		Left  = 0,
		None  = 1,
		Right = 2,
		MAX   = 3
	};

	/**
	 * Enum Insurgency.EPlayerSpeedClassification
	 */
	enum class EPlayerSpeedClassification : uint8_t
	{
		Walk   = 0,
		Run    = 1,
		Sprint = 2,
		MAX    = 3
	};

	/**
	 * Enum Insurgency.EVehicleStance
	 */
	enum class EVehicleStance : uint8_t
	{
		Seated                = 0,
		Ducking               = 1,
		LookingOutWindowRight = 2,
		LookingOutWindowLeft  = 3,
		MAX                   = 4
	};

	/**
	 * Enum Insurgency.EVaultAction
	 */
	enum class EVaultAction : uint8_t
	{
		None             = 0,
		LowVault         = 1,
		LowVaultJumping  = 2,
		LowClimb         = 3,
		LowJumpClimb     = 4,
		HighVault        = 5,
		HighVaultJumping = 6,
		HighClimb        = 7,
		HighJumpClimb    = 8,
		MAX              = 9
	};

	/**
	 * Enum Insurgency.EFactionAnimationStyle
	 */
	enum class EFactionAnimationStyle : uint8_t
	{
		Untrained = 0,
		Military  = 1,
		MAX       = 2
	};

	/**
	 * Enum Insurgency.ESoldierStanceTransition
	 */
	enum class ESoldierStanceTransition : uint8_t
	{
		None            = 0,
		StandToCrouch   = 1,
		CrouchToProne   = 2,
		ProneToCrouch   = 3,
		CrouchToStand   = 4,
		CrouchToUnknown = 5,
		MAX             = 6
	};

	/**
	 * Enum Insurgency.ELadderState
	 */
	enum class ELadderState : uint8_t
	{
		Climbing        = 0,
		Sliding         = 1,
		ViewLeft        = 2,
		ViewRight       = 3,
		TransitionStart = 4,
		TransitionEnd   = 5,
		Grab            = 6,
		Top             = 7,
		Bottom          = 8,
		Side            = 9,
		Leap            = 10,
		MAX             = 11
	};

	/**
	 * Enum Insurgency.ECompassMarkerType
	 */
	enum class ECompassMarkerType : uint8_t
	{
		Information = 0,
		Danger      = 1,
		Order       = 2,
		MAX         = 3
	};

	/**
	 * Enum Insurgency.EScoreType
	 */
	enum class EScoreType : uint8_t
	{
		Kill              = 0,
		ObjectiveCaptured = 1,
		Other             = 2,
		MAX               = 3
	};

	/**
	 * Enum Insurgency.ETeamRole
	 */
	enum class ETeamRole : uint8_t
	{
		None       = 0,
		Attacking  = 1,
		Defending  = 2,
		Ambushing  = 3,
		Extracting = 4,
		MAX        = 5
	};

	/**
	 * Enum Insurgency.EAvailablePlaylistState
	 */
	enum class EAvailablePlaylistState : uint8_t
	{
		Unloaded       = 0,
		Loaded         = 1,
		BuildOutOfDate = 2,
		MAX            = 3
	};

	/**
	 * Enum Insurgency.EMatchmakingFailure
	 */
	enum class EMatchmakingFailure : uint8_t
	{
		Unknown              = 0,
		ReservationFailure   = 1,
		JoinFailure          = 2,
		TicketNotFound       = 3,
		UserCancelled        = 4,
		NotLeader            = 5,
		LeaverBanned         = 6,
		NoNewWorldLogin      = 7,
		BuildOutOfDate       = 8,
		LateJoinNoTarget     = 9,
		LateJoinNotInGame    = 10,
		LateJoinFull         = 11,
		LateJoinWrongVersion = 12,
		MAX                  = 13
	};

	/**
	 * Enum Insurgency.EMatchmakingState
	 */
	enum class EMatchmakingState : uint8_t
	{
		NotMatchmaking    = 0,
		SubmittingTicket  = 1,
		SearchingForMatch = 2,
		ReadyCheck        = 3,
		WaitingForMatch   = 4,
		ReservingSlot     = 5,
		ReadyToJoin       = 6,
		JoiningMatch      = 7,
		Failed            = 8,
		Cancelling        = 9,
		MAX               = 10
	};

	/**
	 * Enum Insurgency.EMusicEvent
	 */
	enum class EMusicEvent : uint8_t
	{
		RoundStart            = 0,
		RoundWin              = 1,
		RoundLose             = 2,
		LastManStart          = 3,
		LastManEnd            = 4,
		CounterAttack         = 5,
		CounterAttackFinal    = 6,
		MoveToExtraction      = 7,
		DefendExtractionPoint = 8,
		MAX                   = 9
	};

	/**
	 * Enum Insurgency.EStationResponse
	 */
	enum class EStationResponse : uint8_t
	{
		Station_FireSupportAvailable         = 0,
		Station_FireSupportDidNotHear        = 1,
		Station_FireSupportReminder          = 2,
		Station_Survival_ExtractionConfirmed = 3,
		Station_Survival_ExtractionOnTheWay  = 4,
		Max_Responses                        = 5,
		Station_FireSupportStart             = 6,
		Station_FireSupportEnd               = 7,
		Station_FireSupportDestroyed         = 8,
		Max_Status_Responses                 = 9,
		MAX                                  = 10
	};

	/**
	 * Enum Insurgency.EFloatingObjectiveVisibilitySetting
	 */
	enum class EFloatingObjectiveVisibilitySetting : uint8_t
	{
		ShowAll                    = 0,
		ShowActiveOnly             = 1,
		HideFarSecondaryObjectives = 2,
		HideAll                    = 3,
		MAX                        = 4
	};

	/**
	 * Enum Insurgency.EVoiceChatChannelFlags
	 */
	enum class EVoiceChatChannelFlags : uint8_t
	{
		None               = 0,
		Radio              = 1,
		Local              = 2,
		Dead               = 3,
		Intermission       = 4,
		Spectator          = 5,
		LocalTeamSpecific  = 6,
		SeparateRadioLocal = 7,
		MAX                = 8
	};

	/**
	 * Enum Insurgency.EOutpostWaveType
	 */
	enum class EOutpostWaveType : uint8_t
	{
		Normal  = 0,
		Special = 1,
		Final   = 2,
		MAX     = 3
	};

	/**
	 * Enum Insurgency.ESurvivalWaveType
	 */
	enum class ESurvivalWaveType : uint8_t
	{
		Normal  = 0,
		Special = 1,
		Final   = 2,
		MAX     = 3
	};

	/**
	 * Enum Insurgency.EItemGearLevel
	 */
	enum class EItemGearLevel : uint8_t
	{
		None  = 0,
		Light = 1,
		Heavy = 2,
		MAX   = 3
	};

	/**
	 * Enum Insurgency.EInteractableGearType
	 */
	enum class EInteractableGearType : uint8_t
	{
		None               = 0,
		GogglesNightVision = 1,
		GogglesGasMask     = 2,
		MAX                = 3
	};

	/**
	 * Enum Insurgency.ERoundResetBehavior
	 */
	enum class ERoundResetBehavior : uint8_t
	{
		Remove = 0,
		Reset  = 1,
		Custom = 2,
		MAX    = 3
	};

	/**
	 * Enum Insurgency.ECallVoteResult
	 */
	enum class ECallVoteResult : uint8_t
	{
		CallAcknowledged          = 0,
		Started                   = 1,
		Queued                    = 2,
		Failed_Generic            = 3,
		Failed_VotingDisabled     = 4,
		Failed_AlreadyIntent      = 5,
		Failed_TooSoon            = 6,
		Failed_VoteFailedRecently = 7,
		Failed_InvalidPlayer      = 8,
		Failed_TargetingAdmin     = 9,
		Failed_InvalidOption      = 10,
		Failed_InvalidTeam        = 11,
		Failed_Spectator          = 12,
		Failed_NotEnoughPlayers   = 13,
		Failed_RequireAdmin       = 14,
		MAX                       = 15
	};

	/**
	 * Enum Insurgency.ECastVoteResult
	 */
	enum class ECastVoteResult : uint8_t
	{
		Cast                 = 0,
		Failed_Generic       = 1,
		Failed_NoVote        = 2,
		Failed_InvalidChoice = 3,
		Failed_NotEligible   = 4,
		Failed_NoChange      = 5,
		MAX                  = 6
	};

	/**
	 * Enum Insurgency.EVoteChoiceType
	 */
	enum class EVoteChoiceType : uint8_t
	{
		Invalid = 0,
		Yes     = 1,
		No      = 2,
		Custom  = 3,
		MAX     = 4
	};

	/**
	 * Enum Insurgency.EVoteState
	 */
	enum class EVoteState : uint8_t
	{
		Inactive              = 0,
		InProgress            = 1,
		Success               = 2,
		Failed_Generic        = 3,
		Failed_MoreNoThanYes  = 4,
		Failed_NotEnoughVotes = 5,
		Failed_Dissent        = 6,
		MAX                   = 7
	};

	/**
	 * Enum Insurgency.EObjectiveBotSpawnMethod
	 */
	enum class EObjectiveBotSpawnMethod : uint8_t
	{
		Default               = 0,
		ClosestToPlayerSpawn  = 1,
		ClosestToObjective    = 2,
		FurthestFromObjective = 3,
		Random                = 4,
		MAX                   = 5
	};

	/**
	 * Enum Insurgency.EObjectiveType
	 */
	enum class EObjectiveType : uint8_t
	{
		Territory = 0,
		Object    = 1,
		Waypoint  = 2,
		Regroup   = 3,
		Character = 4,
		MAX       = 5
	};

	/**
	 * Enum Insurgency.EDestructibleObjectiveState
	 */
	enum class EDestructibleObjectiveState : uint8_t
	{
		Normal    = 0,
		Damaged   = 1,
		Destroyed = 2,
		Disabled  = 3,
		MAX       = 4
	};

	/**
	 * Enum Insurgency.ECharacterGender
	 */
	enum class ECharacterGender : uint8_t
	{
		Neutral = 0,
		Male    = 1,
		Female  = 2,
		MAX     = 3
	};

	/**
	 * Enum Insurgency.EProfileBlockType
	 */
	enum class EProfileBlockType : uint8_t
	{
		Controls        = 0,
		Theater         = 1,
		Cosmetics       = 2,
		ServerBrowser   = 3,
		Highlights      = 4,
		UserInterface   = 5,
		Uncategorized   = 6,
		Replays         = 7,
		UserSettings    = 8,
		ConsoleSaveGame = 9,
		Achievements    = 10,
		None            = 11,
		MAX             = 12
	};

	/**
	 * Enum Insurgency.EConfirmableEvent
	 */
	enum class EConfirmableEvent : uint8_t
	{
		ViewedVersusInfo    = 0,
		ViewedCoopInfo      = 1,
		ViewedCompInfo      = 2,
		TutorialHasLaunched = 3,
		TutorialLeftSpawn   = 4,
		TutorialCompleted   = 5,
		ViewedWeightInfo    = 6,
		ViewedSupplyInfo    = 7,
		ViewedClassInfo     = 8,
		MAX                 = 9
	};

	/**
	 * Enum Insurgency.eInputIconType
	 */
	enum class EeInputIconType : uint8_t
	{
		eInputIconType_Keyboard           = 0,
		eInputIconType_PS4                = 1,
		eInputIconType_XboxOne            = 2,
		eInputIconType_eInputIconType_MAX = 3
	};

	/**
	 * Enum Insurgency.EIngameMenuType
	 */
	enum class EIngameMenuType : uint8_t
	{
		Menu_Game            = 0,
		Menu_Loadout         = 1,
		Menu_TeamSelect      = 2,
		Menu_TutorialLessons = 3,
		Menu_CosmeticSelect  = 4,
		Menu_MAX             = 5
	};

	/**
	 * Enum Insurgency.EFireSupportRequestResult
	 */
	enum class EFireSupportRequestResult : uint8_t
	{
		Success          = 0,
		SupportCooldown  = 1,
		PersonalCooldown = 2,
		OutOfBounds      = 3,
		NoAmmo           = 4,
		NoRadio          = 5,
		NotOfficer       = 6,
		NullPointer      = 7,
		GameModeBan      = 8,
		CalledOnClient   = 9,
		Count            = 10,
		MAX              = 11
	};

	/**
	 * Enum Insurgency.EMapVoteSelection
	 */
	enum class EMapVoteSelection : uint8_t
	{
		Map1        = 0,
		Map2        = 1,
		Map3        = 2,
		Map4        = 3,
		Map5        = 4,
		Map6        = 5,
		MaxMapIndex = 6,
		Invalid     = 7,
		Refresh     = 8,
		PlayAgain   = 9,
		Random      = 10,
		MAX         = 11
	};

	/**
	 * Enum Insurgency.EPlayerKickReason
	 */
	enum class EPlayerKickReason : uint8_t
	{
		IdleTime             = 0,
		VoteBan              = 1,
		VoteKick             = 2,
		AdminBan             = 3,
		AdminKick            = 4,
		ServerShutDown       = 5,
		DuplicateReservation = 6,
		NetworkProblem       = 7,
		MAX                  = 8
	};

	/**
	 * Enum Insurgency.EPendingMenuAction
	 */
	enum class EPendingMenuAction : uint8_t
	{
		None        = 0,
		TeamSelect  = 1,
		ClassSelect = 2,
		KitSelect   = 3,
		MAX         = 4
	};

	/**
	 * Enum Insurgency.EMusicRoundState
	 */
	enum class EMusicRoundState : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		MAX    = 3
	};

	/**
	 * Enum Insurgency.ERadialMenuDirection
	 */
	enum class ERadialMenuDirection : uint8_t
	{
		Radial_North     = 0,
		Radial_NorthEast = 1,
		Radial_East      = 2,
		Radial_SouthEast = 3,
		Radial_South     = 4,
		Radial_SouthWest = 5,
		Radial_West      = 6,
		Radial_NorthWest = 7,
		Radial_Center    = 8,
		Radial_MAX       = 9
	};

	/**
	 * Enum Insurgency.EIngameMenuEntryState
	 */
	enum class EIngameMenuEntryState : uint8_t
	{
		LoadingScreen  = 0,
		GameSection    = 1,
		ClassSection   = 2,
		LoadoutSection = 3,
		Ingame         = 4,
		MAX            = 5
	};

	/**
	 * Enum Insurgency.EFirearmFiremode
	 */
	enum class EFirearmFiremode : uint8_t
	{
		Safety     = 0,
		Automatic  = 1,
		Burst      = 2,
		Single     = 3,
		BoltAction = 4,
		PumpAction = 5,
		Count      = 6,
		MAX        = 7
	};

	/**
	 * Enum Insurgency.EGamepadSensitivityCurve
	 */
	enum class EGamepadSensitivityCurve : uint8_t
	{
		Exponential = 0,
		Linear      = 1,
		Dynamic     = 2,
		DualZone    = 3,
		MAX         = 4
	};

	/**
	 * Enum Insurgency.EOpticZoomLevel
	 */
	enum class EOpticZoomLevel : uint8_t
	{
		OneX     = 0,
		OneHalfX = 1,
		TwoX     = 2,
		TwoHalfX = 3,
		ThreeX   = 4,
		FourX    = 5,
		SixX     = 6,
		SevenX   = 7,
		MAX      = 8
	};

	/**
	 * Enum Insurgency.EPlaylistType
	 */
	enum class EPlaylistType : uint8_t
	{
		PVP         = 0,
		Coop        = 1,
		Competitive = 2,
		MAX         = 3
	};

	/**
	 * Enum Insurgency.EServerBrowserLightingSelection
	 */
	enum class EServerBrowserLightingSelection : uint8_t
	{
		Day         = 0,
		Night       = 1,
		DayAndNight = 2,
		MAX         = 3
	};

	/**
	 * Enum Insurgency.EServerBrowserFilterSelection
	 */
	enum class EServerBrowserFilterSelection : uint8_t
	{
		NoPreference = 0,
		Include      = 1,
		Exclude      = 2,
		MAX          = 3
	};

	/**
	 * Enum Insurgency.ECosmeticIngameEquipState
	 */
	enum class ECosmeticIngameEquipState : uint8_t
	{
		NeverEquip         = 0,
		AlwaysEquip        = 1,
		ItemDependentEquip = 2,
		Count              = 3,
		MAX                = 4
	};

	/**
	 * Enum Insurgency.ECosmeticMenuEquipState
	 */
	enum class ECosmeticMenuEquipState : uint8_t
	{
		NotEquipped              = 0,
		EquippedPreferredFaction = 1,
		EquippedOtherFaction     = 2,
		Count                    = 3,
		MAX                      = 4
	};

	/**
	 * Enum Insurgency.EPurchaseResult
	 */
	enum class EPurchaseResult : uint8_t
	{
		Success           = 0,
		Invalid           = 1,
		Conflict          = 2,
		NotAvailable      = 3,
		TooExpensive      = 4,
		Overweight        = 5,
		EquipLimit        = 6,
		SubSlotNotAllowed = 7,
		Locked            = 8,
		MAX               = 9
	};

	/**
	 * Enum Insurgency.ERefundResult
	 */
	enum class ERefundResult : uint8_t
	{
		Success = 0,
		Invalid = 1,
		Locked  = 2,
		MAX     = 3
	};

	/**
	 * Enum Insurgency.EKeyBindingType
	 */
	enum class EKeyBindingType : uint8_t
	{
		Normal = 0,
		Hold   = 1,
		Toggle = 2,
		MAX    = 3
	};

	/**
	 * Enum Insurgency.ESeatSearchPriorityType
	 */
	enum class ESeatSearchPriorityType : uint8_t
	{
		Priority_Closest = 0,
		Priority_Ranking = 1,
		Priority_MAX     = 2
	};

	/**
	 * Enum Insurgency.EVehicleOrientation
	 */
	enum class EVehicleOrientation : uint8_t
	{
		Vehicle_Falling    = 0,
		Vehicle_Upright    = 1,
		Vehicle_OnSide     = 2,
		Vehicle_UpsideDown = 3,
		Vehicle_MAX        = 4
	};

	/**
	 * Enum Insurgency.EAttachmentFallbackMode
	 */
	enum class EAttachmentFallbackMode : uint8_t
	{
		AlwaysShow = 0,
		Or         = 1,
		And        = 2,
		Xor        = 3,
		Nor        = 4,
		Nand       = 5,
		Xnor       = 6,
		MAX        = 7
	};

	/**
	 * Enum Insurgency.EUpgradeTagMatchCondition
	 */
	enum class EUpgradeTagMatchCondition : uint8_t
	{
		NoMatchingTag = 0,
		HasAllTags    = 1,
		HasAnyTag     = 2,
		MAX           = 3
	};

	/**
	 * Enum Insurgency.ESwitchingMagazineState
	 */
	enum class ESwitchingMagazineState : uint8_t
	{
		Invalid = 0,
		Fire    = 1,
		Reload  = 2,
		Manual  = 3,
		MAX     = 4
	};

	/**
	 * Enum Insurgency.EFirearmBoltState
	 */
	enum class EFirearmBoltState : uint8_t
	{
		Ready       = 0,
		NeedCycling = 1,
		Cycling     = 2,
		MAX         = 3
	};

	/**
	 * Enum Insurgency.EFirearmState
	 */
	enum class EFirearmState : uint8_t
	{
		Idle                       = 0,
		Firing                     = 1,
		CyclingFiremode            = 2,
		ReloadingDry               = 3,
		ReloadingTactical          = 4,
		ReloadingDrySpeed          = 5,
		ReloadingTacticalSpeed     = 6,
		ReloadingDryStart          = 7,
		ReloadingTacticalStart     = 8,
		ReloadingLoop              = 9,
		FinishingSingleReload      = 10,
		FinishingReload            = 11,
		CyclingBolt                = 12,
		AmmoCheck                  = 13,
		SwitchingMagazine          = 14,
		SuspendedSwitchingMagazine = 15,
		NeedSwitchingMagazine      = 16,
		MAX                        = 17
	};

	/**
	 * Enum Insurgency.ESwayMethod
	 */
	enum class ESwayMethod : uint8_t
	{
		PerlinNoise = 0,
		Lissajous   = 1,
		MAX         = 2
	};

	/**
	 * Enum Insurgency.EGrenadeState
	 */
	enum class EGrenadeState : uint8_t
	{
		Idle        = 0,
		PullingBack = 1,
		Throwing    = 2,
		Reloading   = 3,
		MAX         = 4
	};

	/**
	 * Enum Insurgency.EGrenadeThrowMode
	 */
	enum class EGrenadeThrowMode : uint8_t
	{
		None             = 0,
		Released         = 1,
		Overhand         = 2,
		OverhandCooking  = 3,
		Underhand        = 4,
		UnderhandCooking = 5,
		MAX              = 6
	};

	/**
	 * Enum Insurgency.EGrenadeCategory
	 */
	enum class EGrenadeCategory : uint8_t
	{
		Smoke         = 0,
		Flash         = 1,
		Fragmentation = 2,
		Incendiary    = 3,
		Remote        = 4,
		Rocket        = 5,
		Mine          = 6,
		MAX           = 7
	};

	/**
	 * Enum Insurgency.ERevolverChamberState
	 */
	enum class ERevolverChamberState : uint8_t
	{
		Empty = 0,
		Fired = 1,
		Ready = 2,
		MAX   = 3
	};

	/**
	 * Enum Insurgency.EBipodState
	 */
	enum class EBipodState : uint8_t
	{
		Undeployed = 0,
		Deploying  = 1,
		Deployed   = 2,
		Retracting = 3,
		MAX        = 4
	};

	/**
	 * Enum Insurgency.EPickupType
	 */
	enum class EPickupType : uint8_t
	{
		RemoveForever = 0,
		RemoveTimed   = 1,
		DontRemove    = 2,
		MAX           = 3
	};

	/**
	 * Enum Insurgency.EAmmoContainerType
	 */
	enum class EAmmoContainerType : uint8_t
	{
		Mag             = 0,
		ExtMag          = 1,
		Drum            = 2,
		Box             = 3,
		GrenadeLauncher = 4,
		RocketLauncher  = 5,
		Shells          = 6,
		MAX             = 7
	};

	/**
	 * Enum Insurgency.EAnimationType
	 */
	enum class EAnimationType : uint8_t
	{
		None       = 0,
		Pistol     = 1,
		Rifle      = 2,
		Bolt       = 3,
		Shotgun    = 4,
		Grenade    = 5,
		Explosive  = 6,
		Launcher   = 7,
		GL         = 8,
		Binoculars = 9,
		MAX        = 10
	};

	/**
	 * Enum Insurgency.EIKSpecialScenario
	 */
	enum class EIKSpecialScenario : uint8_t
	{
		None            = 0,
		LeftRightWeapon = 1,
		LeftRightKnees  = 2,
		LeftRightHips   = 3,
		MAX             = 4
	};

	/**
	 * Enum Insurgency.EIKAOScenario
	 */
	enum class EIKAOScenario : uint8_t
	{
		Firearm   = 0,
		OneHanded = 1,
		MAX       = 2
	};

	/**
	 * Enum Insurgency.EIKVectorScenario
	 */
	enum class EIKVectorScenario : uint8_t
	{
		Normal  = 0,
		Vehicle = 1,
		Reload  = 2,
		Melee   = 3,
		MAX     = 4
	};

	/**
	 * Enum Insurgency.ETickUpdateSetting
	 */
	enum class ETickUpdateSetting : uint8_t
	{
		Normal   = 0,
		VeryFast = 1,
		Fast     = 2,
		Medium   = 3,
		Slow     = 4,
		VerySlow = 5,
		MAX      = 6
	};

	/**
	 * Enum Insurgency.EAnimCardinalDirection
	 */
	enum class EAnimCardinalDirection : uint8_t
	{
		North = 0,
		East  = 1,
		South = 2,
		West  = 3,
		Zero  = 4,
		MAX   = 5
	};

	/**
	 * Enum Insurgency.EAnimDirection
	 */
	enum class EAnimDirection : uint8_t
	{
		Left  = 0,
		Right = 1,
		Up    = 2,
		Down  = 3,
		None  = 4,
		MAX   = 5
	};

	/**
	 * Enum Insurgency.EAnimType
	 */
	enum class EAnimType : uint8_t
	{
		Firearm    = 0,
		Explosive  = 1,
		Launcher   = 2,
		Melee      = 3,
		Misc       = 4,
		TotalSlots = 5,
		MAX        = 6
	};

	/**
	 * Enum Insurgency.EWeaponReloadType
	 */
	enum class EWeaponReloadType : uint8_t
	{
		Normal         = 0,
		Fast           = 1,
		FastFB         = 2,
		Deployed       = 3,
		FastDeployed   = 4,
		FastDeployedFB = 5,
		Single         = 6,
		DeployedSingle = 7,
		MAX            = 8
	};

	/**
	 * Enum Insurgency.EWeaponReloadStage
	 */
	enum class EWeaponReloadStage : uint8_t
	{
		Normal   = 0,
		BoltPull = 1,
		MagIn    = 2,
		Fallback = 3,
		MAX      = 4
	};

	/**
	 * Enum Insurgency.EWeaponPosture
	 */
	enum class EWeaponPosture : uint8_t
	{
		Normal          = 0,
		Iron            = 1,
		Down            = 2,
		ProneTransition = 3,
		Jump            = 4,
		Falling         = 5,
		Vaulting        = 6,
		VaultRecovery   = 7,
		Sliding         = 8,
		MAX             = 9
	};

	/**
	 * Enum Insurgency.EWeaponMovement
	 */
	enum class EWeaponMovement : uint8_t
	{
		Normal = 0,
		Sprint = 1,
		Crawl  = 2,
		MAX    = 3
	};

	/**
	 * Enum Insurgency.EFireModeAnimation
	 */
	enum class EFireModeAnimation : uint8_t
	{
		AutoSemi  = 0,
		AutoBurst = 1,
		BurstSemi = 2,
		BurstAuto = 3,
		SemiBurst = 4,
		SemiAuto  = 5,
		MAX       = 6
	};

	/**
	 * Enum Insurgency.EDamageAnimType
	 */
	enum class EDamageAnimType : uint8_t
	{
		Melee      = 0,
		Explosive  = 1,
		Flashed    = 2,
		Chemical   = 3,
		Projectile = 4,
		MAX        = 5
	};

	/**
	 * Enum Insurgency.ECharacterPosture
	 */
	enum class ECharacterPosture : uint8_t
	{
		Relaxed = 0,
		Normal  = 1,
		Iron    = 2,
		MAX     = 3
	};

	/**
	 * Enum Insurgency.ECharacterMovement
	 */
	enum class ECharacterMovement : uint8_t
	{
		Idle     = 0,
		SlowWalk = 1,
		IronWalk = 2,
		Walk     = 3,
		IronMove = 4,
		Move     = 5,
		Sprint   = 6,
		MAX      = 7
	};

	/**
	 * Enum Insurgency.ECharacterAOType
	 */
	enum class ECharacterAOType : uint8_t
	{
		Relaxed   = 0,
		Normal    = 1,
		Iron      = 2,
		LeanLeft  = 3,
		LeanRight = 4,
		MAX       = 5
	};

	/**
	 * Enum Insurgency.ECharacterAnimsetBase
	 */
	enum class ECharacterAnimsetBase : uint8_t
	{
		Rifle     = 0,
		Pistol    = 1,
		Launcher  = 2,
		Melee     = 3,
		Grenade   = 4,
		Explosive = 5,
		MAX       = 6
	};

	/**
	 * Enum Insurgency.EUIHUDSound
	 */
	enum class EUIHUDSound : uint8_t
	{
		OutpostLostObjective       = 0,
		OutpostPrepareNextWave     = 1,
		OutpostIncomingWaveNormal  = 2,
		OutpostIncomingWaveSpecial = 3,
		OutpostIncomingWaveFinal   = 4,
		MAX                        = 5
	};

	/**
	 * Enum Insurgency.EUILoadoutSound
	 */
	enum class EUILoadoutSound : uint8_t
	{
		Primary    = 0,
		Secondary  = 1,
		Explosive  = 2,
		Carrier    = 3,
		Armor      = 4,
		Accessory  = 5,
		Attachment = 6,
		Unequip    = 7,
		Select     = 8,
		MAX        = 9
	};

	/**
	 * Enum Insurgency.EUISound
	 */
	enum class EUISound : uint8_t
	{
		Hover             = 0,
		Navigate          = 1,
		Select            = 2,
		MatchReadyStinger = 3,
		Pause             = 4,
		FindMatch         = 5,
		CosmeticReward    = 6,
		ClassUnlock       = 7,
		LevelUp           = 8,
		SupplyGained      = 9,
		MAX               = 10
	};

	/**
	 * Enum Insurgency.EBotBehaviorReturnResult
	 */
	enum class EBotBehaviorReturnResult : uint8_t
	{
		Running = 0,
		Done    = 1,
		MAX     = 2
	};

	/**
	 * Enum Insurgency.EBotBehaviorPriority
	 */
	enum class EBotBehaviorPriority : uint8_t
	{
		None              = 0,
		Base              = 1,
		IdleLow           = 2,
		IdleMedium        = 3,
		IdleHigh          = 4,
		Alert             = 5,
		CombatLow         = 6,
		CombatLowHipShoot = 7,
		CombatLowElevated = 8,
		CombatMedium      = 9,
		CombatHigh        = 10,
		Utility           = 11,
		MAX               = 12
	};

	/**
	 * Enum Insurgency.EMoraleAdjustmentReason
	 */
	enum class EMoraleAdjustmentReason : uint8_t
	{
		NotSpecified                = 0,
		CheckpointObjectiveCaptured = 1,
		MAX                         = 2
	};

	/**
	 * Enum Insurgency.EBotKnownQuery
	 */
	enum class EBotKnownQuery : uint8_t
	{
		QUERY_FRIENDLY = 0,
		QUERY_ENEMY    = 1,
		QUERY_NEUTRALS = 2,
		QUERY_ALL      = 3,
		MAX_STATES     = 4,
		MAX            = 5
	};

	/**
	 * Enum Insurgency.EBotAIMood
	 */
	enum class EBotAIMood : uint8_t
	{
		MOOD_CALM      = 0,
		MOOD_NERVOUS   = 1,
		MOOD_COWERING  = 2,
		MOOD_PANICKING = 3,
		MAX_STATES     = 4,
		MAX            = 5
	};

	/**
	 * Enum Insurgency.EAppearancePatchesSubSlot
	 */
	enum class EAppearancePatchesSubSlot : uint8_t
	{
		None  = 0,
		Front = 1,
		Back  = 2,
		Count = 3,
		MAX   = 4
	};

	/**
	 * Enum Insurgency.EGearCombination
	 */
	enum class EGearCombination : uint8_t
	{
		HeavyCarrierHeavyArmour = 0,
		HeavyCarrierLightArmour = 1,
		HeavyCarrierNoArmour    = 2,
		LightCarrierHeavyArmour = 3,
		LightCarrierLightArmour = 4,
		LightCarrierNoArmour    = 5,
		NoCarrierHeavyArmour    = 6,
		NoCarrierLightArmour    = 7,
		NoCarrierNoArmour       = 8,
		None                    = 9,
		MAX                     = 10
	};

	/**
	 * Enum Insurgency.EAppearanceEquipmentSubSlot
	 */
	enum class EAppearanceEquipmentSubSlot : uint8_t
	{
		Carrier       = 0,
		Backpack      = 1,
		HeavyBackpack = 2,
		Count         = 3,
		MAX           = 4
	};

	/**
	 * Enum Insurgency.EAppearanceArmSubSlot
	 */
	enum class EAppearanceArmSubSlot : uint8_t
	{
		Left  = 0,
		Right = 1,
		Count = 2,
		MAX   = 3
	};

	/**
	 * Enum Insurgency.EAppearanceCharacterSubSlot
	 */
	enum class EAppearanceCharacterSubSlot : uint8_t
	{
		None           = 0,
		Head           = 1,
		Hair           = 2,
		FacialHair     = 3,
		HairColor      = 4,
		Eyecolor       = 5,
		Skintone       = 6,
		LeftArmTattoo  = 7,
		RightArmTattoo = 8,
		Count          = 9,
		MAX            = 10
	};

	/**
	 * Enum Insurgency.ECollectibleType
	 */
	enum class ECollectibleType : uint8_t
	{
		Item   = 0,
		Bundle = 1,
		MAX    = 2
	};

	/**
	 * Enum Insurgency.ECollectibleTier
	 */
	enum class ECollectibleTier : uint8_t
	{
		Bronze   = 0,
		Silver   = 1,
		Gold     = 2,
		Platinum = 3,
		Diamond  = 4,
		MAX      = 5
	};

	/**
	 * Enum Insurgency.ECollectibleClaimType
	 */
	enum class ECollectibleClaimType : uint8_t
	{
		Free              = 0,
		DLC               = 1,
		ExternalInventory = 2,
		Achievement       = 3,
		MAX               = 4
	};

	/**
	 * Enum Insurgency.ECollectibleRarity
	 */
	enum class ECollectibleRarity : uint8_t
	{
		OwnedByAll            = 0,
		Common                = 1,
		Uncommon              = 2,
		Rare                  = 3,
		VeryRare              = 4,
		Exotic                = 5,
		Unavailable           = 6,
		Claim                 = 7,
		Developer             = 8,
		CompetitiveUnlockable = 9,
		Bundle                = 10,
		Hidden                = 11,
		MAX                   = 12
	};

	/**
	 * Enum Insurgency.ECosmeticEyeColor
	 */
	enum class ECosmeticEyeColor : uint8_t
	{
		DarkBrown = 0,
		Brown     = 1,
		Hazel     = 2,
		Grey      = 3,
		Green     = 4,
		Blue      = 5,
		MAX       = 6
	};

	/**
	 * Enum Insurgency.ECosmeticPoolReservationType
	 */
	enum class ECosmeticPoolReservationType : uint8_t
	{
		None    = 0,
		Soldier = 1,
		MAX     = 2
	};

	/**
	 * Enum Insurgency.EDeathCameraMode
	 */
	enum class EDeathCameraMode : uint8_t
	{
		TrackAll      = 0,
		FocusOnPlayer = 1,
		MAX           = 2
	};

	/**
	 * Enum Insurgency.EDoorDirection
	 */
	enum class EDoorDirection : uint8_t
	{
		Forward  = 0,
		Backward = 1,
		Bothways = 2,
		MAX      = 3
	};

	/**
	 * Enum Insurgency.EDoorBotSlot
	 */
	enum class EDoorBotSlot : uint8_t
	{
		Opening              = 0,
		Waiting_Pull_Right   = 1,
		Waiting_Pull_Right01 = 2,
		Waiting_Pull_Right02 = 3,
		Waiting_Push_Left    = 4,
		Waiting_Push_Left01  = 5,
		Waiting_Push_Left02  = 6,
		Waiting_Push_Right   = 7,
		Waiting_Push_Right01 = 8,
		Waiting_Push_Right02 = 9,
		MaxDoorSlots         = 10,
		MAX                  = 11
	};

	/**
	 * Enum Insurgency.EDoorType
	 */
	enum class EDoorType : uint8_t
	{
		Wood            = 0,
		Metal           = 1,
		ReinforcedSteel = 2,
		MAX             = 3
	};

	/**
	 * Enum Insurgency.EDoorState
	 */
	enum class EDoorState : uint8_t
	{
		Closed                = 0,
		CreakyOpen            = 1,
		PartiallyOpen         = 2,
		Open                  = 3,
		Opening               = 4,
		BreachOpening         = 5,
		Closing               = 6,
		BreachClosing         = 7,
		FallingTowardsInside  = 8,
		FallingTowardsOutside = 9,
		Fallen                = 10,
		Destroyed             = 11,
		MAX                   = 12
	};

	/**
	 * Enum Insurgency.EAircraftMovementState
	 */
	enum class EAircraftMovementState : uint8_t
	{
		ContinueStraight = 0,
		FlyBackToOrigin  = 1,
		PeelOff          = 2,
		FlyToDestination = 3,
		MAX              = 4
	};

	/**
	 * Enum Insurgency.EHoveringFireSupportDialogue
	 */
	enum class EHoveringFireSupportDialogue : uint8_t
	{
		Arriving       = 0,
		Leaving        = 1,
		StartFalling   = 2,
		BeginDodge     = 3,
		FinishDodge    = 4,
		LostGunner1    = 5,
		LostGunner2    = 6,
		TakingFire     = 7,
		TakingDamage   = 8,
		Death          = 9,
		Killed_Generic = 10,
		Killed         = 11,
		Killed01       = 12,
		Killed02       = 13,
		Killed03       = 14,
		Killed04       = 15,
		Killed05       = 16,
		Killed06       = 17,
		Killed07       = 18,
		Killed08       = 19,
		Killed09       = 20,
		Killed_Many    = 21,
		MaxResponses   = 22,
		MAX            = 23
	};

	/**
	 * Enum Insurgency.EFoliageInteractionType
	 */
	enum class EFoliageInteractionType : uint8_t
	{
		Always     = 0,
		OnlyMoving = 1,
		MAX        = 2
	};

	/**
	 * Enum Insurgency.EFileSizeUnit
	 */
	enum class EFileSizeUnit : uint8_t
	{
		Bytes     = 0,
		Kilobytes = 1,
		Megabytes = 2,
		Gigabytes = 3,
		Terabytes = 4,
		MAX       = 5
	};

	/**
	 * Enum Insurgency.ECardinalDirection
	 */
	enum class ECardinalDirection : uint8_t
	{
		North     = 0,
		NorthEast = 1,
		East      = 2,
		SouthEast = 3,
		South     = 4,
		SouthWest = 5,
		West      = 6,
		NorthWest = 7,
		MAX       = 8
	};

	/**
	 * Enum Insurgency.EAssetName
	 */
	enum class EAssetName : uint8_t
	{
		CycleOpticsHint = 0,
		UnderbarrelHint = 1,
		ToggleAccessory = 2,
		SiderailHint    = 3,
		ChangeClassHint = 4,
		Count           = 5,
		MAX             = 6
	};

	/**
	 * Enum Insurgency.EBotInvestigationPriority
	 */
	enum class EBotInvestigationPriority : uint8_t
	{
		INVESTIGATION_TYPE_NONE      = 0,
		INVESTIGATION_TYPE_CURIOSITY = 1,
		INVESTIGATION_TYPE_CP        = 2,
		INVESTIGATION_TYPE_ENEMY_CP  = 3,
		INVESTIGATION_TYPE_THREAT    = 4,
		INVESTIGATION_TYPE_MAX       = 5
	};

	/**
	 * Enum Insurgency.EBotCoverSearchPriority
	 */
	enum class EBotCoverSearchPriority : uint8_t
	{
		COVER_PRIORITY_CLOSEST_TO_SEARCHORIGIN    = 0,
		COVER_PRIORITY_CLOSEST_TO_FRONTLINE       = 1,
		COVER_PRIORITY_FURTHEST_FROM_SEARCHORIGIN = 2,
		COVER_PRIORITY_FURTHEST_FROM_FRONTLINE    = 3,
		COVER_PRIORITY_MAX                        = 4
	};

	/**
	 * Enum Insurgency.EBotCoverSearchOrientation
	 */
	enum class EBotCoverSearchOrientation : uint8_t
	{
		COVER_AHEAD              = 0,
		COVER_AHEAD_AND_TO_SIDES = 1,
		COVER_BEHIND             = 2,
		COVER_ANY                = 3,
		COVER_MAX                = 4
	};

	/**
	 * Enum Insurgency.EAIDesiredLookAtPriority
	 */
	enum class EAIDesiredLookAtPriority : uint8_t
	{
		Idle           = 0,
		Movement       = 1,
		Interesting    = 2,
		LastSeenThreat = 3,
		Footsteps      = 4,
		Sprint         = 5,
		Gunshot        = 6,
		Enemy          = 7,
		Forced         = 8,
		MAX            = 9
	};

	/**
	 * Enum Insurgency.EAIDesiredLocomotionPriority
	 */
	enum class EAIDesiredLocomotionPriority : uint8_t
	{
		None      = 0,
		Low       = 1,
		Normal    = 2,
		Important = 3,
		Critical  = 4,
		Forced    = 5,
		MAX       = 6
	};

	/**
	 * Enum Insurgency.EAIDesiredLocomotion
	 */
	enum class EAIDesiredLocomotion : uint8_t
	{
		Walk   = 0,
		Run    = 1,
		Sprint = 2,
		MAX    = 3
	};

	/**
	 * Enum Insurgency.EAISquadRole
	 */
	enum class EAISquadRole : uint8_t
	{
		SquadRole_Unassigned     = 0,
		SquadRole_Suppression    = 1,
		SquadRole_FragGrenadier  = 2,
		SquadRole_SmokeGrenadier = 3,
		SquadRole_Flanker        = 4,
		SquadRole_Rocketeer      = 5,
		SquadRole_Ambusher       = 6,
		SquadRole_MAX            = 7
	};

	/**
	 * Enum Insurgency.EAIVehicleSteeringState
	 */
	enum class EAIVehicleSteeringState : uint8_t
	{
		STEERING_DRIVING_FORWARD     = 0,
		STEERING_STUCK_AND_REVERSING = 1,
		STEERING_MAX                 = 2
	};

	/**
	 * Enum Insurgency.EMainMenuPage
	 */
	enum class EMainMenuPage : uint8_t
	{
		Main             = 0,
		Tutorials        = 1,
		Multiplayer      = 2,
		ServerBrowser    = 3,
		LocalGame        = 4,
		Settings         = 5,
		Profile          = 6,
		Character        = 7,
		PostMatch        = 8,
		Quit             = 9,
		Announcement     = 10,
		Recap            = 11,
		CreateCustomGame = 12,
		Credits          = 13,
		Mods             = 14,
		LanguageSelect   = 15,
		OnlineStore      = 16,
		MAX              = 17
	};

	/**
	 * Enum Insurgency.EPawnSpawnLocationMethod
	 */
	enum class EPawnSpawnLocationMethod : uint8_t
	{
		Default            = 0,
		NavSpawning        = 1,
		SpawnAtCoordinates = 2,
		MAX                = 3
	};

	/**
	 * Enum Insurgency.EPresenceState
	 */
	enum class EPresenceState : uint8_t
	{
		Playing                = 0,
		PlayingPlaylistMapMode = 1,
		PlayingMapMode         = 2,
		ViewingReplay          = 3,
		InQueue                = 4,
		InQueueFor             = 5,
		MainMenu               = 6,
		ViewingMatchResults    = 7,
		MAX                    = 8
	};

	/**
	 * Enum Insurgency.EUTSessionHelperJoinState
	 */
	enum class EUTSessionHelperJoinState : uint8_t
	{
		NotJoining            = 0,
		RequestingReservation = 1,
		FailedReservation     = 2,
		WaitingOnGame         = 3,
		AttemptingJoin        = 4,
		JoiningSession        = 5,
		FailedJoin            = 6,
		MAX                   = 7
	};

	/**
	 * Enum Insurgency.EINSSessionHelperJoinResult
	 */
	enum class EINSSessionHelperJoinResult : uint8_t
	{
		NoResult           = 0,
		ReservationSuccess = 1,
		ReservationFailure = 2,
		JoinSessionSuccess = 3,
		JoinSessionFailure = 4,
		MAX                = 5
	};

	/**
	 * Enum Insurgency.ELadderType
	 */
	enum class ELadderType : uint8_t
	{
		Metal = 0,
		Wood  = 1,
		MAX   = 2
	};

	/**
	 * Enum Insurgency.EMapVoteConclusion
	 */
	enum class EMapVoteConclusion : uint8_t
	{
		Failed      = 0,
		TravelToMap = 1,
		PlayAgain   = 2,
		MAX         = 3
	};

	/**
	 * Enum Insurgency.EMarketingCharacterWeaponAesthetic
	 */
	enum class EMarketingCharacterWeaponAesthetic : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterWeaponMagazine
	 */
	enum class EMarketingCharacterWeaponMagazine : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterWeaponSiderail
	 */
	enum class EMarketingCharacterWeaponSiderail : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterWeaponUnderbarrel
	 */
	enum class EMarketingCharacterWeaponUnderbarrel : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterWeaponSight
	 */
	enum class EMarketingCharacterWeaponSight : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterCarrierVariation
	 */
	enum class EMarketingCharacterCarrierVariation : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterArmorVariation
	 */
	enum class EMarketingCharacterArmorVariation : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterFeetVariation
	 */
	enum class EMarketingCharacterFeetVariation : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterLegsVariation
	 */
	enum class EMarketingCharacterLegsVariation : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterHandsVariation
	 */
	enum class EMarketingCharacterHandsVariation : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterTorsoVariation
	 */
	enum class EMarketingCharacterTorsoVariation : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterEyewearVariation
	 */
	enum class EMarketingCharacterEyewearVariation : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterFacewearVariation
	 */
	enum class EMarketingCharacterFacewearVariation : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterHeadgearVariation
	 */
	enum class EMarketingCharacterHeadgearVariation : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterEquipmentLevel
	 */
	enum class EMarketingCharacterEquipmentLevel : uint8_t
	{
		None      = 0,
		INS_None  = 1,
		INS_Light = 2,
		INS_Heavy = 3,
		SEC_None  = 4,
		SEC_Light = 5,
		SEC_Heavy = 6,
		MAX       = 7
	};

	/**
	 * Enum Insurgency.EMarketingCharacterFeet
	 */
	enum class EMarketingCharacterFeet : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterLegs
	 */
	enum class EMarketingCharacterLegs : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterHands
	 */
	enum class EMarketingCharacterHands : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterTorso
	 */
	enum class EMarketingCharacterTorso : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterEyewear
	 */
	enum class EMarketingCharacterEyewear : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterFacewear
	 */
	enum class EMarketingCharacterFacewear : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterHeadgear
	 */
	enum class EMarketingCharacterHeadgear : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterSkinTone
	 */
	enum class EMarketingCharacterSkinTone : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterEyeColour
	 */
	enum class EMarketingCharacterEyeColour : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterHairColor
	 */
	enum class EMarketingCharacterHairColor : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterFacialHair
	 */
	enum class EMarketingCharacterFacialHair : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterHair
	 */
	enum class EMarketingCharacterHair : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.EMarketingCharacterHead
	 */
	enum class EMarketingCharacterHead : uint8_t
	{
		Default = 0,
		MAX     = 1
	};

	/**
	 * Enum Insurgency.ECharacterCosmeticSlots
	 */
	enum class ECharacterCosmeticSlots : uint8_t
	{
		Head           = 0,
		Hair           = 1,
		FacialHair     = 2,
		HairColour     = 3,
		LeftArmTattoo  = 4,
		RightArmTattoo = 5,
		EyeColour      = 6,
		SkinTone       = 7,
		Headgear       = 8,
		Facewear       = 9,
		Eyewear        = 10,
		Torso          = 11,
		Hands          = 12,
		Legs           = 13,
		Feet           = 14,
		Equipment      = 15,
		MAX            = 16
	};

	/**
	 * Enum Insurgency.EModPrimaryAssetType
	 */
	enum class EModPrimaryAssetType : uint8_t
	{
		Map                 = 0,
		Item                = 1,
		WeaponUpgrade       = 2,
		ScenarioMultiplayer = 3,
		Ruleset             = 4,
		Mutator             = 5,
		MAX                 = 6
	};

	/**
	 * Enum Insurgency.EObjectiveActionType
	 */
	enum class EObjectiveActionType : uint8_t
	{
		None       = 0,
		Vault      = 1,
		Sprint     = 2,
		Lean       = 3,
		AimAndFire = 4,
		Slide      = 5,
		Breach     = 6,
		MAX        = 7
	};

	/**
	 * Enum Insurgency.ECaptureState
	 */
	enum class ECaptureState : uint8_t
	{
		Idle                  = 0,
		WaitingForMorePlayers = 1,
		Capturing             = 2,
		Stalemate             = 3,
		BlockedByEnemy        = 4,
		BlockedByObjective    = 5,
		BlockedByOther        = 6,
		Reversing             = 7,
		MAX                   = 8
	};

	/**
	 * Enum Insurgency.EObjectiveRelationship
	 */
	enum class EObjectiveRelationship : uint8_t
	{
		Neutral  = 0,
		Friendly = 1,
		Enemy    = 2,
		MAX      = 3
	};

	/**
	 * Enum Insurgency.eInventoryItemState
	 */
	enum class EeInventoryItemState : uint8_t
	{
		Unclaimed               = 0,
		Owned                   = 1,
		Used                    = 2,
		Expired                 = 3,
		Frozen                  = 4,
		Returned                = 5,
		LevelCashed             = 6,
		eInventoryItemState_MAX = 7
	};

	/**
	 * Enum Insurgency.eInventoryTransactionType
	 */
	enum class EeInventoryTransactionType : uint8_t
	{
		Rank                          = 0,
		Award                         = 1,
		Development                   = 2,
		Market                        = 3,
		Purchase                      = 4,
		Promotion                     = 5,
		TokenPurchase                 = 6,
		Return                        = 7,
		Reclaim                       = 8,
		LevelCash                     = 9,
		eInventoryTransactionType_MAX = 10
	};

	/**
	 * Enum Insurgency.EOSSNetworkState
	 */
	enum class EOSSNetworkState : uint8_t
	{
		Connecting = 0,
		Connected  = 1,
		Error      = 2,
		MAX        = 3
	};

	/**
	 * Enum Insurgency.EPlayableAreaType
	 */
	enum class EPlayableAreaType : uint8_t
	{
		PlayableArea = 0,
		OverviewArea = 1,
		MAX          = 2
	};

	/**
	 * Enum Insurgency.EPlayerClassFlags
	 */
	enum class EPlayerClassFlags : uint8_t
	{
		Officer  = 0,
		Observer = 1,
		Special  = 2,
		MAX      = 3
	};

	/**
	 * Enum Insurgency.EPlaylistLightingType
	 */
	enum class EPlaylistLightingType : uint8_t
	{
		Day         = 0,
		Night       = 1,
		DayAndNight = 2,
		MAX         = 3
	};

	/**
	 * Enum Insurgency.ENetworkState
	 */
	enum class ENetworkState : uint8_t
	{
		Connecting = 0,
		Connected  = 1,
		Error      = 2,
		MAX        = 3
	};

	/**
	 * Enum Insurgency.EFilterType
	 */
	enum class EFilterType : uint8_t
	{
		Match    = 0,
		NotMatch = 1,
		MAX      = 2
	};

	/**
	 * Enum Insurgency.EFilterAction
	 */
	enum class EFilterAction : uint8_t
	{
		Exclude      = 0,
		ForceUpgrade = 1,
		MAX          = 2
	};

	/**
	 * Enum Insurgency.ERenderTargetSlot
	 */
	enum class ERenderTargetSlot : uint8_t
	{
		Scope      = 0,
		AfterImage = 1,
		Max        = 2
	};

	/**
	 * Enum Insurgency.EServerEntryType
	 */
	enum class EServerEntryType : uint8_t
	{
		OfficialRules = 0,
		CustomRules   = 1,
		Mutated       = 2,
		Modded        = 3,
		MAX           = 4
	};

	/**
	 * Enum Insurgency.EServerListSortType
	 */
	enum class EServerListSortType : uint8_t
	{
		Ping       = 0,
		Name       = 1,
		Players    = 2,
		MaxPlayers = 3,
		Gamemode   = 4,
		Level      = 5,
		Passworded = 6,
		Ranked     = 7,
		ServerType = 8,
		MAX        = 9
	};

	/**
	 * Enum Insurgency.ECustomMoveMode
	 */
	enum class ECustomMoveMode : uint8_t
	{
		Invalid  = 0,
		Climbing = 1,
		Charging = 2,
		Vaulting = 3,
		Max      = 4
	};

	/**
	 * Enum Insurgency.EAvoidanceStage
	 */
	enum class EAvoidanceStage : uint8_t
	{
		None     = 0,
		Backward = 1,
		Side     = 2,
		Forward  = 3,
		MAX      = 4
	};

	/**
	 * Enum Insurgency.EResetType
	 */
	enum class EResetType : uint8_t
	{
		Stuck   = 0,
		Data    = 1,
		Segment = 2,
		Path    = 3,
		All     = 4,
		MAX     = 5
	};

	/**
	 * Enum Insurgency.EStuckAction
	 */
	enum class EStuckAction : uint8_t
	{
		None   = 0,
		Jump   = 1,
		Crouch = 2,
		Avoid  = 3,
		Repath = 4,
		Wait   = 5,
		MAX    = 6
	};

	/**
	 * Enum Insurgency.EFootstepEffectType
	 */
	enum class EFootstepEffectType : uint8_t
	{
		Normal  = 0,
		Sliding = 1,
		MAX     = 2
	};

	/**
	 * Enum Insurgency.EFootstepFoot
	 */
	enum class EFootstepFoot : uint8_t
	{
		None  = 0,
		Left  = 1,
		Right = 2,
		MAX   = 3
	};

	/**
	 * Enum Insurgency.ESoundscapeStateType
	 */
	enum class ESoundscapeStateType : uint8_t
	{
		FullState      = 0,
		OnlyWeaponTail = 1,
		MAX            = 2
	};

	/**
	 * Enum Insurgency.ESpawnerVehicleType
	 */
	enum class ESpawnerVehicleType : uint8_t
	{
		Standard               = 0,
		PlayerInsertionVehicle = 1,
		EscortInsertionVehicle = 2,
		MAX                    = 3
	};

	/**
	 * Enum Insurgency.eWeaponStatsSortState
	 */
	enum class EeWeaponStatsSortState : uint8_t
	{
		eWeaponStatsSortState_WeaponSortNone                = 0,
		eWeaponStatsSortState_WeaponSortAccuracyAscending   = 1,
		eWeaponStatsSortState_WeaponSortAccuracyDescending  = 2,
		eWeaponStatsSortState_WeaponSortKillsAscending      = 3,
		eWeaponStatsSortState_WeaponSortKillsDescending     = 4,
		eWeaponStatsSortState_WeaponSortTimeAscending       = 5,
		eWeaponStatsSortState_WeaponSortTimeDescending      = 6,
		eWeaponStatsSortState_WeaponSortHeadshotsAscending  = 7,
		eWeaponStatsSortState_WeaponSortHeadshotsDescending = 8,
		eWeaponStatsSortState_WeaponSortNameAscending       = 9,
		eWeaponStatsSortState_WeaponSortNameDescending      = 10,
		eWeaponStatsSortState_eWeaponStatsSortState_MAX     = 11
	};

	/**
	 * Enum Insurgency.EMatchEndReason
	 */
	enum class EMatchEndReason : uint8_t
	{
		None    = 0,
		Victory = 1,
		Defeat  = 2,
		Quite   = 3,
		MAX     = 4
	};

	/**
	 * Enum Insurgency.ETelemetryEvent
	 */
	enum class ETelemetryEvent : uint8_t
	{
		None                = 0,
		ProfileStat         = 1,
		HardwareInformation = 2,
		DLCList             = 3,
		TutorialCompletion  = 4,
		MatchStart          = 5,
		MatchPeriodic       = 6,
		MatchResupply       = 7,
		MatchEnd            = 8,
		MAX                 = 9
	};

	/**
	 * Enum Insurgency.EStatisticsKillEventPlayerRole
	 */
	enum class EStatisticsKillEventPlayerRole : uint8_t
	{
		Inflictor = 0,
		Assistor  = 1,
		Victim    = 2,
		MAX       = 3
	};

	/**
	 * Enum Insurgency.EStatisticsPlayerKillFlags
	 */
	enum class EStatisticsPlayerKillFlags : uint8_t
	{
		NONE       = 0,
		DOMINATION = 1,
		SAVIOR     = 2,
		OFFENSIVE  = 3,
		DEFENSIVE  = 4,
		HEADSHOT   = 5,
		CRITICAL   = 6,
		FINALKILL  = 7,
		SILENCED   = 8,
		MAX        = 9
	};

	/**
	 * Enum Insurgency.EStatisticsPlayerSightFlags
	 */
	enum class EStatisticsPlayerSightFlags : uint8_t
	{
		NONE      = 0,
		HIP       = 1,
		ADS       = 2,
		FOCUS     = 3,
		IRONSIGHT = 4,
		SIGHTS    = 5,
		SCOPE     = 6,
		OPTICS    = 7,
		BIPOD     = 8,
		MAX       = 9
	};

	/**
	 * Enum Insurgency.EStatisticsPlayerStanceFlags
	 */
	enum class EStatisticsPlayerStanceFlags : uint8_t
	{
		NONE     = 0,
		PRONE    = 1,
		CROUCH   = 2,
		STAND    = 3,
		INWALK   = 4,
		INJOG    = 5,
		INSPRINT = 6,
		INLEAN   = 7,
		ATTACHED = 8,
		MAX      = 9
	};

	/**
	 * Enum Insurgency.EStatisticsPlayerFloatStats
	 */
	enum class EStatisticsPlayerFloatStats : uint8_t
	{
		FirstPlayerFloatStat   = 0,
		DistanceCrouchWalk     = 1,
		DistanceDriver         = 2,
		DistanceGunner         = 3,
		DistancePassenger      = 4,
		DistanceProneCrawl     = 5,
		DistanceSlide          = 6,
		DistanceSprint         = 7,
		DistanceTraveled       = 8,
		DistanceWalk           = 9,
		DistanceLean           = 10,
		TimeCrouch             = 11,
		TimeDriver             = 12,
		TimeGunner             = 13,
		TimePassenger          = 14,
		TimeProne              = 15,
		TimeSlide              = 16,
		TimeSprint             = 17,
		TimeWalk               = 18,
		TimeLean               = 19,
		TimePlayed             = 20,
		TimeInObjective        = 21,
		TimeCapturingObjective = 22,
		TimeAlive              = 23,
		TimeBlockingObjective  = 24,
		TimeInGame             = 25,
		TimeJog                = 26,
		TimeKitMenu            = 27,
		TimeMoving             = 28,
		TimeSpectating         = 29,
		TimeDead               = 30,
		LastPlayerFloatStat    = 31,
		MAX                    = 32
	};

	/**
	 * Enum Insurgency.EStatisticsPlayerStats
	 */
	enum class EStatisticsPlayerStats : uint8_t
	{
		FirstPlayerStat        = 0,
		Kills                  = 1,
		KillsFriendly          = 2,
		Deaths                 = 3,
		Assists                = 4,
		Headshots              = 5,
		ShotsFired             = 6,
		ShotsHit               = 7,
		Dominations            = 8,
		Saviors                = 9,
		Revenges               = 10,
		TargetsStunned         = 11,
		TargetsSuppressed      = 12,
		AirSupportKills        = 13,
		AirSupportDeaths       = 14,
		SupportUsed            = 15,
		RadioUsed              = 16,
		SupplyDropKills        = 17,
		SupplyDropUsed         = 18,
		SupportDenials         = 19,
		KillsA10               = 20,
		KillsApache            = 21,
		KillsArtillery         = 22,
		KillsBlackhawk         = 23,
		KillsChemicalMortar    = 24,
		KillsGrenadeDrone      = 25,
		KillsIEDDrone          = 26,
		KillsRocketBarrage     = 27,
		KillsAssault           = 28,
		KillsLMG               = 29,
		KillsBoltRifle         = 30,
		KillsMarksmanRifle     = 31,
		KillsCarbine           = 32,
		KillsShotgun           = 33,
		KillsSMG               = 34,
		KillsPistol            = 35,
		KillsLauncher          = 36,
		KillsMelee             = 37,
		KillsShortRange        = 38,
		KillsMediumRange       = 39,
		KillsLongRange         = 40,
		MunitionKills          = 41,
		MunitionsUsed          = 42,
		KillsGrenadeFrag       = 43,
		KillsGrenadeIncendiary = 44,
		KillsOtherExplosive    = 45,
		KillsAiming            = 46,
		KillsCrouching         = 47,
		KillsFocused           = 48,
		KillsHipped            = 49,
		KillsProning           = 50,
		KillsDefensive         = 51,
		KillsOffensive         = 52,
		KillsBipod             = 53,
		KillsScoped            = 54,
		KillsOptics            = 55,
		KillsSights            = 56,
		KillsStanding          = 57,
		KillsIronSights        = 58,
		ObjectiveCaptureTicks  = 59,
		Objectives             = 60,
		ObjectivesCaptured     = 61,
		ObjectivesDestroyed    = 62,
		ObjectivesNeutralized  = 63,
		ObjectivesReset        = 64,
		ObjectsDestroyed       = 65,
		ObstaclesDestroyed     = 66,
		PlayersRespawned       = 67,
		RegroupsTotal          = 68,
		FlagDrops              = 69,
		FlagPickups            = 70,
		HeroCaps               = 71,
		VehiclesDriven         = 72,
		VehiclesDestroyed      = 73,
		VehicleAssists         = 74,
		AirVehiclesDestroyed   = 75,
		AirVehicleAssists      = 76,
		ObjectAssists          = 77,
		KillsPassenger         = 78,
		KillsGunner            = 79,
		KillsDriver            = 80,
		DeathsPassenger        = 81,
		DeathsGunner           = 82,
		DeathsDriver           = 83,
		VehicleDeaths          = 84,
		LastPlayerStat         = 85,
		MAX                    = 86
	};

	/**
	 * Enum Insurgency.EStatisticsWeaponFloatStats
	 */
	enum class EStatisticsWeaponFloatStats : uint8_t
	{
		FirstWeaponFloatStat = 0,
		DistanceCrouchWalk   = 1,
		DistanceDriver       = 2,
		DistanceGunner       = 3,
		DistancePassenger    = 4,
		DistanceProneCrawl   = 5,
		DistanceSlide        = 6,
		DistanceSprint       = 7,
		DistanceTraveled     = 8,
		DistanceWalk         = 9,
		DistanceLean         = 10,
		TimeCrouch           = 11,
		TimeDriver           = 12,
		TimeGunner           = 13,
		TimePassenger        = 14,
		TimeProne            = 15,
		TimeSlide            = 16,
		TimeSprint           = 17,
		TimeWalk             = 18,
		TimeLean             = 19,
		TimePlayed           = 20,
		LastWeaponFloatStat  = 21,
		MAX                  = 22
	};

	/**
	 * Enum Insurgency.EStatisticsWeaponStats
	 */
	enum class EStatisticsWeaponStats : uint8_t
	{
		FirstWeaponStat      = 0,
		Shots                = 1,
		Hits                 = 2,
		Kills                = 3,
		KillsHeadshot        = 4,
		KillsFriendly        = 5,
		KillsOffensive       = 6,
		KillsDefensive       = 7,
		Assists              = 8,
		Deaths               = 9,
		TargetsSuppressed    = 10,
		KillsBipod           = 11,
		KillsFocused         = 12,
		KillsAiming          = 13,
		KillsStanding        = 14,
		KillsProning         = 15,
		KillsCrouching       = 16,
		KillsScoped          = 17,
		KillsSights          = 18,
		KillsOptics          = 19,
		KillsHipped          = 20,
		KillsIronSights      = 21,
		KillsShortRange      = 22,
		KillsMediumRange     = 23,
		KillsLongRange       = 24,
		VehiclesDestroyed    = 25,
		VehicleAssists       = 26,
		AirVehiclesDestroyed = 27,
		AirVehicleAssists    = 28,
		ObjectsDestroyed     = 29,
		ObjectAssists        = 30,
		KillsPassenger       = 31,
		KillsGunner          = 32,
		LastWeaponStat       = 33,
		MAX                  = 34
	};

	/**
	 * Enum Insurgency.EStatisticsGameTypes
	 */
	enum class EStatisticsGameTypes : uint8_t
	{
		Unranked               = 0,
		PVP                    = 1,
		Coop                   = 2,
		CompetitiveMatchmaking = 3,
		CompetitiveLadder      = 4,
		PVPMatchmaking         = 5,
		CoopMatchmaking        = 6,
		MAX                    = 7
	};

	/**
	 * Enum Insurgency.EStatisticsGameErrorCodes
	 */
	enum class EStatisticsGameErrorCodes : uint8_t
	{
		NoError         = 0,
		NeedsLogin      = 1,
		DatabaseError   = 2,
		InvalidPlaylist = 3,
		InvalidGameId   = 4,
		MAX             = 5
	};

	/**
	 * Enum Insurgency.EStoreItemCategory
	 */
	enum class EStoreItemCategory : uint8_t
	{
		Appearance      = 0,
		WeaponSkin      = 1,
		Bundle          = 2,
		OperationBundle = 3,
		MAX             = 4
	};

	/**
	 * Enum Insurgency.EStructureElementType
	 */
	enum class EStructureElementType : uint8_t
	{
		Floor = 0,
		Wall  = 1,
		MAX   = 2
	};

	/**
	 * Enum Insurgency.EDecalTransformMask
	 */
	enum class EDecalTransformMask : uint8_t
	{
		SRDT_None             = 0,
		SRDT_RandomRotate     = 1,
		SRDT_UseParallax      = 2,
		SRDT_MirrorHorizontal = 3,
		SRDT_MAX              = 4
	};

	/**
	 * Enum Insurgency.ESurvivalOrderType
	 */
	enum class ESurvivalOrderType : uint8_t
	{
		Standard                = 0,
		CandidateForInitial     = 1,
		CandidateForPenultimate = 2,
		Extraction              = 3,
		MAX                     = 4
	};

	/**
	 * Enum Insurgency.ETacticalGridDebugDisplayMode
	 */
	enum class ETacticalGridDebugDisplayMode : uint8_t
	{
		Boxes = 0,
		Lines = 1,
		MAX   = 2
	};

	/**
	 * Enum Insurgency.ETacticalGridDebugMode
	 */
	enum class ETacticalGridDebugMode : uint8_t
	{
		VisibilityToPoint   = 0,
		VisibilityFromPoint = 1,
		MAX                 = 2
	};

	/**
	 * Enum Insurgency.ETaglineEvaluation
	 */
	enum class ETaglineEvaluation : uint8_t
	{
		Equal         = 0,
		GreaterThan   = 1,
		LessThan      = 2,
		GreaterThanEq = 3,
		LessThanEq    = 4,
		MAX           = 5
	};

	/**
	 * Enum Insurgency.ETaglineStatType
	 */
	enum class ETaglineStatType : uint8_t
	{
		Invalid = 0,
		Int32   = 1,
		Float   = 2,
		MAX     = 3
	};

	/**
	 * Enum Insurgency.EPartyRelationship
	 */
	enum class EPartyRelationship : uint8_t
	{
		None            = 0,
		NotInParty      = 1,
		InPartyNeutral  = 2,
		InPartyFriendly = 3,
		InPartyEnemy    = 4,
		MAX             = 5
	};

	/**
	 * Enum Insurgency.ETeamRelationship
	 */
	enum class ETeamRelationship : uint8_t
	{
		Neutral  = 0,
		Friendly = 1,
		Enemy    = 2,
		MAX      = 3
	};

	/**
	 * Enum Insurgency.ELessonCategory
	 */
	enum class ELessonCategory : uint8_t
	{
		None             = 0,
		Objectives       = 1,
		Movement         = 2,
		Weapons          = 3,
		WorldInteraction = 4,
		Vehicles         = 5,
		Strategy         = 6,
		FireSupport      = 7,
		MAX              = 8
	};

	/**
	 * Enum Insurgency.ETutorialStage
	 */
	enum class ETutorialStage : uint8_t
	{
		Movement         = 0,
		Crouch           = 1,
		Weapon           = 2,
		FirstKill        = 3,
		Vault            = 4,
		GrenadePickup    = 5,
		Grenade          = 6,
		ClearBuilding    = 7,
		Resupply         = 8,
		FirstCapture     = 9,
		SecondCapture    = 10,
		ResupplyAfterCap = 11,
		DestroyStart     = 12,
		Completed        = 13,
		Invalid          = 14,
		MAX              = 15
	};

	/**
	 * Enum Insurgency.EUseHoldBehavior
	 */
	enum class EUseHoldBehavior : uint8_t
	{
		NoWeaponLower   = 0,
		WeaponLower     = 1,
		InterruptReload = 2,
		MAX             = 3
	};

	/**
	 * Enum Insurgency.EUseResponse
	 */
	enum class EUseResponse : uint8_t
	{
		Ignore        = 0,
		Handled       = 1,
		HandledServer = 2,
		MAX           = 3
	};

	/**
	 * Enum Insurgency.EHoverVehicleDamageState
	 */
	enum class EHoverVehicleDamageState : uint8_t
	{
		DamageState_Alive            = 0,
		DamageState_Falling          = 1,
		DamageState_Falling_Spinning = 2,
		DamageState_Destroyed        = 3,
		DamageState_MAX              = 4
	};

	/**
	 * Enum Insurgency.EHoverVehicleMovement
	 */
	enum class EHoverVehicleMovement : uint8_t
	{
		HoverMovement_None    = 0,
		HoverMovement_Ascend  = 1,
		HoverMovement_Descend = 2,
		HoverMovement_Max     = 3
	};

	/**
	 * Enum Insurgency.ESeatDeathMechanic
	 */
	enum class ESeatDeathMechanic : uint8_t
	{
		Death_Swerving     = 0,
		Death_Accelerating = 1,
		Death_Brake        = 2,
		Death_None         = 3,
		Death_MAX          = 4
	};

	/**
	 * Enum Insurgency.ESeatCameraType
	 */
	enum class ESeatCameraType : uint8_t
	{
		Cam_FirstPerson  = 0,
		MAX_CAMERA_TYPES = 1,
		MAX              = 2
	};

	/**
	 * Enum Insurgency.ESeatRotationType
	 */
	enum class ESeatRotationType : uint8_t
	{
		Rotation_UseSeatComponent = 0,
		Rotation_Freelook         = 1,
		Rotation_Turret           = 2,
		Rotation_MAX              = 3
	};

	/**
	 * Enum Insurgency.ESeatTypeEnum
	 */
	enum class ESeatTypeEnum : uint8_t
	{
		Seat_Driver          = 0,
		Seat_Passenger       = 1,
		Seat_PassengerGunner = 2,
		Seat_Turret          = 3,
		Seat_Any             = 4,
		Seat_MAX             = 5
	};

	/**
	 * Enum Insurgency.EWeaponLightMode
	 */
	enum class EWeaponLightMode : uint8_t
	{
		Off        = 0,
		Flashlight = 1,
		Laser      = 2,
		IR         = 3,
		Count      = 4,
		MAX        = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Insurgency.AircraftPayload
	 * Size -> 0x0038
	 */
	struct FAircraftPayload
	{
	public:
		class UClass*                                              PayloadProjectileClass;                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PayloadActorClass;                                       // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Number;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialDropDelay;                                        // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenDrops;                                        // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HK3F[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AudioEventTrigger;                                       // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ONZ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.AIINSNoiseEvent
	 * Size -> 0x0030
	 */
	struct FAIINSNoiseEvent
	{
	public:
		unsigned char                                              UnknownData_W6E0[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NoiseLocation;                                           // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Loudness;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4ML[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.AmmoSubContainer
	 * Size -> 0x0004
	 */
	struct FAmmoSubContainer
	{
	public:
		int32_t                                                    Capacity;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.BoneDamageMod
	 * Size -> 0x0008
	 */
	struct FBoneDamageMod
	{
	public:
		float                                                      DamageMod;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VelocityMod;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.BloodSplatter
	 * Size -> 0x0030
	 */
	struct FBloodSplatter
	{
	public:
		struct FVector                                             MinSize;                                                 // 0x0000(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxSize;                                                 // 0x000C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomizeYaw;                                           // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0A7G[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.BotGrenadeTarget
	 * Size -> 0x005C
	 */
	struct FBotGrenadeTarget
	{
	public:
		unsigned char                                              UnknownData_9U37[0x4C];                                  // 0x0000(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ADoor>                                AssociatedDoor;                                          // 0x004C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class ASoundscapeTriggerDoor>               AssociatedTrigger;                                       // 0x0054(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.BotGrenadeCheckResult
	 * Size -> 0x0020
	 */
	struct FBotGrenadeCheckResult
	{
	public:
		unsigned char                                              UnknownData_4IGJ[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.FirearmAIConfig
	 * Size -> 0x003C
	 */
	struct FFirearmAIConfig
	{
	public:
		float                                                      MaxDistance;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinTargetDistanceToReload;                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAttackDegrees;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAttackDegreesClose;                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAttackDegrees;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileSpreadZeroTimeFar;                             // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileSpreadZeroTimeClose;                           // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HipFireChanceClose;                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HipFireChanceLong;                                       // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HipFireCloseRange;                                       // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HipFireLongRange;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BloatBoxMin;                                             // 0x002C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BloatBoxMax;                                             // 0x0034(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MaterialSwap
	 * Size -> 0x0018
	 */
	struct FMaterialSwap
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSlotName;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59SH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlotName;                                                // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.Gib
	 * Size -> 0x0018
	 */
	struct FGib
	{
	public:
		class UStaticMesh*                                         GibMesh;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GibOffset;                                               // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1SD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.DeferredBulletHit
	 * Size -> 0x00B0
	 */
	struct FDeferredBulletHit
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x0088(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x008C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitVelocity;                                             // 0x0098(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SurfacesPenetrated;                                      // 0x00A4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F997[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeltaTime;                                               // 0x00A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInformServer;                                           // 0x00AC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNWV[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ClientBulletHit
	 * Size -> 0x0038
	 */
	struct FClientBulletHit
	{
	public:
		class UPrimitiveComponent*                                 TargetComponent;                                         // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               TargetLocation;                                          // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BulletClientId;                                          // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BulletPelletIndex;                                       // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaTime;                                               // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HitBone;                                                 // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitVelocity;                                             // 0x0028(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPenetrated;                                             // 0x0034(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8RP[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.QueuedClientBulletHit
	 * Size -> 0x0048
	 */
	struct FQueuedClientBulletHit
	{
	public:
		class AINSSoldier*                                         FromPlayer;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FClientBulletHit                                    BulletHit;                                               // 0x0008(0x0038) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bKnownBullet;                                            // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4RI[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SimulatedBullet
	 * Size -> 0x01F8
	 */
	struct FSimulatedBullet
	{
	public:
		int32_t                                                    ClientBulletId;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQC1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         OwningController;                                        // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         OwningPawn;                                              // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              OwningWeaponClass;                                       // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemWeapon*                                         OwningWeapon;                                            // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClientTime;                                              // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnTime;                                               // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpiryTime;                                              // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SpawnPosition;                                           // 0x0034(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0040(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialSpeed;                                            // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDamageSpeed;                                          // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FireDirection;                                           // 0x0054(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0060(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRandomStream                                       RandomStream;                                            // 0x006C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    PelletIndex;                                             // 0x0074(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAmmoTypeBallistic*                                  AmmoType;                                                // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     TracerParticle;                                          // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            ActiveTracerParticle;                                    // 0x0088(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TracerOrigin;                                            // 0x0090(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKCM[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            ActivePenetrationTracer;                                 // 0x00A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Accumulator;                                             // 0x00A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedTime;                                             // 0x00AC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulationTime;                                          // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceTravelled;                                       // 0x00B4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceSimpleOnly;                                        // 0x00BC(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SurfacesPenetrated;                                      // 0x00BD(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RicochetCount;                                           // 0x00BE(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXT9[0x1];                                   // 0x00BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PenetrationDistance;                                     // 0x00C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalInsideDistance;                                     // 0x00C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          SavedHitResult;                                          // 0x00C8(0x0088) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              SuppressedTargets[0x50];                                 // 0x0150(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<class AActor*>                                      IgnoredActors;                                           // 0x01A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPrimitiveComponent*>                         IgnoredComponents;                                       // 0x01B0(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           InsideSurfaceType;                                       // 0x01C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZV8[0x3];                                   // 0x01C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InsideSurfaceDensity;                                    // 0x01C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsClientHits;                                        // 0x01C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEFV[0x3];                                   // 0x01C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BulletSnapMask;                                          // 0x01CC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDeferredBulletHit>                          DeferredHits;                                            // 0x01D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FQueuedClientBulletHit>                      QueuedClientHits;                                        // 0x01E0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESuppressionContext                                        SuppressionContext;                                      // 0x01F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceStopSimulation;                                    // 0x01F1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VMU2[0x6];                                   // 0x01F2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.BulletPenetrationPowerValues
	 * Size -> 0x0120
	 */
	struct FBulletPenetrationPowerValues
	{
	public:
		float                                                      RequiredPenetrationPower;                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPenetrationDistance;                                  // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  ImpactSpeedLossByPenetrationPower;                       // 0x0008(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SpeedLossByPenetrationPower;                             // 0x0090(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bCanRicochet;                                            // 0x0118(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL38[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinRicochetDot;                                          // 0x011C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterMutedPhrase
	 * Size -> 0x0008
	 */
	struct FCharacterMutedPhrase
	{
	public:
		ECharacterResponse                                         AssociatedResponse;                                      // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3P21[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AllowPlayTimestamp;                                      // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterPhrase
	 * Size -> 0x0018
	 */
	struct FCharacterPhrase
	{
	public:
		ECharacterResponse                                         AssociatedResponse;                                      // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXGE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Event;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpecifyVariations;                                      // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NumVariations;                                           // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2G8[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CharacterFireSupportOfficerPhrase
	 * Size -> 0x0018
	 */
	struct FCharacterFireSupportOfficerPhrase
	{
	public:
		class UFireSupportDefinition*                              AssociatedFireSupport;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       Event;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpecifyVariations;                                      // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NumVariations;                                           // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PX8B[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CharacterFireSupportObserverPhrase
	 * Size -> 0x0020
	 */
	struct FCharacterFireSupportObserverPhrase
	{
	public:
		class UFireSupportDefinition*                              AssociatedFireSupport;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       RequestEvent;                                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ThankEvent;                                              // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequestSpecifyVariations;                               // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RequestNumVariations;                                    // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bThankSpecifyVariations;                                 // 0x001A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ThankNumVariations;                                      // 0x001B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6S6D[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CharacterFireSupportIncomingPhrase
	 * Size -> 0x0020
	 */
	struct FCharacterFireSupportIncomingPhrase
	{
	public:
		class UFireSupportDefinition*                              AssociatedFireSupport;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       EnemyIncomingEvent;                                      // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       FriendlyIncomingEvent;                                   // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnemySpecifyVariations;                                 // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EnemyNumVariations;                                      // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFriendlySpecifyVariations;                              // 0x001A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FriendlyNumVariations;                                   // 0x001B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Y2R[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CharacterObjectivePhraseDefinition
	 * Size -> 0x0030
	 */
	struct FCharacterObjectivePhraseDefinition
	{
	public:
		unsigned char                                              ObjectiveId;                                             // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B71V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Event;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SubtitleText;                                            // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bSpecifyVariations;                                      // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NumVariations;                                           // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CA0I[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CharacterObjectivePhrase
	 * Size -> 0x0018
	 */
	struct FCharacterObjectivePhrase
	{
	public:
		ECharacterResponse                                         AssociatedResponse;                                      // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UI46[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharacterObjectivePhraseDefinition>         Definitions;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.GameplayAudioData
	 * Size -> 0x0010
	 */
	struct FGameplayAudioData
	{
	public:
		float                                                      MinimumDuration;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDuration;                                         // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAttenuationRadius;                                    // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInfinite;                                             // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8P2[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CachedFireSupportDialogueData
	 * Size -> 0x0018
	 */
	struct FCachedFireSupportDialogueData
	{
	public:
		class UFireSupportDefinition*                              AssociatedFireSupport;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAudioData                                  AudioData;                                               // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CachedObjectiveEventDialogueData
	 * Size -> 0x0014
	 */
	struct FCachedObjectiveEventDialogueData
	{
	public:
		unsigned char                                              ObjectiveId;                                             // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDK5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAudioData                                  AudioData;                                               // 0x0004(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CachedObjectiveDialogueData
	 * Size -> 0x0010
	 */
	struct FCachedObjectiveDialogueData
	{
	public:
		TArray<struct FCachedObjectiveEventDialogueData>           ObjectiveEvents;                                         // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CachedDialogueData
	 * Size -> 0x00F0
	 */
	struct FCachedDialogueData
	{
	public:
		TMap<ECharacterResponse, struct FGameplayAudioData>        GenericResponseData;                                     // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FCachedFireSupportDialogueData>              OfficerRequestData;                                      // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedFireSupportDialogueData>              ObserverRequestData;                                     // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedFireSupportDialogueData>              ObserverThankData;                                       // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedFireSupportDialogueData>              FireSupportIncomingData;                                 // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedFireSupportDialogueData>              FireSupportEnemyIncomingData;                            // 0x0090(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<ECharacterResponse, struct FCachedObjectiveDialogueData> ObjectiveResponseData;                                   // 0x00A0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ChatBoxEntry
	 * Size -> 0x0020
	 */
	struct FChatBoxEntry
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      TimeCreated;                                             // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UK1W[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CompetitiveUnlockTier
	 * Size -> 0x0008
	 */
	struct FCompetitiveUnlockTier
	{
	public:
		ECollectibleTier                                           RankTier;                                                // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDivisionRestricted;                                     // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WT91[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinimumDivision;                                         // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CollectiblePlatformClaim
	 * Size -> 0x0028
	 */
	struct FCollectiblePlatformClaim
	{
	public:
		ECollectibleClaimType                                      Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXAZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlatformId;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OfferId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CollectibleBundleItem
	 * Size -> 0x0040
	 */
	struct FCollectibleBundleItem
	{
	public:
		unsigned char                                              Item[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    Quantity;                                                // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAwardAllSupportedVariations;                            // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWEB[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SpecificVariations[0x10];                                // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct Insurgency.ActionMapping
	 * Size -> 0x0028
	 */
	struct FActionMapping
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShift : 1;                                              // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCtrl : 1;                                               // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlt : 1;                                                // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCmd : 1;                                                // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3M3O[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                Key;                                                     // 0x0010(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.AxisMapping
	 * Size -> 0x0028
	 */
	struct FAxisMapping
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41II[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                Key;                                                     // 0x0010(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MorphTargetPair
	 * Size -> 0x000C
	 */
	struct FMorphTargetPair
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CachePoolData
	 * Size -> 0x0020
	 */
	struct FCachePoolData
	{
	public:
		TArray<class UCosmeticItem*>                               CachedCosmetics;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              UsedBy;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticPoolReservationType                               PoolType;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD2X[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.AttachedModel
	 * Size -> 0x0038
	 */
	struct FAttachedModel
	{
	public:
		unsigned char                                              SkeletalMesh[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                ParentSocket;                                            // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetMasterPoseComponent;                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRFU[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CosmeticMaterialSwap
	 * Size -> 0x0010
	 */
	struct FCosmeticMaterialSwap
	{
	public:
		class FName                                                MaterialSlotName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterCosmeticAttachedModel
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	struct FCharacterCosmeticAttachedModel : public FAttachedModel
	{
	public:
		TWeakObjectPtr<class UINSSkeletalMeshComponent>            SpawnedSkeletalComponent;                                // 0x0038(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetMorphTarget;                                         // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NENR[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MorphTargetName;                                         // 0x0044(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MorphTargetValue;                                        // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMorphTargetPair>                            MorphTargets;                                            // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCosmeticMaterialSwap>                       MaterialSwaps;                                           // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PendingCosmeticLoad
	 * Size -> 0x0080
	 */
	struct FPendingCosmeticLoad
	{
	public:
		TWeakObjectPtr<class UINSSkeletalMeshComponent>            Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterCosmeticAttachedModel                     CosmeticMesh;                                            // 0x0008(0x0070) ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bFirstPerson;                                            // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBodyMesh;                                               // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00MY[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.LoggedDamage
	 * Size -> 0x0018
	 */
	struct FLoggedDamage
	{
	public:
		class AActor*                                              Damager;                                                 // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         Instigator;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amount;                                                  // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.DeathAnimation
	 * Size -> 0x0040
	 */
	struct FDeathAnimation
	{
	public:
		class UAnimationAsset*                                     Animation;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationStrength;                                       // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationFadeTime;                                       // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationPlayRate;                                       // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimationHardCut;                                       // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVelocityInfluence;                                      // 0x0015(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JG62[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VelocityStrength;                                        // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumVelocity;                                         // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVelocityInfluenceInverse;                               // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZUW[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VelocityStrengthMultiplier;                              // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularVelocityStrengthMultiplier;                       // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositionStrengthMultiplier;                              // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrientationStrengthMultiplier;                           // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumAngularForce;                                     // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumLinearForce;                                      // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreeze;                                                 // 0x003C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x003D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWorldSpace;                                             // 0x003E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECMH[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.DeathSet
	 * Size -> 0x0010
	 */
	struct FDeathSet
	{
	public:
		TArray<struct FDeathAnimation>                             Animations;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.RagdollEffectLayer
	 * Size -> 0x0002
	 */
	struct FRagdollEffectLayer
	{
	public:
		bool                                                       bApplyBloodEffect;                                       // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyBurnEffect;                                        // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.Limb
	 * Size -> 0x0058
	 */
	struct FLimb
	{
	public:
		class FName                                                TargetBone;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Health;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OH9Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         CapMesh;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         UncoveredCapMesh;                                        // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       ReplacementMesh;                                         // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ReplacementCapMesh;                                      // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         UncoveredReplacementCapMesh;                             // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ReplacementParticleSystem;                               // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysSpawnParticleSystemAtSourceLocation;              // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O79Q[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       DismembermentAudioEvent;                                 // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterAppearanceSlot                                   AppearanceSlot;                                          // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPF1[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.LimbGroup
	 * Size -> 0x0058
	 */
	struct FLimbGroup
	{
	public:
		TMap<class FName, struct FLimb>                            Limbs;                                                   // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    StartDepth;                                              // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9ER[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ScoreboardConfig
	 * Size -> 0x0028
	 */
	struct FScoreboardConfig
	{
	public:
		bool                                                       bDisplayRoundsWon;                                       // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayTeamScore;                                       // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayTeamPoints;                                      // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ON5D[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PointsText;                                              // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bDisplayPlayerScore;                                     // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayPlayerKAD;                                       // 0x0021(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayPlayerObjectives;                                // 0x0022(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShowExtendedInfo;                                 // 0x0023(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayObjectiveBriefing;                               // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEDS[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SmoothTransition
	 * Size -> 0x0060
	 */
	struct FSmoothTransition
	{
	public:
		unsigned char                                              UnknownData_YBHH[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotationStart;                                           // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            RotationGoal;                                            // 0x0014(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LocationStart;                                           // 0x0020(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationGoal;                                            // 0x002C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldTimeStart;                                          // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldTimeGoal;                                           // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasRotationTransition;                                  // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasLocationTransition;                                  // 0x0041(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O118[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RotationPivot;                                           // 0x0044(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         Curve;                                                   // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeRotationalOffset;                                // 0x0058(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEndTransition;                                          // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A8RH[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerAllowedEquipment
	 * Size -> 0x00F0
	 */
	struct FPlayerAllowedEquipment
	{
	public:
		unsigned char                                              Items[0x50];                                             // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              WeaponUpgrades[0x50];                                    // 0x0050(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              FallbackItems[0x50];                                     // 0x00A0(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct Insurgency.SelectedCosmetic
	 * Size -> 0x0050
	 */
	struct FSelectedCosmetic
	{
	public:
		unsigned char                                              Cosmetic[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              Variation[0x28];                                         // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct Insurgency.AircraftFormation
	 * Size -> 0x0050
	 */
	struct FAircraftFormation
	{
	public:
		class UClass*                                              AircraftClass;                                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8248[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStrafeTarget;                                           // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XX55[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.FireSupportResponse
	 * Size -> 0x0020
	 */
	struct FFireSupportResponse
	{
	public:
		class UAkAudioEvent*                                       ResponseEvent;                                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SubtitleText;                                            // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.RandomSequencePair
	 * Size -> 0x0010
	 */
	struct FRandomSequencePair
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PN5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.AnimSequenceRandom
	 * Size -> 0x0030
	 */
	struct FAnimSequenceRandom
	{
	public:
		unsigned char                                              SequenceAssetPtrs[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UAnimSequence*>                               Sequences;                                               // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRandomSequencePair>                         RemainingRandomSequences;                                // 0x0020(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.AnimationAdditivePair
	 * Size -> 0x0010
	 */
	struct FAnimationAdditivePair
	{
	public:
		class UAnimSequence*                                       Additive;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Base;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.FirstPersonAnims
	 * Size -> 0x09F8
	 */
	struct FFirstPersonAnims
	{
	public:
		unsigned char                                              KitSelectAsset[0x28];                                    // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       KitSelect;                                               // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 Activation;                                              // 0x0030(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 Melee;                                                   // 0x0060(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 MeleeBash;                                               // 0x0090(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 MeleeFlinch;                                             // 0x00C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 Flinch;                                                  // 0x00F0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              SightsDeltaAsset[0x28];                                  // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SightsDelta;                                             // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PointSightsDeltaAsset[0x28];                             // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       PointSightsDelta;                                        // 0x0178(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnderbarrelDeltaAsset[0x28];                             // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       UnderbarrelDelta;                                        // 0x01A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DeployedDeltaAsset[0x28];                                // 0x01B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       DeployedDelta;                                           // 0x01D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnderbarrelIdleAsset[0x28];                              // 0x01E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       UnderbarrelIdle;                                         // 0x0208(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StockIdleAsset[0x28];                                    // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       StockIdle;                                               // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IdleAsset[0x28];                                         // 0x0240(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Idle;                                                    // 0x0268(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IdleEmptyAsset[0x28];                                    // 0x0270(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       IdleEmpty;                                               // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IdleExplicitEmptyAsset[0x28];                            // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       IdleExplicitEmpty;                                       // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IdleDeployedAsset[0x28];                                 // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       IdleDeployed;                                            // 0x02F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Origin;                                                  // 0x0300(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OriginIron;                                              // 0x030C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BreathingAsset[0x28];                                    // 0x0318(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Breathing;                                               // 0x0340(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 IdleSpecial;                                             // 0x0348(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 IdleSpecialIron;                                         // 0x0378(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UBlendSpace*                                         Movement;                                                // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         MovementIron;                                            // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExplicitReady;                                           // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZUUZ[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceRandom                                 Ready;                                                   // 0x03C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              BlockedAsset[0x28];                                      // 0x03F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Blocked;                                                 // 0x0418(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BlockedIronAsset[0x28];                                  // 0x0420(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       BlockedIron;                                             // 0x0448(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCommonDraw;                                           // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59N8[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DrawAsset[0x28];                                         // 0x0458(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Draw;                                                    // 0x0480(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCommonHolster;                                        // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KFD[0x7];                                   // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              HolsterAsset[0x28];                                      // 0x0490(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Holster;                                                 // 0x04B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCommonDown;                                           // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NX1O[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DownAsset[0x28];                                         // 0x04C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Down;                                                    // 0x04F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCommonSprint;                                         // 0x04F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVSD[0x3];                                   // 0x04F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CommonSprintAdjustment;                                  // 0x04FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CommonSprintPoseAsset[0x28];                             // 0x0508(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       CommonSprintPose;                                        // 0x0530(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SprintTransitionInAsset[0x28];                           // 0x0538(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SprintTransitionIn;                                      // 0x0560(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SprintTransitionOutAsset[0x28];                          // 0x0568(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SprintTransitionOut;                                     // 0x0590(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         Sprint;                                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKSprint;                                                // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCommonSprintHardcore;                                 // 0x05A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JFLG[0x6];                                   // 0x05A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SprintHardcoreTransitionInAsset[0x28];                   // 0x05A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SprintHardcoreTransitionIn;                              // 0x05D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SprintHardcoreTransitionOutAsset[0x28];                  // 0x05D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SprintHardcoreTransitionOut;                             // 0x0600(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         SprintHardcore;                                          // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKSprintHardcore;                                        // 0x0610(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCommonCrawl;                                          // 0x0611(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5CH[0x2];                                   // 0x0612(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CommonCrawlAdjustment;                                   // 0x0614(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CommonCrawlPoseAsset[0x28];                              // 0x0620(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       CommonCrawlPose;                                         // 0x0648(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         Crawl;                                                   // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         DeployedCrawl;                                           // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKCrawl;                                                 // 0x0660(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0SA[0x7];                                   // 0x0661(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace*                                         Swimming;                                                // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ChargeAsset[0x28];                                       // 0x0670(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Charge;                                                  // 0x0698(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              KickDoorAsset[0x28];                                     // 0x06A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       KickDoor;                                                // 0x06C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimationAdditivePair                              Scavenge;                                                // 0x06D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAnimationAdditivePair                              ResupplyCrate;                                           // 0x06E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAnimationAdditivePair                              ResupplyCrateMagazine;                                   // 0x06F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              DoorAsset[0x28];                                         // 0x0700(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Door;                                                    // 0x0728(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlideStartAsset[0x28];                                   // 0x0730(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlideStart;                                              // 0x0758(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlideLoopAsset[0x28];                                    // 0x0760(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlideLoop;                                               // 0x0788(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlideEndAsset[0x28];                                     // 0x0790(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlideEnd;                                                // 0x07B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              VaultStartAsset[0x28];                                   // 0x07C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       VaultStart;                                              // 0x07E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              VaultLoopAsset[0x28];                                    // 0x07F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       VaultLoop;                                               // 0x0818(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              VaultEndAsset[0x28];                                     // 0x0820(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       VaultEnd;                                                // 0x0848(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              JumpStartAsset[0x28];                                    // 0x0850(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       JumpStart;                                               // 0x0878(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              JumpIdleAsset[0x28];                                     // 0x0880(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       JumpIdle;                                                // 0x08A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              JumpEndAsset[0x28];                                      // 0x08B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       JumpEnd;                                                 // 0x08D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LeapAsset[0x28];                                         // 0x08E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Leap;                                                    // 0x0908(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ProneTransitionAsset[0x28];                              // 0x0910(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       ProneTransition;                                         // 0x0938(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnequippedAsset[0x28];                                   // 0x0940(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Unequipped;                                              // 0x0968(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TossAsset[0x28];                                         // 0x0970(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Toss;                                                    // 0x0998(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKMaster;                                                // 0x09A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTJS[0x7];                                   // 0x09A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, struct FAnimSequenceRandom>            AlternateReady;                                          // 0x09A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.FireSelectGroup
	 * Size -> 0x0120
	 */
	struct FFireSelectGroup
	{
	public:
		unsigned char                                              FireSelectAutoBurstAsset[0x28];                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       FireSelectAutoBurst;                                     // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireSelectAutoSemiAsset[0x28];                           // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       FireSelectAutoSemi;                                      // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireSelectBurstAutoAsset[0x28];                          // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       FireSelectBurstAuto;                                     // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireSelectBurstSemiAsset[0x28];                          // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       FireSelectBurstSemi;                                     // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireSelectSemiAutoAsset[0x28];                           // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       FireSelectSemiAuto;                                      // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireSelectSemiBurstAsset[0x28];                          // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       FireSelectSemiBurst;                                     // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ReloadGroup
	 * Size -> 0x0198
	 */
	struct FReloadGroup
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63ZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ReloadAsset[0x28];                                       // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimMontage*                                        Reload;                                                  // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReloadEmptyAsset[0x28];                                  // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimMontage*                                        ReloadEmpty;                                             // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ConflictAnimationReloadEmptyAsset[0x50];                 // 0x0068(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<EWeaponUpgradeSlot, class UAnimMontage*>              ConflictAnimationReloadEmpty;                            // 0x00B8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              ReloadStagesAsset[0x28];                                 // 0x0108(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimMontage*                                        ReloadStages;                                            // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReloadBoltReleaseAsset[0x28];                            // 0x0138(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       ReloadBoltRelease;                                       // 0x0160(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReloadBoltAfterSwitchMagazineAsset[0x28];                // 0x0168(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimMontage*                                        ReloadBoltAfterSwitchMagazine;                           // 0x0190(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.FirearmAnimsGroup
	 * Size -> 0x0E70
	 */
	struct FFirearmAnimsGroup
	{
	public:
		struct FAnimSequenceRandom                                 FireRecoil;                                              // 0x0000(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class UClass*, struct FAnimSequenceRandom>            FireRecoilMap;                                           // 0x0030(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 DeployedFireRecoil;                                      // 0x0080(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class UClass*, struct FAnimSequenceRandom>            DeployedFireRecoilMap;                                   // 0x00B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      RecoilAdjustment;                                        // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VV0W[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceRandom                                 FireRecoilIron;                                          // 0x0108(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class UClass*, struct FAnimSequenceRandom>            FireRecoilIronMap;                                       // 0x0138(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 DeployedFireRecoilIron;                                  // 0x0188(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class UClass*, struct FAnimSequenceRandom>            DeployedFireRecoilIronMap;                               // 0x01B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      RecoilIronAdjustment;                                    // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TJE[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceRandom                                 FireRecoilLoop;                                          // 0x0210(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class UClass*, class UAnimSequence*>                  AmmoDeltaMap;                                            // 0x0240(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              FirePinAsset[0x28];                                      // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       FirePin;                                                 // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireTriggerAsset[0x28];                                  // 0x02C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       FireTrigger;                                             // 0x02E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireBoltAsset[0x28];                                     // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       FireBolt;                                                // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireBoltLastAsset[0x28];                                 // 0x0320(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       FireBoltLast;                                            // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 BoltCycle;                                               // 0x0350(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 DeployedBoltCycle;                                       // 0x0380(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 Regrip;                                                  // 0x03B0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              DryfireAsset[0x28];                                      // 0x03E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Dryfire;                                                 // 0x0408(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DryfireIronAsset[0x28];                                  // 0x0410(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       DryfireIron;                                             // 0x0438(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 BoltCycleIron;                                           // 0x0440(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 DeployedBoltCycleIron;                                   // 0x0470(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FFireSelectGroup                                    FireSelects;                                             // 0x04A0(0x0120) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FFireSelectGroup                                    FireSelectsIron;                                         // 0x05C0(0x0120) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FFireSelectGroup                                    DeployedFireSelects;                                     // 0x06E0(0x0120) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FFireSelectGroup                                    DeployedFireSelectsIron;                                 // 0x0800(0x0120) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnderbarrelTransitionAsset[0x28];                        // 0x0920(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       UnderbarrelTransition;                                   // 0x0948(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DeployedTransitionAsset[0x28];                           // 0x0950(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimMontage*                                        DeployedTransition;                                      // 0x0978(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UClass*, class UAnimMontage*>                   DeployedTransitionMap;                                   // 0x0980(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              DeployedIronTransitionAsset[0x28];                       // 0x09D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimMontage*                                        DeployedIronTransition;                                  // 0x09F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UClass*, class UAnimMontage*>                   DeployedIronTransitionMap;                               // 0x0A00(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              SideMountOnOffAsset[0x28];                               // 0x0A50(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimMontage*                                        SideMountOnOff;                                          // 0x0A78(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StockOpenCloseAsset[0x28];                               // 0x0A80(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimMontage*                                        StockOpenClose;                                          // 0x0AA8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BipodOpenCloseAsset[0x28];                               // 0x0AB0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimMontage*                                        BipodOpenClose;                                          // 0x0AD8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UClass*, class UAnimMontage*>                   BipodOpenCloseMap;                                       // 0x0AE0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              OpticToggleMap[0x50];                                    // 0x0B30(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              ForegripDeltaMap[0x50];                                  // 0x0B80(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              BayonetPullbackAsset[0x28];                              // 0x0BD0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       BayonetPullback;                                         // 0x0BF8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReloadGroup>                                Reloads;                                                 // 0x0C00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UClass*, struct FReloadGroup>                   AlternateReloads;                                        // 0x0C10(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FReloadGroup>                                SingleReloads;                                           // 0x0C60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReloadGroup>                                FastReloads;                                             // 0x0C70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UClass*, struct FReloadGroup>                   AlternateFastReloads;                                    // 0x0C80(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FReloadGroup>                                DeployedReloads;                                         // 0x0CD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UClass*, struct FReloadGroup>                   AlternateDeployedReloads;                                // 0x0CE0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FReloadGroup>                                DeployedSingleReloads;                                   // 0x0D30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReloadGroup>                                DeployedFastReloads;                                     // 0x0D40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 AmmoChecks;                                              // 0x0D50(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 AmmoChecksIron;                                          // 0x0D80(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 AmmoChecksScope;                                         // 0x0DB0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 DeployedAmmoChecks;                                      // 0x0DE0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 SwitchMagazineDuringFire;                                // 0x0E10(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 SwitchMagazineDuringReload;                              // 0x0E40(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ExplosiveAnimsGroup
	 * Size -> 0x0270
	 */
	struct FExplosiveAnimsGroup
	{
	public:
		unsigned char                                              PullPinOverhandAsset[0x28];                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       PullPinOverhand;                                         // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PullPinUnderhandAsset[0x28];                             // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       PullPinUnderhand;                                        // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PullPinOverhandCookAsset[0x28];                          // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       PullPinOverhandCook;                                     // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PullPinUnderhandCookAsset[0x28];                         // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       PullPinUnderhandCook;                                    // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ThrowOverhandAsset[0x28];                                // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       ThrowOverhand;                                           // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ThrowUnderhandAsset[0x28];                               // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       ThrowUnderhand;                                          // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CookAloneEntryAsset[0x28];                               // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       CookAloneEntry;                                          // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlantAsset[0x28];                                        // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Plant;                                                   // 0x0178(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RemoteIdleAsset[0x28];                                   // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       RemoteIdle;                                              // 0x01A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RemoteDrawAsset[0x28];                                   // 0x01B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       RemoteDraw;                                              // 0x01D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RemoteHolsterAsset[0x28];                                // 0x01E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       RemoteHolster;                                           // 0x0208(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RemoteReadyAsset[0x28];                                  // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       RemoteReady;                                             // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RemoteActivateAsset[0x28];                               // 0x0240(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       RemoteActivate;                                          // 0x0268(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MeleeAnimsGroup
	 * Size -> 0x01B0
	 */
	struct FMeleeAnimsGroup
	{
	public:
		unsigned char                                              SlashNorthSouthAsset[0x28];                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlashNorthSouth;                                         // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlashSouthNorthAsset[0x28];                              // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlashSouthNorth;                                         // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlashWestEastAsset[0x28];                                // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlashWestEast;                                           // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlashEastWestAsset[0x28];                                // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlashEastWest;                                           // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlashNorthWestSouthEastAsset[0x28];                      // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlashNorthWestSouthEast;                                 // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlashSouthEastNorthWestAsset[0x28];                      // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlashSouthEastNorthWest;                                 // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlashNorthEastSouthWestAsset[0x28];                      // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlashNorthEastSouthWest;                                 // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlashSouthWestNorthEastAsset[0x28];                      // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       SlashSouthWestNorthEast;                                 // 0x0178(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimSequenceRandom                                 Stab;                                                    // 0x0180(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.LessonInputBinding
	 * Size -> 0x0010
	 */
	struct FLessonInputBinding
	{
	public:
		class FName                                                ActionOrAxis;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAxis;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSAB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AxisScale;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.LessonInputAction
	 * Size -> 0x0070
	 */
	struct FLessonInputAction
	{
	public:
		TArray<struct FLessonInputBinding>                         Bindings;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActionOrAxis;                                            // 0x0010(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAxis;                                                 // 0x0020(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0HS1[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AxisScale;                                               // 0x0024(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasToggleAlternative;                                   // 0x0028(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIH7[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActionToggle;                                            // 0x0030(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasGamepadAlternative;                                  // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2L6W[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLessonInputBinding>                         GamepadBindings;                                         // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GamepadActionOrAxis;                                     // 0x0058(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGamepadIsAxis;                                          // 0x0068(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9UH[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GamepadAxisScale;                                        // 0x006C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.WeaponAttachedModel
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FWeaponAttachedModel : public FAttachedModel
	{
	public:
		class UINSSkeletalMeshComponent*                           SpawnedSkeletalComponent;                                // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.WeaponUpgradeModel
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	struct FWeaponUpgradeModel : public FWeaponAttachedModel
	{
	public:
		unsigned char                                              WeaponFilter[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bCanBePrimaryModel;                                      // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQVT[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PathHoverProperties
	 * Size -> 0x0008
	 */
	struct FPathHoverProperties
	{
	public:
		unsigned char                                              UnknownData_88PK[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.DeathArea
	 * Size -> 0x0014
	 */
	struct FDeathArea
	{
	public:
		unsigned char                                              UnknownData_MZOX[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SmokeArea
	 * Size -> 0x0020
	 */
	struct FSmokeArea
	{
	public:
		unsigned char                                              UnknownData_8ZTU[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ModifiedNavAreasContainer
	 * Size -> 0x0010
	 */
	struct FModifiedNavAreasContainer
	{
	public:
		TArray<class UModifiedNavArea*>                            Areas;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.AISquadPath
	 * Size -> 0x0080
	 */
	struct FAISquadPath
	{
	public:
		unsigned char                                              UnknownData_05SC[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerSoundscapeState
	 * Size -> 0x0010
	 */
	struct FPlayerSoundscapeState
	{
	public:
		class UINSAudioComponent*                                  Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Level;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I8AG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.HintInfo
	 * Size -> 0x0010
	 */
	struct FHintInfo
	{
	public:
		class UClass*                                              Lesson;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplayTime;                                             // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayVideo;                                              // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPause;                                                  // 0x000D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEKX[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CheckpointCounterAttackDefinition
	 * Size -> 0x0030
	 */
	struct FCheckpointCounterAttackDefinition
	{
	public:
		class USquadLayout*                                        SquadLayout;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSpecificFireSupport;                                 // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_983A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFireSupportDefinition*>                      FireSupportUsed;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnemyCountMultiplier;                                    // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RespawnTimeMultiplier;                                   // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M5UQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CachedSpawnLocation
	 * Size -> 0x0010
	 */
	struct FCachedSpawnLocation
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.BasicLoadoutItem
	 * Size -> 0x0038
	 */
	struct FBasicLoadoutItem
	{
	public:
		unsigned char                                              Item[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              Upgrades[0x10];                                          // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct Insurgency.LoadoutWeapon
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FLoadoutWeapon : public FBasicLoadoutItem
	{
	public:
		bool                                                       bLockSlot;                                               // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BHVZ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerClassAttributes
	 * Size -> 0x003C
	 */
	struct FPlayerClassAttributes
	{
	public:
		bool                                                       bOverridePlayerSpeed;                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJT4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedMultiplier;                                         // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintMultiplier;                                        // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideMultiplier;                                         // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerSpeedOverrideRelative;                            // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHardcoreMovementAnimations;                             // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideHealth;                                         // 0x0012(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ME7M[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Health;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadshotDamageScale;                                     // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePlayerScale;                                    // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BE1A[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerScale;                                             // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadScale;                                               // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePlayerGravity;                                  // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8O5[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GravityScale;                                            // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowJumpShoot;                                         // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowJumpAim;                                           // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowFreeaim;                                           // 0x0032(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowAimDownSights;                                     // 0x0033(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowResupply;                                          // 0x0034(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCustomGear;                                             // 0x0035(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ICT[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ShouldHideGearMask;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.NetworkedServerSettings
	 * Size -> 0x0058
	 */
	struct FNetworkedServerSettings
	{
	public:
		bool                                                       bAllowThirdPersonSpectate;                               // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDeathCamera;                                       // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestrictClassByPlayerLevel;                             // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowLoadoutSave;                                       // 0x0003(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSavedLoadouts;                                       // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKNL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RoundLimit;                                              // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WinLimit;                                                // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundTime;                                               // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OTO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerName;                                              // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActiveTravelURL;                                         // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionName;                                             // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReplayID;                                                // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ReplicatedTeamSettings
	 * Size -> 0x000C
	 */
	struct FReplicatedTeamSettings
	{
	public:
		float                                                      WaveDeadPlayerRatio;                                     // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaxWaitTime;                                         // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveRespawnDelay;                                        // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.FireSupportGameModeOverrideDefinition
	 * Size -> 0x0010
	 */
	struct FFireSupportGameModeOverrideDefinition
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DWA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaximumUsesPerRound;                                     // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRoundStartDelayOverride;                             // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W75I[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RoundStartDelay;                                         // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.FireSupportState
	 * Size -> 0x0028
	 */
	struct FFireSupportState
	{
	public:
		int32_t                                                    MaxUses;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumUses;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeginLockedTimestamp;                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FinishLockedTimestamp;                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RoundStartDelay;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DOR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFireSupportDefinition*                              FireSupportDefinition;                                   // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisabled;                                               // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3VH[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.MapCycleEntry
	 * Size -> 0x0050
	 */
	struct FMapCycleEntry
	{
	public:
		class FString                                              Scenario;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Map;                                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Mode;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Lighting;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Options;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ServerCustomWelcome
	 * Size -> 0x0090
	 */
	struct FServerCustomWelcome
	{
	public:
		class FString                                              ScenarioName;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ScenarioLighting;                                        // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerHostname;                                          // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                MOTDText;                                                // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              ActiveMods[0x50];                                        // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Insurgency.AvailablePlaylists
	 * Size -> 0x0058
	 */
	struct FAvailablePlaylists
	{
	public:
		EAvailablePlaylistState                                    State;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRH8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UPlaylist*, struct FQueryOpenPoolsResultsEntry> Playlists;                                               // 0x0008(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerBan
	 * Size -> 0x0040
	 */
	struct FPlayerBan
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BanTime;                                                 // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                BanReason;                                               // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              AdminId;                                                 // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.SpectatorSettings
	 * Size -> 0x0007
	 */
	struct FSpectatorSettings
	{
	public:
		bool                                                       bXRay;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bXrayTails;                                              // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bXrayTailsPlayerOnly;                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowControls;                                           // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMinimap;                                                // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTeamScores;                                             // 0x0005(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerVitals;                                           // 0x0006(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.OverrideSetting
	 * Size -> 0x000C
	 */
	struct FOverrideSetting
	{
	public:
		int32_t                                                    OriginalValue;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDirty;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModified;                                               // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YP8D[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerGameAchievement
	 * Size -> 0x0068
	 */
	struct FPlayerGameAchievement
	{
	public:
		class FString                                              AchievementId;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                AchievementName;                                         // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                AchievementLockedDescription;                            // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                AchievementUnLockedDescription;                          // 0x0040(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      AchievementProgress;                                     // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJ6T[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           UnlockTime;                                              // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerProfileStatBase
	 * Size -> 0x00C0
	 */
	struct FStatisticsPlayerProfileStatBase
	{
	public:
		unsigned char                                              UnknownData_GITE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ObjectivesDestroyed;                                     // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Dominations;                                             // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsGrenadeFrag;                                        // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsGrenadeIncendiary;                                  // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeroCaps;                                                // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsIronSight;                                          // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsA10;                                                // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsApache;                                             // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsArtillery;                                          // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsBlackhawk;                                          // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsChemicalMortar;                                     // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsGrenadeDrone;                                       // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsIEDDrone;                                           // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsShortRange;                                         // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsMediumRange;                                        // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsLongRange;                                          // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsRocketBarrage;                                      // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsOptics;                                             // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsSights;                                             // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayersRespawned;                                        // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Saviors;                                                 // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsScoped;                                             // 0x005C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RadiosUsed;                                              // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SupportUsed;                                             // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0068(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x006C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x0074(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsOffensive;                                          // 0x0078(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsDefensive;                                          // 0x007C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsHeadshot;                                           // 0x0080(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsMelee;                                              // 0x0084(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Objectives;                                              // 0x0088(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectiveCaptureTicks;                                   // 0x008C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShotsFired;                                              // 0x0090(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShotsHit;                                                // 0x0094(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimePlayed;                                              // 0x0098(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceTraveled;                                        // 0x009C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SupportCalled;                                           // 0x00A0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsDriver;                                             // 0x00A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsGunner;                                             // 0x00A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeCrouch;                                              // 0x00AC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeProne;                                               // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceDriver;                                          // 0x00B4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceGunner;                                          // 0x00B8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VehiclesDestroyed;                                       // 0x00BC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsTeamRoundSummary
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	struct FStatisticsTeamRoundSummary : public FStatisticsPlayerProfileStatBase
	{
	public:
		int32_t                                                    Team;                                                    // 0x00C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G47K[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerRoundSummary
	 * Size -> 0x0070 (FullSize[0x0130] - InheritedSize[0x00C0])
	 */
	struct FStatisticsPlayerRoundSummary : public FStatisticsPlayerProfileStatBase
	{
	public:
		class FString                                              RoundId;                                                 // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamId;                                                  // 0x00D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseExperienceGained;                                    // 0x00D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BonusExperienceGained;                                   // 0x00D8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TokensEarned;                                            // 0x00DC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               ExperienceBonuses;                                       // 0x00E0(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsRoundSummary
	 * Size -> 0x0050
	 */
	struct FStatisticsRoundSummary
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8L72[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EndTime;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Team0Score;                                              // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Team1Score;                                              // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WinningTeam;                                             // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WinReason;                                               // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AGO4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatisticsTeamRoundSummary>                 TeamRoundStats;                                          // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStatisticsPlayerRoundSummary>               PlayerRoundStats;                                        // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsGameSummary
	 * Size -> 0x0068
	 */
	struct FStatisticsGameSummary
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModeName;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartTime;                                               // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerName;                                              // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerAddress;                                           // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_011P[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatisticsRoundSummary>                     Rounds;                                                  // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerProfileMeta
	 * Size -> 0x0050
	 */
	struct FStatisticsPlayerProfileMeta
	{
	public:
		class FString                                              FirstIp;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastIp;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PurchaseTime;                                            // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FirstPlayTime;                                           // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastPlayTime;                                            // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerProfileOverallStats
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FStatisticsPlayerProfileOverallStats : public FStatisticsPlayerProfileStatBase
	{	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerWinRecordItem
	 * Size -> 0x0040
	 */
	struct FStatisticsPlayerWinRecordItem
	{
	public:
		int32_t                                                    TotalGames;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalWins;                                               // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimePlayed;                                              // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6969[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MapName;                                                 // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModeName;                                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameTypeName;                                            // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerProfileScenarioStats
	 * Size -> 0x0060 (FullSize[0x0120] - InheritedSize[0x00C0])
	 */
	struct FStatisticsPlayerProfileScenarioStats : public FStatisticsPlayerProfileStatBase
	{
	public:
		class FString                                              ScenarioName;                                            // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x00D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModeName;                                                // 0x00E0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameType;                                                // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamId;                                                  // 0x0100(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundsPlayed;                                            // 0x0104(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundsWon;                                               // 0x0108(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundWinsElimination;                                    // 0x010C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundWinsObjective;                                      // 0x0110(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundWinsTimer;                                          // 0x0114(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundWinsGeneric;                                        // 0x0118(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCK8[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerProfileWeaponStatBase
	 * Size -> 0x0040
	 */
	struct FStatisticsPlayerProfileWeaponStatBase
	{
	public:
		unsigned char                                              UnknownData_ZHLU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Score;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsOffensive;                                          // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsDefensive;                                          // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsHeadshot;                                           // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsFriendly;                                           // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Objectives;                                              // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectiveCaptureTicks;                                   // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimePlayed;                                              // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceTraveled;                                        // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Shots;                                                   // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Hits;                                                    // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerWeaponStats
	 * Size -> 0x0068 (FullSize[0x00A8] - InheritedSize[0x0040])
	 */
	struct FStatisticsPlayerWeaponStats : public FStatisticsPlayerProfileWeaponStatBase
	{
	public:
		class FString                                              WeaponName;                                              // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                LocalizedWeaponName;                                     // 0x0050(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              ScenarioName;                                            // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModeName;                                                // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameType;                                                // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerClassStats
	 * Size -> 0x0050 (FullSize[0x0110] - InheritedSize[0x00C0])
	 */
	struct FStatisticsPlayerClassStats : public FStatisticsPlayerProfileStatBase
	{
	public:
		class FString                                              PlayerClassName;                                         // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ScenarioName;                                            // 0x00D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x00E0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModeName;                                                // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameType;                                                // 0x0100(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerProfileTagline
	 * Size -> 0x0018
	 */
	struct FPlayerProfileTagline
	{
	public:
		class FString                                              TaglineName;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Coolness;                                                // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E29G[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerProfile
	 * Size -> 0x01B8
	 */
	struct FStatisticsPlayerProfile
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseExperience;                                          // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BonusExperience;                                         // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBST[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueId;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Alias;                                                   // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Balance;                                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageKillDeath;                                        // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageObjectives;                                       // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageObjectiveTicks;                                   // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageExperienceGained;                                 // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_421H[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatisticsPlayerProfileMeta                        Meta;                                                    // 0x0048(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FStatisticsPlayerProfileOverallStats                OverallStats;                                            // 0x0098(0x00C0) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FStatisticsPlayerWinRecordItem>              WinRecord;                                               // 0x0158(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStatisticsPlayerProfileScenarioStats>       PlayerScenarioStats;                                     // 0x0168(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStatisticsPlayerWeaponStats>                WeaponStats;                                             // 0x0178(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStatisticsPlayerClassStats>                 PlayerClassStats;                                        // 0x0188(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStatisticsGameSummary>                      PlayerGames;                                             // 0x0198(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlayerProfileTagline>                       PlayerTaglines;                                          // 0x01A8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsLastGameResult
	 * Size -> 0x0230
	 */
	struct FStatisticsLastGameResult
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStatisticsGameSummary                              LastGamePlayed;                                          // 0x0010(0x0068) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FStatisticsPlayerProfile                            Player;                                                  // 0x0078(0x01B8) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CompetitiveRating
	 * Size -> 0x001C
	 */
	struct FCompetitiveRating
	{
	public:
		bool                                                       bPopulated;                                              // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInPlacements;                                           // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HA9G[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlacementsRemaining;                                     // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacementsTotal;                                         // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Division;                                                // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HighestTier;                                             // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HighestDivision;                                         // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.SandstormPlayerProfilePage
	 * Size -> 0x00B0
	 */
	struct FSandstormPlayerProfilePage
	{
	public:
		struct FTimespan                                           TimePlayed;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Objectives;                                              // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectiveTime;                                           // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundsPlayed;                                            // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundsWon;                                               // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundsLost;                                              // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchesPlayed;                                           // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchesWon;                                              // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchesLost;                                             // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FireSupportCalled;                                       // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PreferredClassKey;                                       // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PreferredWeapon[0x28];                                   // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    PreferredWeaponTotalKills;                               // 0x0068(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeleeKills;                                              // 0x006C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Headshots;                                               // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShotsFired;                                              // 0x0074(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShotsHit;                                                // 0x0078(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x007C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectivesDestroyed;                                     // 0x0080(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OffensiveKills;                                          // 0x0084(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefensiveKills;                                          // 0x0088(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastStandingCaptures;                                    // 0x008C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DistanceTravelledMeters;                                 // 0x0090(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShortRangeKills;                                         // 0x0094(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MediumRangeKills;                                        // 0x0098(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosiveKills;                                          // 0x009C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagOpticsKills;                                          // 0x00A0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScopedKills;                                             // 0x00A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnmagOpticsKills;                                        // 0x00A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IronsightKills;                                          // 0x00AC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.SandstormPlayerProfile
	 * Size -> 0x02C8
	 */
	struct FSandstormPlayerProfile
	{
	public:
		bool                                                       bPopulated;                                              // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPendingMigration;                                       // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4V9R[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSandstormPlayerProfilePage                         Overall;                                                 // 0x0008(0x00B0) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSandstormPlayerProfilePage                         Versus;                                                  // 0x00B8(0x00B0) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSandstormPlayerProfilePage                         Coop;                                                    // 0x0168(0x00B0) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSandstormPlayerProfilePage                         Community;                                               // 0x0218(0x00B0) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MatchHistoryEntry
	 * Size -> 0x00B0
	 */
	struct FMatchHistoryEntry
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           DateTime;                                                // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Level;                                                   // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMode;                                                // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PreferredClassKey;                                       // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PreferredWeapon[0x28];                                   // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<class FString>                                      PlayedAs;                                                // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0078(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Objectives;                                              // 0x007C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0080(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x0084(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0088(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDCU[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           MatchDuration;                                           // 0x0090(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplayAvailable;                                        // 0x0098(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplayExpired;                                          // 0x0099(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKQM[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ReplayID;                                                // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MatchHistory
	 * Size -> 0x0018
	 */
	struct FMatchHistory
	{
	public:
		TArray<struct FMatchHistoryEntry>                          RecentMatches;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReplayExpirationDays;                                    // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMRX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.MatchReservation
	 * Size -> 0x0010
	 */
	struct FMatchReservation
	{
	public:
		class FString                                              Scenario;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerClassLimit
	 * Size -> 0x0210
	 */
	struct FPlayerClassLimit
	{
	public:
		class UPlayerClass*                                        PlayerClass;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Limit;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerLevelRestriction;                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLimitScaling;                                        // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCZL[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxThreshold;                                            // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLimit;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotifyInUI;                                             // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpecialEnemy;                                           // 0x001D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JY7[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpecialEnemySpawnChance;                                 // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBotRespawnCooldown;                                  // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69B3[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BotRespawnCooldown;                                      // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_700A[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerAllowedEquipment                             ClassSlotAdditionalEquipment;                            // 0x0030(0x00F0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPlayerAllowedEquipment                             ClassSlotExcludedEquipment;                              // 0x0120(0x00F0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.OutpostCustomWave
	 * Size -> 0x0020
	 */
	struct FOutpostCustomWave
	{
	public:
		TArray<struct FPlayerClassLimit>                           PlayerClasses;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMinimumWave;                                         // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXJD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinimumWave;                                             // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMaximumWave;                                         // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKW8[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaximumWave;                                             // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.OutpostSpecialWave
	 * Size -> 0x0070
	 */
	struct FOutpostSpecialWave
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              PlayerClasses[0x50];                                     // 0x0018(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      Chance;                                                  // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalEnemiesFraction;                                   // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.OutpostFinalWave
	 * Size -> 0x0004
	 */
	struct FOutpostFinalWave
	{
	public:
		float                                                      NormalEnemiesFraction;                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.INSPartyMember
	 * Size -> 0x0018
	 */
	struct FINSPartyMember
	{
	public:
		class FString                                              PlatformId;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLeader;                                               // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLocalPlayer;                                          // 0x0011(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H2P9[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.INSPartyState
	 * Size -> 0x0018
	 */
	struct FINSPartyState
	{
	public:
		TArray<struct FINSPartyMember>                             Members;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxMembers;                                              // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IL2F[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.AudioAnnouncementCue
	 * Size -> 0x0010
	 */
	struct FAudioAnnouncementCue
	{
	public:
		class UAkAudioEvent*                                       Event;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectiveId;                                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48HE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayingMusic
	 * Size -> 0x0008
	 */
	struct FPlayingMusic
	{
	public:
		EMusicEvent                                                Event;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMusicRoundState                                           RoundState;                                              // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71MG[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ProfileCharacterCosmeticState
	 * Size -> 0x0038
	 */
	struct FProfileCharacterCosmeticState
	{
	public:
		class FName                                                Faction;                                                 // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterGender                                           Gender;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXNX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CosmeticIds;                                             // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ProfileSaveBlock
	 * Size -> 0x0060
	 */
	struct FProfileSaveBlock
	{
	public:
		unsigned char                                              UnknownData_6XL7[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSPlayerLocalProfile*                              PlayerLocalProfile;                                      // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.NVIDIAHighlightsInfo
	 * Size -> 0x0008
	 */
	struct FNVIDIAHighlightsInfo
	{
	public:
		int32_t                                                    TotalHighlights;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewHighlights;                                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.SensitivityModifiers
	 * Size -> 0x0068
	 */
	struct FSensitivityModifiers
	{
	public:
		bool                                                       bFOVSensitivityScaling;                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEZB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimingSensitivityScale;                                  // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseScopeSensitivityScale;                               // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9DG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScopeSensitivityScale;                                   // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScopeSensitivityScaleUsesWorldFOV;                      // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XMG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FocusSensitivityScale;                                   // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EOpticZoomLevel, float>                               OpticSensitivityScale;                                   // 0x0018(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerControlSettings
	 * Size -> 0x0170
	 */
	struct FPlayerControlSettings
	{
	public:
		int32_t                                                    Version;                                                 // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1Q4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    RevisionTimestamp;                                       // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseSensitivity;                                        // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadXSensitivity;                                     // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadYSensitivity;                                     // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertedYAxis;                                          // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertYAxisMouse;                                       // 0x001D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreeaimDeadzone;                                        // 0x001E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_146F[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FreeaimDeadzoneScale;                                    // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FreeaimDeadzoneMinimumSensitivityScale;                  // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeadzoneInnerLeft;                                       // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeadzoneInnerRight;                                      // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bManualBipod;                                            // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRadialToggle;                                           // 0x0031(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoLean;                                               // 0x0032(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TEY6[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSensitivityModifiers                               MouseSensitivityModifiers;                               // 0x0038(0x0068) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSensitivityModifiers                               GamepadSensitivityModifiers;                             // 0x00A0(0x0068) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       GamepadAccelerationEnabled;                              // 0x0108(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHAT[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GamepadAccelerationMultiplier;                           // 0x010C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadAccelerationTimeThreshold;                        // 0x0110(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadAccelerationTimeToReachMax;                       // 0x0114(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadDecelerationTimeToStop;                           // 0x0118(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadDampeningStrength;                                // 0x011C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadDampeningSize;                                    // 0x0120(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadDampeningEaseIn;                                  // 0x0124(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceFeedbackIntensity;                                  // 0x0128(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DF4U[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInputActionKeyMapping>                      ActionMappings;                                          // 0x0130(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FInputAxisKeyMapping>                        AxisMappings;                                            // 0x0140(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGamepadSensitivityCurve                                   GamepadAimSensitivityCurve;                              // 0x0150(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTTN[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ControllerLayoutName;                                    // 0x0158(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVaultKeyBound;                                          // 0x0168(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7UM[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SavedLoadout
	 * Size -> 0x0028
	 */
	struct FSavedLoadout
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FBasicLoadoutItem>                           Items;                                                   // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerClassPreferences
	 * Size -> 0x0078
	 */
	struct FPlayerClassPreferences
	{
	public:
		struct FSavedLoadout                                       Default;                                                 // 0x0000(0x0028) BlueprintVisible, NativeAccessSpecifierPublic
		struct FSavedLoadout                                       NightDefault;                                            // 0x0028(0x0028) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FSavedLoadout>                               Presets;                                                 // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSavedLoadout>                               NightPresets;                                            // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActivePresetIndex;                                       // 0x0070(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActiveNightPresetIndex;                                  // 0x0074(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.TheaterPreferences
	 * Size -> 0x0210
	 */
	struct FTheaterPreferences
	{
	public:
		int64_t                                                    RevisionTimestamp;                                       // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, EFirearmFiremode>                      FiremodePreferences;                                     // 0x0008(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FPlayerClassPreferences>        PlayerClasses;                                           // 0x0058(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               OpticPreferences;                                        // 0x00A8(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                PreferredFaction;                                        // 0x00F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EquippedItems[0x10];                                     // 0x0100(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              EquippedWeaponUpgrades[0x10];                            // 0x0110(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TMap<class FString, bool>                                  PointShootPreferences;                                   // 0x0120(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, struct FBasicLoadoutItem>                LastEquippedPrimary;                                     // 0x0170(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              Aesthetics[0x50];                                        // 0x01C0(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct Insurgency.ServerBrowserPreferences
	 * Size -> 0x0048
	 */
	struct FServerBrowserPreferences
	{
	public:
		int64_t                                                    RevisionTimestamp;                                       // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSearchCoop;                                             // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSearchVersus;                                           // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSearchArcade;                                           // 0x000A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z851[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GamemodeSearch;                                          // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerNameSearch;                                        // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinPlayers;                                              // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFull;                                               // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EServerBrowserFilterSelection                              ShowPasswordedServers;                                   // 0x0039(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDefaultRules;                                           // 0x003A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCustomRules;                                            // 0x003B(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMutated;                                                // 0x003C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModded;                                                 // 0x003D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoJoinModded;                                         // 0x003E(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EServerBrowserFilterSelection                              XPGain;                                                  // 0x003F(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EServerBrowserFilterSelection                              FriendlyFire;                                            // 0x0040(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EServerBrowserFilterSelection                              KillFeed;                                                // 0x0041(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EServerBrowserLightingSelection                            LightingSelection;                                       // 0x0042(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNH4[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CosmeticDefinition
	 * Size -> 0x0010
	 */
	struct FCosmeticDefinition
	{
	public:
		class UClass*                                              Cosmetic;                                                // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticMenuEquipState                                    MenuEquipState;                                          // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticIngameEquipState                                  IngameEquipState;                                        // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNOB[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerAwardedTagline
	 * Size -> 0x0018
	 */
	struct FPlayerAwardedTagline
	{
	public:
		class UClass*                                              Tagline;                                                 // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETaglineContextType                                        ContextValueType;                                        // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDNN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ContextValueInt;                                         // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContextValueFloat;                                       // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CalculatedCoolness;                                      // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerExpBonus
	 * Size -> 0x0018
	 */
	struct FPlayerExpBonus
	{
	public:
		class FString                                              BonusName;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BonusAmount;                                             // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C1N0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerLastGameSummary
	 * Size -> 0x00D8
	 */
	struct FPlayerLastGameSummary
	{
	public:
		int32_t                                                    GameId;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Objectives;                                              // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectivesTicked;                                        // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AG3N[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerAwardedTagline>                       Taglines;                                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreviousExperience;                                      // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewExperience;                                           // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TokensGained;                                            // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMWF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerExpBonus>                             ExpBonuses;                                              // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemsGained;                                             // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                MostUsedClassName;                                       // 0x0060(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                MostUsedWeaponName;                                      // 0x0078(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModeName;                                                // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameType;                                                // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HostName;                                                // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Duration;                                                // 0x00D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundNumber;                                             // 0x00D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CameraBookmark
	 * Size -> 0x001C
	 */
	struct FCameraBookmark
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FOV;                                                     // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CameraBookmarkData
	 * Size -> 0x0050
	 */
	struct FCameraBookmarkData
	{
	public:
		TMap<class FName, struct FCameraBookmark>                  Bookmarks;                                               // 0x0000(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlaylistTypeData
	 * Size -> 0x0050
	 */
	struct FPlaylistTypeData
	{
	public:
		TMap<struct FSoftObjectPath, bool>                         State;                                                   // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.UserInterfacePreferences
	 * Size -> 0x0060
	 */
	struct FUserInterfacePreferences
	{
	public:
		int64_t                                                    RevisionTimestamp;                                       // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EPlaylistType, struct FPlaylistTypeData>              PerPlaylistType;                                         // 0x0008(0x0050) NativeAccessSpecifierPublic
		bool                                                       bHasUserConfirmedLicenseAgreement;                       // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88P6[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.GameAchievements
	 * Size -> 0x0050
	 */
	struct FGameAchievements
	{
	public:
		TMap<class FString, float>                                 GameAch;                                                 // 0x0000(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerStatGroupMinimal
	 * Size -> 0x0018
	 */
	struct FPlayerStatGroupMinimal
	{
	public:
		int32_t                                                    Score;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Objectives;                                              // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectivesTicked;                                        // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.FirearmCategoryStatGroup
	 * Size -> 0x000C
	 */
	struct FFirearmCategoryStatGroup
	{
	public:
		int32_t                                                    Kills;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OpticKills;                                              // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NonOpticKills;                                           // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerStatGroup
	 * Size -> 0x00C8 (FullSize[0x00E0] - InheritedSize[0x0018])
	 */
	struct FPlayerStatGroup : public FPlayerStatGroupMinimal
	{
	public:
		int32_t                                                    OffensiveKills;                                          // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefensiveKills;                                          // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FireSupportKills;                                        // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FireSupportObserverKills;                                // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FireSupportRequests;                                     // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeleeKills;                                              // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BackStabs;                                               // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosiveKills;                                          // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemoteExplosiveKills;                                    // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastStandKills;                                          // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoadKills;                                               // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DriverAssists;                                           // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DriveBys;                                                // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Headshots;                                               // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamKills;                                               // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Suicides;                                                // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectivesCaptured;                                      // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectivesReset;                                         // 0x005C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectivesDestroyed;                                     // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LongestKill;                                             // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HighestGrenadeMultiKill;                                 // 0x0068(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DoorBreachKills;                                         // 0x006C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeaponPickupKills;                                       // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYB7[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerAwardedTagline>                       Taglines;                                                // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EFirearmCategory, struct FFirearmCategoryStatGroup>   FirearmCategoryStats;                                    // 0x0088(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    SpecialGoalCounter;                                      // 0x00D8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecialGoalTimerTicked;                                  // 0x00DC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StoredMagazine
	 * Size -> 0x0010
	 */
	struct FStoredMagazine
	{
	public:
		int32_t                                                    Rounds;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LULO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AmmoTypeOverride;                                        // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StoredAmmo
	 * Size -> 0x0020
	 */
	struct FStoredAmmo
	{
	public:
		class UClass*                                              AmmoContainer;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStoredMagazine>                             StoredMagazines;                                         // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReserveAmmo;                                             // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BN4F[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CharacterCollisionPrevention
	 * Size -> 0x0010
	 */
	struct FCharacterCollisionPrevention
	{
	public:
		TWeakObjectPtr<class AINSCharacter>                        IgnoredCharacter;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FYB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SurfaceReactionPair
	 * Size -> 0x0010
	 */
	struct FSurfaceReactionPair
	{
	public:
		class USurfaceReaction*                                    FirstPerson;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USurfaceReaction*                                    ThirdPerson;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.InertialEasingContainer1D
	 * Size -> 0x0018
	 */
	struct FInertialEasingContainer1D
	{
	public:
		float                                                      Position;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Target;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Velocity;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OppositeAcceleration;                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastUpdateTime;                                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.DampingEasingContainer3D
	 * Size -> 0x0040
	 */
	struct FDampingEasingContainer3D
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Target;                                                  // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Damping;                                                 // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinLimit;                                                // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxLimit;                                                // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastUpdateTime;                                          // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.TimedUsableActor
	 * Size -> 0x001C
	 */
	struct FTimedUsableActor
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UseTotalTime;                                            // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UseStartTime;                                            // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTapAndHold;                                             // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanGoProne;                                             // 0x0011(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXVL[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UseYawLimit;                                             // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUseItem                                                   UseItem;                                                 // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BW1P[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.DeathCamera
	 * Size -> 0x0070
	 */
	struct FDeathCamera
	{
	public:
		unsigned char                                              UnknownData_1PLT[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.FireSupportRequest
	 * Size -> 0x0038
	 */
	struct FFireSupportRequest
	{
	public:
		class UFireSupportDefinition*                              Definition;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetDirection;                                         // 0x0014(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationOffset;                                          // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZIB[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         OfficerController;                                       // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         ObserverController;                                      // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterResponseRequest
	 * Size -> 0x0040
	 */
	struct FCharacterResponseRequest
	{
	public:
		ECharacterResponse                                         ResponseLine;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopPrevious;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bQueued;                                                 // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTeamOnly;                                               // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsTeammatesNearby;                                   // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBN1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RepeatThreshold;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOncePerSquad;                                           // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableInCoopForEnemies;                                // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Y59[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFireSupportDefinition*                              AssociatedFireSupport;                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SubtitleText;                                            // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              AssociatedObjectiveId;                                   // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z32R[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AINSSoldier>                          TargetSoldier;                                           // 0x0034(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RACR[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.VaultSmoothTransition
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	struct FVaultSmoothTransition : public FSmoothTransition
	{
	public:
		float                                                      TimeMultiplier;                                          // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VIZ7[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        VCurve;                                                  // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Insurgency.SurvivalCustomWave
	 * Size -> 0x0020
	 */
	struct FSurvivalCustomWave
	{
	public:
		TArray<struct FPlayerClassLimit>                           PlayerClasses;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMinimumWave;                                         // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABH1[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinimumWave;                                             // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMaximumWave;                                         // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHQK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaximumWave;                                             // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.SurvivalSpecialWave
	 * Size -> 0x0070
	 */
	struct FSurvivalSpecialWave
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              PlayerClasses[0x50];                                     // 0x0018(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      Chance;                                                  // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalEnemiesFraction;                                   // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.SurvivalFinalWave
	 * Size -> 0x0028
	 */
	struct FSurvivalFinalWave
	{
	public:
		float                                                      NormalEnemiesFraction;                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_30XX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ExtractionFireSupport;                                   // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ExtractionFireSupportName;                               // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.DefaultScenarios
	 * Size -> 0x0030
	 */
	struct FDefaultScenarios
	{
	public:
		class UClass*                                              GameMode;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Scenario[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct Insurgency.StoredInventoryItem
	 * Size -> 0x0018
	 */
	struct FStoredInventoryItem
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      Upgrades;                                                // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.InventorySlot
	 * Size -> 0x0040
	 */
	struct FInventorySlot
	{
	public:
		struct FStoredInventoryItem                                Item;                                                    // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bGiveDefaultAmmo;                                        // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XI93[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStoredAmmo>                                 Ammo;                                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AssignedSubSlot;                                         // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Blocked;                                                 // 0x0038(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOZB[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ItemIcons
	 * Size -> 0x0010
	 */
	struct FItemIcons
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ContextualIcon;                                          // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimIdle
	 * Size -> 0x0078
	 */
	struct FCharacterAnimIdle
	{
	public:
		TArray<class UAnimSequence*>                               Breathing;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Relaxed;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               RelaxedSpecial;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Normal;                                                  // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               NormalSpecial;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Iron;                                                    // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       IronMovingAdditive;                                      // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               IronSpecial;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       PointShoot;                                              // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       PointShootMovingAdditive;                                // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Down;                                                    // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimMove
	 * Size -> 0x0050
	 */
	struct FCharacterAnimMove
	{
	public:
		class UBlendSpace*                                         BlendSpace;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       North;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       NorthStart;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       South;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SouthStart;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       East;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       EastStart;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       West;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WestStart;                                               // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StopShuffle;                                             // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimSprint
	 * Size -> 0x0070
	 */
	struct FCharacterAnimSprint
	{
	public:
		class UBlendSpace1D*                                       Sprint;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         SprintLoop;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SprintBayonet;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       SprintHardcore;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         SprintHardcoreLoop;                                      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ChargeStart;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ChargeLoop;                                              // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               ChargeHit;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               ChargeDoorBreach;                                        // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               ChargeDoorFailure;                                       // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ChargeEnd;                                               // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimLean
	 * Size -> 0x0048
	 */
	struct FCharacterAnimLean
	{
	public:
		class UAnimSequence*                                       LeanLeftRelaxed;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanLeftNormal;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanLeftIron;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                LeanLeftAO;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanRightRelaxed;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanRightNormal;                                         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanRightIron;                                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                LeanRightAO;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace1D*                              LeanMoving;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimAO
	 * Size -> 0x0020
	 */
	struct FCharacterAnimAO
	{
	public:
		class UAimOffsetBlendSpace*                                Relaxed;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                Normal;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                Iron;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                Moving;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimPivot
	 * Size -> 0x0040
	 */
	struct FCharacterAnimPivot
	{
	public:
		class UAnimSequence*                                       StepLeft;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StepRight;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       RotatingLeft;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       RotatingRight;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       North180;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       South180;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       East180;                                                 // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       West180;                                                 // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimVault
	 * Size -> 0x0020
	 */
	struct FCharacterAnimVault
	{
	public:
		class UAnimSequence*                                       VaultShortStart;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       VaultShortLoop;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       VaultShortRecovery;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       VaultHigh;                                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimDeployed
	 * Size -> 0x0048
	 */
	struct FCharacterAnimDeployed
	{
	public:
		class UAnimSequence*                                       DeployedNormal;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DeployedIron;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DeployedPose;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       DeployedStrafe;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                DeployedAO;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DeployedTransitionIn;                                    // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DeployedTransitionOut;                                   // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BipodLegsTransitionIn;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BipodLegsTransitionOut;                                  // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimStand
	 * Size -> 0x0308
	 */
	struct FCharacterAnimStand
	{
	public:
		struct FCharacterAnimIdle                                  Idle;                                                    // 0x0000(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimMove                                  SlowWalk;                                                // 0x0078(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimMove                                  Walk;                                                    // 0x00C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimMove                                  Run;                                                     // 0x0118(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimSprint                                Sprint;                                                  // 0x0168(0x0070) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimLean                                  Leaning;                                                 // 0x01D8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimAO                                    AimOffsets;                                              // 0x0220(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimPivot                                 Pivot;                                                   // 0x0240(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimVault                                 Vault;                                                   // 0x0280(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimDeployed                              Deployed;                                                // 0x02A0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Kick;                                                    // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               KickFailure;                                             // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimCrouch
	 * Size -> 0x0258
	 */
	struct FCharacterAnimCrouch
	{
	public:
		struct FCharacterAnimIdle                                  Idle;                                                    // 0x0000(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimMove                                  SlowWalk;                                                // 0x0078(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimMove                                  Walk;                                                    // 0x00C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimMove                                  Run;                                                     // 0x0118(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimLean                                  Leaning;                                                 // 0x0168(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimAO                                    AimOffsets;                                              // 0x01B0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimPivot                                 Pivot;                                                   // 0x01D0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimDeployed                              Deployed;                                                // 0x0210(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimProne
	 * Size -> 0x0170
	 */
	struct FCharacterAnimProne
	{
	public:
		struct FCharacterAnimIdle                                  Idle;                                                    // 0x0000(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimMove                                  Crawl;                                                   // 0x0078(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimAO                                    AimOffsets;                                              // 0x00C8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimPivot                                 Pivot;                                                   // 0x00E8(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimDeployed                              Deployed;                                                // 0x0128(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimTransition
	 * Size -> 0x0038
	 */
	struct FCharacterAnimTransition
	{
	public:
		class UAnimSequence*                                       StandToCrouch;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StandToProne;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DiveProne;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CrouchToStand;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CrouchToProne;                                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ProneToStand;                                            // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ProneToCrouch;                                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimJump
	 * Size -> 0x0038
	 */
	struct FCharacterAnimJump
	{
	public:
		class UAnimSequence*                                       JumpStart;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       JumpApex;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       JumpNearLand;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       JumpLandRecovery;                                        // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Falling;                                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       NearLand;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LandRecovery;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimLadder
	 * Size -> 0x0048
	 */
	struct FCharacterAnimLadder
	{
	public:
		class UAnimSequence*                                       MountBottom;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DismountBottom;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       MountTop;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DismountTop;                                             // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ClimbUp;                                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ClimbDown;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideTransitionIn;                                       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideLoop;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideTransitionOut;                                      // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnim
	 * Size -> 0x07F8
	 */
	struct FCharacterAnim
	{
	public:
		struct FCharacterAnimStand                                 Stand;                                                   // 0x0000(0x0308) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimCrouch                                Crouch;                                                  // 0x0308(0x0258) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimProne                                 Prone;                                                   // 0x0560(0x0170) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimTransition                            Transition;                                              // 0x06D0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimTransition                            TransitionMoving;                                        // 0x0708(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimJump                                  Jump;                                                    // 0x0740(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimLadder                                Ladder;                                                  // 0x0778(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideStart;                                              // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideLoop;                                               // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideEnd;                                                // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideEndMoving;                                          // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                SlideAO;                                                 // 0x07E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       EquipGear;                                               // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       UnequipGear;                                             // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonPose
	 * Size -> 0x0018
	 */
	struct FThirdPersonPose
	{
	public:
		class UAnimSequence*                                       Relaxed;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Normal;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Iron;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonSecondaryMelee
	 * Size -> 0x0038
	 */
	struct FThirdPersonSecondaryMelee
	{
	public:
		class UAnimSequence*                                       NormalStand;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       NormalCrouch;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BayonetStand;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BayonetCrouch;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BayonetSprint;                                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StockStand;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StockCrouch;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonEquipState
	 * Size -> 0x0020
	 */
	struct FThirdPersonEquipState
	{
	public:
		class UAnimSequence*                                       Ready;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Draw;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Holster;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Drop;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonEquipableCommon
	 * Size -> 0x0150
	 */
	struct FThirdPersonEquipableCommon
	{
	public:
		class UAnimSequence*                                       WeaponComponentLocations;                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseBase;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseProne;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseSecondaryMelee;                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseSliding;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseJump;                                            // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseFall;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseUI;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseVehicleDucking;                                  // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseCharging;                                        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FThirdPersonPose                                    BodyPoseStand;                                           // 0x0050(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonPose                                    BodyPoseCrouch;                                          // 0x0068(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonPose                                    BodyPoseProne;                                           // 0x0080(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonSecondaryMelee                          Melee;                                                   // 0x0098(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonEquipState                              EquipStateStand;                                         // 0x00D0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonEquipState                              EquipStateCrouch;                                        // 0x00F0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonEquipState                              EquipStateProne;                                         // 0x0110(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandBase;                                              // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandSprint;                                            // 0x0131(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandCrawl;                                             // 0x0132(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandJump;                                              // 0x0133(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandFall;                                              // 0x0134(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKKitSelect;                                             // 0x0135(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKWeaponBase;                                            // 0x0136(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IJK[0x1];                                   // 0x0137(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       UI;                                                      // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               UISpecial;                                               // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonFirearmFire
	 * Size -> 0x0040
	 */
	struct FThirdPersonFirearmFire
	{
	public:
		TArray<class UAnimSequence*>                               Normal;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Iron;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Deployed;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               DeployedIron;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonReload
	 * Size -> 0x0038
	 */
	struct FThirdPersonReload
	{
	public:
		class UAnimMontage*                                        Normal;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        NormalEmpty;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Speed;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        SpeedEmpty;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Deployed;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        DeployedEmpty;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       NormalCommonPose;                                        // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonFirearmBoltCycle
	 * Size -> 0x0028
	 */
	struct FThirdPersonFirearmBoltCycle
	{
	public:
		class UAnimMontage*                                        Normal;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Iron;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Deployed;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        DeployedIron;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CommonBase;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonAnims
	 * Size -> 0x03B8
	 */
	struct FThirdPersonAnims
	{
	public:
		struct FThirdPersonEquipableCommon                         Common;                                                  // 0x0000(0x0150) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class UClass*, class UAnimSequence*>                  HandPoseUnderbarrelMap;                                  // 0x0150(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Empty;                                                   // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FireComponentCycle;                                      // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FThirdPersonFirearmFire                             FireStand;                                               // 0x01B0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FirePoseStandNormal;                                     // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FThirdPersonFirearmFire                             FireCrouch;                                              // 0x01F8(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FirePoseCrouchNormal;                                    // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FThirdPersonFirearmFire                             FireProne;                                               // 0x0240(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FirePoseProneNormal;                                     // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FireSelect;                                              // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AmmoCheck;                                               // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FThirdPersonReload                                  ReloadStand;                                             // 0x0298(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonReload                                  ReloadCrouch;                                            // 0x02D0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonReload                                  ReloadProne;                                             // 0x0308(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonFirearmBoltCycle                        BoltCycleStand;                                          // 0x0340(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonFirearmBoltCycle                        BoltCycleCrouch;                                         // 0x0368(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonFirearmBoltCycle                        BoltCycleProne;                                          // 0x0390(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.WeaponTagCondition
	 * Size -> 0x0058
	 */
	struct FWeaponTagCondition
	{
	public:
		unsigned char                                              Tags[0x50];                                              // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		EUpgradeTagMatchCondition                                  Condition;                                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CF0O[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.WeaponFallbackModel
	 * Size -> 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
	 */
	struct FWeaponFallbackModel : public FWeaponAttachedModel
	{
	public:
		bool                                                       bMatchTags;                                              // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPJH[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponTagCondition>                         TagConditions;                                           // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpgradeSlotMask;                                         // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentFallbackMode                                    FallbackMode;                                            // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisibleWhenAttached;                                    // 0x005D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisibleWhenNotAttached;                                 // 0x005E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LB9H[0x1];                                   // 0x005F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IgnoredUpgrades[0x50];                                   // 0x0060(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Insurgency.ListOfMutualInclusionsUpgrades
	 * Size -> 0x0058
	 */
	struct FListOfMutualInclusionsUpgrades
	{
	public:
		class UClass*                                              Upgrade;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UpgradesForUpgrade[0x50];                                // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Insurgency.MeleeConfig
	 * Size -> 0x0040
	 */
	struct FMeleeConfig
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Range;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaCost;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDamageAffectedByStamina;                                // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYVI[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageFront;                                             // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageBack;                                              // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawRange;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchRange;                                              // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageTypeClass;                                         // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwingTime;                                               // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoveryTime;                                            // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeleeSwingDirection                                       StartDirection;                                          // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeleeSwingDirection                                       EndDirection;                                            // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQUZ[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USurfaceReaction*                                    SurfaceReaction;                                         // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.AmmoVestExtraAmmo
	 * Size -> 0x0008
	 */
	struct FAmmoVestExtraAmmo
	{
	public:
		int32_t                                                    Ammo;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAmountIsMagCount;                                       // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRoundUpAmount;                                          // 0x0005(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EL5M[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimPose
	 * Size -> 0x0018
	 */
	struct FCharacterAnimPose
	{
	public:
		class UAnimSequence*                                       Relaxed;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Normal;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Iron;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimDrawHolster
	 * Size -> 0x0020
	 */
	struct FCharacterAnimDrawHolster
	{
	public:
		class UAnimSequence*                                       Ready;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Draw;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Holster;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Drop;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimMelee
	 * Size -> 0x0038
	 */
	struct FCharacterAnimMelee
	{
	public:
		class UAnimSequence*                                       NormalStand;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       NormalCrouch;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BayonetStand;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BayonetCrouch;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BayonetSprint;                                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StockStand;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StockCrouch;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimComboPose
	 * Size -> 0x0018
	 */
	struct FCharacterAnimComboPose
	{
	public:
		class UAnimSequence*                                       North;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Alt;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Iron;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimMovePose
	 * Size -> 0x00A0
	 */
	struct FCharacterAnimMovePose
	{
	public:
		struct FCharacterAnimComboPose                             StandSlowWalk;                                           // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimComboPose                             StandWalk;                                               // 0x0018(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimComboPose                             StandRun;                                                // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StandSprint;                                             // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterAnimComboPose                             CrouchWalk;                                              // 0x0050(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimComboPose                             CrouchRun;                                               // 0x0068(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimComboPose                             ProneCrawl;                                              // 0x0080(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Jump;                                                    // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimVehiclePose
	 * Size -> 0x0010
	 */
	struct FCharacterAnimVehiclePose
	{
	public:
		class UAnimSequence*                                       TruckBed;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Equipped;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimEquipable
	 * Size -> 0x0258
	 */
	struct FCharacterAnimEquipable
	{
	public:
		class UAnimSequence*                                       WeaponComponentLocation;                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WeaponComponentLocationGL;                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WeaponComponentLocationsMap[0x50];                       // 0x0010(0x0050) UNKNOWN PROPERTY: MapProperty
		class UAnimSequence*                                       HandPoseBase;                                            // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseProne;                                           // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseMelee;                                           // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseSlide;                                           // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseJump;                                            // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseFall;                                            // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseUI;                                              // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseVehicleDucking;                                  // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseCharge;                                          // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterAnimPose                                  BodyPoseStand;                                           // 0x00A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimPose                                  BodyPoseCrouch;                                          // 0x00C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimPose                                  BodyPoseProne;                                           // 0x00D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimDrawHolster                           EquipStateStand;                                         // 0x00F0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimDrawHolster                           EquipStateCrouch;                                        // 0x0110(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimDrawHolster                           EquipStateProne;                                         // 0x0130(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimMelee                                 Melee;                                                   // 0x0150(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandBase;                                              // 0x0188(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandSprint;                                            // 0x0189(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandSprintHardcore;                                    // 0x018A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandCrawl;                                             // 0x018B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandJump;                                              // 0x018C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKHandFall;                                              // 0x018D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKDirection                                               IKWeaponBase;                                            // 0x018E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Z70[0x1];                                   // 0x018F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       UI;                                                      // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               UISpecial;                                               // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterAnimMovePose                              BodyPoseMovement;                                        // 0x01A8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimVehiclePose                           BodyPoseVehicle;                                         // 0x0248(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimMisc
	 * Size -> 0x0268
	 */
	struct FCharacterAnimMisc
	{
	public:
		struct FCharacterAnimEquipable                             Common;                                                  // 0x0000(0x0258) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Detonate;                                                // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BinocularEnhance;                                        // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimAttack
	 * Size -> 0x0040
	 */
	struct FCharacterAnimAttack
	{
	public:
		TArray<class UAnimSequence*>                               Normal;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Iron;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Deployed;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               DeployedIron;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimReloadType
	 * Size -> 0x0018
	 */
	struct FCharacterAnimReloadType
	{
	public:
		class UAnimSequence*                                       CommonPose;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Half;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Empty;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimReload
	 * Size -> 0x0078
	 */
	struct FCharacterAnimReload
	{
	public:
		struct FCharacterAnimReloadType                            Normal;                                                  // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimReloadType                            Speed;                                                   // 0x0018(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimReloadType                            Deployed;                                                // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimReloadType                            Single;                                                  // 0x0048(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimReloadType                            SingleDeployed;                                          // 0x0060(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimChamber
	 * Size -> 0x0028
	 */
	struct FCharacterAnimChamber
	{
	public:
		class UAnimMontage*                                        Normal;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Iron;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Deployed;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        DeployedIron;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CommonBase;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimFirearm
	 * Size -> 0x0598
	 */
	struct FCharacterAnimFirearm
	{
	public:
		struct FCharacterAnimEquipable                             Common;                                                  // 0x0000(0x0258) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseDeployed;                                        // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandPoseUnderbarrel;                                     // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HandPoseUnderbarrelMap[0x50];                            // 0x0268(0x0050) UNKNOWN PROPERTY: MapProperty
		class UAnimSequence*                                       Empty;                                                   // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BipodLegsDeployed;                                       // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FireComponentCycle;                                      // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterAnimAttack                                FireStand;                                               // 0x02D0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FirePoseStandNormal;                                     // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterAnimAttack                                FireCrouch;                                              // 0x0318(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FirePoseCrouchNormal;                                    // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterAnimAttack                                FireProne;                                               // 0x0360(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FirePoseProneNormal;                                     // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FireSelect;                                              // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AmmoCheck;                                               // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterAnimReload                                ReloadStand;                                             // 0x03B8(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimReload                                ReloadCrouch;                                            // 0x0430(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimReload                                ReloadProne;                                             // 0x04A8(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimChamber                               BoltCycleStand;                                          // 0x0520(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimChamber                               BoltCycleCrouch;                                         // 0x0548(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimChamber                               BoltCycleProne;                                          // 0x0570(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CachedFirearmAnimationData
	 * Size -> 0x0100
	 */
	struct FCachedFirearmAnimationData
	{
	public:
		struct FTransform                                          SightsOffset1P;                                          // 0x0000(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          UnderbarrelHandPoseOffset3P;                             // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnderbarrelHandPoseOffsets3P[0x50];                      // 0x0060(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<class FName, struct FTransform>                       WeaponComponentSocketBoneLocations3P;                    // 0x00B0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.FirearmConfig
	 * Size -> 0x0788
	 */
	struct FFirearmConfig
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MuzzleVelocity;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceSimpleBulletCollision;                             // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2EW[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeBetweenShots;                                        // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TriggerResetInterval;                                    // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialShotDelay;                                        // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFireProjectileOnNotify;                                 // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15IN[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireProjectileDelay;                                     // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockSightsInFireDelay;                                  // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGUD[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImminentShotTolerance;                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsSpeedReload;                                    // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4OA[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReloadInterruptDuration;                                 // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanAmmoCheck;                                           // 0x0034(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0GO[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmmoCheckDuration;                                       // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanSwitchMagazine;                                      // 0x003C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KH3Y[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SwitchMagazineDurationFire;                              // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwitchMagazineDurationReload;                            // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwitchMagazineSpeed;                                     // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwitchMagazineInterruptDuration;                         // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwitchMagazineInterruptSpeed;                            // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowAutoSwitchMagazine;                                // 0x0054(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowNullSwitchMagazine;                                // 0x0055(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowFullSwitchMagazine;                                // 0x0056(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBA8[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeAfterFireForSync;                                    // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoltCycleTime;                                           // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoltCycleSequenceTime;                                   // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoltSpeed;                                               // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarrelLength;                                            // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarrelLengthTraceStart;                                  // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarrelObstructionThreshold;                              // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowFireDuringMelee;                                   // 0x0074(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AI78[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Firemodes;                                               // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideDefaultFiremode;                                // 0x007C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmFiremode                                           DefaultFiremode;                                         // 0x007D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BurstRounds;                                             // 0x007E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_57NL[0x1];                                   // 0x007F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BurstDelay;                                              // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDryReloadWhenRoundNotChambered;                      // 0x0084(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6C4[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FiremodeCycleDuration;                                   // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiremodeCycleGraceTime;                                  // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTerminateBurstOnTriggerRelease;                         // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetBurstOnTermination;                                // 0x0091(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowAimDownSights;                                     // 0x0092(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17BP[0x1];                                   // 0x0093(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimDownSightsTime;                                       // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimDownSightsFOV;                                        // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimDownSightsViewModelFOV;                               // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimDownSightsViewModelFocusFOV;                          // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimDownSightsViewModelDistance;                          // 0x00A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimDownSightsViewModelAngle;                             // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusFOV;                                                // 0x00AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusTime;                                               // 0x00B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusOutTime;                                            // 0x00B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScopeFOV;                                                // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAverageFireRate;                                        // 0x00BC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BZR[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           RecoilLateralRange;                                      // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RecoilVerticalRange;                                     // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RecoilRollRange;                                         // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RecoilAimPunchRange;                                     // 0x00D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilRestDelay;                                         // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilRestRate;                                          // 0x00E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilRollRestRate;                                      // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilAdditionalRestPerShot;                             // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilPunchAdditiveFactor;                               // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RecoilMaxShots;                                          // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilShotResetTime;                                     // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCC6[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  RecoilWeightFactor;                                      // 0x0100(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      AimingRecoilFactor;                                      // 0x0188(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WM7I[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  LeaningRecoilWeightFactor;                               // 0x0190(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      CrouchedRecoilFactor;                                    // 0x0218(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProneRecoilFactor;                                       // 0x021C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  StaminaRecoilWeightFactor;                               // 0x0220(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      FocusRecoilFactor;                                       // 0x02A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DUH[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  MovementRecoilWeightFactor;                              // 0x02B0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      MovementAimRecoilFactor;                                 // 0x0338(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilMaxFactor;                                         // 0x033C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilFreeaimVerticalFrac;                               // 0x0340(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilFreeaimLateralFrac;                                // 0x0344(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BurstRecoilFactor;                                       // 0x0348(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESwayMethod                                                SwayMethod;                                              // 0x034C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZLPI[0x3];                                   // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SwayMagnitude;                                           // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwaySpeed;                                               // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandSwayFactor;                                         // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchSwayFactor;                                        // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProneSwayFactor;                                         // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVE7[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  SwayMagnitudeByPlayerSpeed;                              // 0x0368(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SwaySpeedByPlayerSpeed;                                  // 0x03F0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SwayMagnitudeByStamina;                                  // 0x0478(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SwaySpeedByStamina;                                      // 0x0500(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SwaySpeedByFirearmWeight;                                // 0x0588(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SwayMagnitudeBySuppression;                              // 0x0610(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SwaySpeedBySuppression;                                  // 0x0698(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      AimDownSightsSwayFactor;                                 // 0x0720(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimDownSightsSwaySpeed;                                  // 0x0724(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimDownSightsSwayScreenRatio;                            // 0x0728(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwayFreeaimRatio;                                        // 0x072C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusSwayFactor;                                         // 0x0730(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusSwaySpeed;                                          // 0x0734(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusSwayPenalty;                                        // 0x0738(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusSwaySpeedPenalty;                                   // 0x073C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusPenaltyTime;                                        // 0x0740(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwayMagnitudeInterpSpeed;                                // 0x0744(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileSpread;                                        // 0x0748(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HipfireProjectileSpread;                                 // 0x074C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HipfireProjectileSpreadMoving;                           // 0x0750(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadAimDownSightsFOV;                                 // 0x0754(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadFocusFOV;                                         // 0x0758(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadRecoilFactorVertical;                             // 0x075C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadRecoilFactorLateral;                              // 0x0760(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadRecoilFactorRoll;                                 // 0x0764(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadRecoilFactorAimPunch;                             // 0x0768(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadAimingRecoilFactor;                               // 0x076C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadFocusRecoilFactor;                                // 0x0770(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadMovementAimRecoilFactor;                          // 0x0774(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadRecoilFreeaimVerticalFrac;                        // 0x0778(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadRecoilFreeaimLateralFrac;                         // 0x077C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadSwayMagnitude;                                    // 0x0780(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadSwaySpeed;                                        // 0x0784(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ReloadTimes
	 * Size -> 0x0038
	 */
	struct FReloadTimes
	{
	public:
		float                                                      Sequence;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Insert;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InsertSequence;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Eject;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chamber;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Start;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartEject;                                              // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartChamber;                                            // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StagedStart;                                             // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InsertLoop;                                              // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InsertLoopSequence;                                      // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      End;                                                     // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndReady;                                                // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CheckPendingAmmo;                                        // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ReloadTimesGroup
	 * Size -> 0x00E0
	 */
	struct FReloadTimesGroup
	{
	public:
		struct FReloadTimes                                        Tactical;                                                // 0x0000(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FReloadTimes                                        TacticalSpeed;                                           // 0x0038(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FReloadTimes                                        Dry;                                                     // 0x0070(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FReloadTimes                                        DrySpeed;                                                // 0x00A8(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.BipodTimesGroup
	 * Size -> 0x0010
	 */
	struct FBipodTimesGroup
	{
	public:
		float                                                      DeployTime;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UndeployTime;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegOpenTime;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegCloseTime;                                            // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimThrowable
	 * Size -> 0x0070
	 */
	struct FCharacterAnimThrowable
	{
	public:
		class UAnimSequence*                                       OverhandPullback;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       OverhandThrow;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                OverhandAO;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                OverhandHoldAO;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       OverhandIdle;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       UnderhandPullback;                                       // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       UnderhandThrow;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                UnderhandAO;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                UnderhandHoldAO;                                         // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       UnderhandIdle;                                           // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       PullbackMovingWalk;                                      // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       PullbackMovingRun;                                       // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       PlantFloor;                                              // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       PlantWall;                                               // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimExplosive
	 * Size -> 0x03B0
	 */
	struct FCharacterAnimExplosive
	{
	public:
		struct FCharacterAnimEquipable                             Common;                                                  // 0x0000(0x0258) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Cooked;                                                  // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterAnimThrowable                             UseStand;                                                // 0x0260(0x0070) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimThrowable                             UseCrouch;                                               // 0x02D0(0x0070) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterAnimThrowable                             UseProne;                                                // 0x0340(0x0070) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.AkComponentCameraPair
	 * Size -> 0x0010
	 */
	struct FAkComponentCameraPair
	{
	public:
		class UAkAudioEvent*                                       FirstPerson;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ThirdPerson;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.GrenadeConfig
	 * Size -> 0x0058
	 */
	struct FGrenadeConfig
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookable;                                               // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQ1P[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverhandThrowSpeed;                                      // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverhandThrowSpeedProne;                                 // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnderhandThrowSpeed;                                     // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnderhandThrowSpeedProne;                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnderhandUpwardSpeed;                                    // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnderhandUpwardSpeedProne;                               // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PullbackTime;                                            // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PullbackPinPullTime;                                     // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrowTime;                                               // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrenadeSpawnTime;                                        // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrowModeSwitchTime;                                     // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeaponIsAmmo;                                           // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6HI[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkComponentCameraPair                              SpoonAudioEvents;                                        // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanDrop;                                                // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDropRequiresCook;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLethal;                                                 // 0x0052(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGrenadeCategory                                           GrenadeCategory;                                         // 0x0053(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3PA[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimKnifeAttack
	 * Size -> 0x0020
	 */
	struct FCharacterAnimKnifeAttack
	{
	public:
		TArray<class UAnimSequence*>                               Slash;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Stab;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimKnife
	 * Size -> 0x02B8
	 */
	struct FCharacterAnimKnife
	{
	public:
		struct FCharacterAnimEquipable                             Common;                                                  // 0x0000(0x0258) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimKnifeAttack                           AttackStand;                                             // 0x0258(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimKnifeAttack                           AttackCrouch;                                            // 0x0278(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimKnifeAttack                           AttackProne;                                             // 0x0298(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.KeyBindingOption
	 * Size -> 0x0130
	 */
	struct FKeyBindingOption
	{
	public:
		class FText                                                BindingName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                BindingDescription;                                      // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EKeyBindingType                                            BindingType;                                             // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4F5N[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActionMapping;                                           // 0x0034(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAxisMapping;                                          // 0x003C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9ES[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AxisScaling;                                             // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXN4[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputChord                                         DefaultKey;                                              // 0x0048(0x0020) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputChord                                         BoundKey;                                                // 0x0068(0x0020) BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBoundKeyDirty;                                          // 0x0088(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OSXL[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AllowedSameKeyActions[0x50];                             // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              KeyGroups[0x50];                                         // 0x00E0(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Insurgency.KeyBindingSection
	 * Size -> 0x0028
	 */
	struct FKeyBindingSection
	{
	public:
		class FText                                                SectionName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FKeyBindingOption>                           Options;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.OnlineBundledItem
	 * Size -> 0x0010
	 */
	struct FOnlineBundledItem
	{
	public:
		class UClass*                                              Item;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Variation;                                               // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.OnlineItemClaimResponse
	 * Size -> 0x0020
	 */
	struct FOnlineItemClaimResponse
	{
	public:
		class UClass*                                              Item;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FOnlineBundledItem>                          BundledItems;                                            // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CreditsGiven;                                            // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGD0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.LoadingScreenMap
	 * Size -> 0x0078
	 */
	struct FLoadingScreenMap
	{
	public:
		unsigned char                                              DefaultTexture[0x28];                                    // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LightingScenarioTextures[0x50];                          // 0x0028(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct Insurgency.MainMenuMusic
	 * Size -> 0x0020
	 */
	struct FMainMenuMusic
	{
	public:
		class FString                                              StartEvent;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EndEvent;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.HolidayMainMenuTakeover
	 * Size -> 0x0048
	 */
	struct FHolidayMainMenuTakeover
	{
	public:
		class FName                                                Holiday;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Map;                                                     // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceMusic;                                           // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYRS[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMainMenuMusic                                      ReplacementMusic;                                        // 0x0028(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MapVoteOption
	 * Size -> 0x00A8
	 */
	struct FMapVoteOption
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMapCycleEntry                                      MapCycleEntry;                                           // 0x0010(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UScenarioBase*                                       ScenarioAsset;                                           // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              GamemodeTextureAsset[0x28];                              // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                GameModeName;                                            // 0x0090(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MenuExternalLight
	 * Size -> 0x0010
	 */
	struct FMenuExternalLight
	{
	public:
		class ALight*                                              LightActor;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OriginalIntensity;                                       // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UF2E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CameraForSubSlot
	 * Size -> 0x0050
	 */
	struct FCameraForSubSlot
	{
	public:
		TMap<int32_t, class ACameraActor*>                         CosmeticSubSlotCameras;                                  // 0x0000(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MainMenuLoadoutData
	 * Size -> 0x0020
	 */
	struct FMainMenuLoadoutData
	{
	public:
		class UMenuSquadLayout*                                    MenuSquadLayout;                                         // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MenuSquadSection;                                        // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKTV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USquadLayout*                                        SquadLayout;                                             // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerClass*                                        PlayerClass;                                             // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MenuSquadLayoutSection
	 * Size -> 0x0028
	 */
	struct FMenuSquadLayoutSection
	{
	public:
		class FText                                                SectionTitle;                                            // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    AvailableSupply;                                         // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B3LK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USquadLayout*                                        SquadLayout;                                             // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ModPrimaryAssetDirectory
	 * Size -> 0x0018
	 */
	struct FModPrimaryAssetDirectory
	{
	public:
		EModPrimaryAssetType                                       AssetType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YC2V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Directory;                                               // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MountedMod
	 * Size -> 0x0048
	 */
	struct FMountedMod
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ModId;                                                   // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2L2[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UModData*                                            ModData;                                                 // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MountRoot;                                               // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForGameServer;                                          // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTHX[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ModPrimaryAssetDescription
	 * Size -> 0x0018
	 */
	struct FModPrimaryAssetDescription
	{
	public:
		class FName                                                PrimaryAssetType;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AssetBaseClass;                                          // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBlueprintClasses;                                    // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEditorOnly;                                             // 0x0011(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSF5[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.GameMusicComponent
	 * Size -> 0x0010
	 */
	struct FGameMusicComponent
	{
	public:
		unsigned char                                              UnknownData_QQ54[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.RulesetProperty
	 * Size -> 0x0028
	 */
	struct FRulesetProperty
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PropertyValue;                                           // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckRange;                                             // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampRange;                                             // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OT37[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AcceptedMinimumValue;                                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AcceptedMaximumValue;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDJF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.FireSupportGameModeOverride
	 * Size -> 0x00A8
	 */
	struct FFireSupportGameModeOverride
	{
	public:
		TMap<class UFireSupportDefinition*, struct FFireSupportGameModeOverrideDefinition> FireSupportDefinitionMap;                                // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bUseSeperateForDefender;                                 // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0D83[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UFireSupportDefinition*, struct FFireSupportGameModeOverrideDefinition> DefenderFireSupportDefinitionMap;                        // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.RulesetGameModeRulesMinimal
	 * Size -> 0x00C0
	 */
	struct FRulesetGameModeRulesMinimal
	{
	public:
		TArray<struct FRulesetProperty>                            Rules;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAttributeOverrides;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6KM[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerClassAttributes                              AttributeOverrides;                                      // 0x0014(0x003C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class UTheaterDefinition*                                  OverrideTheaterDefinition;                               // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USquadLayout*                                        AllFactionsSquadLayoutOverride;                          // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SquadLayoutOverride[0x50];                               // 0x0060(0x0050) UNKNOWN PROPERTY: MapProperty
		TArray<struct FFireSupportGameModeOverride>                FireSupportOverrides;                                    // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.OnlineInventoryOwnedItem
	 * Size -> 0x0020
	 */
	struct FOnlineInventoryOwnedItem
	{
	public:
		class UClass*                                              Item;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsConsumable;                                           // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FOM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Quantity;                                                // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EntitlementId;                                           // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlatformStoreItem
	 * Size -> 0x000C
	 */
	struct FPlatformStoreItem
	{
	public:
		class FName                                                PlatformItemId;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasDiscount;                                            // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOwned;                                                  // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J768[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlatformStoreItemsList
	 * Size -> 0x0010
	 */
	struct FPlatformStoreItemsList
	{
	public:
		TArray<struct FPlatformStoreItem>                          ItemsList;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CharacterAttachedModel
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	struct FCharacterAttachedModel : public FAttachedModel
	{
	public:
		int32_t                                                    GearSlotMask;                                            // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentFallbackMode                                    GearFallbackMode;                                        // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetMorphTarget;                                         // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9D3[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MorphTargetName;                                         // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MorphTargetValue;                                        // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZFKG[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.VotableIssue
	 * Size -> 0x0010
	 */
	struct FVotableIssue
	{
	public:
		class UClass*                                              VoteClass;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyAdminCanCall;                                       // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanTargetAdmins;                                        // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanTargetEnemies;                                       // 0x000A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1D9[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ReplicatedVoteChoice
	 * Size -> 0x0018
	 */
	struct FReplicatedVoteChoice
	{
	public:
		int32_t                                                    NumVotes;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoteChoiceType                                            Type;                                                    // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7UCF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ContextString;                                           // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ReplicatedVoteInfo
	 * Size -> 0x0048
	 */
	struct FReplicatedVoteInfo
	{
	public:
		EVoteState                                                 VoteState;                                               // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68RL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              IssueClass;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerState*                                        CallerPlayerState;                                       // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerState*                                        TargetPlayerState;                                       // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Option;                                                  // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ORX1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FReplicatedVoteChoice>                       Choices;                                                 // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.QueuedVote
	 * Size -> 0x0068
	 */
	struct FQueuedVote
	{
	public:
		class UClass*                                              VoteClass;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CalledPlayer[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              Option;                                                  // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TargetPlayer[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct Insurgency.ProfaneWord
	 * Size -> 0x0018
	 */
	struct FProfaneWord
	{
	public:
		class FString                                              Word;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStrongWord;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXQQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SurfaceReactionOutput
	 * Size -> 0x0018
	 */
	struct FSurfaceReactionOutput
	{
	public:
		TWeakObjectPtr<class UParticleSystemComponent>             ParticleSystem;                                          // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UDecalComponent>                      Decal;                                                   // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UINSAudioComponent>                   Audio;                                                   // 0x0010(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PropLODInfo
	 * Size -> 0x0008
	 */
	struct FPropLODInfo
	{
	public:
		float                                                      MinDrawDistance;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LDMaxDrawDistance;                                       // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.RadialCommandClassOptions
	 * Size -> 0x0002
	 */
	struct FRadialCommandClassOptions
	{
	public:
		EPlayerClassFlags                                          PlayerClassFlag;                                         // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterResponse                                         PlayerClassFlagResponse;                                 // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.RadialCommand
	 * Size -> 0x0068
	 */
	struct FRadialCommand
	{
	public:
		bool                                                       bUseCharacterResponse;                                   // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterResponse                                         CharacterResponse;                                       // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasVehicleResponse;                                     // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterResponse                                         CharacterResponseVehicle;                                // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireClassOptions;                                    // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOEL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRadialCommandClassOptions>                  ClassOptions;                                            // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERadialMenuDirection                                       Direction;                                               // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YR48[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              FireSupportDefinition[0x28];                             // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bRequireClick;                                           // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstWordBold;                                          // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayCompassMarker;                                   // 0x004A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECompassMarkerType                                         CompassMarkerType;                                       // 0x004B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMarkerFollowsPlayer;                                    // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2TK[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                FallbackDisplayText;                                     // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.LimbInstanceData
	 * Size -> 0x000C
	 */
	struct FLimbInstanceData
	{
	public:
		int32_t                                                    LimbDepth;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LimbHealth;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimbRight;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.LimbGroupInstanceData
	 * Size -> 0x0058
	 */
	struct FLimbGroupInstanceData
	{
	public:
		int32_t                                                    CurrentDepth;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HMKE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FLimbInstanceData>                LimbData;                                                // 0x0008(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.BodyVelocityData
	 * Size -> 0x0018
	 */
	struct FBodyVelocityData
	{
	public:
		unsigned char                                              UnknownData_02SD[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ManagedRagdoll
	 * Size -> 0x0010
	 */
	struct FManagedRagdoll
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXQB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARagdoll*                                            Ragdoll;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.WeaponCrateWeaponPool
	 * Size -> 0x00A0
	 */
	struct FWeaponCrateWeaponPool
	{
	public:
		class FString                                              PoolName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_09RC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayerEquipmentCollection*>                  PlayerEquipmentCollections;                              // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Weapons[0x10];                                           // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              PotentialUpgrades[0x10];                                 // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bOverrideUpgradePool;                                    // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideUpgradeChance;                                  // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLX4[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnspecifiedSlotUpgradeChance;                            // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EWeaponUpgradeSlot, float>                            SpecificSlotUpgradeChance;                               // 0x0050(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.WeaponUpgradeFilterPair
	 * Size -> 0x0010
	 */
	struct FWeaponUpgradeFilterPair
	{
	public:
		class UWeaponUpgradeFilterTest*                            Test;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFilterType                                                FilterType;                                              // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5MH[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_8TVR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ScenarioSublevel
	 * Size -> 0x0020
	 */
	struct FScenarioSublevel
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoadOnServer;                                           // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoadOnClient;                                           // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseWithSpecifiedGameModesOnly;                          // 0x000A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3N4S[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SpecifiedGameModes[0x10];                                // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct Insurgency.AdditionalScenarioActors
	 * Size -> 0x0050
	 */
	struct FAdditionalScenarioActors
	{
	public:
		class UClass*                                              Actor;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YUZ[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Location;                                                // 0x0020(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ObjectiveInfo
	 * Size -> 0x0038
	 */
	struct FObjectiveInfo
	{
	public:
		unsigned char                                              Objective[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SpawnZones[0x10];                                        // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct Insurgency.ObjectiveGroup
	 * Size -> 0x0020
	 */
	struct FObjectiveGroup
	{
	public:
		unsigned char                                              Objectives[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              SpawnZones[0x10];                                        // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct Insurgency.ObjectiveInfoMissions
	 * Size -> 0x0018
	 */
	struct FObjectiveInfoMissions
	{
	public:
		class FString                                              ObjectiveName;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeExtension;                                           // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IO9M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CustomGameConfig
	 * Size -> 0x0010
	 */
	struct FCustomGameConfig
	{
	public:
		float                                                      PreRoundTimeOverride;                                    // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFER[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerClass*                                        DefaultPlayerClassOverride;                              // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ScoreboardBadge
	 * Size -> 0x0060
	 */
	struct FScoreboardBadge
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ACC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                BadgeName;                                               // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              Image[0x28];                                             // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct Insurgency.BlueprintFindSessionResult
	 * Size -> 0x00B8
	 */
	struct FBlueprintFindSessionResult
	{
	public:
		unsigned char                                              UnknownData_78P6[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CharacterMorphMacro
	 * Size -> 0x0008
	 */
	struct FCharacterMorphMacro
	{
	public:
		float                                                      Base;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intense;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CosmeticColorGroup
	 * Size -> 0x0050
	 */
	struct FCosmeticColorGroup
	{
	public:
		struct FLinearColor                                        PrimaryColor;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SecondaryColor;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LayerTwo;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LayerThree;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LayerFour;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.SoundscapeStateEnvLevel
	 * Size -> 0x0030
	 */
	struct FSoundscapeStateEnvLevel
	{
	public:
		unsigned char                                              Event[0x28];                                             // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      Level;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ILP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SoundscapeStateAuxLevel
	 * Size -> 0x0030
	 */
	struct FSoundscapeStateAuxLevel
	{
	public:
		unsigned char                                              Bus[0x28];                                               // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      Level;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_569H[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SoundscapeStateRepl
	 * Size -> 0x01C0
	 */
	struct FSoundscapeStateRepl
	{
	public:
		struct FSoundscapeStateEnvLevel                            EnvironmentEvents[0x5];                                  // 0x0000(0x00F0) NativeAccessSpecifierPublic
		struct FSoundscapeStateAuxLevel                            AuxBusLevels[0x4];                                       // 0x00F0(0x00C0) NativeAccessSpecifierPublic
		class FName                                                WeaponSwitch;                                            // 0x01B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESoundscapeVehicleState                                    VehicleState;                                            // 0x01B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KM5A[0x7];                                   // 0x01B9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.EmitterRegister
	 * Size -> 0x0010
	 */
	struct FEmitterRegister
	{
	public:
		unsigned char                                              UnknownData_S7EL[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.StationPhrase
	 * Size -> 0x0028
	 */
	struct FStationPhrase
	{
	public:
		EStationResponse                                           AssociatedResponse;                                      // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W2U9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Event;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SubtitleText;                                            // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StationFireSupportStatusPhrase
	 * Size -> 0x0028
	 */
	struct FStationFireSupportStatusPhrase
	{
	public:
		EStationResponse                                           AssociatedResponse;                                      // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVM1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Event;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SubtitleText;                                            // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StationFireSupportStatusPhraseContainer
	 * Size -> 0x0018
	 */
	struct FStationFireSupportStatusPhraseContainer
	{
	public:
		class UFireSupportDefinition*                              AssociatedFireSupport;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStationFireSupportStatusPhrase>             StatusPhrases;                                           // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsRoundSummaryResult
	 * Size -> 0x0030
	 */
	struct FStatisticsRoundSummaryResult
	{
	public:
		unsigned char                                              UnknownData_3N8E[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerStatsBase
	 * Size -> 0x01D0
	 */
	struct FStatisticsPlayerStatsBase
	{
	public:
		uint32_t                                                   Stats[0x55];                                             // 0x0000(0x0154) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatStats[0x1F];                                        // 0x0154(0x007C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsWeaponStatsBase
	 * Size -> 0x00D8
	 */
	struct FStatisticsWeaponStatsBase
	{
	public:
		uint32_t                                                   Stats[0x21];                                             // 0x0000(0x0084) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatStats[0x15];                                        // 0x0084(0x0054) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerStatWeapon
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	struct FStatisticsPlayerStatWeapon : public FStatisticsWeaponStatsBase
	{	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerStatClass
	 * Size -> 0x0050 (FullSize[0x0220] - InheritedSize[0x01D0])
	 */
	struct FStatisticsPlayerStatClass : public FStatisticsPlayerStatsBase
	{
	public:
		TMap<class FString, struct FStatisticsPlayerStatWeapon>    PlayerWeapons;                                           // 0x01D0(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsKillEventPlayer
	 * Size -> 0x0028
	 */
	struct FStatisticsKillEventPlayer
	{
	public:
		uint64_t                                                   StatsPlayerId;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayerPosition;                                          // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PlayerRotation;                                          // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EStatisticsPlayerStanceFlags                               StanceFlags;                                             // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatisticsKillEventPlayerRole                             PlayerRole;                                              // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1P7[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.StatisticsKillEvent
	 * Size -> 0x0028
	 */
	struct FStatisticsKillEvent
	{
	public:
		TArray<struct FStatisticsKillEventPlayer>                  EventPlayers;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatisticsPlayerKillFlags                                 KillFlags;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatisticsPlayerSightFlags                                SightFlags;                                              // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBF7[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GameTime;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DamageCauser;                                            // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsObjectiveEventPlayer
	 * Size -> 0x0028
	 */
	struct FStatisticsObjectiveEventPlayer
	{
	public:
		uint64_t                                                   StatsPlayerId;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayerPosition;                                          // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PlayerRotation;                                          // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EStatisticsPlayerStanceFlags                               StanceFlags;                                             // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXXZ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.StatisticsObjectiveEvent
	 * Size -> 0x0020
	 */
	struct FStatisticsObjectiveEvent
	{
	public:
		TArray<struct FStatisticsObjectiveEventPlayer>             EventPlayers;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GameTime;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectiveId;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PriorOwningTeam;                                         // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewOwningTeam;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.DecalInfo
	 * Size -> 0x0038
	 */
	struct FDecalInfo
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinSize;                                                 // 0x0010(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxSize;                                                 // 0x001C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeSpan;                                                // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDelay;                                            // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDuration;                                         // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedSpreadTime;                                         // 0x0034(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2QFN[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SurfaceReactionInfo
	 * Size -> 0x0050
	 */
	struct FSurfaceReactionInfo
	{
	public:
		EPhysicalSurface                                           SurfaceType;                                             // 0x0000(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9E9T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UParticleSystem*>                             Effects;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDecalInfo                                          Decal;                                                   // 0x0018(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ManagedParticleComponent
	 * Size -> 0x0018
	 */
	struct FManagedParticleComponent
	{
	public:
		unsigned char                                              UnknownData_4ZK5[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            Component;                                               // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.RelationshipIndex
	 * Size -> 0x0008
	 */
	struct FRelationshipIndex
	{
	public:
		int32_t                                                    Indices[0x2];                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.GridCellRelationshipData
	 * Size -> 0x0004
	 */
	struct FGridCellRelationshipData
	{
	public:
		unsigned char                                              Visibility;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R9MW[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   Distance;                                                // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.GridCell
	 * Size -> 0x0018
	 */
	struct FGridCell
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level;                                                   // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00A7[0x1];                                   // 0x0005(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    HeightOffset;                                            // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint64_t>                                           Polys;                                                   // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CellMap
	 * Size -> 0x0060
	 */
	struct FCellMap
	{
	public:
		TArray<unsigned char>                                      Visibility;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<uint16_t, unsigned char>                              Concealment;                                             // 0x0010(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CellData
	 * Size -> 0x0080
	 */
	struct FCellData
	{
	public:
		struct FGridCell                                           Cell;                                                    // 0x0000(0x0018) NativeAccessSpecifierPublic
		struct FCellMap                                            Map;                                                     // 0x0018(0x0060) NativeAccessSpecifierPublic
		uint16_t                                                   Index;                                                   // 0x0078(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6D7[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.TheaterSquadLayout
	 * Size -> 0x0010
	 */
	struct FTheaterSquadLayout
	{
	public:
		class USquadLayout*                                        SquadLayout;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USquadLayout*                                        BotSquadLayout;                                          // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.TheaterFaction
	 * Size -> 0x0088
	 */
	struct FTheaterFaction
	{
	public:
		unsigned char                                              FactionDefinition[0x28];                                 // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTheaterSquadLayout                                 DefaultSquadLayout;                                      // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              GamemodeSquadLayouts[0x50];                              // 0x0038(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct Insurgency.VehicleAnimationStruct
	 * Size -> 0x0028
	 */
	struct FVehicleAnimationStruct
	{
	public:
		class UAnimSequence*                                       Idle;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Running;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       GearShift;                                               // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WheelTurn;                                               // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Fire;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.HoveringVehicleWeaponBehavior
	 * Size -> 0x0060
	 */
	struct FHoveringVehicleWeaponBehavior
	{
	public:
		class UClass*                                              FirearmClass;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackRadius;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAttackAngle;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBurst;                                               // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCIE[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinBurstTime;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBurstTime;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BurstCooldown;                                           // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseWeaponOffsetFromActor;                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_687J[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LocationLeadSpeed;                                       // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdjustShotAfterFiring;                                  // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B92L[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PerShotOffset;                                           // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     ShotAdjustmentThreshold;                                 // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GJ5[0x1F];                                  // 0x0039(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AItemFirearm>                         WeaponInstance;                                          // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.HoveringVehicleTargetMemory
	 * Size -> 0x0020
	 */
	struct FHoveringVehicleTargetMemory
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastSeenTimestamp;                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastSeenLocation;                                        // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasLOS;                                                 // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VWF2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.VehicleIdleSpecialSequence
	 * Size -> 0x0018
	 */
	struct FVehicleIdleSpecialSequence
	{
	public:
		class UAnimSequence*                                       Idle;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                AO;                                                      // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKSpecialScenario                                         IKType;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQCR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SeatAnimationStruct
	 * Size -> 0x0120
	 */
	struct FSeatAnimationStruct
	{
	public:
		class UAnimSequence*                                       NormalIdle;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                NormalAO;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVehicleIdleSpecialSequence>                 SpecialIdle;                                             // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       VehicleMovementLayer;                                    // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Duck;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DuckIdle;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Death;                                                   // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       IronIdle;                                                // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               IronIdleSpecial;                                         // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       RelaxedIdle;                                             // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               RelaxedIdleSpecial;                                      // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                RelaxedAO;                                               // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       MeleeIdle;                                               // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                MeleeAO;                                                 // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WindowIn;                                                // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WindowOut;                                               // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WindowIdle;                                              // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WindowAO;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DriverIdle;                                              // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               DriverIdleSpecial;                                       // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                DriverAO;                                                // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DriverDuck;                                              // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DriverDuckIdle;                                          // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DriverDeath;                                             // 0x00D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       GearShift;                                               // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       GasPedal;                                                // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WheelTurn;                                               // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WheelTurnDucking;                                        // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace1D*                              WeightShiftHorizontal;                                   // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace1D*                              WeightShiftVertical;                                     // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                TurretAO;                                                // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Fire;                                                    // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ScreenResolution
	 * Size -> 0x0008
	 */
	struct FScreenResolution
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.TalkerData
	 * Size -> 0x0028
	 */
	struct FTalkerData
	{
	public:
		unsigned char                                              UnknownData_3WNC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoiceComponent*                                     RadioComponent;                                          // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoiceComponent*                                     ProximityComponent;                                      // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MVZ[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CastVote
	 * Size -> 0x0030
	 */
	struct FCastVote
	{
	public:
		unsigned char                                              PlayerState[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    Choice;                                                  // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q063[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.MuzzleUpgradeWeaponProperties
	 * Size -> 0x0088
	 */
	struct FMuzzleUpgradeWeaponProperties
	{
	public:
		unsigned char                                              Weapon[0x28];                                            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UAkAudioEvent*                                       AkEventFire;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventFire1P;                                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventFire3P;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventTriggerPull;                                      // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventTriggerPull1P;                                    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventTriggerPull3P;                                    // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventFireStart;                                        // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventFireStart1P;                                      // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventFireStart3P;                                      // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventFireEnd;                                          // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventFireEnd1P;                                        // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventFireEnd3P;                                        // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MountCompatibleWeaponInfo
	 * Size -> 0x00A0
	 */
	struct FMountCompatibleWeaponInfo
	{
	public:
		unsigned char                                              WeaponConfigs[0x50];                                     // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              Upgrades[0x50];                                          // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Insurgency.WeaponSightSequence
	 * Size -> 0x0038
	 */
	struct FWeaponSightSequence
	{
	public:
		unsigned char                                              Weapon[0x28];                                            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UAnimSequence*                                       SightsDelta;                                             // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewModelSightDistance;                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewModelRotation;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ScopeConfiguration
	 * Size -> 0x0038
	 */
	struct FScopeConfiguration
	{
	public:
		float                                                      FOV;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOVLowQualityFraction;                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOpticZoomLevel                                            ZoomLevelClassification;                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D23E[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZoomScopeModelReticleScale;                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomScopeModelReticleScaleFireDelta;                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomScopeModelRadialClipScale;                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomScopeModelFocusScale;                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReticleMeshOffset;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomScopeReticleMeshOffset;                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyZoomReticleMeshOffsetHQS;                          // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MY79[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AlignmentSocket;                                         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTreatAsStandardOptic;                                   // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NeedsFlattenScaleOverride;                               // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QSK[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModelFlattenScaleOverride;                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.AllowedGameModes
	 * Size -> 0x0010
	 */
	struct FAllowedGameModes
	{
	public:
		TArray<class FText>                                        AllowedGameModes;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.OtherPlayerAwardedTagline
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FOtherPlayerAwardedTagline : public FPlayerAwardedTagline
	{
	public:
		class AINSPlayerState*                                     PlayerState;                                             // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.GameStatsSummary
	 * Size -> 0x0050
	 */
	struct FGameStatsSummary
	{
	public:
		bool                                                       bPopulated;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4ZZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PreferredClassKey;                                       // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFUV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PreferredWeapon[0x28];                                   // 0x0010(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    Kills;                                                   // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectivesSecured;                                       // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectiveTimeSeconds;                                    // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2X9T[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerRoundOverData
	 * Size -> 0x00B8
	 */
	struct FPlayerRoundOverData
	{
	public:
		bool                                                       bPopulated;                                              // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OLM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CategoryName;                                            // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                GameModeName;                                            // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    RoundNumber;                                             // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Team0Score;                                              // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Team1Score;                                              // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERoundConclusion                                           RoundEndReason;                                          // 0x0044(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WinningTeam;                                             // 0x0045(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HULD[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RoundLengthSec;                                          // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34UI[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOtherPlayerAwardedTagline>                  Taglines;                                                // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameStatsSummary                                   RoundStats;                                              // 0x0060(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      SecUntilStateChange;                                     // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAtWinConditions;                                        // 0x00B4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQ4Q[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.NetHitReaction
	 * Size -> 0x0040
	 */
	struct FNetHitReaction
	{
	public:
		class USurfaceReaction*                                    Reaction;                                                // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               Location;                                                // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           Direction;                                               // 0x0014(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Bone;                                                    // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitArmor;                                               // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVehicleArmour;                                          // 0x0029(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKillEffect;                                             // 0x002A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JNBX[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamageEvent                                        DamageEvent;                                             // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerKillNotice
	 * Size -> 0x0038
	 */
	struct FPlayerKillNotice
	{
	public:
		class AINSPlayerState*                                     Killer;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSPlayerState*                                     Assister;                                                // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSPlayerState*                                     Victim;                                                  // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CauserClass;                                             // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              WeaponClass;                                             // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageTypeClass;                                         // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHeadshot;                                               // 0x0034(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Z5K[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.UsableActor
	 * Size -> 0x009C
	 */
	struct FUsableActor
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		EUsablePriority                                            Priority;                                                // 0x0090(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFOX[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x0094(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DotProduct;                                              // 0x0098(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.WWiseData
	 * Size -> 0x0058
	 */
	struct FWWiseData
	{
	public:
		TArray<class FString>                                      RTPCNames;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              RTPCValues;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RTPCTimes;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      SwitchNames;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      SwitchValues;                                            // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDelayEvent;                                             // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6VS[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ClientNetStats
	 * Size -> 0x002C
	 */
	struct FClientNetStats
	{
	public:
		float                                                      Ping;                                                    // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvgPing;                                                 // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvgJitter;                                               // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InBytesPerSecond;                                        // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutBytesPerSecond;                                       // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InPacketsPerSecond;                                      // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutPacketsPerSecond;                                     // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InPacketLossPercent;                                     // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InAvgPacketLossPercent;                                  // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutPacketLossPercent;                                    // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutAvgPacketLossPercent;                                 // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PartySettings
	 * Size -> 0x0050
	 */
	struct FPartySettings
	{
	public:
		unsigned char                                              UnknownData_5PA6[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ConsumeItemResponse
	 * Size -> 0x0028
	 */
	struct FConsumeItemResponse
	{
	public:
		bool                                                       bIsError;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MVU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingCount;                                          // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XWH1[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           ExpiryTime;                                              // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.OnlineItemClaimResult
	 * Size -> 0x0050
	 */
	struct FOnlineItemClaimResult
	{
	public:
		TMap<class FString, struct FOnlineItemClaimResponse>       Claims;                                                  // 0x0000(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.BlueprintReplayEvent
	 * Size -> 0x0038
	 */
	struct FBlueprintReplayEvent
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Meta;                                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeStart;                                               // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeEnd;                                                 // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ReplayBrowserInfo
	 * Size -> 0x0040
	 */
	struct FReplayBrowserInfo
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FriendlyName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Timestamp;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeInBytes;                                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DemoTimeInMs;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumViewers;                                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLive;                                                 // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8K8V[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Changelist;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldKeep;                                             // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DZQ[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerMatchOverData
	 * Size -> 0x00B0
	 */
	struct FPlayerMatchOverData
	{
	public:
		bool                                                       bPopulated;                                              // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80E0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MatchLengthSec;                                          // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameStatsSummary                                   MatchStats;                                              // 0x0008(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bAllRoundsSubmitted;                                     // 0x0058(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHNQ[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameStatsRoundReward                               AggregateReward;                                         // 0x0060(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bPendingLevelUpRewards;                                  // 0x0080(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0CC[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameStatsLevelUpReward                             LevelUpReward;                                           // 0x0088(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<int32_t>                                            GrantedEventItems;                                       // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.SoldierKillInfo
	 * Size -> 0x0030
	 */
	struct FSoldierKillInfo
	{
	public:
		class AINSSoldier*                                         KilledSoldier;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         Killer;                                                  // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamageCauser;                                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageTypeClass;                                         // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HitBone;                                                 // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SurfacesPenetrated;                                      // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Kills;                                                   // 0x0029(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFireSupportKill;                                        // 0x002A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZ7P[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ColorScheme
	 * Size -> 0x0060
	 */
	struct FColorScheme
	{
	public:
		struct FLinearColor                                        EnemyColor;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FriendlyColor;                                           // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ObserverColor;                                           // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BuddyColor;                                              // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PartyColor;                                              // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NeutralColor;                                            // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.VoiceChatAvailableDevice
	 * Size -> 0x0028
	 */
	struct FVoiceChatAvailableDevice
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.FireSupportRequestResult
	 * Size -> 0x0010
	 */
	struct FFireSupportRequestResult
	{
	public:
		EFireSupportRequestResult                                  RequestResult;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LM66[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         AssistingController;                                     // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MapVoteCount
	 * Size -> 0x0008
	 */
	struct FMapVoteCount
	{
	public:
		EMapVoteSelection                                          Selection;                                               // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQQD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Votes;                                                   // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.NemesisStats
	 * Size -> 0x0008
	 */
	struct FNemesisStats
	{
	public:
		int32_t                                                    Kills;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MotdUpdateMessage
	 * Size -> 0x0068
	 */
	struct FMotdUpdateMessage
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              ImageUrl;                                                // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Message;                                                 // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              LinkUrl;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                LinkText;                                                // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MotdData
	 * Size -> 0x0168
	 */
	struct FMotdData
	{
	public:
		bool                                                       bSucceeded;                                              // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1LJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HttpResponseCode;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FDateTime                                           PublishTime;                                             // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Body;                                                    // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              ImageUrl;                                                // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Images;                                                  // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExternalLink;                                            // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                LinkButtonText;                                          // 0x0070(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bHasUpdateMessage;                                       // 0x0088(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QAPN[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMotdUpdateMessage                                  UpdateMessage;                                           // 0x0090(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bHasFreeUserUpdateMessage;                               // 0x00F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N528[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMotdUpdateMessage                                  FreeWeekendUpdateMessage;                                // 0x0100(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ActionMapList
	 * Size -> 0x0010
	 */
	struct FActionMapList
	{
	public:
		TArray<struct FInputChord>                                 InputChords;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.AnimNode_TransformBone
	 * Size -> 0x0068 (FullSize[0x0130] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_TransformBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3H2R[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00E0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TransformSpace;                                          // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNRR[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      TransformSpaceBone;                                      // 0x0114(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAdditive;                                               // 0x0124(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7UL[0xB];                                   // 0x0125(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.BloodSplatterContext
	 * Size -> 0x00A8
	 */
	struct FBloodSplatterContext
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0088(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1BH[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysMaterial;                                            // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           PhysicalSurface;                                         // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBloodSplatterType                                         BloodSplatterType;                                       // 0x00A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x00A2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L16C[0x5];                                   // 0x00A3(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CharacterAnimRandom
	 * Size -> 0x0020
	 */
	struct FCharacterAnimRandom
	{
	public:
		TArray<class UAnimSequence*>                               Sequence;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimMontage*>                                Montage;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MontageWeightPair
	 * Size -> 0x0010
	 */
	struct FMontageWeightPair
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22J9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.UISpecialSequence
	 * Size -> 0x0018
	 */
	struct FUISpecialSequence
	{
	public:
		struct FMontageWeightPair                                  Montage;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCustomizationAllowed;                                   // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5T4[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CopyPoseInstanceProxy
	 * Size -> 0x0140 (FullSize[0x0820] - InheritedSize[0x06E0])
	 */
	struct FCopyPoseInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_3P0L[0x140];                                 // 0x06E0(0x0140) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.CoverPointOctreeElement
	 * Size -> 0x0030
	 */
	struct FCoverPointOctreeElement
	{
	public:
		unsigned char                                              UnknownData_MY8F[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ExplosiveDamageEvent
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FExplosiveDamageEvent : public FRadialDamageEvent
	{
	public:
		class UClass*                                              WeaponClass;                                             // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.BulletDamageEvent
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	struct FBulletDamageEvent : public FPointDamageEvent
	{
	public:
		class UClass*                                              WeaponClass;                                             // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AmmoType;                                                // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BulletOrigin;                                            // 0x00B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BulletVelocity;                                          // 0x00C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SurfacesPenetrated;                                      // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTUC[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonIdle
	 * Size -> 0x0060
	 */
	struct FThirdPersonIdle
	{
	public:
		TArray<class UAnimSequence*>                               Breathing;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Relaxed;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               RelaxedSpecial;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Normal;                                                  // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               NormalSpecial;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Iron;                                                    // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               IronSpecial;                                             // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Down;                                                    // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonMove
	 * Size -> 0x0048
	 */
	struct FThirdPersonMove
	{
	public:
		class UBlendSpace1D*                                       North;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       NorthStart;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       South;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SouthStart;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       East;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       EastStart;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       West;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WestStart;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StopShuffle;                                             // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonSprint
	 * Size -> 0x0068
	 */
	struct FThirdPersonSprint
	{
	public:
		class UAnimSequence*                                       SprintStart;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       Sprint;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        SprintBayonet;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        SprintEnd;                                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ChargeStart;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ChargeLoop;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               ChargeHit;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               ChargeDoorBreach;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               ChargeFailure;                                           // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ChargeEnd;                                               // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonLean
	 * Size -> 0x0048
	 */
	struct FThirdPersonLean
	{
	public:
		class UAnimSequence*                                       LeanLeftRelaxed;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanLeftNormal;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanLeftIron;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                LeanLeftAO;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanRightRelaxed;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanRightNormal;                                         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LeanRightIron;                                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                LeanRightAO;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace1D*                              LeanMoving;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonAO
	 * Size -> 0x0018
	 */
	struct FThirdPersonAO
	{
	public:
		class UAimOffsetBlendSpace*                                Relaxed;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                Normal;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                Iron;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonPivot
	 * Size -> 0x0040
	 */
	struct FThirdPersonPivot
	{
	public:
		class UAnimSequence*                                       StepLeft;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StepRight;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       RotateLeft;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       RotateRight;                                             // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SpinNorth;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SpinSouth;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SpinEast;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SpinWest;                                                // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonVault
	 * Size -> 0x0020
	 */
	struct FThirdPersonVault
	{
	public:
		class UAnimSequence*                                       VaultShortStart;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       VaultShortLoop;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       VaultShortRecovery;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       VaultHigh;                                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonDeployed
	 * Size -> 0x0048
	 */
	struct FThirdPersonDeployed
	{
	public:
		class UAnimSequence*                                       DeployedNormal;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DeployedIron;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DeployedPose;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       DeployedStrafe;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                DeployedAO;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DeployedTransitionIn;                                    // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DeployedTransitionOut;                                   // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BipodLegsTransitionIn;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BipodLegsTransitionOut;                                  // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonStand
	 * Size -> 0x02C8
	 */
	struct FThirdPersonStand
	{
	public:
		struct FThirdPersonIdle                                    Idle;                                                    // 0x0000(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FThirdPersonMove                                    SlowWalk;                                                // 0x0060(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonMove                                    Walk;                                                    // 0x00A8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonMove                                    Run;                                                     // 0x00F0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonSprint                                  Sprint;                                                  // 0x0138(0x0068) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FThirdPersonLean                                    Leaning;                                                 // 0x01A0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonAO                                      AimOffsets;                                              // 0x01E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonPivot                                   Pivot;                                                   // 0x0200(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonVault                                   Vault;                                                   // 0x0240(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonDeployed                                Deployed;                                                // 0x0260(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Kick;                                                    // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               KickFailure;                                             // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonCrouch
	 * Size -> 0x0220
	 */
	struct FThirdPersonCrouch
	{
	public:
		struct FThirdPersonIdle                                    Idle;                                                    // 0x0000(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FThirdPersonMove                                    SlowWalk;                                                // 0x0060(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonMove                                    Walk;                                                    // 0x00A8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonMove                                    Run;                                                     // 0x00F0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonLean                                    Leaning;                                                 // 0x0138(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonAO                                      AimOffsets;                                              // 0x0180(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonPivot                                   Pivot;                                                   // 0x0198(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonDeployed                                Deployed;                                                // 0x01D8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonProne
	 * Size -> 0x0190
	 */
	struct FThirdPersonProne
	{
	public:
		struct FThirdPersonIdle                                    Idle;                                                    // 0x0000(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FThirdPersonMove                                    Crawl;                                                   // 0x0060(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonLean                                    Leaning;                                                 // 0x00A8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonAO                                      AimOffsets;                                              // 0x00F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonPivot                                   Pivot;                                                   // 0x0108(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonDeployed                                Deployed;                                                // 0x0148(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonTransition
	 * Size -> 0x0038
	 */
	struct FThirdPersonTransition
	{
	public:
		class UAnimSequence*                                       StandCrouch;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StandProne;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DiveProne;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CrouchStand;                                             // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CrouchProne;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ProneStand;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ProneCrouch;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonJump
	 * Size -> 0x0038
	 */
	struct FThirdPersonJump
	{
	public:
		class UAnimSequence*                                       JumpStart;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       JumpApex;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       JumpNearLand;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       JumpLandRecovery;                                        // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Falling;                                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       NearLand;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       LandRecovery;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonBodyAnims
	 * Size -> 0x0700
	 */
	struct FThirdPersonBodyAnims
	{
	public:
		struct FThirdPersonStand                                   Stand;                                                   // 0x0000(0x02C8) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FThirdPersonCrouch                                  Crouch;                                                  // 0x02C8(0x0220) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FThirdPersonProne                                   Prone;                                                   // 0x04E8(0x0190) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FThirdPersonTransition                              Transition;                                              // 0x0678(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonJump                                    Jump;                                                    // 0x06B0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideStart;                                              // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideLoop;                                               // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideEnd;                                                // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonThrowable
	 * Size -> 0x0050
	 */
	struct FThirdPersonThrowable
	{
	public:
		class UAnimSequence*                                       OverhandPullback;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       OverhandThrow;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                OverhandAO;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       OverhandIdle;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       UnderhandPullback;                                       // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       UnderhandThrow;                                          // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                UnderhandAO;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       UnderhandIdle;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       PlantFloor;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       PlantWall;                                               // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonRandom
	 * Size -> 0x0020
	 */
	struct FThirdPersonRandom
	{
	public:
		TArray<class UAnimSequence*>                               Sequence;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimMontage*>                                Montage;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonComboPose
	 * Size -> 0x0018
	 */
	struct FThirdPersonComboPose
	{
	public:
		class UAnimSequence*                                       North;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Alt;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Iron;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonMovePose
	 * Size -> 0x0098
	 */
	struct FThirdPersonMovePose
	{
	public:
		struct FThirdPersonComboPose                               StandSlowWalk;                                           // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonComboPose                               StandWalk;                                               // 0x0018(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonComboPose                               StandRun;                                                // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                       StandSprint;                                             // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FThirdPersonComboPose                               CrouchWalk;                                              // 0x0050(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonComboPose                               CrouchRun;                                               // 0x0068(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThirdPersonComboPose                               ProneCrawl;                                              // 0x0080(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonLadder
	 * Size -> 0x0048
	 */
	struct FThirdPersonLadder
	{
	public:
		class UAnimSequence*                                       MountBottom;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DismountBottom;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       MountTop;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DismountTop;                                             // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ClimbUp;                                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ClimbDown;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideTransitionIn;                                       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideLoop;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SlideTransitionOut;                                      // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonDrawHolster
	 * Size -> 0x0020
	 */
	struct FThirdPersonDrawHolster
	{
	public:
		class UAnimSequence*                                       Ready;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Draw;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Holster;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Drop;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonChamber
	 * Size -> 0x0028
	 */
	struct FThirdPersonChamber
	{
	public:
		class UAnimMontage*                                        Normal;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Iron;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Deployed;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        DeployedIron;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CommonBase;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ThirdPersonAttack
	 * Size -> 0x0040
	 */
	struct FThirdPersonAttack
	{
	public:
		TArray<class UAnimSequence*>                               Normal;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Iron;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Deployed;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               DeployedIron;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.AnimStanceGroup
	 * Size -> 0x0090
	 */
	struct FAnimStanceGroup
	{
	public:
		unsigned char                                              StandAsset[0x28];                                        // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Stand;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CrouchAsset[0x28];                                       // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Crouch;                                                  // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ProneAsset[0x28];                                        // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Prone;                                                   // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.MultiAnimationStrengthPair
	 * Size -> 0x0028
	 */
	struct FMultiAnimationStrengthPair
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPT6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               Sequences;                                               // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SequenceAssets[0x10];                                    // 0x0018(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct Insurgency.AnimationStrengthPair
	 * Size -> 0x0038
	 */
	struct FAnimationStrengthPair
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCPQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SequenceAsset[0x28];                                     // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Sequence;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.AnimationReady
	 * Size -> 0x0038
	 */
	struct FAnimationReady
	{
	public:
		bool                                                       Explicit;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D00P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SequenceAsset[0x28];                                     // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Sequence;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.BannerData
	 * Size -> 0x0038
	 */
	struct FBannerData
	{
	public:
		class FText                                                DefaultText;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              StringKey;                                               // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           StartDate;                                               // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           EndDate;                                                 // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ChildAsset
	 * Size -> 0x0018
	 */
	struct FChildAsset
	{
	public:
		bool                                                       bHasIcon;                                                // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E796[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              HintImage;                                               // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUserWidget*                                         ChildWidgetBP;                                           // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.CoverSearchParams
	 * Size -> 0x0028
	 */
	struct FCoverSearchParams
	{
	public:
		unsigned char                                              UnknownData_7BQ4[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ScenarioAssetInfo
	 * Size -> 0x0060
	 */
	struct FScenarioAssetInfo
	{
	public:
		class FString                                              ScenarioAsset;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameModeName;                                            // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                GameModeNameText;                                        // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              ScenarioName;                                            // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ScenarioNameText;                                        // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.LoadoutItemWithTags
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	struct FLoadoutItemWithTags : public FBasicLoadoutItem
	{
	public:
		bool                                                       bMatchTags;                                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BVU[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MatchedTags[0x50];                                       // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty
		EUpgradeTagMatchCondition                                  MatchTagCondition;                                       // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7JN[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.HardcoreCheckpointLoadout
	 * Size -> 0x0030
	 */
	struct FHardcoreCheckpointLoadout
	{
	public:
		bool                                                       bUseRandomPrimaryWeapons;                                // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomSecondaryWeapons;                              // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7ZH[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PrimaryMagazines;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondaryMagazines;                                      // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WFPG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLoadoutItemWithTags>                        RandomPrimaryWeapons;                                    // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLoadoutItemWithTags>                        RandomSecondaryWeapons;                                  // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PartyReservationTotalSize
	 * Size -> 0x000C
	 */
	struct FPartyReservationTotalSize
	{
	public:
		int32_t                                                    ReservationIndex;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    partySize;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Skill;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.TeamBalanceInfoHost
	 * Size -> 0x000C
	 */
	struct FTeamBalanceInfoHost
	{
	public:
		int32_t                                                    TeamIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalPlayers;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalSkill;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerGameData
	 * Size -> 0x0030
	 */
	struct FPlayerGameData
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0000(0x0028) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Skill;                                                   // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOTK[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.AllowedItemDefinition
	 * Size -> 0x0060
	 */
	struct FAllowedItemDefinition
	{
	public:
		int32_t                                                    CostModifier;                                            // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideBaseCost;                                       // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchTags;                                              // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23Z9[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MatchedTags[0x50];                                       // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
		EUpgradeTagMatchCondition                                  MatchTagCondition;                                       // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJBP[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerWeapon
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FPlayerWeapon : public FLoadoutWeapon
	{
	public:
		EItemSlot                                                  AssignedSlot;                                            // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FC5L[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AssignedSubSlot;                                         // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.VoiceState
	 * Size -> 0x0004
	 */
	struct FVoiceState
	{
	public:
		bool                                                       bAudibleProximity;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAudibleRadio;                                           // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnemy;                                                // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRadioFilter;                                            // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.SaveGameForPS4
	 * Size -> 0x0050
	 */
	struct FSaveGameForPS4
	{
	public:
		TMap<class FString, class FString>                         SaveContents;                                            // 0x0000(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.UncategorizedSaveItems
	 * Size -> 0x0150
	 */
	struct FUncategorizedSaveItems
	{
	public:
		int64_t                                                    RevisionTimestamp;                                       // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SavedProfileVersion;                                     // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastKnownPVPExperience;                                  // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastKnownBalance;                                        // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5U3A[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      LessonHintsReceived;                                     // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, unsigned char>                         LessonLeftCount;                                         // 0x0028(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPlayerLastGameSummary                              LastMatchStats;                                          // 0x0078(0x00D8) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.ReplaySaveItems
	 * Size -> 0x0068
	 */
	struct FReplaySaveItems
	{
	public:
		int64_t                                                    RevisionTimestamp;                                       // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            HiddenReplays;                                           // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FCameraBookmarkData>            CameraBookmarks;                                         // 0x0018(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerCosmeticsProfile
	 * Size -> 0x0240
	 */
	struct FPlayerCosmeticsProfile
	{
	public:
		int64_t                                                    RevisionTimestamp;                                       // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CosmeticsProfileVersion;                                 // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterGender                                           CurrentSecurityCosmeticGender;                           // 0x000C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2IR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CurrentSelectedPresetName;                               // 0x0010(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		struct FProfileCharacterCosmeticState                      CurrentSecurityFemaleCosmeticState;                      // 0x0028(0x0038) BlueprintVisible, NativeAccessSpecifierPublic
		struct FProfileCharacterCosmeticState                      CurrentSecurityCosmeticState;                            // 0x0060(0x0038) BlueprintVisible, NativeAccessSpecifierPublic
		struct FProfileCharacterCosmeticState                      CurrentInsurgentsCosmeticState;                          // 0x0098(0x0038) BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FProfileCharacterCosmeticState> StoredCosmeticStates;                                    // 0x00D0(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    ScoreboardBadge;                                         // 0x0120(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EB90[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FProfileCharacterCosmeticState                      CurrentSecurityShoppingCart;                             // 0x0128(0x0038) BlueprintVisible, NativeAccessSpecifierPublic
		struct FProfileCharacterCosmeticState                      CurrentInsurgentsShoppingCart;                           // 0x0160(0x0038) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FCosmeticDefinition>                         EntitledCosmetics;                                       // 0x0198(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PreviewedCosmeticItems;                                  // 0x01A8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            UnviewedItems;                                           // 0x01B8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PreviewedStoreItems;                                     // 0x01C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            UnviewedStoreItems;                                      // 0x01D8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasSales;                                               // 0x01E8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45XB[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FText>                           StoredCosmeticChoices;                                   // 0x01F0(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.UserSettingsPreferences
	 * Size -> 0x0001
	 */
	struct FUserSettingsPreferences
	{
	public:
		unsigned char                                              UnknownData_HZJU[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerRoundSummary
	 * Size -> 0x0088
	 */
	struct FPlayerRoundSummary
	{
	public:
		int32_t                                                    GameId;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundNumber;                                             // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MostUsedWeapon;                                          // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MostUsedClass;                                           // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0G98[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MapName;                                                 // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModeName;                                                // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ScenarioName;                                            // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HostName;                                                // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameTypeName;                                            // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInObjective;                                         // 0x0080(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VR4[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PlayerRoundExpSummary
	 * Size -> 0x0038
	 */
	struct FPlayerRoundExpSummary
	{
	public:
		int32_t                                                    GameId;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StatsPlayerId;                                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreviousExperience;                                      // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewExperience;                                           // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreviousBalance;                                         // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewBalance;                                              // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemsGained;                                             // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlayerExpBonus>                             ExpBonuses;                                              // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.RichPresence
	 * Size -> 0x0048
	 */
	struct FRichPresence
	{
	public:
		EPresenceState                                             State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OX4D[0x47];                                  // 0x0001(0x0047) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ItemWeightData
	 * Size -> 0x000C
	 */
	struct FItemWeightData
	{
	public:
		EItemSlot                                                  ItemSlot;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92YX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemSubslot;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.AmmoWeightData
	 * Size -> 0x0020
	 */
	struct FAmmoWeightData
	{
	public:
		EFirearmCategory                                           FirearmCategory;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WH7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CarrierExtraAmmo;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagazineCapacity;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultMagazineAmmount;                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmmoContainerWeight;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RoundWeight;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAmountIsMagCount;                                       // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QULU[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmmoTotalWeight;                                         // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.InventoryWeight
	 * Size -> 0x0070
	 */
	struct FInventoryWeight
	{
	public:
		TArray<struct FItemWeightData>                             ItemsSelfWeights;                                        // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EItemSlot, struct FAmmoWeightData>                    AmmoWeightDataMap;                                       // 0x0010(0x0050) NativeAccessSpecifierPublic
		class UClass*                                              EquippedAmmoVest;                                        // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InventoryTotalWeight;                                    // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AMK[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SavedPosition
	 * Size -> 0x0470
	 */
	struct FSavedPosition
	{
	public:
		unsigned char                                              UnknownData_AVAU[0x470];                                 // 0x0000(0x0470) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.VirtualLightSource
	 * Size -> 0x0038
	 */
	struct FVirtualLightSource
	{
	public:
		unsigned char                                              UnknownData_CF4Z[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SampledLightSource
	 * Size -> 0x0030
	 */
	struct FSampledLightSource
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UActorComponent>                      Owner;                                                   // 0x0014(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerConeAngle;                                          // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterConeAngle;                                          // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0024(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.LoadingScreenHint
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FLoadingScreenHint : public FTableRowBase
	{
	public:
		class FText                                                LoadingHint;                                             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FLessonInputAction>                          Actions;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimumRank;                                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EA3Y[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.LoadingScreenSetup
	 * Size -> 0x00B8
	 */
	struct FLoadingScreenSetup
	{
	public:
		class FText                                                GameMode;                                                // 0x0000(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Level;                                                   // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FText>                                        GamemodeHints;                                           // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                RandomHint;                                              // 0x0040(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ServerHostname;                                          // 0x0058(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Motd;                                                    // 0x0070(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                BasePackageName;                                         // 0x0088(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LoadingScreenAsset[0x28];                                // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct Insurgency.InventoryTransaction
	 * Size -> 0x0020
	 */
	struct FInventoryTransaction
	{
	public:
		int32_t                                                    TransactionId;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EeInventoryTransactionType                                 TransactionType;                                         // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5K4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           TimeCreated;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerInventoryItemId;                                   // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EeInventoryItemState                                       ItemState;                                               // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPZR[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.PostMergeTick
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FPostMergeTick : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_DYJA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.RagdollPrePhysicsTick
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FRagdollPrePhysicsTick : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_VI1G[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.RulesetGameModeRules
	 * Size -> 0x00F8 (FullSize[0x01B8] - InheritedSize[0x00C0])
	 */
	struct FRulesetGameModeRules : public FRulesetGameModeRulesMinimal
	{
	public:
		unsigned char                                              HUD[0x28];                                               // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class FText                                                OverridenGameModeName;                                   // 0x00E8(0x0018) Edit, NativeAccessSpecifierPublic
		TArray<class FText>                                        OverridenGameModeRules;                                  // 0x0100(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USquadLayout*                                        AllFactionsBotSquadLayoutOverride;                       // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BotSquadLayoutOverride[0x50];                            // 0x0118(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              CounterAttackOverride[0x50];                             // 0x0168(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerExperienceResult
	 * Size -> 0x0048
	 */
	struct FStatisticsPlayerExperienceResult
	{
	public:
		uint32_t                                                   PlayerId;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1X5Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueId;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   BaseExperienceGained;                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   BonusExperienceGained;                                   // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PreviousExperience;                                      // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NewExperience;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PreviousScore;                                           // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NewScore;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PreviousBalance;                                         // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NewBalance;                                              // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           ItemsGained;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsWeapon
	 * Size -> 0x0010
	 */
	struct FStatisticsWeapon
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsPlayerClass
	 * Size -> 0x0010
	 */
	struct FStatisticsPlayerClass
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.StatisticsScenario
	 * Size -> 0x0028
	 */
	struct FStatisticsScenario
	{
	public:
		class FString                                              Map;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Mode;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   GameType;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J99D[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.StoreBundleItem
	 * Size -> 0x0028
	 */
	struct FStoreBundleItem
	{
	public:
		unsigned char                                              Item[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct Insurgency.PreviewElement
	 * Size -> 0x0040
	 */
	struct FPreviewElement
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VV6H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Orientation;                                             // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Extent;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M983[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStructureElement*                                   Element;                                                 // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Floor;                                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RX6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.SurfaceReactionData
	 * Size -> 0x00B0
	 */
	struct FSurfaceReactionData
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWWiseData                                          WWiseData;                                               // 0x0008(0x0058) NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HitBoneName;                                             // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   HitMaterial;                                             // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitDirection;                                            // 0x0078(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           SurfaceType;                                             // 0x0084(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUR3[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0088(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0094(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              DecalTransformMask;                                      // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F59E[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Opacity;                                                 // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseFootprintDecalPool;                                   // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsAudio;                                             // 0x00A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisibleBulletDecalForType;                              // 0x00AA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61YG[0x5];                                   // 0x00AB(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.DynamicObstacle
	 * Size -> 0x0050
	 */
	struct FDynamicObstacle
	{
	public:
		struct FBox                                                Bounds;                                                  // 0x0000(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             BatchedLines[0x4];                                       // 0x001C(0x0030) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cost;                                                    // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.HelicopterMoveRequest
	 * Size -> 0x0020
	 */
	struct FHelicopterMoveRequest
	{
	public:
		struct FVector                                             FlyDestination;                                          // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OriginalFlyDestination;                                  // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlyAroundDestination;                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PR9[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlyAroundRadius;                                         // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Insurgency.PlayerVoteIntention
	 * Size -> 0x0018
	 */
	struct FPlayerVoteIntention
	{
	public:
		unsigned char                                              IntentPlayers[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
		float                                                      LastVote;                                                // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTJH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.WeaponAnimInstanceProxy
	 * Size -> 0x0010 (FullSize[0x06F0] - InheritedSize[0x06E0])
	 */
	struct FWeaponAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_OZRQ[0x10];                                  // 0x06E0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.MountWeaponConfig
	 * Size -> 0x1890
	 */
	struct FMountWeaponConfig
	{
	public:
		struct FFirstPersonAnims                                   FirstPersonAnims;                                        // 0x0000(0x09F8) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FFirearmAnimsGroup                                  FirstPersonFirearmAnims;                                 // 0x09F8(0x0E70) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bFirstPersonOverrideCommonDraw;                          // 0x1868(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstPersonCommonDraw;                                  // 0x1869(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstPersonOverrideCommonHolster;                       // 0x186A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstPersonCommonHolster;                               // 0x186B(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstPersonOverrideCommonDown;                          // 0x186C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstPersonCommonDown;                                  // 0x186D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstPersonOverrideCommonSprint;                        // 0x186E(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstPersonCommonSprint;                                // 0x186F(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FirstPersonCommonSprintAdjustment;                       // 0x1870(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstPersonOverrideCommonCrawl;                         // 0x187C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstPersonCommonCrawl;                                 // 0x187D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9YW[0x2];                                   // 0x187E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FirstPersonCommonCrawlAdjustment;                        // 0x1880(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMW9[0x4];                                   // 0x188C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.FireSupportSpawnParams
	 * Size -> 0x0040
	 */
	struct FFireSupportSpawnParams
	{
	public:
		class UFireSupportDefinition*                              Definition;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationOffset;                                          // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamId;                                                  // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLJE[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         Instigator;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         Assister;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRespectTeamRules;                                       // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDA4[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Insurgency.ExplosiveDamageParams
	 * Size -> 0x0080
	 */
	struct FExplosiveDamageParams
	{
	public:
		class AController*                                         Instigator;                                              // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Inflictor;                                               // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               Damager;                                                 // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      IgnoredActors;                                           // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Origin;                                                  // 0x0028(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageMin;                                               // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageFalloff;                                           // 0x003C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              OriginatingWeapon;                                       // 0x0048(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadiusInner;                                             // 0x0054(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UExplosionPenetrationSettings*                       PenetrationSettings;                                     // 0x0058(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CameraShakeClass;                                        // 0x0060(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraShakeRadius;                                       // 0x0068(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraShakeFalloff;                                      // 0x006C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShellShockRadius;                                        // 0x0070(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShellShockDuration;                                      // 0x0074(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionForce;                                          // 0x0078(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7KV[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
