#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Enum GbxWeapon.EGbxTrajectoryTraceShape
	 */
	enum class EGbxTrajectoryTraceShape : uint8_t
	{
		Line    = 0,
		Sphere  = 1,
		Capsule = 2,
		Box     = 3,
		MAX     = 4
	};

	/**
	 * Enum GbxWeapon.EWeaponEquipType
	 */
	enum class EWeaponEquipType : uint8_t
	{
		Default = 0,
		Instant = 1,
		Custom  = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxWeapon.EWeaponPutDownType
	 */
	enum class EWeaponPutDownType : uint8_t
	{
		Default = 0,
		Instant = 1,
		MAX     = 2
	};

	/**
	 * Enum GbxWeapon.EWeaponShotModifierType
	 */
	enum class EWeaponShotModifierType : uint8_t
	{
		None        = 0,
		EngineType1 = 1,
		EngineType2 = 2,
		EngineType3 = 3,
		EngineType4 = 4,
		EngineType5 = 5,
		EngineType6 = 6,
		EngineType7 = 7,
		EngineType8 = 8,
		GameType1   = 9,
		GameType2   = 10,
		GameType3   = 11,
		GameType4   = 12,
		GameType5   = 13,
		GameType6   = 14,
		GameType7   = 15,
		GameType8   = 16,
		MAX         = 17
	};

	/**
	 * Enum GbxWeapon.ELightBeamQueryActorType
	 */
	enum class ELightBeamQueryActorType : uint8_t
	{
		Unfiltered      = 0,
		DamageCauser    = 1,
		Instigator      = 2,
		Source          = 3,
		Target          = 4,
		SourceOrTarget  = 5,
		SourceAndTarget = 6,
		MAX             = 7
	};

	/**
	 * Enum GbxWeapon.ELightBeamLock
	 */
	enum class ELightBeamLock : uint8_t
	{
		Never  = 0,
		Always = 1,
		LockOn = 2,
		MAX    = 3
	};

	/**
	 * Enum GbxWeapon.ELightBeamFlag
	 */
	enum class ELightBeamFlag : uint8_t
	{
		ViewDependent   = 0,
		Locked          = 1,
		FollowViewPoint = 2,
		DisableChaining = 3,
		LagCompensation = 4,
		EngineFlag3     = 5,
		EngineFlag4     = 6,
		EngineFlag5     = 7,
		EngineFlag6     = 8,
		EngineFlag7     = 9,
		EngineFlag8     = 10,
		GameFlag1       = 11,
		GameFlag2       = 12,
		GameFlag3       = 13,
		GameFlag4       = 14,
		MAX             = 15
	};

	/**
	 * Enum GbxWeapon.ELightProjectileQueryActorType
	 */
	enum class ELightProjectileQueryActorType : uint8_t
	{
		Unfiltered   = 0,
		DamageCauser = 1,
		Instigator   = 2,
		Source       = 3,
		Target       = 4,
		Attached     = 5,
		MAX          = 6
	};

	/**
	 * Enum GbxWeapon.ELightProjectileSubdivisionMode
	 */
	enum class ELightProjectileSubdivisionMode : uint8_t
	{
		Distance = 0,
		Seconds  = 1,
		Width    = 2,
		Count    = 3,
		MAX      = 4
	};

	/**
	 * Enum GbxWeapon.ELightProjectileTracerThrottleLevel
	 */
	enum class ELightProjectileTracerThrottleLevel : uint8_t
	{
		None         = 0,
		NPC          = 1,
		RemotePlayer = 2,
		LocalPlayer  = 3,
		MAX          = 4
	};

	/**
	 * Enum GbxWeapon.ELightProjectileFlag
	 */
	enum class ELightProjectileFlag : uint8_t
	{
		OverrideStartRotation   = 0,
		Homing                  = 1,
		StartFromLocalSource    = 2,
		BounceTowardsEnemy      = 3,
		Magnetism               = 4,
		Reflected               = 5,
		Penetrated              = 6,
		HideTracer              = 7,
		LagCompensation         = 8,
		TargetActorSet          = 9,
		DisableTracerThrottling = 10,
		EngineFlag1             = 11,
		GameFlag1               = 12,
		GameFlag2               = 13,
		GameFlag3               = 14,
		GameFlag4               = 15,
		MAX                     = 16
	};

	/**
	 * Enum GbxWeapon.ELightProjectileSplitPattern
	 */
	enum class ELightProjectileSplitPattern : uint8_t
	{
		Cone = 0,
		Fan  = 1,
		MAX  = 2
	};

	/**
	 * Enum GbxWeapon.EHitTypeEnum
	 */
	enum class EHitTypeEnum : uint8_t
	{
		Friendly = 0,
		Enemy    = 1,
		Neutral  = 2,
		MAX      = 3
	};

	/**
	 * Enum GbxWeapon.ERecoilEndOfPatternAction
	 */
	enum class ERecoilEndOfPatternAction : uint8_t
	{
		None     = 0,
		PingPong = 1,
		Loop     = 2,
		Reset    = 3,
		MAX      = 4
	};

	/**
	 * Enum GbxWeapon.EWeaponReloadEvent
	 */
	enum class EWeaponReloadEvent : uint8_t
	{
		Started = 0,
		Ended   = 1,
		MAX     = 2
	};

	/**
	 * Enum GbxWeapon.EWeaponUseEvent
	 */
	enum class EWeaponUseEvent : uint8_t
	{
		UseStarted  = 0,
		Used        = 1,
		UseFinished = 2,
		MAX         = 3
	};

	/**
	 * Enum GbxWeapon.EWeaponActionType
	 */
	enum class EWeaponActionType : uint8_t
	{
		EWAT_Default                 = 0,
		EWAT_Use                     = 1,
		EWAT_Reload                  = 2,
		EWAT_Equip                   = 3,
		EWAT_PutDown                 = 4,
		EWAT_UseModeSwitch           = 5,
		EWAT_Charge                  = 6,
		EWAT_Charged                 = 7,
		EWAT_Overcharged             = 8,
		EWAT_ResetFireSequence       = 9,
		EWAT_Discharge               = 10,
		EWAT_EngineWeaponActionType6 = 11,
		EWAT_EngineWeaponActionType7 = 12,
		EWAT_EngineWeaponActionType8 = 13,
		EWAT_GameWeaponActionType1   = 14,
		EWAT_GameWeaponActionType2   = 15,
		EWAT_GameWeaponActionType3   = 16,
		EWAT_GameWeaponActionType4   = 17,
		EWAT_GameWeaponActionType5   = 18,
		EWAT_GameWeaponActionType6   = 19,
		EWAT_GameWeaponActionType7   = 20,
		EWAT_GameWeaponActionType8   = 21,
		EWAT_MAX                     = 22
	};

	/**
	 * Enum GbxWeapon.EAmmoRegenType
	 */
	enum class EAmmoRegenType : uint8_t
	{
		Disabled         = 0,
		GenerateAmmo     = 1,
		RefillLoadedAmmo = 2,
		MAX              = 3
	};

	/**
	 * Enum GbxWeapon.EWeaponChargeEventType
	 */
	enum class EWeaponChargeEventType : uint8_t
	{
		BlueprintEvent         = 0,
		EnableParticleEmitter  = 1,
		DisableParticleEmitter = 2,
		MAX                    = 3
	};

	/**
	 * Enum GbxWeapon.EWeaponChargeComparisonOperatorType
	 */
	enum class EWeaponChargeComparisonOperatorType : uint8_t
	{
		LessThan           = 0,
		LessThanOrEqual    = 1,
		GreaterThan        = 2,
		GreaterThanOrEqual = 3,
		MAX                = 4
	};

	/**
	 * Enum GbxWeapon.EWeaponChargeState
	 */
	enum class EWeaponChargeState : uint8_t
	{
		None        = 0,
		Discharging = 1,
		Charging    = 2,
		Charged     = 3,
		Overcharged = 4,
		MAX         = 5
	};

	/**
	 * Enum GbxWeapon.EWeaponSkeletalControlEvent
	 */
	enum class EWeaponSkeletalControlEvent : uint8_t
	{
		Pause              = 0,
		Resume             = 1,
		Reset              = 2,
		CacheState         = 3,
		RestoreState       = 4,
		CacheStateAndReset = 5,
		ResetAndPause      = 6,
		SetInput           = 7,
		AddInput           = 8,
		ReturnToDefault    = 9,
		MAX                = 10
	};

	/**
	 * Enum GbxWeapon.EWeaponMaterialEffectBlendMode
	 */
	enum class EWeaponMaterialEffectBlendMode : uint8_t
	{
		Multiply   = 0,
		Add        = 1,
		Replace    = 2,
		AddReplace = 3,
		EWAVT_MAX  = 4,
		MAX        = 5
	};

	/**
	 * Enum GbxWeapon.EWeaponEffectFlag
	 */
	enum class EWeaponEffectFlag : uint8_t
	{
		AutoActivate           = 0,
		PlayOnlyOnActiveSlot   = 1,
		IgnoredByFXCoordinator = 2,
		HideWhenScoped         = 3,
		SpawnOnlyWhenVisible   = 4,
		PlayersOnly            = 5,
		MAX                    = 6
	};

	/**
	 * Enum GbxWeapon.EWeaponTextureMipsSetting
	 */
	enum class EWeaponTextureMipsSetting : uint8_t
	{
		Default  = 0,
		High     = 1,
		VeryHigh = 2,
		MAX      = 3
	};

	/**
	 * Enum GbxWeapon.EWeaponAttachmentVisibilityType
	 */
	enum class EWeaponAttachmentVisibilityType : uint8_t
	{
		EWAVT_Both        = 0,
		EWAVT_FirstPerson = 1,
		EWAVT_ThirdPerson = 2,
		EWAVT_MAX         = 3
	};

	/**
	 * Enum GbxWeapon.EWeaponEffectType
	 */
	enum class EWeaponEffectType : uint8_t
	{
		EWET_Default                 = 0,
		EWET_Use                     = 1,
		EWET_Charge                  = 2,
		EWET_Sight                   = 3,
		EWET_Charged                 = 4,
		EWET_Overcharged             = 5,
		EWET_Discharge               = 6,
		EWET_EngineWeaponEffectType4 = 7,
		EWET_EngineWeaponEffectType5 = 8,
		EWET_EngineWeaponEffectType6 = 9,
		EWET_EngineWeaponEffectType7 = 10,
		EWET_EngineWeaponEffectType8 = 11,
		EWET_GameWeaponEffectType1   = 12,
		EWET_GameWeaponEffectType2   = 13,
		EWET_GameWeaponEffectType3   = 14,
		EWET_GameWeaponEffectType4   = 15,
		EWET_GameWeaponEffectType5   = 16,
		EWET_GameWeaponEffectType6   = 17,
		EWET_GameWeaponEffectType7   = 18,
		EWET_GameWeaponEffectType8   = 19,
		EWET_GameWeaponEffectType9   = 20,
		EWET_GameWeaponEffectType10  = 21,
		EWET_GameWeaponEffectType11  = 22,
		EWET_GameWeaponEffectType12  = 23,
		EWET_GameWeaponEffectType13  = 24,
		EWET_GameWeaponEffectType14  = 25,
		EWET_GameWeaponEffectType15  = 26,
		EWET_MAX                     = 27
	};

	/**
	 * Enum GbxWeapon.EWeaponFireRateState
	 */
	enum class EWeaponFireRateState : uint8_t
	{
		None         = 0,
		Accelerating = 1,
		Decelerating = 2,
		MAX          = 3
	};

	/**
	 * Enum GbxWeapon.EWeaponHeatComparisonOperatorType
	 */
	enum class EWeaponHeatComparisonOperatorType : uint8_t
	{
		LessThan           = 0,
		LessThanOrEqual    = 1,
		GreaterThan        = 2,
		GreaterThanOrEqual = 3,
		MAX                = 4
	};

	/**
	 * Enum GbxWeapon.EWeaponShotDamageModifierType
	 */
	enum class EWeaponShotDamageModifierType : uint8_t
	{
		Scale       = 0,
		Add         = 1,
		SimpleScale = 2,
		MAX         = 3
	};

	/**
	 * Enum GbxWeapon.ESimpleMotionInputHandler
	 */
	enum class ESimpleMotionInputHandler : uint8_t
	{
		None = 0,
		Set  = 1,
		MAX  = 2
	};

	/**
	 * Enum GbxWeapon.EWeaponTriggerFeedbackMode
	 */
	enum class EWeaponTriggerFeedbackMode : uint8_t
	{
		Off       = 0,
		Feedback  = 1,
		Weapon    = 2,
		Vibration = 3,
		MAX       = 4
	};

	/**
	 * Enum GbxWeapon.EWeaponTypeDataTableType
	 */
	enum class EWeaponTypeDataTableType : uint8_t
	{
		BaseWeaponBalance       = 0,
		ManufacturerDamageScale = 1,
		MAX                     = 2
	};

	/**
	 * Enum GbxWeapon.EWeaponVisibleAmmoUpdateMethod
	 */
	enum class EWeaponVisibleAmmoUpdateMethod : uint8_t
	{
		Auto       = 0,
		Manual     = 1,
		AutoAdd    = 2,
		AutoRemove = 3,
		MAX        = 4
	};

	/**
	 * Enum GbxWeapon.EWeaponVisibleAmmoState
	 */
	enum class EWeaponVisibleAmmoState : uint8_t
	{
		LoadedAmmo        = 0,
		PendingLoadedAmmo = 1,
		Disabled          = 2,
		MAX               = 3
	};

	/**
	 * Enum GbxWeapon.EWeaponZoomState
	 */
	enum class EWeaponZoomState : uint8_t
	{
		NotZoomed  = 0,
		ZoomingIn  = 1,
		Zoomed     = 2,
		ZoomingOut = 3,
		MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxWeapon.WeaponAttachState
	 * Size -> 0x0018
	 */
	struct FWeaponAttachState
	{
	public:
		uint32_t                                                   NetworkID;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Slot;                                                    // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9W6K[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               Instigator;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponEquipType                                           EquipType;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponPutDownType                                         PutDownType;                                             // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T93S[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponUseModeState
	 * Size -> 0x0048
	 */
	struct FWeaponUseModeState
	{
	public:
		int32_t                                                    InputChannels;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PrimaryInputChannel;                                     // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReloadNeeded;                                           // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0F2[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponUseComponent*                                 UseComponent;                                            // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAmmoComponent*                                AmmoComponent;                                           // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponReloadComponent*                              ReloadComponent;                                         // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponZoomComponent*                                ZoomComponent;                                           // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAudioProviderComponent*                       AudioProviderComponent;                                  // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageModifierComponent*                            DamageModifierComponent;                                 // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UActorComponent*>                             Components;                                              // 0x0038(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponRegisterMaterialEffectData
	 * Size -> 0x00A8
	 */
	struct FWeaponRegisterMaterialEffectData
	{
	public:
		EWeaponEffectType                                          Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76N2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MaterialParamName;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponAttachmentVisibilityType                            Visibility;                                              // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCEK[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UseModeBitmask;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Slot;                                                    // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponMaterialEffectBlendMode                             BlendMode;                                               // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlayOnlyOnActiveSlot : 1;                               // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLoop : 1;                                               // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyAttribute : 1;                                     // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleAttributeByValueOverTime : 1;                      // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleAttributeByDeltaTime : 1;                          // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6RR[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        AttributeValue;                                          // 0x0020(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ValueOverTime;                                           // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Impulse;                                                 // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3L8[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        Duration;                                                // 0x0068(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DecayRate;                                               // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponRegisterSkeletalControlData
	 * Size -> 0x0010
	 */
	struct FWeaponRegisterSkeletalControlData
	{
	public:
		EWeaponEffectType                                          Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponAttachmentVisibilityType                            Visibility;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlayerOnly : 1;                                         // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPUP[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponSkeletalControlBase*                          Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponRegisterAttachmentEffectData
	 * Size -> 0x0060
	 */
	struct FWeaponRegisterAttachmentEffectData
	{
	public:
		EWeaponEffectType                                          Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4X9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     Effect;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ConditionalEffect;                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Socket;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ScopedSocket;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponAttachmentVisibilityType                            Visibility;                                              // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YCF[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UseModeBitmask;                                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Slot;                                                    // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWNL[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Flags;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RelativeLocation;                                        // 0x003C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RelativeRotation;                                        // 0x0048(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RelativeScale;                                           // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AutoActivateModeBitmask;                                 // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlayOnlyOnActiveSlot : 1;                               // 0x005C(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoActivate : 1;                                       // 0x005C(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoredByFXCoordinator : 1;                             // 0x005C(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHideWhenScoped : 1;                                     // 0x005C(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OQM[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponEffectQueryData
	 * Size -> 0x0010
	 */
	struct FWeaponEffectQueryData
	{
	public:
		EWeaponEffectType                                          Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3THE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ID;                                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponAttachmentVisibilityType                            Visibility;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SN5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UseModeBitmask;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponZoomState
	 * Size -> 0x0002
	 */
	struct FWeaponZoomState
	{
	public:
		EWeaponZoomState                                           State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level;                                                   // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponRegisterTrinketAttachmentData
	 * Size -> 0x0038
	 */
	struct FWeaponRegisterTrinketAttachmentData
	{
	public:
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AnimInstanceClass;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachSocket;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RelativeLocation;                                        // 0x0018(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RelativeRotation;                                        // 0x0024(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EWeaponAttachmentVisibilityType                            Visibility;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XOMD[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponMaterialEffectData
	 * Size -> 0x0060
	 */
	struct FWeaponMaterialEffectData
	{
	public:
		class FName                                                MaterialParamName;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponAttachmentVisibilityType                            Visibility;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponMaterialEffectBlendMode                             BlendMode;                                               // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlayOnlyOnActiveSlot : 1;                               // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLoop : 1;                                               // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyAttribute : 1;                                     // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleAttributeByValueOverTime : 1;                      // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleAttributeByDeltaTime : 1;                          // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2V5[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        AttributeValue;                                          // 0x0010(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ValueOverTime;                                           // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Impulse;                                                 // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayRate;                                               // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileParticlePoolData
	 * Size -> 0x0010
	 */
	struct FLightProjectileParticlePoolData
	{
	public:
		class UParticleSystemComponent*                            PSC;                                                     // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MXU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.ReplicatedLightProjectileInitializationData
	 * Size -> 0x00B8
	 */
	struct FReplicatedLightProjectileInitializationData
	{
	public:
		unsigned char                                              CreationID;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WSL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DataBlueprint;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               StartLocation;                                           // 0x0010(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               EndLocation;                                             // 0x001C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            StartRotationOverride;                                   // 0x0028(0x000C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XXL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               Instigator;                                              // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Source;                                                  // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Target;                                                  // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              TargetOffset;                                            // 0x0050(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZQM[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DamageCauser;                                            // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactDataOverride;                                      // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedScale;                                              // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScaleOverride;                                    // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Flags;                                                   // 0x0078(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponShotModifierType                                    ModifierType;                                            // 0x007A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FiringPatternID;                                         // 0x007B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireSocketID;                                            // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RandomSeed;                                              // 0x007D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIG0[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Damage;                                                  // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W2L3[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageRadius;                                            // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactForce;                                             // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModifierValue;                                           // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9FU[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     TracerFXOverride;                                        // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         BulletByAdditiveLayer;                                   // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileAttachment
	 * Size -> 0x0040
	 */
	struct FLightProjectileAttachment
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Socket;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              RelativeLocation;                                        // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RelativeRotation;                                        // 0x0024(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           RelativeImpactNormal;                                    // 0x0030(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0ER[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileExplodeData
	 * Size -> 0x0010
	 */
	struct FLightProjectileExplodeData
	{
	public:
		bool                                                       bHitActor;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFRG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize                                 Location;                                                // 0x0004(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileImpactData
	 * Size -> 0x0010
	 */
	struct FLightProjectileImpactData
	{
	public:
		bool                                                       bPlayEffect;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6DY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize                                 Location;                                                // 0x0004(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileRingData
	 * Size -> 0x0034
	 */
	struct FLightProjectileRingData
	{
	public:
		unsigned char                                              UnknownData_HIHH[0x34];                                  // 0x0000(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileInitializationData
	 * Size -> 0x0140
	 */
	struct FLightProjectileInitializationData
	{
	public:
		unsigned char                                              UnknownData_3W5S[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DataBlueprint;                                           // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartLocation;                                           // 0x0010(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndLocation;                                             // 0x001C(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Flags;                                                   // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            StartRotationOverride;                                   // 0x002C(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class APawn*                                               Instigator;                                              // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Source;                                                  // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Target;                                                  // 0x0048(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetOffset;                                            // 0x0050(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x005C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamageCauser;                                            // 0x0060(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0068(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x0070(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageRadius;                                            // 0x0078(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VODG[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FForceSelection                                     ImpactForce;                                             // 0x0080(0x0020) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactDataOverride;                                      // 0x00A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedScale;                                              // 0x00A8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScaleOverride;                                    // 0x00AC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FiringPatternID;                                         // 0x00B0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireSocketID;                                            // 0x00B1(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_30O5[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageModifierComponent*                            DamageModifierComp;                                      // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NameId;                                                  // 0x00C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponShotModifierType                                    ModifierType;                                            // 0x00C8(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FY83[0x17];                                  // 0x00C9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModifierValue;                                           // 0x00E0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCriticalHitDamageOverrides                         CriticalHitOverrides;                                    // 0x00E4(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FDamageGoreModifiers                                GoreModifiers;                                           // 0x00EC(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FLightProjectileRingData                            RingData;                                                // 0x00F4(0x0034) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL2A[0x18];                                  // 0x0128(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileTimedEvent
	 * Size -> 0x0010
	 */
	struct FLightProjectileTimedEvent
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XU08[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CustomEvent;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileAudioProperties
	 * Size -> 0x0040
	 */
	struct FLightProjectileAudioProperties
	{
	public:
		class UWwiseEvent*                                         BulletByEntrance;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         BulletByBody;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         BulletByExit;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BulletByMaxDistance;                                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BulletByChance;                                          // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TravellingAudioFxCollection;                             // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         TravellingAudio;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TravellingAudioComponentSize;                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UYUX[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseRtpc*                                          ListenerApproachSpeedRtpc;                               // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileRingSubdivisionSettings
	 * Size -> 0x000C
	 */
	struct FLightProjectileRingSubdivisionSettings
	{
	public:
		int32_t                                                    MaxSubdivisions;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELightProjectileSubdivisionMode                            ValueMode;                                               // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75W7[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileRingSettings
	 * Size -> 0x0030
	 */
	struct FLightProjectileRingSettings
	{
	public:
		float                                                      InitialRadius;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialProjectileCount;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMakeSolidRing;                                          // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBodyMeshBoundsForCollision;                          // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAZR[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLightProjectileRingSubdivisionSettings             Subdivide;                                               // 0x0010(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSubdivide;                                              // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XB1C[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RingAxis;                                                // 0x0020(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRingAxis;                                            // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7ZK[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.LightBeamParticlePoolData
	 * Size -> 0x0010
	 */
	struct FLightBeamParticlePoolData
	{
	public:
		class UParticleSystemComponent*                            PSC;                                                     // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97DE[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.LightBeamAttachment
	 * Size -> 0x0028
	 */
	struct FLightBeamAttachment
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Socket;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              LocationOffset;                                          // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXNG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.ClientLightBeamState
	 * Size -> 0x00C8
	 */
	struct FClientLightBeamState
	{
	public:
		unsigned char                                              CreationID;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZMG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DataBlueprint;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightBeamAttachment                                Source;                                                  // 0x0010(0x0028) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FLightBeamAttachment                                Target;                                                  // 0x0038(0x0028) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class APawn*                                               Instigator;                                              // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamageCauser;                                            // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactDataOverride;                                      // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spread;                                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Flags;                                                   // 0x007C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHSI[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     BeamFXOverride;                                          // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ViewerBeamFXOverride;                                    // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         BeamImpactAudioOverride;                                 // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifetimeOverride;                                        // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageRadius;                                            // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTAQ[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DamageRampCurve;                                         // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageRampScale;                                         // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactForce;                                             // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightBeamImpactFXTrackingData
	 * Size -> 0x0030
	 */
	struct FLightBeamImpactFXTrackingData
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33GP[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.LightBeamInitializationData
	 * Size -> 0x0128
	 */
	struct FLightBeamInitializationData
	{
	public:
		unsigned char                                              UnknownData_9KWW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DataBlueprint;                                           // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightBeamAttachment                                Source;                                                  // 0x0010(0x0028) BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FLightBeamAttachment                                Target;                                                  // 0x0038(0x0028) BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    Flags;                                                   // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B93F[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               Instigator;                                              // 0x0068(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamageCauser;                                            // 0x0070(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x0078(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageIntervalOverride;                                  // 0x007C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         DamageRampCurve;                                         // 0x0080(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageRampScale;                                         // 0x0088(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEMV[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0090(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x0098(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageRadius;                                            // 0x00A0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DS7[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FForceSelection                                     ImpactForce;                                             // 0x00A8(0x0020) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactDataOverride;                                      // 0x00C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NameId;                                                  // 0x00D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spread;                                                  // 0x00D8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifetimeOverride;                                        // 0x00DC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponShotModifierType                                    ModifierType;                                            // 0x00E0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIEP[0x17];                                  // 0x00E1(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModifierValue;                                           // 0x00F8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCriticalHitDamageOverrides                         CriticalHitOverrides;                                    // 0x00FC(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FDamageGoreModifiers                                GoreModifiers;                                           // 0x0104(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EFL[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULightBeam*                                          ParentBeam;                                              // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULAG[0x10];                                  // 0x0118(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponHeatEventNotify
	 * Size -> 0x0010
	 */
	struct FWeaponHeatEventNotify
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponHeatComparisonOperatorType                          Comparision;                                             // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ISC[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EventName;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponZoomLevel
	 * Size -> 0x0010
	 */
	struct FWeaponZoomLevel
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOVScale;                                                // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOVLerpPct;                                              // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewModelFOVScale;                                       // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.ConditionalActionInfo
	 * Size -> 0x0018
	 */
	struct FConditionalActionInfo
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Action;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxActionNetMode                                          ActionNetMode;                                           // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z37O[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.ConditionalWeaponActionSet
	 * Size -> 0x0018
	 */
	struct FConditionalWeaponActionSet
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConditionalActionInfo>                      ConditionalActions;                                      // 0x0008(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.BodyWeaponActionInfo
	 * Size -> 0x0030
	 */
	struct FBodyWeaponActionInfo
	{
	public:
		EWeaponActionType                                          WeaponAction;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XW62[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       Condition;                                               // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConditionalWeaponActionSet>                 ConditionalWeaponActions;                                // 0x0010(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FConditionalActionInfo>                      ConditionalActions;                                      // 0x0020(0x0010) ZeroConstructor, Deprecated, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.FiringPatternSample
	 * Size -> 0x001C
	 */
	struct FFiringPatternSample
	{
	public:
		struct FRotator                                            StartRotation;                                           // 0x0000(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            EndRotation;                                             // 0x000C(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseEndRotation;                                         // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseID;                                                  // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ID;                                                      // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WP5Y[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.GbxTrajectometerTraceData
	 * Size -> 0x0020
	 */
	struct FGbxTrajectometerTraceData
	{
	public:
		ECollisionChannel                                          Channel;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxTrajectoryTraceShape                                   Shape;                                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AN65[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExtentX;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentY;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentZ;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIH0[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.LightBeamQueryData
	 * Size -> 0x0028
	 */
	struct FLightBeamQueryData
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELightBeamQueryActorType                                   ActorType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBIC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OtherActor;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BeamClass;                                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NameId;                                                  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileQueryData
	 * Size -> 0x0020
	 */
	struct FLightProjectileQueryData
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELightProjectileQueryActorType                             ActorType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99Q4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ProjectileClass;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NameId;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.ThrowProjectileAsyncRequest
	 * Size -> 0x0188
	 */
	struct FThrowProjectileAsyncRequest
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Source;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceSocket;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Target;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetSocket;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetOffset;                                            // 0x0028(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPrediction;                                           // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnglePercent;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            DirectionOffset;                                         // 0x0040(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		int32_t                                                    InstanceCount;                                           // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstanceDelay;                                           // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZD9[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxExposeOnSpawnValueCache                         ExposeOnSpawnCache;                                      // 0x0058(0x0110) BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Spawned;                                                 // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Failed;                                                  // 0x0178(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.PredictProjectilePathAsyncRequest
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	struct FPredictProjectilePathAsyncRequest : public FPredictProjectilePathParams
	{
	public:
		EGbxTraceAsyncMode                                         TraceMode;                                               // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObjectTypeQuery                                           ObjectType;                                              // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XR02[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TraceName;                                               // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Finished;                                                // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponEffectAttachment
	 * Size -> 0x0060
	 */
	struct FWeaponEffectAttachment
	{
	public:
		unsigned char                                              UnknownData_50PV[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     Effect;                                                  // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ConditionalEffect;                                       // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            PSC;                                                     // 0x0058(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponMaterialEffectInstance
	 * Size -> 0x0068
	 */
	struct FWeaponMaterialEffectInstance
	{
	public:
		unsigned char                                              UnknownData_12D2[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         ValueOverTime;                                           // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VYTI[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponSkeletalControlInstance
	 * Size -> 0x0038
	 */
	struct FWeaponSkeletalControlInstance
	{
	public:
		class UWeaponSkeletalControlBase*                          Data;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZIR[0x30];                                  // 0x0008(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponTrinketAttachment
	 * Size -> 0x0040
	 */
	struct FWeaponTrinketAttachment
	{
	public:
		class UGbxSkeletalMeshComponent*                           MeshComponent;                                           // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AnimInstanceClass;                                       // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7MX[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponChargeAttributeEffect
	 * Size -> 0x0060
	 */
	struct FWeaponChargeAttributeEffect
	{
	public:
		int32_t                                                    StatesBitmask;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToInstigator;                                      // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7K6G[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeEffectData                                AttributeEffect;                                         // 0x0008(0x0048) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxAttributeModifierHandle                         AttributeModifier;                                       // 0x0050(0x0010) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponChargeEventNotify
	 * Size -> 0x0010
	 */
	struct FWeaponChargeEventNotify
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponChargeComparisonOperatorType                        Comparision;                                             // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponChargeEventType                                     EVENTTYPE;                                               // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XUR9[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EventName;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponEffectTypeName
	 * Size -> 0x0020
	 */
	struct FWeaponEffectTypeName
	{
	public:
		EWeaponEffectType                                          Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJ7A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponActionTypeName
	 * Size -> 0x0020
	 */
	struct FWeaponActionTypeName
	{
	public:
		EWeaponActionType                                          Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCP8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileFlagName
	 * Size -> 0x0020
	 */
	struct FLightProjectileFlagName
	{
	public:
		ELightProjectileFlag                                       Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VS93[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.LightBeamFlagName
	 * Size -> 0x0020
	 */
	struct FLightBeamFlagName
	{
	public:
		ELightBeamFlag                                             Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q2Z5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponShotModifierTypeName
	 * Size -> 0x0020
	 */
	struct FWeaponShotModifierTypeName
	{
	public:
		EWeaponShotModifierType                                    Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LK7M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponTriggerFeedbackData
	 * Size -> 0x0008
	 */
	struct FWeaponTriggerFeedbackData
	{
	public:
		float                                                      Position;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Force;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponTriggerWeaponData
	 * Size -> 0x000C
	 */
	struct FWeaponTriggerWeaponData
	{
	public:
		float                                                      StartPosition;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndPosition;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Force;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponTriggerVibrationData
	 * Size -> 0x000C
	 */
	struct FWeaponTriggerVibrationData
	{
	public:
		float                                                      Position;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amplitude;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponTriggerFireThreasholdData
	 * Size -> 0x0004
	 */
	struct FWeaponTriggerFireThreasholdData
	{
	public:
		float                                                      Position;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponVisibleAmmoEffectData
	 * Size -> 0x0040
	 */
	struct FWeaponVisibleAmmoEffectData
	{
	public:
		class UParticleSystem*                                     Effect;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34HS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponShotModifierData
	 * Size -> 0x0048
	 */
	struct FWeaponShotModifierData
	{
	public:
		EWeaponShotModifierType                                    ModifierType;                                            // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FL0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Damage;                                                  // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactData;                                              // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProjectilesPerShot;                                      // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U610[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCriticalHitDamageOverrides                         CriticalHitOverrides;                                    // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ModifierValue;                                           // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDamageGoreModifiers                                GoreModifiers;                                           // 0x002C(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQSW[0x14];                                  // 0x0034(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.LightBeamTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FLightBeamTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_NYT1[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.PostLightBeamTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FPostLightBeamTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_C1AJ[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FLightProjectileTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_GHUG[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.LightProjectileBatchTickFunction
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	struct FLightProjectileBatchTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_76ME[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.PostLightProjectileTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FPostLightProjectileTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_MI80[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxWeapon.WeaponSkeletalControlState
	 * Size -> 0x0028
	 */
	struct FWeaponSkeletalControlState
	{
	public:
		unsigned char                                              UnknownData_Y4JM[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
