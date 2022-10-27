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
	 * Enum DonkehFrameworkAnim.EFootstepVariant
	 */
	enum class EFootstepVariant : uint8_t
	{
		Walk    = 0,
		Run     = 1,
		Sprint  = 2,
		Shuffle = 3,
		Jump    = 4,
		Land    = 5,
		MAX     = 6
	};

	/**
	 * Enum DonkehFrameworkAnim.EMotionDirection
	 */
	enum class EMotionDirection : uint8_t
	{
		XPos = 0,
		YPos = 1,
		ZPos = 2,
		XNeg = 3,
		YNeg = 4,
		ZNeg = 5,
		MAX  = 6
	};

	/**
	 * Enum DonkehFrameworkAnim.EAnimDirection
	 */
	enum class EAnimDirection : uint8_t
	{
		None  = 0,
		Left  = 1,
		Right = 2,
		Up    = 3,
		Down  = 4,
		MAX   = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DonkehFrameworkAnim.DFCharStanceContext
	 * Size -> 0x0001
	 */
	struct FDFCharStanceContext
	{
	public:
		unsigned char                                              bWantsToBeInStance : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsInStance : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFullyTransitionedIntoStance : 1;                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFrameworkAnim.FootstepFXSettings
	 * Size -> 0x00F8
	 */
	struct FFootstepFXSettings
	{
	public:
		TMap<EPhysicalSurface, struct FPerspectiveSound>           SoundsToPlay;                                            // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      VolumeMultiplier;                                        // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMultiplier;                                         // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAttachSound : 1;                                        // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlaySoundsWithPerspMeshOnly : 1;                        // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKAX[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EPhysicalSurface, class UFXSystemAsset*>              EffectsToSpawn;                                          // 0x0060(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              bAttachEffect : 1;                                       // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QY1V[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EffectLocationOffset;                                    // 0x00B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            EffectRotationOffset;                                    // 0x00C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             EffectScale;                                             // 0x00CC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpawnEffectsWithPerspMeshOnly : 1;                      // 0x00D8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFootstepVariant                                           FootstepVariant;                                         // 0x00D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNSN[0x2];                                   // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FootstepVariantParamName;                                // 0x00DC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FootBoneName;                                            // 0x00E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootTraceOffset;                                         // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDebug : 1;                                              // 0x00F0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PO5[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFrameworkAnim.BoneModifier
	 * Size -> 0x000C
	 */
	struct FBoneModifier
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
