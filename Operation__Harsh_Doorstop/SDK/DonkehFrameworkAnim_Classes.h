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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DonkehFrameworkAnim.AnimNotify_PlayFootstepFX
	 * Size -> 0x0118 (FullSize[0x0150] - InheritedSize[0x0038])
	 */
	class UAnimNotify_PlayFootstepFX : public UAnimNotify
	{
	public:
		TMap<EPhysicalSurface, struct FPerspectiveSound>           SoundsToPlay;                                            // 0x0038(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      VolumeMultiplier;                                        // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMultiplier;                                         // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAttachSound : 1;                                        // 0x0090(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlaySoundsWithPerspMeshOnly : 1;                        // 0x0090(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0E53[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EPhysicalSurface, class UFXSystemAsset*>              EffectsToSpawn;                                          // 0x0098(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              bAttachEffect : 1;                                       // 0x00E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PRGN[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EffectLocationOffset;                                    // 0x00EC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            EffectRotationOffset;                                    // 0x00F8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48YZ[0x1C];                                  // 0x0104(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EffectScale;                                             // 0x0120(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpawnEffectsWithPerspMeshOnly : 1;                      // 0x012C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFootstepVariant                                           FootstepVariant;                                         // 0x012D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CQZ[0x2];                                   // 0x012E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FootstepVariantParamName;                                // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FootBoneName;                                            // 0x0138(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootTraceOffset;                                         // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDebug : 1;                                              // 0x0144(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4NJ[0xB];                                   // 0x0145(0x000B) MISSED OFFSET (PADDING)

	public:
		void SetFootstepNotifyProps(const struct FFootstepFXSettings& PropsToUse);
		struct FFootstepFXSettings GetFootstepNotifyProps();
		bool STATIC_EqualProps(const struct FFootstepFXSettings& Props, const struct FFootstepFXSettings& OtherProps);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkAnim.DFCharacterAnimInstance
	 * Size -> 0x0050 (FullSize[0x02B8] - InheritedSize[0x0268])
	 */
	class UDFCharacterAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_2UVO[0x8];                                   // 0x0268(0x0008) Fix Super Size
		class APawn*                                               CachedPawnOwner;                                         // 0x0270(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADFBaseCharacter*                                    DFCharOwner;                                             // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AController*                                         ControllerOwner;                                         // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADFBaseItem*                                         EquippedWeapon;                                          // 0x0288(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMovementMode                                              MoveMode;                                                // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECharacterStance                                           MoveStance;                                              // 0x0291(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AQ3Z[0x2];                                   // 0x0292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MoveVelocity;                                            // 0x0294(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MoveSpeed;                                               // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MoveDirectionDeg;                                        // 0x02A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bMoving : 1;                                             // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInAir : 1;                                              // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bJumped : 1;                                             // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSprinting : 1;                                          // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAiming : 1;                                             // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLeaning : 1;                                            // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDFCharStanceContext                                StandState;                                              // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDFCharStanceContext                                CrouchState;                                             // 0x02AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDFCharStanceContext                                ProneState;                                              // 0x02AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            AimOffsets;                                              // 0x02AC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		class ADFBaseItem* TryGetOwnerWeapon();
		class AController* TryGetControllerOwner();
		void EquippedWeaponChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedWeap, class ADFBaseItem* PrevEquippedWeap);
		void BlueprintUpdatePawnOwnerRefs(class APawn* NewPawn);
		void BlueprintUpdateEquippedWeaponRefs(class ADFBaseItem* NewWeap);
		void BlueprintUpdateControllerOwnerRefs(class AController* NewC);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkAnim.DFWeaponAnimInstance
	 * Size -> 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
	 */
	class UDFWeaponAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_6P3A[0x8];                                   // 0x0268(0x0008) Fix Super Size
		class ADFBaseWeapon*                                       WeaponOwner;                                             // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class ADFBaseWeapon* TryGetWeaponOwner();
		void BlueprintUpdateWeaponOwnerRefs(class ADFBaseWeapon* NewWeap);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
