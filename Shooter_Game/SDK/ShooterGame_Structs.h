#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * Enum ShooterGame.EOnlineMode
	 */
	enum class EOnlineMode : uint8_t
	{
		Offline = 0,
		LAN     = 1,
		Online  = 2,
		MAX     = 3
	};

	/**
	 * Enum ShooterGame.EClassRepNodeMapping
	 */
	enum class EClassRepNodeMapping : uint8_t
	{
		NotRouted              = 0,
		RelevantAllConnections = 1,
		Spatialize_Static      = 2,
		Spatialize_Dynamic     = 3,
		Spatialize_Dormancy    = 4,
		MAX                    = 5
	};

	/**
	 * Enum ShooterGame.EShooterPhysMaterialType
	 */
	enum class EShooterPhysMaterialType : uint8_t
	{
		Unknown  = 0,
		Concrete = 1,
		Dirt     = 2,
		Water    = 3,
		Metal    = 4,
		Wood     = 5,
		Grass    = 6,
		Glass    = 7,
		Flesh    = 8,
		MAX      = 9
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ShooterGame.TakeHitInfo
	 * Size -> 0x0130
	 */
	struct FTakeHitInfo
	{
	public:
		float                                                      ActualDamage;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXL1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AShooterCharacter>                    PawnInstigator;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               DamageCauser;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageEventClassID;                                      // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bKilled : 1;                                             // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW0Z[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              EnsureReplicationByte;                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ANRW[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamageEvent                                        GeneralDamageEvent;                                      // 0x0030(0x0010) NativeAccessSpecifierPrivate
		struct FPointDamageEvent                                   PointDamageEvent;                                        // 0x0040(0x00B0) ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FRadialDamageEvent                                  RadialDamageEvent;                                       // 0x00F0(0x0040) ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ShooterGame.ShooterChatStyle
	 * Size -> 0x0900 (FullSize[0x0908] - InheritedSize[0x0008])
	 */
	struct FShooterChatStyle : public FSlateWidgetStyle
	{
	public:
		struct FEditableTextBoxStyle                               TextEntryStyle;                                          // 0x0008(0x07F8) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackingBrush;                                            // 0x0800(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         BoxBorderColor;                                          // 0x0888(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         TextColor;                                               // 0x08B0(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateSound                                         RxMessgeSound;                                           // 0x08D8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         TxMessgeSound;                                           // 0x08F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DecalData
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
	 * ScriptStruct ShooterGame.ShooterMenuItemStyle
	 * Size -> 0x0198 (FullSize[0x01A0] - InheritedSize[0x0008])
	 */
	struct FShooterMenuItemStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LeftArrowImage;                                          // 0x0090(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         RightArrowImage;                                         // 0x0118(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ShooterMenuSoundsStyle
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FShooterMenuSoundsStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateSound                                         StartGameSound;                                          // 0x0008(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         ExitGameSound;                                           // 0x0020(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ShooterMenuStyle
	 * Size -> 0x01F8 (FullSize[0x0200] - InheritedSize[0x0008])
	 */
	struct FShooterMenuStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HeaderBackgroundBrush;                                   // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LeftBackgroundBrush;                                     // 0x0090(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         RightBackgroundBrush;                                    // 0x0118(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateSound                                         MenuEnterSound;                                          // 0x01A0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         MenuBackSound;                                           // 0x01B8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         OptionChangeSound;                                       // 0x01D0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         MenuItemChangeSound;                                     // 0x01E8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ShooterOptionsStyle
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FShooterOptionsStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateSound                                         AcceptChangesSound;                                      // 0x0008(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         DiscardChangesSound;                                     // 0x0020(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ShooterScoreboardStyle
	 * Size -> 0x0118 (FullSize[0x0120] - InheritedSize[0x0008])
	 */
	struct FShooterScoreboardStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         ItemBorderBrush;                                         // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         KillStatColor;                                           // 0x0090(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         DeathStatColor;                                          // 0x00B8(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         ScoreStatColor;                                          // 0x00E0(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateSound                                         PlayerChangeSound;                                       // 0x0108(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.WeaponData
	 * Size -> 0x0018
	 */
	struct FWeaponData
	{
	public:
		bool                                                       bInfiniteAmmo;                                           // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteClip;                                           // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6IUT[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxAmmo;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmmoPerClip;                                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialClips;                                            // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenShots;                                        // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoAnimReloadDuration;                                    // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.WeaponAnim
	 * Size -> 0x0010
	 */
	struct FWeaponAnim
	{
	public:
		class UAnimMontage*                                        Pawn1P;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Pawn3P;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.InstantWeaponData
	 * Size -> 0x0028
	 */
	struct FInstantWeaponData
	{
	public:
		float                                                      WeaponSpread;                                            // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetingSpreadMod;                                      // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiringSpreadIncrement;                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiringSpreadMax;                                         // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponRange;                                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitDamage;                                               // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClientSideHitLeeway;                                     // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AllowedViewDotHitDir;                                    // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.InstantHitInfo
	 * Size -> 0x0014
	 */
	struct FInstantHitInfo
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReticleSpread;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ProjectileWeaponData
	 * Size -> 0x0020
	 */
	struct FProjectileWeaponData
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileLife;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosionDamage;                                         // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionRadius;                                         // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q2S4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
