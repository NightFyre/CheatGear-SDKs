#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Enum GroundBranch.EGBAIEquippedType
	 */
	enum class EGBAIEquippedType : uint8_t
	{
		None      = 0,
		Melee     = 1,
		Primary   = 2,
		Sidearm   = 3,
		Grenade   = 4,
		Equipment = 5,
		Other     = 6,
		MAX       = 7
	};

	/**
	 * Enum GroundBranch.EGBSuppressionLevel
	 */
	enum class EGBSuppressionLevel : uint8_t
	{
		None   = 0,
		Light  = 1,
		Medium = 2,
		Heavy  = 3,
		MAX    = 4
	};

	/**
	 * Enum GroundBranch.EGBAIState
	 */
	enum class EGBAIState : uint8_t
	{
		Idle   = 0,
		Patrol = 1,
		Guard  = 2,
		Search = 3,
		Attack = 4,
		Flee   = 5,
		MAX    = 6
	};

	/**
	 * Enum GroundBranch.EGBCustomMovementMode
	 */
	enum class EGBCustomMovementMode : uint8_t
	{
		CUSTOMMOVE_None   = 0,
		CUSTOMMOVE_Ladder = 1,
		CUSTOMMOVE_Mantle = 2,
		CUSTOMMOVE_MAX    = 3
	};

	/**
	 * Enum GroundBranch.ETakeHitFlags
	 */
	enum class ETakeHitFlags : uint8_t
	{
		None = 0,
		Exit = 1,
		MAX  = 2
	};

	/**
	 * Enum GroundBranch.EGBWeaponPosition
	 */
	enum class EGBWeaponPosition : uint8_t
	{
		Ready          = 0,
		Engaged        = 1,
		LowReady       = 2,
		HighReady      = 3,
		ObestructedLow = 4,
		ObstructedHigh = 5,
		MAX            = 6
	};

	/**
	 * Enum GroundBranch.EGrenadeSwitch
	 */
	enum class EGrenadeSwitch : uint8_t
	{
		PrevItem       = 0,
		SimilarGrenade = 1,
		EmptyHands     = 2,
		MAX            = 3
	};

	/**
	 * Enum GroundBranch.EHandsRequired
	 */
	enum class EHandsRequired : uint8_t
	{
		Both  = 0,
		Main  = 1,
		Off   = 2,
		Left  = 3,
		Right = 4,
		MAX   = 5
	};

	/**
	 * Enum GroundBranch.EHand
	 */
	enum class EHand : uint8_t
	{
		Left    = 0,
		Right   = 1,
		Main    = 2,
		Off     = 3,
		Unknown = 4,
		MAX     = 5
	};

	/**
	 * Enum GroundBranch.ESearchFix
	 */
	enum class ESearchFix : uint8_t
	{
		Underscore = 0,
		Prefix     = 1,
		Suffix     = 2,
		None       = 3,
		MAX        = 4
	};

	/**
	 * Enum GroundBranch.EWatchConfigFlags
	 */
	enum class EWatchConfigFlags : uint8_t
	{
		bNoFlags         = 0,
		bDisplayBearing  = 1,
		bDisplayDistance = 2,
		bDisplayUpDown   = 3,
		bMeasure2D       = 4,
		MAX              = 5
	};

	/**
	 * Enum GroundBranch.EWatchMode
	 */
	enum class EWatchMode : uint8_t
	{
		Time            = 0,
		ObjectiveFinder = 1,
		IntelRetrieval  = 2,
		MAX             = 3
	};

	/**
	 * Enum GroundBranch.EPlayerSortBy
	 */
	enum class EPlayerSortBy : uint8_t
	{
		Skip   = 0,
		Random = 1,
		Name   = 2,
		Lives  = 3,
		MAX    = 4
	};

	/**
	 * Enum GroundBranch.EGBGameObjectiveType
	 */
	enum class EGBGameObjectiveType : uint8_t
	{
		Primary   = 0,
		Secondary = 1,
		MAX       = 2
	};

	/**
	 * Enum GroundBranch.EBPInputEvent
	 */
	enum class EBPInputEvent : uint8_t
	{
		Pressed     = 0,
		Released    = 1,
		Repeat      = 2,
		DoubleClick = 3,
		Axis        = 4,
		MAX         = 5
	};

	/**
	 * Enum GroundBranch.EQuickTeamKits
	 */
	enum class EQuickTeamKits : uint8_t
	{
		NoRestriction = 0,
		Tan_v_Black   = 1,
		Plain_v_Camo  = 2,
		Blue_v_Red    = 3,
		MAX           = 4
	};

	/**
	 * Enum GroundBranch.EGBCrouchType
	 */
	enum class EGBCrouchType : uint8_t
	{
		StanceDown = 0,
		Toggle     = 1,
		Momentary  = 2,
		MAX        = 3
	};

	/**
	 * Enum GroundBranch.EPlayerStartCollisionStatus
	 */
	enum class EPlayerStartCollisionStatus : uint8_t
	{
		Unoccupied = 0,
		Occupied   = 1,
		Blocked    = 2,
		MAX        = 3
	};

	/**
	 * Enum GroundBranch.EAlertLevel
	 */
	enum class EAlertLevel : uint8_t
	{
		NoAlert           = 0,
		DefenderInRange   = 1,
		AttackerInRange   = 2,
		AttackerCapturing = 3,
		MAX               = 4
	};

	/**
	 * Enum GroundBranch.EReadyRoomStatus
	 */
	enum class EReadyRoomStatus : uint8_t
	{
		Unknown     = 0,
		InReadyRoom = 1,
		InPlayArea  = 2,
		MAX         = 3
	};

	/**
	 * Enum GroundBranch.ERailMountValidation
	 */
	enum class ERailMountValidation : uint8_t
	{
		Ok                   = 0,
		AcrossTooManyRails   = 1,
		NotEnoughMountPoints = 2,
		TooFarBack           = 3,
		TooFarForward        = 4,
		Max                  = 5
	};

	/**
	 * Enum GroundBranch.ERailFirearmType
	 */
	enum class ERailFirearmType : uint8_t
	{
		Generic = 0,
		Rifle   = 1,
		Handgun = 2,
		Max     = 3
	};

	/**
	 * Enum GroundBranch.ERailDirectness
	 */
	enum class ERailDirectness : uint8_t
	{
		NotDirect = 0,
		Indirect  = 1,
		Direct    = 2,
		MAX       = 3
	};

	/**
	 * Enum GroundBranch.ERailFace
	 */
	enum class ERailFace : uint8_t
	{
		Top     = 0,
		Bottom  = 1,
		Side    = 2,
		Offset  = 3,
		Unknown = 4,
		MAX     = 5
	};

	/**
	 * Enum GroundBranch.ESightType
	 */
	enum class ESightType : uint8_t
	{
		FailSafe     = 0,
		IronSight    = 1,
		RedDot       = 2,
		Optical      = 3,
		PostModifier = 4,
		PreModifier  = 5,
		MAX          = 6
	};

	/**
	 * Enum GroundBranch.EReadyStatus
	 */
	enum class EReadyStatus : uint8_t
	{
		NotReady         = 0,
		WaitingToReadyUp = 1,
		DeclaredReady    = 2,
		MAX              = 3
	};

	/**
	 * Enum GroundBranch.ETeamElement
	 */
	enum class ETeamElement : uint8_t
	{
		Alpha   = 0,
		Bravo   = 1,
		Charlie = 2,
		Delta   = 3,
		MAX     = 4
	};

	/**
	 * Enum GroundBranch.EVOIPType
	 */
	enum class EVOIPType : uint8_t
	{
		None        = 0,
		GlobalVoice = 1,
		LocalVoice  = 2,
		Radio       = 3,
		MAX         = 4
	};

	/**
	 * Enum GroundBranch.ESpeedUnit
	 */
	enum class ESpeedUnit : uint8_t
	{
		CentimeterPerSecond = 0,
		FootPerSecond       = 1,
		MeterPerSecond      = 2,
		MeterPerMinute      = 3,
		KilometerPerSecond  = 4,
		KilometerPerMinute  = 5,
		KilometerPerHour    = 6,
		MilePerHour         = 7,
		Knot                = 8,
		Mach                = 9,
		SpeedOfLight        = 10,
		YardPerSecond       = 11,
		MAX                 = 12
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GroundBranch.AIBark
	 * Size -> 0x0010
	 */
	struct FAIBark
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Timeout;                                                 // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBAINoiseEvent
	 * Size -> 0x0030
	 */
	struct FGBAINoiseEvent
	{
	public:
		unsigned char                                              UnknownData_VTE6[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NoiseLocation;                                           // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Loudness;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZXQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Instigator;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EBL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.ItemDragDropType
	 * Size -> 0x0030
	 */
	struct FItemDragDropType
	{
	public:
		class FName                                                Type;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DragDropOperation[0x28];                                 // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct GroundBranch.RepBulletMovement
	 * Size -> 0x0018
	 */
	struct FRepBulletMovement
	{
	public:
		struct FVector_NetQuantize100                              LinearVelocity;                                          // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              Location;                                                // 0x000C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.AnimMontageInfo
	 * Size -> 0x0028
	 */
	struct FAnimMontageInfo
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SyncName;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsStopped : 1;                                          // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLFY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlayCount;                                               // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6IY[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      position;                                                // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NextSectionID;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHUI[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.HandIKTargetData
	 * Size -> 0x0020
	 */
	struct FHandIKTargetData
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Offset;                                                  // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXP9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.TakeHitInfo
	 * Size -> 0x0038
	 */
	struct FTakeHitInfo
	{
	public:
		int32_t                                                    Damage;                                                  // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 RelHitLocation;                                          // 0x000C(0x000C) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 Momentum;                                                // 0x0018(0x000C) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8AS1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ShotDirPitch;                                            // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ShotDirYaw;                                              // 0x0031(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Count;                                                   // 0x0032(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HitFlags;                                                // 0x0033(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHAT[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.GBSavedBodyInstancePose
	 * Size -> 0x0018
	 */
	struct FGBSavedBodyInstancePose
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K7P5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Pose;                                                    // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBSwitchItemInfo
	 * Size -> 0x0070
	 */
	struct FGBSwitchItemInfo
	{
	public:
		class AGBItem*                                             Item;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                Tags;                                                    // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TargetComponent;                                         // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetSocket;                                            // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3R9[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTM;                                              // 0x0030(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHandsRequired                                             HandsRequired;                                           // 0x0060(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUPX[0xF];                                   // 0x0061(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.ExternalWound
	 * Size -> 0x0020
	 */
	struct FExternalWound
	{
	public:
		class FName                                                AttachBoneName;                                          // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 RelativeLocation;                                        // 0x0008(0x000C) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RelativePitch;                                           // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RelativeYaw;                                             // 0x0015(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BMUK[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Rate;                                                    // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.HitBulletIndexes
	 * Size -> 0x0020
	 */
	struct FHitBulletIndexes
	{
	public:
		TArray<unsigned char>                                      Indexes;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      StaKeys;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBAISightPart
	 * Size -> 0x0020
	 */
	struct FGBAISightPart
	{
	public:
		class FName                                                PartName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PartSize;                                                // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ValueCurveName;                                          // 0x000C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UpdateFrequencyCurveName;                                // 0x0014(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBone;                                                 // 0x001C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJHB[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.GBDeathMontage
	 * Size -> 0x0020
	 */
	struct FGBDeathMontage
	{
	public:
		class UAnimMontage*                                        FrontMontage;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        BackMontage;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        LeftMontage;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        RightMontage;                                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBDeathMotion
	 * Size -> 0x0018
	 */
	struct FGBDeathMotion
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGBDeathMontage>                             DeathMontages;                                           // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.CharVoiceMessage
	 * Size -> 0x0048
	 */
	struct FCharVoiceMessage
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              VoiceAudioEvent[0x28];                                   // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct GroundBranch.GBFullScreenWidget
	 * Size -> 0x0010
	 */
	struct FGBFullScreenWidget
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K61I[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.RecoilPerShot
	 * Size -> 0x0010
	 */
	struct FRecoilPerShot
	{
	public:
		float                                                      MinPitch;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPitch;                                                // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinYaw;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxYaw;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.FiringModeData
	 * Size -> 0x0008
	 */
	struct FFiringModeData
	{
	public:
		int32_t                                                    BurstCount;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RateOfFire;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.DeadBodyData
	 * Size -> 0x0010
	 */
	struct FDeadBodyData
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerState*                                        PlayerState;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.BotInfo
	 * Size -> 0x0060
	 */
	struct FBotInfo
	{
	public:
		class AGBAIController*                                     AIController;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamId;                                                  // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YBVN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class AGBKitInfo*>                       LoadoutMap;                                              // 0x0010(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBTeamInfo
	 * Size -> 0x0018
	 */
	struct FGBTeamInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PlayerLoadoutName;                                       // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamRole;                                                // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.ReplicatedString
	 * Size -> 0x0018
	 */
	struct FReplicatedString
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      StringChunks;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBMissionName
	 * Size -> 0x0020
	 */
	struct FGBMissionName
	{
	public:
		class FString                                              AdjectiveKey;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NounKey;                                                 // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBScoreLine
	 * Size -> 0x0028
	 */
	struct FGBScoreLine
	{
	public:
		class FName                                                ScoreName;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoreToAdd;                                              // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOneOff;                                                 // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0SD[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.GBScoreCollection
	 * Size -> 0x0010
	 */
	struct FGBScoreCollection
	{
	public:
		TArray<struct FGBScoreLine>                                ScoreList;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBMatchStats
	 * Size -> 0x0018
	 */
	struct FGBMatchStats
	{
	public:
		TArray<int32_t>                                            TeamCumulativeScores;                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RoundNumber;                                             // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVO0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.GBMissionSetting
	 * Size -> 0x0014
	 */
	struct FGBMissionSetting
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinValue;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxValue;                                                // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentValue;                                            // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBGameObjective
	 * Size -> 0x0010
	 */
	struct FGBGameObjective
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80SB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGBGameObjectiveType                                       ObjectiveType;                                           // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0UJ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.GBCaptureZone
	 * Size -> 0x000C
	 */
	struct FGBCaptureZone
	{
	public:
		float                                                      CaptureRadius;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CaptureHeight;                                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DefenderTeamId;                                          // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bZoneIsSpherical;                                        // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3D02[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.UserAudioVolume
	 * Size -> 0x0028
	 */
	struct FUserAudioVolume
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SoundClass;                                              // 0x0008(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KIF2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.InputExecKeyMapping
	 * Size -> 0x0030
	 */
	struct FInputExecKeyMapping
	{
	public:
		class FString                                              ExecCommand;                                             // 0x0000(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0010(0x0018) Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShift : 1;                                              // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCtrl : 1;                                               // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlt : 1;                                                // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCmd : 1;                                                // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRQ2[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.PlayerPatch
	 * Size -> 0x0018
	 */
	struct FPlayerPatch
	{
	public:
		class FName                                                TargetSocket;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShortPath;                                               // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.PlayerHint
	 * Size -> 0x0018
	 */
	struct FPlayerHint
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNB4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastShown;                                               // 0x0010(0x0008) ZeroConstructor, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.RepRailAttachment
	 * Size -> 0x0018
	 */
	struct FRepRailAttachment
	{
	public:
		class AActor*                                              AttachParent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     AttachComponent;                                         // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RecoilSlot;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1X83[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.GBVOIPData
	 * Size -> 0x0028
	 */
	struct FGBVOIPData
	{
	public:
		uint64_t                                                   SteamID;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGBPlayerState*                                      PlayerState;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGBVOIPAudioComponent*                               VOIPAudioComponent;                                      // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVOIPType                                                  VOIPType;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TNI[0xF];                                   // 0x0019(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.GBPlayerCharVoiceInfo
	 * Size -> 0x0018
	 */
	struct FGBPlayerCharVoiceInfo
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkComponent*                                        AKVoiceComp;                                             // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRadio;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GL6W[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.GBAISightEvent
	 * Size -> 0x0018
	 */
	struct FGBAISightEvent
	{
	public:
		unsigned char                                              UnknownData_7K0N[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SeenActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Observer;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBBarkInfo
	 * Size -> 0x0010
	 */
	struct FGBBarkInfo
	{
	public:
		class FName                                                Type;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Timeout;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBAISettingsInfo
	 * Size -> 0x0080
	 */
	struct FGBAISettingsInfo
	{
	public:
		int32_t                                                    SkillLevel;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTurnRate;                                             // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSprintTurnRate;                                       // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHeadLookRate;                                         // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuppressionRecoveryRate;                                 // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OnTargetThreshold;                                       // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilCompensationSkill;                                 // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimErrorUpdateInterval;                                  // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeliberateMissTime;                                      // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeliberateMissBlendOutTime;                              // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeliberateMissDistanceThreshold;                         // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CenterOfMassBone;                                        // 0x002C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReactionTimeBase;                                        // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReactionTimeRandom;                                      // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdleHearingThreshold;                                    // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlertHearingThreshold;                                   // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdleAffiliationSightThreshold;                           // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlertAffiliationSightThreshold;                          // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdleSuspicionSightThreshold;                             // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlertSuspicionSightThreshold;                            // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSemiAutoBurst;                                        // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinFullAutoBurst;                                        // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFullAutoBurst;                                        // 0x005C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDelayBetweenBursts;                                   // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDelayBetweenBursts;                                   // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeanChance;                                              // 0x0068(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YYD[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGBBarkInfo>                                 BarkInfos;                                               // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBSquadGuardPoint
	 * Size -> 0x0060
	 */
	struct FGBSquadGuardPoint
	{
	public:
		class AGBAIGuardPoint*                                     GuardPoint;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F575[0x58];                                  // 0x0008(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.GBConstraintLimitData
	 * Size -> 0x0010
	 */
	struct FGBConstraintLimitData
	{
	public:
		float                                                      LimitSwing1Value;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitSwing2Value;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitTwistValue;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAngularConstraintMotion                                   Swing1LockState;                                         // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAngularConstraintMotion                                   Swing2LockState;                                         // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAngularConstraintMotion                                   TwistLockState;                                          // 0x000E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XQ9[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.GBDummyStruct
	 * Size -> 0x0001
	 */
	struct FGBDummyStruct
	{
	public:
		unsigned char                                              UnknownData_VAGJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.CharRestrictions
	 * Size -> 0x00A0
	 */
	struct FCharRestrictions
	{
	public:
		unsigned char                                              UnknownData_HYZQ[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.EmoteInfo
	 * Size -> 0x0014
	 */
	struct FEmoteInfo
	{
	public:
		struct FPrimaryAssetId                                     CharEmoteId;                                             // 0x0000(0x0010) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EnsureRep;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MPX[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.CharLoadout
	 * Size -> 0x0018
	 */
	struct FCharLoadout
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharLoadoutString;                                       // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBOrganDamageEvent
	 * Size -> 0x0088 (FullSize[0x0098] - InheritedSize[0x0010])
	 */
	struct FGBOrganDamageEvent : public FDamageEvent
	{
	public:
		int32_t                                                    Damage;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BulletIndex;                                             // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T98F[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatKey;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           DamageDirection;                                         // 0x0028(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TF3H[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHitResult>                                  OrganHits;                                               // 0x0038(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<float>                                              OrganDamages;                                            // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHitResult>                                  EntryPoints;                                             // 0x0058(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<float>                                              EntryDamages;                                            // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHitResult>                                  ExitPoints;                                              // 0x0078(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<float>                                              ExitDamages;                                             // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.ReplicatedAlpha
	 * Size -> 0x000C
	 */
	struct FReplicatedAlpha
	{
	public:
		unsigned char                                              Current;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Target;                                                  // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONN9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timestamp;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EnsureRep;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9P4J[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.ValidatedRecoilSlots
	 * Size -> 0x0018
	 */
	struct FValidatedRecoilSlots
	{
	public:
		class UGBRailComponent*                                    RailComp;                                                // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ValidRecoilSlots;                                        // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.GBRigUnit_SphereTraceWorld
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FGBRigUnit_SphereTraceWorld : public FRigUnit
	{
	public:
		struct FVector                                             Start;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EObjectTypeQuery>                                   TraceObjectTypes;                                        // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EPhysicalSurface>                                   SurfaceTypesToIgnore;                                    // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHit;                                                    // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPZ1[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x0054(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.MapListItem
	 * Size -> 0x0048
	 */
	struct FMapListItem
	{
	public:
		class FString                                              PackageName;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Author;                                                  // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GroundBranch.InputBoundKey
	 * Size -> 0x0020
	 */
	struct FInputBoundKey
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShift;                                                  // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCtrl;                                                   // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlt;                                                    // 0x001A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCmd;                                                    // 0x001B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D617[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GroundBranch.InputBindableCommand
	 * Size -> 0x0048
	 */
	struct FInputBindableCommand
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              CommandName;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DXWP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInputBoundKey>                              BoundKeys;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsExec;                                                 // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QC3V[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
