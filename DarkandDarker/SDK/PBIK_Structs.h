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
	 * Enum PBIK.EPBIKRootBehavior
	 */
	enum class EPBIKRootBehavior : uint8_t
	{
		PrePull    = 0,
		PinToInput = 1,
		Free       = 2,
		MAX        = 3
	};

	/**
	 * Enum PBIK.EPBIKLimitType
	 */
	enum class EPBIKLimitType : uint8_t
	{
		Free    = 0,
		Limited = 1,
		Locked  = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PBIK.PBIKSolverSettings
	 * Size -> 0x0010
	 */
	struct FPBIKSolverSettings
	{
	public:
		int32_t                                                    Iterations;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MassMultiplier;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinMassMultiplier;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowStretch;                                           // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPBIKRootBehavior                                          RootBehavior;                                            // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartSolveFromInputPose;                                // 0x000E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPFJ[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PBIK.PBIKSolver
	 * Size -> 0x0068
	 */
	struct FPBIKSolver
	{
	public:
		unsigned char                                              UnknownData_SBDO[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PBIK.PBIKBoneSetting
	 * Size -> 0x0050
	 */
	struct FPBIKBoneSetting
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationStiffness;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositionStiffness;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPBIKLimitType                                             X;                                                       // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WFJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinX;                                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxX;                                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPBIKLimitType                                             Y;                                                       // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSXN[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinY;                                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxY;                                                    // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPBIKLimitType                                             Z;                                                       // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTXB[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinZ;                                                    // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxZ;                                                    // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePreferredAngles;                                     // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TIYM[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PreferredAngles;                                         // 0x0038(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PBIK.PBIKDebug
	 * Size -> 0x0008
	 */
	struct FPBIKDebug
	{
	public:
		float                                                      DrawScale;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KLA[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PBIK.PBIKEffector
	 * Size -> 0x0090
	 */
	struct FPBIKEffector
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNG7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      PositionAlpha;                                           // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationAlpha;                                           // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrengthAlpha;                                           // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PullChainAlpha;                                          // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PinRotation;                                             // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YR1D[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PBIK.RigUnit_PBIK
	 * Size -> 0x00F0 (FullSize[0x01C0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                Root;                                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPBIKEffector>                               Effectors;                                               // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            EffectorSolverIndices;                                   // 0x00E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FPBIKBoneSetting>                            BoneSettings;                                            // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        ExcludedBones;                                           // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FPBIKSolverSettings                                 Settings;                                                // 0x0118(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FPBIKDebug                                          Debug;                                                   // 0x0128(0x0008) NoDestructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            BoneSettingToSolverBoneIndex;                            // 0x0130(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<int32_t>                                            SolverBoneToElementIndex;                                // 0x0140(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FPBIKSolver                                         Solver;                                                  // 0x0150(0x0068) Transient, NativeAccessSpecifierPublic
		bool                                                       bNeedsInit;                                              // 0x01B8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G304[0x7];                                   // 0x01B9(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
