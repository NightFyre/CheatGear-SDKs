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
	 * Enum MagicLeap.PurchaseType
	 */
	enum class EPurchaseType : uint8_t
	{
		PurchaseType_Consumable       = 0,
		PurchaseType_Nonconsumable    = 1,
		PurchaseType_Undefined        = 2,
		PurchaseType_PurchaseType_MAX = 3
	};

	/**
	 * Enum MagicLeap.EFocusLostReason
	 */
	enum class EFocusLostReason : uint8_t
	{
		Invalid = 0,
		System  = 1,
		MAX     = 2
	};

	/**
	 * Enum MagicLeap.EMagicLeapMeshLOD
	 */
	enum class EMagicLeapMeshLOD : uint8_t
	{
		Minimum = 0,
		Medium  = 1,
		Maximum = 2,
		MAX     = 3
	};

	/**
	 * Enum MagicLeap.EMagicLeapMeshState
	 */
	enum class EMagicLeapMeshState : uint8_t
	{
		New       = 0,
		Updated   = 1,
		Deleted   = 2,
		Unchanged = 3,
		MAX       = 4
	};

	/**
	 * Enum MagicLeap.EMagicLeapMeshVertexColorMode
	 */
	enum class EMagicLeapMeshVertexColorMode : uint8_t
	{
		None       = 0,
		Confidence = 1,
		Block      = 2,
		LOD        = 3,
		MAX        = 4
	};

	/**
	 * Enum MagicLeap.EMagicLeapMeshType
	 */
	enum class EMagicLeapMeshType : uint8_t
	{
		Triangles  = 0,
		PointCloud = 1,
		MAX        = 2
	};

	/**
	 * Enum MagicLeap.EMagicLeapRaycastResultState
	 */
	enum class EMagicLeapRaycastResultState : uint8_t
	{
		RequestFailed = 0,
		NoCollision   = 1,
		HitUnobserved = 2,
		HitObserved   = 3,
		MAX           = 4
	};

	/**
	 * Enum MagicLeap.CloudStatus
	 */
	enum class ECloudStatus : uint8_t
	{
		CloudStatus_CloudStatus_NotDone = 0,
		CloudStatus_CloudStatus_Done    = 1,
		CloudStatus_CloudStatus_MAX     = 2
	};

	/**
	 * Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
	 */
	enum class EMagicLeapHeadTrackingMapEvent : uint8_t
	{
		Lost           = 0,
		Recovered      = 1,
		RecoveryFailed = 2,
		NewSession     = 3,
		MAX            = 4
	};

	/**
	 * Enum MagicLeap.EMagicLeapHeadTrackingMode
	 */
	enum class EMagicLeapHeadTrackingMode : uint8_t
	{
		PositionAndOrientation = 0,
		Unavailable            = 1,
		Unknown                = 2,
		MAX                    = 3
	};

	/**
	 * Enum MagicLeap.EMagicLeapHeadTrackingError
	 */
	enum class EMagicLeapHeadTrackingError : uint8_t
	{
		None              = 0,
		NotEnoughFeatures = 1,
		LowLight          = 2,
		Unknown           = 3,
		MAX               = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeap.PurchaseItemDetails
	 * Size -> 0x0040
	 */
	struct FPurchaseItemDetails
	{
	public:
		unsigned char                                              UnknownData_46WQ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Price;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPurchaseType                                              Type;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIBB[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MagicLeap.PurchaseConfirmation
	 * Size -> 0x0050
	 */
	struct FPurchaseConfirmation
	{
	public:
		unsigned char                                              UnknownData_YM6Z[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PackageName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HGD[0x28];                                  // 0x0020(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPurchaseType                                              Type;                                                    // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9T5[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
	 * Size -> 0x0014
	 */
	struct FMagicLeapMeshBlockRequest
	{
	public:
		struct FGuid                                               BlockID;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapMeshLOD                                          LevelOfDetail;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ER80[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
	 * Size -> 0x0048
	 */
	struct FMagicLeapMeshBlockInfo
	{
	public:
		struct FGuid                                               BlockID;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BlockPosition;                                           // 0x0010(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            BlockOrientation;                                        // 0x001C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             BlockDimensions;                                         // 0x0028(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2DVZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           Timestamp;                                               // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapMeshState                                        BlockState;                                              // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZS5[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
	 * Size -> 0x0018
	 */
	struct FMagicLeapTrackingMeshInfo
	{
	public:
		struct FTimespan                                           Timestamp;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMagicLeapMeshBlockInfo>                     BlockData;                                               // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapRaycastHitResult
	 * Size -> 0x0024
	 */
	struct FMagicLeapRaycastHitResult
	{
	public:
		EMagicLeapRaycastResultState                               HitState;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5JR1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitPoint;                                                // 0x0004(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Confidence;                                              // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserData;                                                // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
	 * Size -> 0x0038
	 */
	struct FMagicLeapRaycastQueryParams
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UpVector;                                                // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalFovDegrees;                                    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CollideWithUnobserved;                                   // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9S7N[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UserData;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
	 * Size -> 0x001C
	 */
	struct FMagicLeapGraphicsClientPerformanceInfo
	{
	public:
		float                                                      FrameStartCPUCompAcquireCPUTimeMs;                       // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameStartCPUFrameEndGPUTimeMs;                          // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameStartCPUFrameStartCPUTimeMs;                        // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameDurationCPUTimeMs;                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameDurationGPUTimeMs;                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameInternalDurationCPUTimeMs;                          // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameInternalDurationGPUTimeMs;                          // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapHeadTrackingState
	 * Size -> 0x0008
	 */
	struct FMagicLeapHeadTrackingState
	{
	public:
		EMagicLeapHeadTrackingMode                                 Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapHeadTrackingError                                Error;                                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8JUC[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Confidence;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapResult
	 * Size -> 0x0018
	 */
	struct FMagicLeapResult
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6F9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AdditionalInfo;                                          // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
