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
	 * Enum ApexDestruction.EApexConvexHullMethod
	 */
	enum class EApexConvexHullMethod : uint8_t
	{
		Use_6_DOP            = 0,
		Use_10_DOP_X         = 1,
		Use_10_DOP_Y         = 2,
		Use_10_DOP_Z         = 3,
		Use_14_DOP_XY        = 4,
		Use_14_DOP_YZ        = 5,
		Use_14_DOP_ZX        = 6,
		Use_18_DOP           = 7,
		Use_26_DOP           = 8,
		Wrap_Graphics_Mesh   = 9,
		Convex_Decomposition = 10,
		MAX                  = 11
	};

	/**
	 * Enum ApexDestruction.EImpactDamageOverride
	 */
	enum class EImpactDamageOverride : uint8_t
	{
		IDO_None = 0,
		IDO_On   = 1,
		IDO_Off  = 2,
		IDO_MAX  = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ApexDestruction.FractureMaterial
	 * Size -> 0x0024
	 */
	struct FFractureMaterial
	{
	public:
		struct FVector2D                                           UVScale;                                                 // 0x0000(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UVOffset;                                                // 0x0008(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Tangent;                                                 // 0x0010(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UAngle;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteriorElementIndex;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleChunkParameters
	 * Size -> 0x0005
	 */
	struct FDestructibleChunkParameters
	{
	public:
		bool                                                       bIsSupportChunk;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotFracture;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotDamage;                                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotCrumble;                                           // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotSplit;                                             // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleDamageParameters
	 * Size -> 0x0028
	 */
	struct FDestructibleDamageParameters
	{
	public:
		float                                                      DamageThreshold;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageSpread;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageSpreadFalloffExponent;                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageSpreadMinimumRadius;                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageSpreadRadiusMultiplier;                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableImpactDamage;                                     // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NTW[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImpactDamage;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultImpactDamageDepth;                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCustomImpactResistance;                                 // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXB7[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImpactResistance;                                        // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleDebrisParameters
	 * Size -> 0x002C
	 */
	struct FDestructibleDebrisParameters
	{
	public:
		float                                                      DebrisLifetimeMin;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebrisLifetimeMax;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebrisMaxSeparationMin;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebrisMaxSeparationMax;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                ValidBounds;                                             // 0x0010(0x001C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleAdvancedParameters
	 * Size -> 0x0010
	 */
	struct FDestructibleAdvancedParameters
	{
	public:
		float                                                      DamageCap;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactVelocityThreshold;                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxChunkSpeed;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FractureImpulseScale;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
	 * Size -> 0x0014
	 */
	struct FDestructibleSpecialHierarchyDepths
	{
	public:
		int32_t                                                    SupportDepth;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimumFractureDepth;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebris;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9FJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DebrisDepth;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EssentialDepth;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleDepthParameters
	 * Size -> 0x0001
	 */
	struct FDestructibleDepthParameters
	{
	public:
		EImpactDamageOverride                                      ImpactDamageOverride;                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleParametersFlag
	 * Size -> 0x0004
	 */
	struct FDestructibleParametersFlag
	{
	public:
		unsigned char                                              bAccumulateDamage : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAssetDefinedSupport : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWorldSupport : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDebrisTimeout : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDebrisMaxSeparation : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCrumbleSmallestChunks : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAccurateRaycasts : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseValidBounds : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFormExtendedStructures : 1;                             // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MXM[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleApexDepthCollisionVolumeParameters
	 * Size -> 0x001C
	 */
	struct FDestructibleApexDepthCollisionVolumeParameters
	{
	public:
		EApexConvexHullMethod                                      ConvexHullMethod;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRL4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConcavityPercent;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MergeThreshold;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   RecursionDepth;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxVertexCount;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxEdgeCount;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxFaceCount;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleApexCollisionVolumeParameters
	 * Size -> 0x0038
	 */
	struct FDestructibleApexCollisionVolumeParameters
	{
	public:
		TArray<struct FDestructibleApexDepthCollisionVolumeParameters> DepthCollisionVolume;                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bHigherDepthsUseDefaultCollisionVolume;                  // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYY9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaximumTrimming;                                         // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EApexConvexHullMethod                                      ConvexHullMethod;                                        // 0x0018(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3X5[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConcavityPercent;                                        // 0x001C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MergeThreshold;                                          // 0x0020(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   RecursionDepth;                                          // 0x0024(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxVertexCount;                                          // 0x0028(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxEdgeCount;                                            // 0x002C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxFaceCount;                                            // 0x0030(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TUT[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleParameters
	 * Size -> 0x00C8
	 */
	struct FDestructibleParameters
	{
	public:
		struct FDestructibleDamageParameters                       DamageParameters;                                        // 0x0000(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDestructibleDebrisParameters                       DebrisParameters;                                        // 0x0028(0x002C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDestructibleAdvancedParameters                     AdvancedParameters;                                      // 0x0054(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDestructibleSpecialHierarchyDepths                 SpecialHierarchyDepths;                                  // 0x0064(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FDestructibleDepthParameters>                DepthParameters;                                         // 0x0078(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDestructibleParametersFlag                         Flags;                                                   // 0x0088(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PEC[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDestructibleApexCollisionVolumeParameters          ApexCollisionVolumeParameters;                           // 0x0090(0x0038) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.PosableDestructibleChunkInfo
	 * Size -> 0x0018
	 */
	struct FPosableDestructibleChunkInfo
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GestaltPartName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsSupportChunk : 1;                                     // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1FF2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ApexDestruction.MeshParentIndex
	 * Size -> 0x0010
	 */
	struct FMeshParentIndex
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8L0S[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
