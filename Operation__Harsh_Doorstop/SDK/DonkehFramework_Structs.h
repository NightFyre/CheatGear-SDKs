#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Enum DonkehFramework.EFireMode
	 */
	enum class EFireMode : uint8_t
	{
		Semi  = 0,
		Auto  = 1,
		Burst = 2,
		MAX   = 3
	};

	/**
	 * Enum DonkehFramework.EDFItemEnabledMode
	 */
	enum class EDFItemEnabledMode : uint8_t
	{
		Enabled  = 0,
		Disabled = 1,
		Hidden   = 2,
		MAX      = 3
	};

	/**
	 * Enum DonkehFramework.ESessionSearchPresenceType
	 */
	enum class ESessionSearchPresenceType : uint8_t
	{
		AllServers           = 0,
		ListenServersOnly    = 1,
		DedicatedServersOnly = 2,
		MAX                  = 3
	};

	/**
	 * Enum DonkehFramework.ECharacterStance
	 */
	enum class ECharacterStance : uint8_t
	{
		None   = 0,
		Stand  = 1,
		Crouch = 2,
		Prone  = 3,
		Custom = 4,
		MAX    = 5
	};

	/**
	 * Enum DonkehFramework.EPlayerVoiceState
	 */
	enum class EPlayerVoiceState : uint8_t
	{
		NotTalking = 0,
		Talking    = 1,
		Muted      = 2,
		MAX        = 3
	};

	/**
	 * Enum DonkehFramework.ELogVerbosityBP
	 */
	enum class ELogVerbosityBP : uint8_t
	{
		Error       = 0,
		Warning     = 1,
		Log         = 2,
		Verbose     = 3,
		VeryVerbose = 4,
		MAX         = 5
	};

	/**
	 * Enum DonkehFramework.EGunReloadState
	 */
	enum class EGunReloadState : uint8_t
	{
		NotReloading       = 0,
		PartialReloadStart = 1,
		FullReloadStart    = 2,
		PartialReload      = 3,
		FullReload         = 4,
		PartialReloadEnd   = 5,
		FullReloadEnd      = 6,
		MAX                = 7
	};

	/**
	 * Enum DonkehFramework.EAmmoClipReloadBehavior
	 */
	enum class EAmmoClipReloadBehavior : uint8_t
	{
		DiscardOnEmpty  = 0,
		DiscardOnReload = 1,
		NoDiscard       = 2,
		MAX             = 3
	};

	/**
	 * Enum DonkehFramework.ECardinalDirection
	 */
	enum class ECardinalDirection : uint8_t
	{
		North = 0,
		South = 1,
		East  = 2,
		West  = 3,
		MAX   = 4
	};

	/**
	 * Enum DonkehFramework.ELeanDirection
	 */
	enum class ELeanDirection : uint8_t
	{
		None  = 0,
		Left  = 1,
		Right = 2,
		MAX   = 3
	};

	/**
	 * Enum DonkehFramework.EItemType
	 */
	enum class EItemType : uint8_t
	{
		Melee     = 0,
		Other     = 1,
		Pistol    = 2,
		Throwable = 3,
		Rifle     = 4,
		MAX       = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DonkehFramework.IntrinsicWeaponAnimSubset
	 * Size -> 0x0028
	 */
	struct FIntrinsicWeaponAnimSubset
	{
	public:
		class UAnimMontage*                                        Equip;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        UnEquip;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Fire;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Reload;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ReloadEmpty;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.LocomotionWeaponAnimSubset
	 * Size -> 0x0018
	 */
	struct FLocomotionWeaponAnimSubset
	{
	public:
		class UAnimSequence*                                       Idle;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Move;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Sprint;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.SingleActionWeaponAnimSubset
	 * Size -> 0x0008
	 */
	struct FSingleActionWeaponAnimSubset
	{
	public:
		class UAnimMontage*                                        Action;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.SingleLoadWeaponAnimSubset
	 * Size -> 0x0010
	 */
	struct FSingleLoadWeaponAnimSubset
	{
	public:
		class UAnimMontage*                                        StartReload;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        EndReload;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.ThrowableWeaponAnimSubset
	 * Size -> 0x0020
	 */
	struct FThrowableWeaponAnimSubset
	{
	public:
		class UAnimSequence*                                       ReadyBasePose;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Cock;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ThrowOverhand;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ThrowUnderhand;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.PerspectiveAnim
	 * Size -> 0x0010
	 */
	struct FPerspectiveAnim
	{
	public:
		class UAnimSequenceBase*                                   Anim1P;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   Anim3P;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.CharacterAnimCollection
	 * Size -> 0x0128
	 */
	struct FCharacterAnimCollection
	{
	public:
		class UAnimSequence*                                       BasePose;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BasePoseTPP;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AimBasePose;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Death;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntrinsicWeaponAnimSubset                          Intrinsic;                                               // 0x0020(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FLocomotionWeaponAnimSubset                         Locomotion;                                              // 0x0048(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSingleActionWeaponAnimSubset                       SingleAction;                                            // 0x0060(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSingleLoadWeaponAnimSubset                         SingleLoad;                                              // 0x0068(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FThrowableWeaponAnimSubset                          Throwable;                                               // 0x0078(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    DeathAnim;                                               // 0x0098(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    EquipAnim;                                               // 0x00A8(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    UnEquipAnim;                                             // 0x00B8(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    FireAnim;                                                // 0x00C8(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    ActionAnim;                                              // 0x00D8(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    ReloadAnim;                                              // 0x00E8(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    ReloadFullAnim;                                          // 0x00F8(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    StartReloadAnim;                                         // 0x0108(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    EndReloadAnim;                                           // 0x0118(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.PerspectiveSound
	 * Size -> 0x0010
	 */
	struct FPerspectiveSound
	{
	public:
		class USoundBase*                                          Sound1P;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Sound3P;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.CharacterSoundCollection
	 * Size -> 0x0010
	 */
	struct FCharacterSoundCollection
	{
	public:
		struct FPerspectiveSound                                   DeathSound;                                              // 0x0000(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.TakeHitInfo
	 * Size -> 0x0120
	 */
	struct FTakeHitInfo
	{
	public:
		float                                                      ActualDamage;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80X4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APawn>                                PawnInstigator;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               DamageCauser;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageEventClassID;                                      // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bKilled : 1;                                             // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EnsureReplicationByte;                                   // 0x0025(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BQ9L[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamageEvent                                        GeneralDamageEvent;                                      // 0x0028(0x0010) NativeAccessSpecifierPrivate
		struct FPointDamageEvent                                   PointDamageEvent;                                        // 0x0038(0x00A8) ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FRadialDamageEvent                                  RadialDamageEvent;                                       // 0x00E0(0x0040) ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DonkehFramework.RepShotInfo
	 * Size -> 0x0004
	 */
	struct FRepShotInfo
	{
	public:
		uint16_t                                                   ShotCounter;                                             // 0x0000(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsFiring;                                               // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCompressByte;                                           // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DonkehFramework.WeaponAnimCollection
	 * Size -> 0x00F0
	 */
	struct FWeaponAnimCollection
	{
	public:
		class UAnimSequence*                                       BasePose;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       EmptyBasePose;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntrinsicWeaponAnimSubset                          Intrinsic;                                               // 0x0010(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSingleActionWeaponAnimSubset                       SingleAction;                                            // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSingleLoadWeaponAnimSubset                         SingleLoad;                                              // 0x0040(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FThrowableWeaponAnimSubset                          Throwable;                                               // 0x0050(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    EquipAnim;                                               // 0x0070(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    UnEquipAnim;                                             // 0x0080(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    FireAnim;                                                // 0x0090(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    ActionAnim;                                              // 0x00A0(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    ReloadAnim;                                              // 0x00B0(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    ReloadFullAnim;                                          // 0x00C0(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    StartReloadAnim;                                         // 0x00D0(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveAnim                                    EndReloadAnim;                                           // 0x00E0(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.WeaponSoundCollection
	 * Size -> 0x0080
	 */
	struct FWeaponSoundCollection
	{
	public:
		struct FPerspectiveSound                                   EquipSound;                                              // 0x0000(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveSound                                   UnEquipSound;                                            // 0x0010(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveSound                                   FireSound;                                               // 0x0020(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveSound                                   FireLastSound;                                           // 0x0030(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveSound                                   DryFireSound;                                            // 0x0040(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveSound                                   ReloadSound;                                             // 0x0050(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveSound                                   ReloadFullSound;                                         // 0x0060(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerspectiveSound                                   FireModeSound;                                           // 0x0070(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.DecalData
	 * Size -> 0x0010
	 */
	struct FDecalData
	{
	public:
		class UMaterial*                                           DecalMaterial;                                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalSize;                                               // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeSpan;                                                // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.CSHitInfo
	 * Size -> 0x0070
	 */
	struct FCSHitInfo
	{
	public:
		unsigned char                                              bBlockingHit : 1;                                        // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DF0R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 Location;                                                // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           Normal;                                                  // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 ShootLoc;                                                // 0x0028(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x0034(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 TraceStart;                                              // 0x0040(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 TraceEnd;                                                // 0x004C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  Component;                                               // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AController>                          InstigatingController;                                   // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.DFDamageParams
	 * Size -> 0x0000 (FullSize[0x0014] - InheritedSize[0x0014])
	 */
	struct FDFDamageParams : public FRadialDamageParams
	{	};

	/**
	 * ScriptStruct DonkehFramework.DFPropertyAssetBundles
	 * Size -> 0x0001
	 */
	struct FDFPropertyAssetBundles
	{
	public:
		unsigned char                                              UnknownData_ILKD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFramework.DFGenericObject
	 * Size -> 0x001C (FullSize[0x0028] - InheritedSize[0x000C])
	 */
	struct FDFGenericObject : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_VD34[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Object;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ATR[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bPendingRemoval : 1;                                     // 0x0020(0x0001) BIT_FIELD RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPredictivelyRemoved : 1;                                // 0x0020(0x0001) BIT_FIELD RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVDK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFramework.DFGenericObjectContainer
	 * Size -> 0x0078 (FullSize[0x0180] - InheritedSize[0x0108])
	 */
	struct FDFGenericObjectContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FDFGenericObject>                            GenericObjects;                                          // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B4C5[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RequiredClass;                                           // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LFA6[0x58];                                  // 0x0128(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFramework.SpawnPointDef
	 * Size -> 0x0050
	 */
	struct FSpawnPointDef
	{
	public:
		int32_t                                                    SpawnID;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZS6X[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UObject*                                             SpawnContextObject;                                      // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NRD[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFramework.PlayerChatMsg
	 * Size -> 0x0030
	 */
	struct FPlayerChatMsg
	{
	public:
		class APlayerState*                                        SenderPS;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderName;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MsgTeamId;                                               // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYXX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MsgContent;                                              // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.AssetDescriptor
	 * Size -> 0x0020
	 */
	struct FAssetDescriptor
	{
	public:
		class FName                                                AssetName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayText;                                             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.DFCharacterVariationDataHandle
	 * Size -> 0x0018
	 */
	struct FDFCharacterVariationDataHandle
	{
	public:
		unsigned char                                              UnknownData_UMOQ[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFramework.DFCharacterVariationDataSource
	 * Size -> 0x0008
	 */
	struct FDFCharacterVariationDataSource
	{
	public:
		unsigned char                                              UnknownData_8E8Z[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFramework.DFCharacterVariationDataSource_TableRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FDFCharacterVariationDataSource_TableRow : public FDFCharacterVariationDataSource
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0008(0x0010) NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bValidRowHandle;                                         // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R6SC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFramework.DFCharacterVariation
	 * Size -> 0x0030
	 */
	struct FDFCharacterVariation
	{
	public:
		unsigned char                                              UnknownData_Y04F[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Mesh[0x28];                                              // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DonkehFramework.DFCharacterVariationData
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FDFCharacterVariationData : public FTableRowBase
	{
	public:
		struct FDFCharacterVariation                               Variation;                                               // 0x0008(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDFCharacterVariation                               VariationFPP;                                            // 0x0038(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.PerspectiveStaticMesh
	 * Size -> 0x0010
	 */
	struct FPerspectiveStaticMesh
	{
	public:
		class UStaticMesh*                                         Mesh1P;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         Mesh3P;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.PerspectiveSkeletalMesh
	 * Size -> 0x0010
	 */
	struct FPerspectiveSkeletalMesh
	{
	public:
		class USkeletalMesh*                                       Mesh1P;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       Mesh3P;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.PerspectiveAnimSequence
	 * Size -> 0x0010
	 */
	struct FPerspectiveAnimSequence
	{
	public:
		class UAnimSequence*                                       Anim1P;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Anim3P;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.WeaponAnimMontage
	 * Size -> 0x0010
	 */
	struct FWeaponAnimMontage
	{
	public:
		class UAnimMontage*                                        CharAnim;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        WeapAnim;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.WeaponAnimSequence
	 * Size -> 0x0010
	 */
	struct FWeaponAnimSequence
	{
	public:
		class UAnimSequence*                                       CharAnim;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       WeapAnim;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.WeaponAnim
	 * Size -> 0x0010
	 */
	struct FWeaponAnim
	{
	public:
		class UAnimSequenceBase*                                   CharAnim;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   WeapAnim;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFramework.AnimMontagePlaybackParams
	 * Size -> 0x0010
	 */
	struct FAnimMontagePlaybackParams
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SourceMeshComp;                                          // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
