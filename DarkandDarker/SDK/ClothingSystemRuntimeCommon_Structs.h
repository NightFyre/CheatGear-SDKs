#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Enum ClothingSystemRuntimeCommon.EClothMassMode
	 */
	enum class EClothMassMode : uint8_t
	{
		UniformMass      = 0,
		TotalMass        = 1,
		Density          = 2,
		MaxClothMassMode = 3,
		MAX              = 4
	};

	/**
	 * Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
	 */
	enum class EClothingWindMethod_Legacy : uint8_t
	{
		Legacy                  = 0,
		Accurate                = 1,
		EClothingWindMethod_MAX = 2
	};

	/**
	 * Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
	 */
	enum class EWeightMapTargetCommon : uint8_t
	{
		None                        = 0,
		MaxDistance                 = 1,
		BackstopDistance            = 2,
		BackstopRadius              = 3,
		AnimDriveStiffness          = 4,
		AnimDriveDamping_DEPRECATED = 5,
		MAX                         = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
	 * Size -> 0x0010
	 */
	struct FPointWeightMap
	{
	public:
		TArray<float>                                              Values;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothTetherData
	 * Size -> 0x0010
	 */
	struct FClothTetherData
	{
	public:
		unsigned char                                              UnknownData_VFTL[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
	 * Size -> 0x00D8
	 */
	struct FClothPhysicalMeshData
	{
	public:
		TArray<struct FVector3f>                                   Vertices;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector3f>                                   Normals;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Indices;                                                 // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<uint32_t, struct FPointWeightMap>                     WeightMaps;                                              // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
		TArray<float>                                              InverseMasses;                                           // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FClothVertBoneData>                          BoneData;                                                // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           SelfCollisionIndices;                                    // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FClothTetherData                                    EuclideanTethers;                                        // 0x00B0(0x0010) Edit, NativeAccessSpecifierPublic
		struct FClothTetherData                                    GeodesicTethers;                                         // 0x00C0(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    MaxBoneWeights;                                          // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFixedVerts;                                           // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
	 * Size -> 0x0148
	 */
	struct FClothLODDataCommon
	{
	public:
		struct FClothPhysicalMeshData                              PhysicalMeshData;                                        // 0x0000(0x00D8) Edit, NativeAccessSpecifierPublic
		struct FClothCollisionData                                 CollisionData;                                           // 0x00D8(0x0040) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseMultipleInfluences;                                  // 0x0118(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9NP[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SkinningKernelRadius;                                    // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSmoothTransition;                                       // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVF1[0x27];                                  // 0x0121(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
	 * Size -> 0x0010
	 */
	struct FClothConstraintSetup_Legacy
	{
	public:
		float                                                      Stiffness;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StiffnessMultiplier;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchLimit;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompressionLimit;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
	 * Size -> 0x0130
	 */
	struct FClothConfig_Legacy
	{
	public:
		EClothingWindMethod_Legacy                                 WindMethod;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQC7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClothConstraintSetup_Legacy                        VerticalConstraintConfig;                                // 0x0004(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup_Legacy                        HorizontalConstraintConfig;                              // 0x0014(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup_Legacy                        BendConstraintConfig;                                    // 0x0024(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup_Legacy                        ShearConstraintConfig;                                   // 0x0034(0x0010) NoDestructor, NativeAccessSpecifierPublic
		float                                                      SelfCollisionRadius;                                     // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionStiffness;                                  // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionCullScale;                                  // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Damping;                                                 // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Friction;                                                // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindDragCoefficient;                                     // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindLiftCoefficient;                                     // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAMH[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearDrag;                                              // 0x0078(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularDrag;                                             // 0x0090(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearInertiaScale;                                      // 0x00A8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularInertiaScale;                                     // 0x00C0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CentrifugalInertiaScale;                                 // 0x00D8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SolverFrequency;                                         // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StiffnessFrequency;                                      // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_009Y[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GravityOverride;                                         // 0x0100(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGravityOverride;                                     // 0x0118(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NZ0[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TetherStiffness;                                         // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TetherLimit;                                             // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionThickness;                                      // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimDriveSpringStiffness;                                // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimDriveDamperStiffness;                                // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
	 * Size -> 0x0030
	 */
	struct FClothParameterMask_Legacy
	{
	public:
		class FName                                                MaskName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeightMapTargetCommon                                     CurrentTarget;                                           // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5W8R[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxValue;                                                // 0x000C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HW60[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Values;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYCE[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
