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
	 * Enum PirateGenerator.EIPGEthnicity
	 */
	enum class EIPGEthnicity : uint8_t
	{
		UNSPECIFIED = 0,
		ASIAN       = 1,
		BLACK       = 2,
		WHITE       = 3,
		MAX         = 4
	};

	/**
	 * Enum PirateGenerator.EIPGGender
	 */
	enum class EIPGGender : uint8_t
	{
		UNSPECIFIED = 0,
		MALE        = 1,
		FEMALE      = 2,
		MAX         = 3
	};

	/**
	 * Enum PirateGenerator.EIPGPirateType
	 */
	enum class EIPGPirateType : uint8_t
	{
		PLAYER = 0,
		NPC    = 1,
		BONES  = 2,
		GHOST  = 3,
		MAX    = 4
	};

	/**
	 * Enum PirateGenerator.EIPGTestEnum
	 */
	enum class EIPGTestEnum : uint8_t
	{
		RANDOM         = 0,
		RANDOM_OR_NONE = 1,
		MAX            = 2
	};

	/**
	 * Enum PirateGenerator.EIPGPartType
	 */
	enum class EIPGPartType : uint8_t
	{
		DEFAULT = 0,
		INVERSE = 1,
		MAX     = 2
	};

	/**
	 * Enum PirateGenerator.EIPGSlotType
	 */
	enum class EIPGSlotType : uint8_t
	{
		DEFAULT = 0,
		DYNAMIC = 1,
		MAX     = 2
	};

	/**
	 * Enum PirateGenerator.EIPGSetMode
	 */
	enum class EIPGSetMode : uint8_t
	{
		RANDOM                 = 0,
		RANDOM_OR_NONE         = 1,
		BLEND2_FIRST_ORDER     = 2,
		BLEND2_RANDOM          = 3,
		NONE                   = 4,
		BLEND2_LAST_UNDERSCORE = 5,
		MAX                    = 6
	};

	/**
	 * Enum PirateGenerator.EIPGBlendType
	 */
	enum class EIPGBlendType : uint8_t
	{
		NIX                = 0,
		NIL                = 1,
		RND                = 2,
		ONOFF              = 3,
		POSNEG             = 4,
		MAP                = 5,
		ON                 = 6,
		ONOFF_NEAREST      = 7,
		ONOFF_BIAS         = 8,
		ONOFF_BIAS_NEAREST = 9,
		MAX                = 10
	};

	/**
	 * Enum PirateGenerator.EPirateBakeFlags
	 */
	enum class EPirateBakeFlags : uint8_t
	{
		None               = 0,
		FirstPerson        = 1,
		NoObjectFading     = 2,
		NoLODs             = 3,
		StripTopLOD        = 4,
		KeepCPUData        = 5,
		DiscardImmediately = 6,
		HighPriority       = 7,
		MAX                = 8
	};

	/**
	 * Enum PirateGenerator.EFileAccessAsyncResult
	 */
	enum class EFileAccessAsyncResult : uint8_t
	{
		Succeeded = 0,
		Failed    = 1,
		MAX       = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PirateGenerator.AnimationSwitchEntry
	 * Size -> 0x0010
	 */
	struct FAnimationSwitchEntry
	{
	public:
		class FName                                                BodyShape;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              AnimSetDataId;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.RadialCoordinate
	 * Size -> 0x0008
	 */
	struct FRadialCoordinate
	{
	public:
		float                                                      NormalizedAngle;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadialDistance;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.IPGBlendShape
	 * Size -> 0x0014
	 */
	struct FIPGBlendShape
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NodeName;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Value;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.IPGDynamicSlider
	 * Size -> 0x0008
	 */
	struct FIPGDynamicSlider
	{
	public:
		int32_t                                                    AffectedPriority;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.IPGScalarParameter
	 * Size -> 0x000C
	 */
	struct FIPGScalarParameter
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.PirateDescription
	 * Size -> 0x0080
	 */
	struct FPirateDescription
	{
	public:
		EIPGPirateType                                             Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BPH8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Version;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EIPGGender                                                 Gender;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EIPGEthnicity                                              Ethnicity;                                               // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4VZP[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRadialCoordinate                                   BodyShapeCoordinate;                                     // 0x000C(0x0008) Edit, BlueprintVisible
		unsigned char                                              UnknownData_UG0U[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIPGBlendShape>                              BlendShapes;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FIPGDynamicSlider>                           DynamicSliders;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    Seed;                                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8I5G[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Items;                                                   // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        TextureReferences;                                       // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        MaterialReferences;                                      // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FIPGScalarParameter>                         ScalarParameters;                                        // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.BlendedSubMeshSpecification
	 * Size -> 0x0030
	 */
	struct FBlendedSubMeshSpecification
	{
	public:
		class USkeletalMesh*                                       Mesh;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseMeshWeight;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YOPF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMeshPatchAsset*>                             MeshPatchAssets;                                         // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<float>                                              MeshPatchAssetWeights;                                   // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.MaterialReferenceEntry
	 * Size -> 0x0018
	 */
	struct FMaterialReferenceEntry
	{
	public:
		bool                                                       bCopyParametersAcross;                                   // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bReplaceAll;                                             // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X6YI[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  FromMaterial;                                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceConstant*                           ToMaterial;                                              // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.MaterialReferencesEntry
	 * Size -> 0x0018
	 */
	struct FMaterialReferencesEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FMaterialReferenceEntry>                     References;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.PirateGeneratorAdditionalBakeInfo
	 * Size -> 0x0020
	 */
	struct FPirateGeneratorAdditionalBakeInfo
	{
	public:
		TArray<class UParticleSystem*>                             VFXParticles;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        VFXSockets;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.PirateGeneratorTextureReference
	 * Size -> 0x0018
	 */
	struct FPirateGeneratorTextureReference
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        References;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.MeshPatchEntry
	 * Size -> 0x0018
	 */
	struct FMeshPatchEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               Reference;                                               // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.TextureSwitchParameters
	 * Size -> 0x0058
	 */
	struct FTextureSwitchParameters
	{
	public:
		unsigned char                                              UnknownData_8YGX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAsync;                                                  // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHighPriority;                                           // 0x0009(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_94NU[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Seed;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EIPGGender                                                 SelectedGender;                                          // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EIPGEthnicity                                              SelectedEthnicity;                                       // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MTWS[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SelectedBodyShape;                                       // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3GTE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        SelectedItems;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        SelectedReferences;                                      // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor
		unsigned char                                              UnknownData_9LVZ[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PirateGenerator.TextureSwitchSeedEntry
	 * Size -> 0x0018
	 */
	struct FTextureSwitchSeedEntry
	{
	public:
		class FName                                                ReferenceName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               Texture;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.TextureSwitchGenderEntry
	 * Size -> 0x0018
	 */
	struct FTextureSwitchGenderEntry
	{
	public:
		EIPGGender                                                 Gender;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C2Q3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringAssetReference                               Texture;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.TextureSwitchEthnicityEntry
	 * Size -> 0x0018
	 */
	struct FTextureSwitchEthnicityEntry
	{
	public:
		EIPGEthnicity                                              Ethnicity;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KAGU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringAssetReference                               Texture;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.TextureSwitchBodyShapeEntry
	 * Size -> 0x0018
	 */
	struct FTextureSwitchBodyShapeEntry
	{
	public:
		class FName                                                BodyShape;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               Texture;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.TextureSwitchItemEntry
	 * Size -> 0x0018
	 */
	struct FTextureSwitchItemEntry
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               Texture;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.ColorTextureSwitchSeedEntry
	 * Size -> 0x0018
	 */
	struct FColorTextureSwitchSeedEntry
	{
	public:
		class FName                                                ReferenceName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct PirateGenerator.WardrobeOutfitCategoryBias
	 * Size -> 0x000C
	 */
	struct FWardrobeOutfitCategoryBias
	{
	public:
		class FName                                                CategoryName;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmptyProbability;                                        // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.WardrobeOutfitResult
	 * Size -> 0x0050
	 */
	struct FWardrobeOutfitResult
	{
	public:
		TArray<class USkeletalMesh*>                               Meshes;                                                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<struct FIPGScalarParameter>                         ScalarParameters;                                        // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<class FName>                                        MaterialReferences;                                      // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<class UParticleSystem*>                             VFXParticles;                                            // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<class FName>                                        VFXSockets;                                              // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.ClothingCreatorSlotItem
	 * Size -> 0x0050
	 */
	struct FClothingCreatorSlotItem
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DisplayName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              Category;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<class FString>                                      Slots;                                                   // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.ClothingCreatorSlotItemConfig
	 * Size -> 0x0010
	 */
	struct FClothingCreatorSlotItemConfig
	{
	public:
		TArray<struct FClothingCreatorSlotItem>                    Items;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.IPGTestSimpleType
	 * Size -> 0x000C
	 */
	struct FIPGTestSimpleType
	{
	public:
		class FName                                                StringTest;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IntTest;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.IPGTestClass
	 * Size -> 0x0060
	 */
	struct FIPGTestClass
	{
	public:
		class FName                                                StringTest;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FloatTest;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IntTest;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EIPGTestEnum                                               EnumTest;                                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KK4W[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIPGTestSimpleType                                  ObjectTest;                                              // 0x0014(0x000C) Edit, BlueprintVisible
		struct FIPGTestSimpleType                                  ObjectNoneTest;                                          // 0x0020(0x000C) Edit, BlueprintVisible
		unsigned char                                              UnknownData_K40R[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIPGTestSimpleType>                          VectorTest;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        StrVectorTest;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<EIPGTestEnum>                                       EnumVectorTest;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.IPGDynamicSliderName
	 * Size -> 0x000C
	 */
	struct FIPGDynamicSliderName
	{
	public:
		int32_t                                                    AffectedPriority;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Name;                                                    // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.IPGBlendingMethod
	 * Size -> 0x0010
	 */
	struct FIPGBlendingMethod
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Probability;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EIPGBlendType                                              BlendType;                                               // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PHZP[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PirateGenerator.IPGSetGroup
	 * Size -> 0x0008
	 */
	struct FIPGSetGroup
	{
	public:
		int32_t                                                    Priority;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EIPGSetMode                                                Mode;                                                    // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C9T6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PirateGenerator.IPGCompatibleSet
	 * Size -> 0x0008
	 */
	struct FIPGCompatibleSet
	{
	public:
		class FName                                                SetName;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.IPGBlendRange
	 * Size -> 0x0028
	 */
	struct FIPGBlendRange
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Min;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Max;                                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Env;                                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SF7Z[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIPGCompatibleSet>                           Compatibility;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.IPGBlendNode
	 * Size -> 0x0018
	 */
	struct FIPGBlendNode
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FIPGBlendRange>                              Ranges;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.IPGSetData
	 * Size -> 0x0020
	 */
	struct FIPGSetData
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EIPGGender                                                 Gender;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EIPGEthnicity                                              Ethnicity;                                               // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A3M4[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Priority;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FIPGBlendNode>                               Nodes;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.IPGSetsData
	 * Size -> 0x0018
	 */
	struct FIPGSetsData
	{
	public:
		int32_t                                                    Version;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QWX3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIPGSetData>                                 Sets;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.IPGData
	 * Size -> 0x0048
	 */
	struct FIPGData
	{
	public:
		TArray<struct FIPGDynamicSliderName>                       DynamicSliderNames;                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FIPGBlendingMethod>                          BlendingMethods;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FIPGSetGroup>                                Groups;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    CurrentVersion;                                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_87T7[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIPGSetsData>                                Versions;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.IPGBodyShape
	 * Size -> 0x000C
	 */
	struct FIPGBodyShape
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NormalizedWheelAngle;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PirateGenerator.IPGBodyShapes
	 * Size -> 0x0020
	 */
	struct FIPGBodyShapes
	{
	public:
		TArray<struct FIPGBodyShape>                               Male;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FIPGBodyShape>                               Female;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.Config
	 * Size -> 0x0078
	 */
	struct FConfig
	{
	public:
		struct FIPGData                                            IPG;                                                     // 0x0000(0x0048) Edit, BlueprintVisible
		class FName                                                MaleBaseShape;                                           // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FemaleBaseShape;                                         // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIPGBodyShapes                                      BodyShapes;                                              // 0x0058(0x0020) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct PirateGenerator.ClothingSlot
	 * Size -> 0x0020
	 */
	struct FClothingSlot
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        Tags;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		EIPGSlotType                                               Type;                                                    // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7GO5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PirateGenerator.WardrobeConfig
	 * Size -> 0x0020
	 */
	struct FWardrobeConfig
	{
	public:
		TArray<struct FClothingSlot>                               Slots;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        Priority;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.ClothingVFX
	 * Size -> 0x0028
	 */
	struct FClothingVFX
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        Sockets;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        Slots;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.Outfit
	 * Size -> 0x0050
	 */
	struct FOutfit
	{
	public:
		TArray<class FName>                                        PartNames;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        FreeSlots;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FIPGScalarParameter>                         ScalarParameters;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        MaterialReferences;                                      // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FClothingVFX>                                VFXs;                                                    // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct PirateGenerator.ClothingPart
	 * Size -> 0x0020
	 */
	struct FClothingPart
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        Slots;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		EIPGGender                                                 Gender;                                                  // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EIPGPartType                                               PartType;                                                // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KMIQ[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PirateGenerator.ClothingItem
	 * Size -> 0x0088
	 */
	struct FClothingItem
	{
	public:
		class FName                                                Type;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EIPGPirateType>                                     CompatiblePirateTypes;                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        Variants;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        NewSlots;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FName                                                Parent;                                                  // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FClothingPart>                               Parts;                                                   // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FClothingVFX>                                VFXs;                                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FIPGScalarParameter>                         ScalarParameters;                                        // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        MaterialReferences;                                      // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
