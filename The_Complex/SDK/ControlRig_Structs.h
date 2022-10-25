#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Enum ControlRig.EControlRigComponentSpace
	 */
	enum class EControlRigComponentSpace : uint8_t
	{
		WorldSpace     = 0,
		ActorSpace     = 1,
		ComponentSpace = 2,
		RigSpace       = 3,
		LocalSpace     = 4,
		Max            = 5
	};

	/**
	 * Enum ControlRig.EControlRigComponentMapDirection
	 */
	enum class EControlRigComponentMapDirection : uint8_t
	{
		Input  = 0,
		Output = 1,
		MAX    = 2
	};

	/**
	 * Enum ControlRig.ETransformSpaceMode
	 */
	enum class ETransformSpaceMode : uint8_t
	{
		LocalSpace  = 0,
		GlobalSpace = 1,
		BaseSpace   = 2,
		BaseJoint   = 3,
		Max         = 4
	};

	/**
	 * Enum ControlRig.EControlRigClampSpatialMode
	 */
	enum class EControlRigClampSpatialMode : uint8_t
	{
		Plane    = 0,
		Cylinder = 1,
		Sphere   = 2,
		MAX      = 3
	};

	/**
	 * Enum ControlRig.ETransformGetterType
	 */
	enum class ETransformGetterType : uint8_t
	{
		Initial = 0,
		Current = 1,
		Max     = 2
	};

	/**
	 * Enum ControlRig.EBoneGetterSetterMode
	 */
	enum class EBoneGetterSetterMode : uint8_t
	{
		LocalSpace  = 0,
		GlobalSpace = 1,
		Max         = 2
	};

	/**
	 * Enum ControlRig.ERigExecutionType
	 */
	enum class ERigExecutionType : uint8_t
	{
		Runtime = 0,
		Editing = 1,
		Max     = 2
	};

	/**
	 * Enum ControlRig.EControlRigDrawSettings
	 */
	enum class EControlRigDrawSettings : uint8_t
	{
		Points      = 0,
		Lines       = 1,
		LineStrip   = 2,
		DynamicMesh = 3,
		MAX         = 4
	};

	/**
	 * Enum ControlRig.EControlRigDrawHierarchyMode
	 */
	enum class EControlRigDrawHierarchyMode : uint8_t
	{
		Axes = 0,
		Max  = 1
	};

	/**
	 * Enum ControlRig.EControlRigAnimEasingType
	 */
	enum class EControlRigAnimEasingType : uint8_t
	{
		Linear               = 0,
		QuadraticEaseIn      = 1,
		QuadraticEaseOut     = 2,
		QuadraticEaseInOut   = 3,
		CubicEaseIn          = 4,
		CubicEaseOut         = 5,
		CubicEaseInOut       = 6,
		QuarticEaseIn        = 7,
		QuarticEaseOut       = 8,
		QuarticEaseInOut     = 9,
		QuinticEaseIn        = 10,
		QuinticEaseOut       = 11,
		QuinticEaseInOut     = 12,
		SineEaseIn           = 13,
		SineEaseOut          = 14,
		SineEaseInOut        = 15,
		CircularEaseIn       = 16,
		CircularEaseOut      = 17,
		CircularEaseInOut    = 18,
		ExponentialEaseIn    = 19,
		ExponentialEaseOut   = 20,
		ExponentialEaseInOut = 21,
		ElasticEaseIn        = 22,
		ElasticEaseOut       = 23,
		ElasticEaseInOut     = 24,
		BackEaseIn           = 25,
		BackEaseOut          = 26,
		BackEaseInOut        = 27,
		BounceEaseIn         = 28,
		BounceEaseOut        = 29,
		BounceEaseInOut      = 30,
		MAX                  = 31
	};

	/**
	 * Enum ControlRig.ECRSimPointIntegrateType
	 */
	enum class ECRSimPointIntegrateType : uint8_t
	{
		Verlet            = 0,
		SemiExplicitEuler = 1,
		MAX               = 2
	};

	/**
	 * Enum ControlRig.ECRSimConstraintType
	 */
	enum class ECRSimConstraintType : uint8_t
	{
		Distance      = 0,
		DistanceFromA = 1,
		DistanceFromB = 2,
		Plane         = 3,
		MAX           = 4
	};

	/**
	 * Enum ControlRig.ECRSimPointForceType
	 */
	enum class ECRSimPointForceType : uint8_t
	{
		Direction = 0,
		MAX       = 1
	};

	/**
	 * Enum ControlRig.ECRSimSoftCollisionType
	 */
	enum class ECRSimSoftCollisionType : uint8_t
	{
		Plane  = 0,
		Sphere = 1,
		Cone   = 2,
		MAX    = 3
	};

	/**
	 * Enum ControlRig.EControlRigFKRigExecuteMode
	 */
	enum class EControlRigFKRigExecuteMode : uint8_t
	{
		Replace  = 0,
		Additive = 1,
		Max      = 2
	};

	/**
	 * Enum ControlRig.EMovieSceneControlRigSpaceType
	 */
	enum class EMovieSceneControlRigSpaceType : uint8_t
	{
		Parent     = 0,
		World      = 1,
		ControlRig = 2,
		MAX        = 3
	};

	/**
	 * Enum ControlRig.ERigTransformStackEntryType
	 */
	enum class ERigTransformStackEntryType : uint8_t
	{
		TransformPose = 0,
		ControlOffset = 1,
		ControlShape  = 2,
		CurveValue    = 3,
		MAX           = 4
	};

	/**
	 * Enum ControlRig.ERigElementType
	 */
	enum class ERigElementType : uint8_t
	{
		None                   = 0,
		Bone                   = 1,
		Null                   = 2,
		Space                  = 3,
		Control                = 4,
		Curve                  = 5,
		RigidBody              = 6,
		Reference              = 7,
		Last                   = 8,
		All                    = 9,
		ToResetAfterSetupEvent = 10,
		MAX                    = 11
	};

	/**
	 * Enum ControlRig.ERigBoneType
	 */
	enum class ERigBoneType : uint8_t
	{
		Imported = 0,
		User     = 1,
		MAX      = 2
	};

	/**
	 * Enum ControlRig.ERigHierarchyNotification
	 */
	enum class ERigHierarchyNotification : uint8_t
	{
		ElementAdded                 = 0,
		ElementRemoved               = 1,
		ElementRenamed               = 2,
		ElementSelected              = 3,
		ElementDeselected            = 4,
		ParentChanged                = 5,
		HierarchyReset               = 6,
		ControlSettingChanged        = 7,
		ControlVisibilityChanged     = 8,
		ControlShapeTransformChanged = 9,
		ParentWeightsChanged         = 10,
		Max                          = 11
	};

	/**
	 * Enum ControlRig.ERigEvent
	 */
	enum class ERigEvent : uint8_t
	{
		None           = 0,
		RequestAutoKey = 1,
		Max            = 2
	};

	/**
	 * Enum ControlRig.EControlRigSetKey
	 */
	enum class EControlRigSetKey : uint8_t
	{
		DoNotCare = 0,
		Always    = 1,
		Never     = 2,
		MAX       = 3
	};

	/**
	 * Enum ControlRig.ERigControlType
	 */
	enum class ERigControlType : uint8_t
	{
		Bool             = 0,
		Float            = 1,
		Integer          = 2,
		Vector2D         = 3,
		Position         = 4,
		Scale            = 5,
		Rotator          = 6,
		Transform        = 7,
		TransformNoScale = 8,
		EulerTransform   = 9,
		MAX              = 10
	};

	/**
	 * Enum ControlRig.ERigControlValueType
	 */
	enum class ERigControlValueType : uint8_t
	{
		Initial = 0,
		Current = 1,
		Minimum = 2,
		Maximum = 3,
		MAX     = 4
	};

	/**
	 * Enum ControlRig.ERigControlAxis
	 */
	enum class ERigControlAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum ControlRig.ERigTransformType
	 */
	enum class ERigTransformType : uint8_t
	{
		InitialLocal      = 0,
		CurrentLocal      = 1,
		InitialGlobal     = 2,
		CurrentGlobal     = 3,
		NumTransformTypes = 4,
		MAX               = 5
	};

	/**
	 * Enum ControlRig.ERigSpaceType
	 */
	enum class ERigSpaceType : uint8_t
	{
		Global  = 0,
		Bone    = 1,
		Control = 2,
		Space   = 3,
		MAX     = 4
	};

	/**
	 * Enum ControlRig.EControlRigState
	 */
	enum class EControlRigState : uint8_t
	{
		Init    = 0,
		Update  = 1,
		Invalid = 2,
		MAX     = 3
	};

	/**
	 * Enum ControlRig.EAimMode
	 */
	enum class EAimMode : uint8_t
	{
		AimAtTarget    = 0,
		OrientToTarget = 1,
		MAX            = 2
	};

	/**
	 * Enum ControlRig.EApplyTransformMode
	 */
	enum class EApplyTransformMode : uint8_t
	{
		Override = 0,
		Additive = 1,
		Max      = 2
	};

	/**
	 * Enum ControlRig.ERigUnitDebugPointMode
	 */
	enum class ERigUnitDebugPointMode : uint8_t
	{
		Point  = 0,
		Vector = 1,
		Max    = 2
	};

	/**
	 * Enum ControlRig.ERigUnitDebugTransformMode
	 */
	enum class ERigUnitDebugTransformMode : uint8_t
	{
		Point = 0,
		Axes  = 1,
		Box   = 2,
		Max   = 3
	};

	/**
	 * Enum ControlRig.ERigSwitchParentMode
	 */
	enum class ERigSwitchParentMode : uint8_t
	{
		World         = 0,
		DefaultParent = 1,
		ParentItem    = 2,
		MAX           = 3
	};

	/**
	 * Enum ControlRig.EControlRigCurveAlignment
	 */
	enum class EControlRigCurveAlignment : uint8_t
	{
		Front     = 0,
		Stretched = 1,
		MAX       = 2
	};

	/**
	 * Enum ControlRig.EControlRigVectorKind
	 */
	enum class EControlRigVectorKind : uint8_t
	{
		Direction = 0,
		Location  = 1,
		MAX       = 2
	};

	/**
	 * Enum ControlRig.ERBFKernelType
	 */
	enum class ERBFKernelType : uint8_t
	{
		Gaussian    = 0,
		Exponential = 1,
		Linear      = 2,
		Cubic       = 3,
		Quintic     = 4,
		MAX         = 5
	};

	/**
	 * Enum ControlRig.ERBFQuatDistanceType
	 */
	enum class ERBFQuatDistanceType : uint8_t
	{
		Euclidean  = 0,
		ArcLength  = 1,
		SwingAngle = 2,
		TwistAngle = 3,
		MAX        = 4
	};

	/**
	 * Enum ControlRig.ERBFVectorDistanceType
	 */
	enum class ERBFVectorDistanceType : uint8_t
	{
		Euclidean = 0,
		Manhattan = 1,
		ArcLength = 2,
		MAX       = 3
	};

	/**
	 * Enum ControlRig.EControlRigModifyBoneMode
	 */
	enum class EControlRigModifyBoneMode : uint8_t
	{
		OverrideLocal  = 0,
		OverrideGlobal = 1,
		AdditiveLocal  = 2,
		AdditiveGlobal = 3,
		Max            = 4
	};

	/**
	 * Enum ControlRig.EConstraintInterpType
	 */
	enum class EConstraintInterpType : uint8_t
	{
		Average  = 0,
		Shortest = 1,
		Max      = 2
	};

	/**
	 * Enum ControlRig.ERigUnitVisualDebugPointMode
	 */
	enum class ERigUnitVisualDebugPointMode : uint8_t
	{
		Point  = 0,
		Vector = 1,
		Max    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ControlRig.RigElementKey
	 * Size -> 0x000C
	 */
	struct FRigElementKey
	{
	public:
		ERigElementType                                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDIZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigControlElementCustomization
	 * Size -> 0x0020
	 */
	struct FRigControlElementCustomization
	{
	public:
		TArray<struct FRigElementKey>                              AvailableSpaces;                                         // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              RemovedSpaces;                                           // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigDrawInstruction
	 * Size -> 0x00D0
	 */
	struct FControlRigDrawInstruction
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigDrawSettings                                    PrimitiveType;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFY1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Positions;                                               // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GHW[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0040(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58F3[0x30];                                  // 0x00A0(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigDrawContainer
	 * Size -> 0x0018
	 */
	struct FControlRigDrawContainer
	{
	public:
		unsigned char                                              UnknownData_ZIUU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FControlRigDrawInstruction>                  Instructions;                                            // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceEntry
	 * Size -> 0x0020
	 */
	struct FRigInfluenceEntry
	{
	public:
		struct FRigElementKey                                      Source;                                                  // 0x0000(0x000C) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_91TO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              AffectedList;                                            // 0x0010(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceMap
	 * Size -> 0x0068
	 */
	struct FRigInfluenceMap
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FRigInfluenceEntry>                          Entries;                                                 // 0x0008(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<struct FRigElementKey, int32_t>                       KeyToIndex;                                              // 0x0018(0x0050) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceMapPerEvent
	 * Size -> 0x0060
	 */
	struct FRigInfluenceMapPerEvent
	{
	public:
		TArray<struct FRigInfluenceMap>                            Maps;                                                    // 0x0000(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<class FName, int32_t>                                 EventToIndex;                                            // 0x0010(0x0050) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedElement
	 * Size -> 0x00D0
	 */
	struct FControlRigComponentMappedElement
	{
	public:
		struct FComponentReference                                 ComponentReference;                                      // 0x0000(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    TransformIndex;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TransformName;                                           // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LS49[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ElementName;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigComponentMapDirection                           Direction;                                               // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDY1[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Offset;                                                  // 0x0050(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigComponentSpace                                  Space;                                                   // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLUC[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SceneComponent;                                          // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ElementIndex;                                            // 0x00C0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubIndex;                                                // 0x00C4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AM8P[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigShapeDefinition
	 * Size -> 0x00A0
	 */
	struct FControlRigShapeDefinition
	{
	public:
		class FName                                                ShapeName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StaticMesh[0x28];                                        // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTransform                                          Transform;                                               // 0x0030(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NKG[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CachedRigElement
	 * Size -> 0x0020
	 */
	struct FCachedRigElement
	{
	public:
		struct FRigElementKey                                      Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   Index;                                                   // 0x000C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PTAH[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ContainerVersion;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CAPW[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigPoseElement
	 * Size -> 0x00F0
	 */
	struct FRigPoseElement
	{
	public:
		struct FCachedRigElement                                   Index;                                                   // 0x0000(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          GlobalTransform;                                         // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0080(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurveValue;                                              // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Q0T[0xC];                                   // 0x00E4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigPose
	 * Size -> 0x0070
	 */
	struct FRigPose
	{
	public:
		TArray<struct FRigPoseElement>                             Elements;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    HierarchyTopologyVersion;                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PoseHash;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F24D[0x58];                                  // 0x0018(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigControlValueStorage
	 * Size -> 0x0084
	 */
	struct FRigControlValueStorage
	{
	public:
		float                                                      Float00;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float01;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float02;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float03;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float10;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float11;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float12;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float13;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float20;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float21;                                                 // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float22;                                                 // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float23;                                                 // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float30;                                                 // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float31;                                                 // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float32;                                                 // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float33;                                                 // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float00_3;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float01_3;                                               // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float02_3;                                               // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float03_3;                                               // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float10_3;                                               // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float11_3;                                               // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float12_3;                                               // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float13_3;                                               // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float20_3;                                               // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float21_3;                                               // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float22_3;                                               // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float23_3;                                               // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float30_3;                                               // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float31_3;                                               // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float32_3;                                               // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float33_3;                                               // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXXZ[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigControlValue
	 * Size -> 0x00F0
	 */
	struct FRigControlValue
	{
	public:
		struct FRigControlValueStorage                             FloatStorage;                                            // 0x0000(0x0084) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XEZK[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Storage;                                                 // 0x0090(0x0060) Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigControlCopy
	 * Size -> 0x02A0
	 */
	struct FRigControlCopy
	{
	public:
		unsigned char                                              UnknownData_Y86I[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigControlType                                            ControlType;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7XK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigControlValue                                    Value;                                                   // 0x0020(0x00F0) NoDestructor, NativeAccessSpecifierPublic
		struct FRigElementKey                                      ParentKey;                                               // 0x0110(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22CJ[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OffsetTransform;                                         // 0x0120(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          ParentTransform;                                         // 0x0180(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x01E0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          GlobalTransform;                                         // 0x0240(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigControlPose
	 * Size -> 0x0060
	 */
	struct FControlRigControlPose
	{
	public:
		TArray<struct FRigControlCopy>                             CopyOfControls;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZKM[0x50];                                  // 0x0010(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ChannelMapInfo
	 * Size -> 0x002C
	 */
	struct FChannelMapInfo
	{
	public:
		int32_t                                                    ControlIndex;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalChannelIndex;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChannelIndex;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentControlIndex;                                      // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ChannelTypeName;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoesHaveSpace;                                          // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RT1H[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpaceChannelIndex;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaskIndex;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CategoryIndex;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNMJ[0x4];                                   // 0x0028(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.EnumParameterNameAndCurve
	 * Size -> 0x00E8
	 */
	struct FEnumParameterNameAndCurve
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneByteChannel                              ParameterCurve;                                          // 0x0008(0x00E0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.IntegerParameterNameAndCurve
	 * Size -> 0x00E0
	 */
	struct FIntegerParameterNameAndCurve
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneIntegerChannel                           ParameterCurve;                                          // 0x0008(0x00D8) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
	 * Size -> 0x0010
	 */
	struct FMovieSceneControlRigSpaceBaseKey
	{
	public:
		EMovieSceneControlRigSpaceType                             SpaceType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOJW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      ControlRigElement;                                       // 0x0004(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
	 * Size -> 0x0098 (FullSize[0x00E8] - InheritedSize[0x0050])
	 */
	struct FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                KeyTimes;                                                // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneControlRigSpaceBaseKey>           KeyValues;                                               // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VC9E[0x78];                                  // 0x0070(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.SpaceControlNameAndChannel
	 * Size -> 0x00F0
	 */
	struct FSpaceControlNameAndChannel
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneControlRigSpaceChannel                   SpaceCurve;                                              // 0x0008(0x00E8) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit : public FRigVMStruct
	{	};

	/**
	 * ScriptStruct ControlRig.ControlRigExecuteContext
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FControlRigExecuteContext : public FRigVMExecuteContext
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnitMutable
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnitMutable : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_Q6U9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x00C0) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ConstraintNodeData
	 * Size -> 0x0140
	 */
	struct FConstraintNodeData
	{
	public:
		struct FTransform                                          RelativeParent;                                          // 0x0000(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintOffset                                   ConstraintOffset;                                        // 0x0060(0x00C0) NoDestructor, NativeAccessSpecifierPublic
		class FName                                                LinkedNode;                                              // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransformConstraint>                        Constraints;                                             // 0x0128(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6B0F[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimationHierarchy
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	struct FAnimationHierarchy : public FNodeHierarchyWithUserData
	{
	public:
		TArray<struct FConstraintNodeData>                         UserData;                                                // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigIOSettings
	 * Size -> 0x0002
	 */
	struct FControlRigIOSettings
	{
	public:
		bool                                                       bUpdatePose;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateCurves;                                           // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRigBase
	 * Size -> 0x0200 (FullSize[0x0258] - InheritedSize[0x0058])
	 */
	struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0058(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bResetInputPoseToInitial;                                // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTransferInputPose;                                      // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTransferInputCurves;                                    // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTransferPoseInGlobalSpace;                              // 0x006B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_36XW[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneReference>                              InputBonesToTransfer;                                    // 0x0070(0x0010) Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0ZRS[0x1C0];                                 // 0x0080(0x01C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UNodeMappingContainer>                NodeMappingContainer;                                    // 0x0240(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FControlRigIOSettings                               InputSettings;                                           // 0x0248(0x0002) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FControlRigIOSettings                               OutputSettings;                                          // 0x024A(0x0002) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bExecute;                                                // 0x024C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R2TD[0xB];                                   // 0x024D(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRig
	 * Size -> 0x0200 (FullSize[0x0458] - InheritedSize[0x0258])
	 */
	struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0258(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UControlRig*                                         ControlRig;                                              // 0x0260(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Alpha;                                                   // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x026C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bAlphaBoolEnabled : 1;                                   // 0x026D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bSetRefPoseFromSkeleton : 1;                             // 0x026D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JVAO[0x2];                                   // 0x026E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0270(0x0008) Edit, NoDestructor, NativeAccessSpecifierPrivate
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0278(0x0048) Edit, NoDestructor, NativeAccessSpecifierPrivate
		class FName                                                AlphaCurveName;                                          // 0x02C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x02C8(0x0030) Edit, NoDestructor, NativeAccessSpecifierPrivate
		TMap<class FName, class FName>                             InputMapping;                                            // 0x02F8(0x0050) NativeAccessSpecifierPrivate
		TMap<class FName, class FName>                             OutputMapping;                                           // 0x0348(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VVPG[0xB0];                                  // 0x0398(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODThreshold;                                            // 0x0448(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0Q1B[0xC];                                   // 0x044C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
	{
	public:
		TWeakObjectPtr<class UControlRig>                          ControlRig;                                              // 0x0258(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.ControlRigAnimInstanceProxy
	 * Size -> 0x00A0 (FullSize[0x0920] - InheritedSize[0x0880])
	 */
	struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_WTTC[0xA0];                                  // 0x0880(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedComponent
	 * Size -> 0x0018
	 */
	struct FControlRigComponentMappedComponent
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ElementName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigComponentMapDirection                           Direction;                                               // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDAC[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedBone
	 * Size -> 0x0010
	 */
	struct FControlRigComponentMappedBone
	{
	public:
		class FName                                                Source;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Target;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedCurve
	 * Size -> 0x0010
	 */
	struct FControlRigComponentMappedCurve
	{
	public:
		class FName                                                Source;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Target;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigDrawInterface
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FControlRigDrawInterface : public FControlRigDrawContainer
	{	};

	/**
	 * ScriptStruct ControlRig.ControlShapeActorCreationParam
	 * Size -> 0x01B0
	 */
	struct FControlShapeActorCreationParam
	{
	public:
		unsigned char                                              UnknownData_566P[0x1B0];                                 // 0x0000(0x01B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRigInputPose
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           InputPose;                                               // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UV5[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigLayerInstanceProxy
	 * Size -> 0x00A0 (FullSize[0x0920] - InheritedSize[0x0880])
	 */
	struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_K31R[0xA0];                                  // 0x0880(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRFourPointBezier
	 * Size -> 0x0060
	 */
	struct FCRFourPointBezier
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0018(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             C;                                                       // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             D;                                                       // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReference
	 * Size -> 0x0008
	 */
	struct FControlRigSequenceObjectReference
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReferences
	 * Size -> 0x0010
	 */
	struct FControlRigSequenceObjectReferences
	{
	public:
		TArray<struct FControlRigSequenceObjectReference>          Array;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
	 * Size -> 0x0020
	 */
	struct FControlRigSequenceObjectReferenceMap
	{
	public:
		TArray<struct FGuid>                                       BindingIds;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FControlRigSequenceObjectReferences>         References;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSettingsPerPinBool
	 * Size -> 0x0050
	 */
	struct FControlRigSettingsPerPinBool
	{
	public:
		TMap<class FString, bool>                                  Values;                                                  // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigValidationContext
	 * Size -> 0x0028
	 */
	struct FControlRigValidationContext
	{
	public:
		unsigned char                                              UnknownData_L7SN[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimContainer
	 * Size -> 0x0018
	 */
	struct FCRSimContainer
	{
	public:
		unsigned char                                              UnknownData_2LTK[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeStep;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeftForStep;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5CM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimLinearSpring
	 * Size -> 0x0010
	 */
	struct FCRSimLinearSpring
	{
	public:
		int32_t                                                    SubjectA;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubjectB;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Coefficient;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Equilibrium;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.CRSimPoint
	 * Size -> 0x0040
	 */
	struct FCRSimPoint
	{
	public:
		float                                                      Mass;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearDamping;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InheritMotion;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearVelocity;                                          // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.CRSimPointConstraint
	 * Size -> 0x0040
	 */
	struct FCRSimPointConstraint
	{
	public:
		ECRSimConstraintType                                       Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KAGL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubjectA;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubjectB;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TH99[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DataA;                                                   // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DataB;                                                   // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.CRSimPointForce
	 * Size -> 0x0028
	 */
	struct FCRSimPointForce
	{
	public:
		ECRSimPointForceType                                       ForceType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5L8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Coefficient;                                             // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalize;                                              // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KRE[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimSoftCollision
	 * Size -> 0x0080
	 */
	struct FCRSimSoftCollision
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ECRSimSoftCollisionType                                    ShapeType;                                               // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVR8[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDistance;                                         // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDistance;                                         // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  FalloffType;                                             // 0x006C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4LX[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Coefficient;                                             // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInverted;                                               // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGZI[0xB];                                   // 0x0075(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimPointContainer
	 * Size -> 0x0060 (FullSize[0x0078] - InheritedSize[0x0018])
	 */
	struct FCRSimPointContainer : public FCRSimContainer
	{
	public:
		TArray<struct FCRSimPoint>                                 Points;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimLinearSpring>                          Springs;                                                 // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointForce>                            Forces;                                                  // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimSoftCollision>                         CollisionVolumes;                                        // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointConstraint>                       Constraints;                                             // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPoint>                                 PreviousStep;                                            // 0x0068(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigInstanceData
	 * Size -> 0x0118 (FullSize[0x0120] - InheritedSize[0x0008])
	 */
	struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
	{
	public:
		bool                                                       bAdditive;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyBoneFilter;                                        // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KREQ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputBlendPose                                     BoneFilter;                                              // 0x0010(0x0010) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Weight;                                                  // 0x0020(0x00E8) NativeAccessSpecifierPublic
		struct FMovieSceneEvaluationOperand                        Operand;                                                 // 0x0108(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IA0U[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
	{
	public:
		TArray<struct FEnumParameterNameAndCurve>                  Enums;                                                   // 0x0080(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FIntegerParameterNameAndCurve>               Integers;                                                // 0x0090(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FSpaceControlNameAndChannel>                 Spaces;                                                  // 0x00A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigElement
	 * Size -> 0x0018
	 */
	struct FRigElement
	{
	public:
		unsigned char                                              UnknownData_1RLI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60WQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBone
	 * Size -> 0x0158 (FullSize[0x0170] - InheritedSize[0x0018])
	 */
	struct FRigBone : public FRigElement
	{
	public:
		class FName                                                ParentName;                                              // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FANP[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0030(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          GlobalTransform;                                         // 0x0090(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x00F0(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Dependents;                                              // 0x0150(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		ERigBoneType                                               Type;                                                    // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVY8[0xF];                                   // 0x0161(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBoneHierarchy
	 * Size -> 0x0010
	 */
	struct FRigBoneHierarchy
	{
	public:
		TArray<struct FRigBone>                                    Bones;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigControl
	 * Size -> 0x04F8 (FullSize[0x0510] - InheritedSize[0x0018])
	 */
	struct FRigControl : public FRigElement
	{
	public:
		ERigControlType                                            ControlType;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPWE[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DisplayName;                                             // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParentName;                                              // 0x0024(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SpaceName;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpaceIndex;                                              // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EC1D[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OffsetTransform;                                         // 0x0040(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    InitialValue;                                            // 0x00A0(0x00F0) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    Value;                                                   // 0x0190(0x00F0) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic
		ERigControlAxis                                            PrimaryAxis;                                             // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurve;                                                // 0x0281(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimatable;                                             // 0x0282(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitTranslation;                                       // 0x0283(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitRotation;                                          // 0x0284(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitScale;                                             // 0x0285(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x0286(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IK0M[0x9];                                   // 0x0287(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigControlValue                                    MinimumValue;                                            // 0x0290(0x00F0) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    MaximumValue;                                            // 0x0380(0x00F0) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bGizmoEnabled;                                           // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGizmoVisible;                                           // 0x0471(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FP4I[0x2];                                   // 0x0472(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GizmoName;                                               // 0x0474(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V263[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GizmoTransform;                                          // 0x0480(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        GizmoColor;                                              // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Dependents;                                              // 0x04F0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       bIsTransientControl;                                     // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4I6C[0x7];                                   // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               ControlEnum;                                             // 0x0508(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigControlHierarchy
	 * Size -> 0x0010
	 */
	struct FRigControlHierarchy
	{
	public:
		TArray<struct FRigControl>                                 Controls;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigCurve
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FRigCurve : public FRigElement
	{
	public:
		float                                                      Value;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_50E8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigCurveContainer
	 * Size -> 0x0010
	 */
	struct FRigCurveContainer
	{
	public:
		TArray<struct FRigCurve>                                   Curves;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigTransformStackEntry
	 * Size -> 0x00F0
	 */
	struct FRigTransformStackEntry
	{
	public:
		struct FRigElementKey                                      Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigTransformStackEntryType                                EntryType;                                               // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigTransformType                                          TransformType;                                           // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1Z8[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OldTransform;                                            // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          NewTransform;                                            // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectChildren;                                         // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WO83[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Callstack;                                               // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZLN3[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigSpace
	 * Size -> 0x00D8 (FullSize[0x00F0] - InheritedSize[0x0018])
	 */
	struct FRigSpace : public FRigElement
	{
	public:
		ERigSpaceType                                              SpaceType;                                               // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOXA[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentName;                                              // 0x001C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCFI[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0030(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0090(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigSpaceHierarchy
	 * Size -> 0x0010
	 */
	struct FRigSpaceHierarchy
	{
	public:
		TArray<struct FRigSpace>                                   Spaces;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyContainer
	 * Size -> 0x0040
	 */
	struct FRigHierarchyContainer
	{
	public:
		struct FRigBoneHierarchy                                   BoneHierarchy;                                           // 0x0000(0x0010) NativeAccessSpecifierPublic
		struct FRigSpaceHierarchy                                  SpaceHierarchy;                                          // 0x0010(0x0010) NativeAccessSpecifierPublic
		struct FRigControlHierarchy                                ControlHierarchy;                                        // 0x0020(0x0010) NativeAccessSpecifierPublic
		struct FRigCurveContainer                                  CurveContainer;                                          // 0x0030(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyRef
	 * Size -> 0x0001
	 */
	struct FRigHierarchyRef
	{
	public:
		unsigned char                                              UnknownData_31OF[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigControlLimitEnabled
	 * Size -> 0x0002
	 */
	struct FRigControlLimitEnabled
	{
	public:
		bool                                                       bMinimum;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaximum;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigControlModifiedContext
	 * Size -> 0x0014
	 */
	struct FRigControlModifiedContext
	{
	public:
		unsigned char                                              UnknownData_YID2[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigElementKeyCollection
	 * Size -> 0x0010
	 */
	struct FRigElementKeyCollection
	{
	public:
		TArray<struct FRigElementKey>                              Keys;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigEventContext
	 * Size -> 0x0028
	 */
	struct FRigEventContext
	{
	public:
		unsigned char                                              UnknownData_B9KL[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigMirrorSettings
	 * Size -> 0x0028
	 */
	struct FRigMirrorSettings
	{
	public:
		EAxis                                                      MirrorAxis;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      AxisToFlip;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UR5H[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SearchString;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReplaceString;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigComputedTransform
	 * Size -> 0x0070
	 */
	struct FRigComputedTransform
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPZX[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigLocalAndGlobalTransform
	 * Size -> 0x00E0
	 */
	struct FRigLocalAndGlobalTransform
	{
	public:
		struct FRigComputedTransform                               Local;                                                   // 0x0000(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FRigComputedTransform                               Global;                                                  // 0x0070(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigCurrentAndInitialTransform
	 * Size -> 0x01C0
	 */
	struct FRigCurrentAndInitialTransform
	{
	public:
		struct FRigLocalAndGlobalTransform                         Current;                                                 // 0x0000(0x00E0) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FRigLocalAndGlobalTransform                         Initial;                                                 // 0x00E0(0x00E0) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigBaseElement
	 * Size -> 0x0050
	 */
	struct FRigBaseElement
	{
	public:
		unsigned char                                              UnknownData_JKLG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Key;                                                     // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Index;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SubIndex;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSelected;                                               // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SR9Z[0x33];                                  // 0x001D(0x0033) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigTransformElement
	 * Size -> 0x0200 (FullSize[0x0250] - InheritedSize[0x0050])
	 */
	struct FRigTransformElement : public FRigBaseElement
	{
	public:
		struct FRigCurrentAndInitialTransform                      Pose;                                                    // 0x0050(0x01C0) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HLN[0x40];                                  // 0x0210(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigSingleParentElement
	 * Size -> 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
	 */
	struct FRigSingleParentElement : public FRigTransformElement
	{
	public:
		unsigned char                                              UnknownData_QYV4[0x8];                                   // 0x0250(0x0008) Fix size for supers
	};

	/**
	 * ScriptStruct ControlRig.RigElementWeight
	 * Size -> 0x000C
	 */
	struct FRigElementWeight
	{
	public:
		float                                                      Location;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigElementParentConstraint
	 * Size -> 0x0090
	 */
	struct FRigElementParentConstraint
	{
	public:
		unsigned char                                              UnknownData_R4MZ[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigMultiParentElement
	 * Size -> 0x02C0 (FullSize[0x0510] - InheritedSize[0x0250])
	 */
	struct FRigMultiParentElement : public FRigTransformElement
	{
	public:
		struct FRigCurrentAndInitialTransform                      Parent;                                                  // 0x0250(0x01C0) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2N8B[0x100];                                 // 0x0410(0x0100) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBoneElement
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	struct FRigBoneElement : public FRigSingleParentElement
	{
	public:
		ERigBoneType                                               BoneType;                                                // 0x0258(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6VX[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigNullElement
	 * Size -> 0x0000 (FullSize[0x0510] - InheritedSize[0x0510])
	 */
	struct FRigNullElement : public FRigMultiParentElement
	{	};

	/**
	 * ScriptStruct ControlRig.RigControlSettings
	 * Size -> 0x0260
	 */
	struct FRigControlSettings
	{
	public:
		ERigControlType                                            ControlType;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TF4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DisplayName;                                             // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigControlAxis                                            PrimaryAxis;                                             // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurve;                                                // 0x000D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimatable;                                             // 0x000E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQMT[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigControlLimitEnabled>                     LimitEnabled;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70E5[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigControlValue                                    MinimumValue;                                            // 0x0030(0x00F0) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    MaximumValue;                                            // 0x0120(0x00F0) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShapeEnabled;                                           // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShapeVisible;                                           // 0x0211(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2M7[0x2];                                   // 0x0212(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ShapeName;                                               // 0x0214(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShapeColor;                                              // 0x021C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTransientControl;                                     // 0x022C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Z3R[0x3];                                   // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               ControlEnum;                                             // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigControlElementCustomization                     Customization;                                           // 0x0238(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_076H[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigControlElement
	 * Size -> 0x05E0 (FullSize[0x0AF0] - InheritedSize[0x0510])
	 */
	struct FRigControlElement : public FRigMultiParentElement
	{
	public:
		struct FRigControlSettings                                 Settings;                                                // 0x0510(0x0260) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FRigCurrentAndInitialTransform                      Offset;                                                  // 0x0770(0x01C0) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FRigCurrentAndInitialTransform                      Shape;                                                   // 0x0930(0x01C0) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigCurveElement
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FRigCurveElement : public FRigBaseElement
	{
	public:
		unsigned char                                              UnknownData_J18I[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigRigidBodySettings
	 * Size -> 0x0004
	 */
	struct FRigRigidBodySettings
	{
	public:
		float                                                      Mass;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigRigidBodyElement
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	struct FRigRigidBodyElement : public FRigSingleParentElement
	{
	public:
		struct FRigRigidBodySettings                               Settings;                                                // 0x0258(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PGV[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigReferenceElement
	 * Size -> 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
	 */
	struct FRigReferenceElement : public FRigSingleParentElement
	{
	public:
		unsigned char                                              UnknownData_JZ7F[0x8];                                   // 0x0258(0x0008) Fix Super Size
		unsigned char                                              UnknownData_O1MH[0x10];                                  // 0x0260(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
	 * Size -> 0x0200
	 */
	struct FRigHierarchyCopyPasteContentPerElement
	{
	public:
		struct FRigElementKey                                      Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMSJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Content;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Parents;                                                 // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRigElementWeight>                           ParentWeights;                                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigCurrentAndInitialTransform                      Pose;                                                    // 0x0040(0x01C0) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyCopyPasteContent
	 * Size -> 0x0050
	 */
	struct FRigHierarchyCopyPasteContent
	{
	public:
		TArray<struct FRigHierarchyCopyPasteContentPerElement>     Elements;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ERigElementType>                                    Types;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Contents;                                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  LocalTransforms;                                         // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  GlobalTransforms;                                        // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceEntryModifier
	 * Size -> 0x0010
	 */
	struct FRigInfluenceEntryModifier
	{
	public:
		TArray<struct FRigElementKey>                              AffectedList;                                            // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SimBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SimBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateBase : public FRigUnit_SimBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatAdd : public FRigUnit_AccumulateBase
	{
	public:
		float                                                      Increment;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValue;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POOS[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYNV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorAdd : public FRigUnit_AccumulateBase
	{
	public:
		struct FVector                                             Increment;                                               // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialValue;                                            // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZEF[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedValue;                                        // 0x0058(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatMul : public FRigUnit_AccumulateBase
	{
	public:
		float                                                      Multiplier;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValue;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0YN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RG77[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorMul : public FRigUnit_AccumulateBase
	{
	public:
		struct FVector                                             Multiplier;                                              // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialValue;                                            // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C13F[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedValue;                                        // 0x0058(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateQuatMul : public FRigUnit_AccumulateBase
	{
	public:
		unsigned char                                              UnknownData_8D2P[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Multiplier;                                              // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               InitialValue;                                            // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlipOrder;                                              // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0051(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4DK[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0060(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               AccumulatedValue;                                        // 0x0080(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
	 * Size -> 0x0198 (FullSize[0x01A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateTransformMul : public FRigUnit_AccumulateBase
	{
	public:
		unsigned char                                              UnknownData_CETX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Multiplier;                                              // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitialValue;                                            // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlipOrder;                                              // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x00D1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXXA[0xE];                                   // 0x00D2(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          AccumulatedValue;                                        // 0x0140(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatLerp : public FRigUnit_AccumulateBase
	{
	public:
		float                                                      TargetValue;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValue;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OT7U[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorLerp : public FRigUnit_AccumulateBase
	{
	public:
		struct FVector                                             TargetValue;                                             // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialValue;                                            // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EY3[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedValue;                                        // 0x0058(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateQuatLerp : public FRigUnit_AccumulateBase
	{
	public:
		unsigned char                                              UnknownData_30XQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               TargetValue;                                             // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               InitialValue;                                            // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EO8Y[0xB];                                   // 0x0055(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0060(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               AccumulatedValue;                                        // 0x0080(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
	 * Size -> 0x0198 (FullSize[0x01A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateTransformLerp : public FRigUnit_AccumulateBase
	{
	public:
		unsigned char                                              UnknownData_ZNFC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TargetValue;                                             // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitialValue;                                            // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x00D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSAQ[0xB];                                   // 0x00D5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          AccumulatedValue;                                        // 0x0140(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatRange : public FRigUnit_AccumulateBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedMinimum;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedMaximum;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAE7[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorRange : public FRigUnit_AccumulateBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Minimum;                                                 // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Maximum;                                                 // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedMinimum;                                      // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedMaximum;                                      // 0x0068(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AddBoneTransform
	 * Size -> 0x00A0 (FullSize[0x0170] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_AddBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD7S[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPostMultiply;                                           // 0x0144(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0145(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLX2[0x2];                                   // 0x0146(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x0148(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_54RM[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone_Target
	 * Size -> 0x0048
	 */
	struct FRigUnit_AimBone_Target
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQIM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Axis;                                                    // 0x0008(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Target;                                                  // 0x0020(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      Kind;                                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R34Q[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Space;                                                   // 0x003C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6Q0[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimItem_Target
	 * Size -> 0x0048
	 */
	struct FRigUnit_AimItem_Target
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XN6N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Axis;                                                    // 0x0008(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Target;                                                  // 0x0020(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      Kind;                                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z5QV[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Space;                                                   // 0x003C(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
	 * Size -> 0x0070
	 */
	struct FRigUnit_AimBone_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76YC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0X44[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HighlevelBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HighlevelBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBoneMath
	 * Size -> 0x0218 (FullSize[0x0220] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
	{
	public:
		unsigned char                                              UnknownData_DHE4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InputTransform;                                          // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimItem_Target                             Primary;                                                 // 0x0070(0x0048) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimItem_Target                             Secondary;                                               // 0x00B8(0x0048) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79VW[0xC];                                   // 0x0104(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0110(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x0170(0x0070) NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   PrimaryCachedSpace;                                      // 0x01E0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   SecondaryCachedSpace;                                    // 0x0200(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone
	 * Size -> 0x0170 (FullSize[0x0240] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                bone;                                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_Target                             Primary;                                                 // 0x00D8(0x0048) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_Target                             Secondary;                                               // 0x0120(0x0048) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0168(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x016C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFG8[0x3];                                   // 0x016D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x0170(0x0070) NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBoneIndex;                                         // 0x01E0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   PrimaryCachedSpace;                                      // 0x0200(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   SecondaryCachedSpace;                                    // 0x0220(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimItem
	 * Size -> 0x0180 (FullSize[0x0250] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZOB[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             Primary;                                                 // 0x00E0(0x0048) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimItem_Target                             Secondary;                                               // 0x0128(0x0048) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0170(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEDQ[0xC];                                   // 0x0174(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x0180(0x0070) NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItem;                                              // 0x01F0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   PrimaryCachedSpace;                                      // 0x0210(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   SecondaryCachedSpace;                                    // 0x0230(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.AimTarget
	 * Size -> 0x0090
	 */
	struct FAimTarget
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DC6J[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AlignVector;                                             // 0x0070(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1HG[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
	 * Size -> 0x0010
	 */
	struct FRigUnit_AimConstraint_WorkData
	{
	public:
		TArray<struct FConstraintData>                             ConstraintData;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimConstraint
	 * Size -> 0x0070 (FullSize[0x0140] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_AimConstraint : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAimMode                                                   AimMode;                                                 // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAimMode                                                   UpMode;                                                  // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UAK1[0x6];                                   // 0x00DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AimVector;                                               // 0x00E0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UpVector;                                                // 0x00F8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAimTarget>                                  AimTargets;                                              // 0x0110(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAimTarget>                                  UpTargets;                                               // 0x0120(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimConstraint_WorkData                     WorkData;                                                // 0x0130(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AlphaInterp
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bias;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMapRange;                                               // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8OY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputRange                                         InRange;                                                 // 0x0018(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FInputRange                                         OutRange;                                                // 0x0020(0x0008) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClampResult;                                            // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUVN[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClampMin;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMax;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpResult;                                           // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDP8[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpSpeedIncreasing;                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedDecreasing;                                   // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                ScaleBiasClamp;                                          // 0x0044(0x0030) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A413[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AlphaInterpVector
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bias;                                                    // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMapRange;                                               // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SR1Y[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputRange                                         InRange;                                                 // 0x002C(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FInputRange                                         OutRange;                                                // 0x0034(0x0008) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClampResult;                                            // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MAK[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClampMin;                                                // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMax;                                                // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpResult;                                           // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCER[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpSpeedIncreasing;                                   // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedDecreasing;                                   // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOPL[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0058(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                ScaleBiasClamp;                                          // 0x0070(0x0030) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimEasingType
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
	{
	public:
		EControlRigAnimEasingType                                  Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZ68[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimEasing
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  Type;                                                    // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4VS[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SourceMinimum;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SKT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5OY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0010(0x0088) NativeAccessSpecifierPublic
		float                                                      SourceMinimum;                                           // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXLI[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimRichCurve
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
	{
	public:
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0008(0x0088) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ApplyFK
	 * Size -> 0x00F0 (FullSize[0x01C0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ApplyFK : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8234[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x0140(0x0009) Edit, NoDestructor, NativeAccessSpecifierPublic
		EApplyTransformMode                                        ApplyTransformMode;                                      // 0x0149(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        ApplyTransformSpace;                                     // 0x014A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKVY[0x5];                                   // 0x014B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x0150(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BaseJoint;                                               // 0x01B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIUV[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BeginExecution
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BeginExecution : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_8383[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x00C0) Edit, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.BlendTarget
	 * Size -> 0x0070
	 */
	struct FBlendTarget
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2S7B[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BlendTransform
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BlendTransform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_NOWS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Source;                                                  // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBlendTarget>                                Targets;                                                 // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0080(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
	 * Size -> 0x000C
	 */
	struct FRigUnit_BoneHarmonics_BoneTarget
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
	 * Size -> 0x0010
	 */
	struct FRigUnit_Harmonics_TargetItem
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
	 * Size -> 0x0028
	 */
	struct FRigUnit_BoneHarmonics_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             WaveTime;                                                // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics
	 * Size -> 0x00C0 (FullSize[0x0190] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_BoneHarmonics_BoneTarget>           Bones;                                                   // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             WaveSpeed;                                               // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveFrequency;                                           // 0x00F8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0110(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x0128(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x0140(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  WaveEase;                                                // 0x0158(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WI5O[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaveMinimum;                                             // 0x015C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrder;                                           // 0x0164(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0165(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WPE[0x2];                                   // 0x0166(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_BoneHarmonics_WorkData                     WorkData;                                                // 0x0168(0x0028) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemHarmonics
	 * Size -> 0x00C0 (FullSize[0x0190] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_Harmonics_TargetItem>               Targets;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             WaveSpeed;                                               // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveFrequency;                                           // 0x00F8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0110(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x0128(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x0140(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  WaveEase;                                                // 0x0158(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2S1[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaveMinimum;                                             // 0x015C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrder;                                           // 0x0164(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E43N[0x3];                                   // 0x0165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_BoneHarmonics_WorkData                     WorkData;                                                // 0x0168(0x0028) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Item
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Item : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMLI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BoneName : public FRigUnit
	{
	public:
		class FName                                                bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpaceName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpaceName : public FRigUnit
	{
	public:
		class FName                                                Space;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ControlName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ControlName : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
	 * Size -> 0x000C
	 */
	struct FRigUnit_CCDIK_RotationLimit
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Limit;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
	 * Size -> 0x0010
	 */
	struct FRigUnit_CCDIK_RotationLimitPerItem
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Limit;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
	 * Size -> 0x0060
	 */
	struct FRigUnit_CCDIK_WorkData
	{
	public:
		TArray<struct FCCDIKChainLink>                             Chain;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RotationLimitIndex;                                      // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              RotationLimitsPerItem;                                   // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffector;                                          // 0x0040(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x014C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HC0Q[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseRotationLimit;                                       // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGJ8[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_CCDIK_RotationLimit>                RotationLimits;                                          // 0x0158(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_552Y[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_CCDIK_WorkData                             WorkData;                                                // 0x0170(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIKPerItem
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x00D0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x014C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71W0[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseRotationLimit;                                       // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5DQ[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_CCDIK_RotationLimitPerItem>         RotationLimits;                                          // 0x0158(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BM0L[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_CCDIK_WorkData                             WorkData;                                                // 0x0170(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIKItemArray
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x014C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TBYW[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseRotationLimit;                                       // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWEU[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_CCDIK_RotationLimitPerItem>         RotationLimits;                                          // 0x0158(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZ2N[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_CCDIK_WorkData                             WorkData;                                                // 0x0170(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
	 * Size -> 0x0048
	 */
	struct FRigUnit_ChainHarmonics_Reach
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CY53[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ReachTarget;                                             // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ReachAxis;                                               // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachMinimum;                                            // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachMaximum;                                            // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  ReachEase;                                               // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NBXL[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
	 * Size -> 0x0078
	 */
	struct FRigUnit_ChainHarmonics_Wave
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CST[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaveFrequency;                                           // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMinimum;                                             // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  WaveEase;                                                // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DGZ[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
	 * Size -> 0x0058
	 */
	struct FRigUnit_ChainHarmonics_Pendulum
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JGG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PendulumStiffness;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PendulumGravity;                                         // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumBlend;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumDrag;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumMinimum;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumMaximum;                                         // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  PendulumEase;                                            // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CI3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             UnwindAxis;                                              // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnwindMinimum;                                           // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnwindMaximum;                                           // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
	 * Size -> 0x0098
	 */
	struct FRigUnit_ChainHarmonics_WorkData
	{
	public:
		struct FVector                                             Time;                                                    // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           Items;                                                   // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Ratio;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     LocalTip;                                                // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumTip;                                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumPosition;                                        // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumVelocity;                                        // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     HierarchyLine;                                           // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VelocityLines;                                           // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics
	 * Size -> 0x02D0 (FullSize[0x03A0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                ChainRoot;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Speed;                                                   // 0x00D8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Reach                       Reach;                                                   // 0x00F0(0x0048) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Wave                        Wave;                                                    // 0x0138(0x0078) NoDestructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  WaveCurve;                                               // 0x01B0(0x0088) NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Pendulum                    Pendulum;                                                // 0x0238(0x0058) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0290(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TX9[0xF];                                   // 0x0291(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DrawWorldOffset;                                         // 0x02A0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_WorkData                    WorkData;                                                // 0x0300(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLOU[0x8];                                   // 0x0398(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
	 * Size -> 0x02D0 (FullSize[0x03A0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      ChainRoot;                                               // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PU0F[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Speed;                                                   // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Reach                       Reach;                                                   // 0x00F8(0x0048) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Wave                        Wave;                                                    // 0x0140(0x0078) NoDestructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  WaveCurve;                                               // 0x01B8(0x0088) NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Pendulum                    Pendulum;                                                // 0x0240(0x0058) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0298(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TJV[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DrawWorldOffset;                                         // 0x02A0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_WorkData                    WorkData;                                                // 0x0300(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQEL[0x8];                                   // 0x0398(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionChain
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKey                                      FirstItem;                                               // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      LastItem;                                                // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Reverse;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UU9W[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0038(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JFK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionChainArray
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKey                                      FirstItem;                                               // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      LastItem;                                                // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Reverse;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCRO[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0038(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGMS[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionNameSearch
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
	{
	public:
		class FName                                                PartialName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            TypeToSearch;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AYK5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQN0[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
	{
	public:
		class FName                                                PartialName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            TypeToSearch;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2EDT[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVRF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionChildren
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKey                                      Parent;                                                  // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeParent;                                          // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            TypeToSearch;                                            // 0x0016(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00ZY[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9YF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKey                                      Parent;                                                  // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeParent;                                          // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            TypeToSearch;                                            // 0x0016(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6P5[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGPG[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Old;                                                     // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveInvalidItems;                                      // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDuplicates;                                        // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMRZ[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0030(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0040(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8O72[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                Old;                                                     // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveInvalidItems;                                      // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDuplicates;                                        // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JRAQ[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Result;                                                  // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0040(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9P1O[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionItems
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAllowDuplicates;                                        // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3WS[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0020(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionGetItems
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ParentIndices;                                           // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ParentIndices;                                           // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionUnion
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            A;                                                       // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            B;                                                       // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDuplicates;                                        // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RW6H[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0030(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionIntersection
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            A;                                                       // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            B;                                                       // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Collection;                                              // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionDifference
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            A;                                                       // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            B;                                                       // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Collection;                                              // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionReverse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Reversed;                                                // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionCount
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHAF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x001C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionLoop
	 * Size -> 0x00F0 (FullSize[0x01C0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x00D0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x00E0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Continue;                                                // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8T0[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           Completed;                                               // 0x0100(0x00C0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionAddItem
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x0018(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OVA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Result;                                                  // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Control
	 * Size -> 0x0178 (FullSize[0x0180] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Control : public FRigUnit
	{
	public:
		struct FEulerTransform                                     Transform;                                               // 0x0008(0x0048) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Base;                                                    // 0x0050(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitTransform;                                           // 0x00B0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0110(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x0170(0x0009) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1G2[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Control_StaticMesh
	 * Size -> 0x0060 (FullSize[0x01E0] - InheritedSize[0x0180])
	 */
	struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
	{
	public:
		struct FTransform                                          MeshTransform;                                           // 0x0180(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertTransform
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertTransform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_7VYW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Input;                                                   // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEulerTransform                                     Result;                                                  // 0x0070(0x0048) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAU8[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertEulerTransform : public FRigUnit
	{
	public:
		struct FEulerTransform                                     Input;                                                   // 0x0008(0x0048) NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0050(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertRotation
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertRotation : public FRigUnit
	{
	public:
		struct FRotator                                            Input;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertQuaternion
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertQuaternion : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_RCNR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTXH[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertVectorToRotation : public FRigUnit
	{
	public:
		struct FVector                                             Input;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
	{
	public:
		struct FVector                                             Input;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertRotationToVector : public FRigUnit
	{
	public:
		struct FRotator                                            Input;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_372H[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y13K[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToSwingAndTwist : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_GG2A[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E47G[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Swing;                                                   // 0x0050(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Twist;                                                   // 0x0070(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBaseMutable
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBezier
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x00D0(0x0060) NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinimumU;                                                // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumU;                                                // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0138(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0LF[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0160(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOBC[0xF];                                   // 0x01C1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x00D0(0x0060) NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinimumU;                                                // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumU;                                                // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0138(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x0150(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2E1Y[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0160(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GIEK[0xF];                                   // 0x01C1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugHierarchy
	 * Size -> 0x0090 (FullSize[0x0160] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
	{
	public:
		float                                                      Scale;                                                   // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00D4(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CT0T[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00F0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISBV[0xF];                                   // 0x0151(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugPose
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugPose : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x00D0(0x0070) NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0144(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0154(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVBM[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0160(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJ1Y[0xF];                                   // 0x01C1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugLine
	 * Size -> 0x00C0 (FullSize[0x0190] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FVector                                             A;                                                       // 0x00D0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x00E8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0100(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0114(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64WE[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0120(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0180(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWT9[0xF];                                   // 0x0181(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
	 * Size -> 0x00C0 (FullSize[0x0190] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FVector                                             A;                                                       // 0x00D0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x00E8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0100(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x0114(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0120(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0180(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHAD[0xF];                                   // 0x0181(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugLineStrip
	 * Size -> 0x00A0 (FullSize[0x0170] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00E0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x00F4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AADT[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0100(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJQW[0xF];                                   // 0x0161(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
	 * Size -> 0x00A0 (FullSize[0x0170] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00E0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x00F4(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0100(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1ZK[0xF];                                   // 0x0161(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugPoint
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigUnitDebugPointMode                                     Mode;                                                    // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VVN[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0024(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x003C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31ZZ[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0050(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T17D[0xF];                                   // 0x00B1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugPointMutable
	 * Size -> 0x00B0 (FullSize[0x0180] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FVector                                             Vector;                                                  // 0x00D0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigUnitDebugPointMode                                     Mode;                                                    // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UE93[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x00EC(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0104(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQQT[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0110(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0170(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L21X[0xF];                                   // 0x0171(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugRectangle
	 * Size -> 0x00F0 (FullSize[0x01C0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FTransform                                          Transform;                                               // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0130(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0150(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_998S[0xF];                                   // 0x01B1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FTransform                                          Transform;                                               // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0130(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x0148(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QP4E[0xC];                                   // 0x0154(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0160(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4OT[0xF];                                   // 0x01C1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugArc
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FTransform                                          Transform;                                               // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0130(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDegrees;                                          // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDegrees;                                          // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0154(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVVB[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0160(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4U0[0xF];                                   // 0x01C1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FTransform                                          Transform;                                               // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0130(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDegrees;                                          // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDegrees;                                          // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x0154(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0160(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQRG[0xF];                                   // 0x01C1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransform
	 * Size -> 0x0108 (FullSize[0x0110] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_SZH0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERigUnitDebugTransformMode                                 Mode;                                                    // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XPA[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0074(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x008C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CG25[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00A0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PIHA[0xF];                                   // 0x0101(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformMutable
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FTransform                                          Transform;                                               // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERigUnitDebugTransformMode                                 Mode;                                                    // 0x0130(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXWG[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0134(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x014C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPFQ[0xC];                                   // 0x0154(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0160(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0N4[0xF];                                   // 0x01C1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FTransform                                          Transform;                                               // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERigUnitDebugTransformMode                                 Mode;                                                    // 0x0130(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CSCQ[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0134(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x014C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_093U[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0160(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VMNP[0xF];                                   // 0x01C1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
	 * Size -> 0x0010
	 */
	struct FRigUnit_DebugTransformArrayMutable_WorkData
	{
	public:
		TArray<struct FTransform>                                  DrawTransforms;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
	 * Size -> 0x00C0 (FullSize[0x0190] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
	{
	public:
		TArray<struct FTransform>                                  Transforms;                                              // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		ERigUnitDebugTransformMode                                 Mode;                                                    // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUX6[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x00E4(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x00FC(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTIE[0xC];                                   // 0x0104(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0110(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0170(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XR8[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_DebugTransformArrayMutable_WorkData        WorkData;                                                // 0x0178(0x0010) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6DO[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
	 * Size -> 0x00C0 (FullSize[0x0190] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DebugTransformArrayMutableItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		TArray<struct FTransform>                                  Transforms;                                              // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ParentIndices;                                           // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		ERigUnitDebugTransformMode                                 Mode;                                                    // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RB4[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x00F4(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x010C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J12[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0120(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0180(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5CE[0xF];                                   // 0x0181(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delta;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviousValue;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cache;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Delta;                                                   // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PreviousValue;                                           // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Cache;                                                   // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_8T1Z[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Delta;                                                   // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               PreviousValue;                                           // 0x0050(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Cache;                                                   // 0x0070(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
	 * Size -> 0x0188 (FullSize[0x0190] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_IM00[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Delta;                                                   // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          PreviousValue;                                           // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Cache;                                                   // 0x0130(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
	 * Size -> 0x0030
	 */
	struct FRigUnit_DistributeRotation_Rotation
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8KB[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
	 * Size -> 0x0050
	 */
	struct FRigUnit_DistributeRotation_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationA;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationB;                                           // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemRotationT;                                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ItemLocalTransforms;                                     // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation
	 * Size -> 0x0080 (FullSize[0x0150] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_DistributeRotation_Rotation>        Rotations;                                               // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7NO[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZDY[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_DistributeRotation_WorkData                WorkData;                                                // 0x0100(0x0050) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
	 * Size -> 0x0080 (FullSize[0x0150] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x00D0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_DistributeRotation_Rotation>        Rotations;                                               // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7ED[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_DistributeRotation_WorkData                WorkData;                                                // 0x00F8(0x0050) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFVF[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
	 * Size -> 0x0080 (FullSize[0x0150] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_DistributeRotation_Rotation>        Rotations;                                               // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUOC[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_DistributeRotation_WorkData                WorkData;                                                // 0x00F8(0x0050) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQ1B[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
	{
	public:
		class FName                                                InstructionName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00D8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XW8U[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJQ8[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
	 * Size -> 0x0070 (FullSize[0x0140] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87BU[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DynamicHierarchyBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AddParent
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x00DC(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MV4T[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SwitchParent
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		ERigSwitchParentMode                                       Mode;                                                    // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUHA[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Child;                                                   // 0x00D4(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x00E0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainGlobal;                                         // 0x00EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z72I[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X2WX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementWeight>                           Weights;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Parents;                                                 // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LEPU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementWeight>                           Weights;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Parents;                                                 // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AE4I[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementWeight>                           Weights;                                                 // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
	 * Size -> 0x0040
	 */
	struct FRigUnit_FABRIK_WorkData
	{
	public:
		TArray<struct FFABRIKChainLink>                            Chain;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffector;                                          // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIK
	 * Size -> 0x00D0 (FullSize[0x01A0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5IO[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_FABRIK_WorkData                            WorkData;                                                // 0x0150(0x0040) Transient, NativeAccessSpecifierPublic
		bool                                                       bSetEffectorTransform;                                   // 0x0190(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJ38[0xF];                                   // 0x0191(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIKPerItem
	 * Size -> 0x00D0 (FullSize[0x01A0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x00D0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH5N[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_FABRIK_WorkData                            WorkData;                                                // 0x0150(0x0040) Transient, NativeAccessSpecifierPublic
		bool                                                       bSetEffectorTransform;                                   // 0x0190(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPCO[0xF];                                   // 0x0191(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIKItemArray
	 * Size -> 0x00D0 (FullSize[0x01A0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9B1Z[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_FABRIK_WorkData                            WorkData;                                                // 0x0150(0x0040) Transient, NativeAccessSpecifierPublic
		bool                                                       bSetEffectorTransform;                                   // 0x0190(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRJA[0xF];                                   // 0x0191(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
	 * Size -> 0x0030
	 */
	struct FRigUnit_FitChainToCurve_Rotation
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SVH[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
	 * Size -> 0x0090
	 */
	struct FRigUnit_FitChainToCurve_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MY3E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CurveColor;                                              // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SegmentsColor;                                           // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USSP[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0030(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
	 * Size -> 0x0098
	 */
	struct FRigUnit_FitChainToCurve_WorkData
	{
	public:
		float                                                      ChainLength;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SW4U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     ItemPositions;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemSegments;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CurvePositions;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              CurveSegments;                                           // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationA;                                           // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationB;                                           // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemRotationT;                                           // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ItemLocalTransforms;                                     // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve
	 * Size -> 0x0220 (FullSize[0x02F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x00E0(0x0060) NoDestructor, NativeAccessSpecifierPublic
		EControlRigCurveAlignment                                  Alignment;                                               // 0x0140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQVI[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SamplingPrecision;                                       // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0150(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0168(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x0180(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x01A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SBK4[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x01AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CUN[0xF];                                   // 0x01B1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x01C0(0x0090) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x0250(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60HT[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
	 * Size -> 0x0220 (FullSize[0x02F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x00D0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x00E0(0x0060) NoDestructor, NativeAccessSpecifierPublic
		EControlRigCurveAlignment                                  Alignment;                                               // 0x0140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWS7[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SamplingPrecision;                                       // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0150(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0168(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x0180(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x01A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E02P[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x01AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1URX[0xF];                                   // 0x01B1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x01C0(0x0090) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x0250(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2RP[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
	 * Size -> 0x0220 (FullSize[0x02F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x00E0(0x0060) NoDestructor, NativeAccessSpecifierPublic
		EControlRigCurveAlignment                                  Alignment;                                               // 0x0140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BM3[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SamplingPrecision;                                       // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0150(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0168(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x0180(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x01A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07OX[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x01AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0Q5[0xF];                                   // 0x01B1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x01C0(0x0090) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x0250(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6AH[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryFloatOp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryFloatOp : public FRigUnit
	{
	public:
		float                                                      Argument0;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Argument1;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKKS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Add_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Clamp_Float
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Clamp_Float : public FRigUnit
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min;                                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MapRange_Float
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MapRange_Float : public FRigUnit
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinIn;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxIn;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinOut;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOut;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ForLoopCount
	 * Size -> 0x00D0 (FullSize[0x01A0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ForLoopCount : public FRigUnitMutable
	{
	public:
		int32_t                                                    Count;                                                   // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Continue;                                                // 0x00DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAET[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           Completed;                                               // 0x00E0(0x00C0) Edit, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetBoneTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetBoneTransform : public FRigUnit
	{
	public:
		class FName                                                bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0D84[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBone;                                              // 0x0080(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlInitialTransform : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D11Q[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0080(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlBool
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlBool : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EN29[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0018(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlFloat
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlFloat : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q78F[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlInteger
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlInteger : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntegerValue;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minimum;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Maximum;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BMR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlVector2D
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlVector2D : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector;                                                  // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Minimum;                                                 // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Maximum;                                                 // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0040(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlVector
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlVector : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHC7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x0018(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Minimum;                                                 // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Maximum;                                                 // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0060(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlRotator
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlRotator : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQQ0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            Rotator;                                                 // 0x0018(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Minimum;                                                 // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Maximum;                                                 // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0060(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlTransform
	 * Size -> 0x0158 (FullSize[0x0160] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlTransform : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVJY[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Minimum;                                                 // 0x0080(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Maximum;                                                 // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0140(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetCurveValue
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetCurveValue : public FRigUnit
	{
	public:
		class FName                                                Curve;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HO6H[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedCurveIndex;                                        // 0x0018(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetDeltaTime
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
	{
	public:
		float                                                      Result;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZ30[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetInitialBoneTransform : public FRigUnit
	{
	public:
		class FName                                                bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9D01[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBone;                                              // 0x0080(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetJointTransform
	 * Size -> 0x00E0 (FullSize[0x01B0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_GetJointTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformGetterType                                       Type;                                                    // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        TransformSpace;                                          // 0x00D9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TX1X[0x6];                                   // 0x00DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BaseJoint;                                               // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6N8[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Output;                                                  // 0x0150(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
	{
	public:
		class FName                                                bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YP0[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBone;                                              // 0x0080(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedSpace;                                             // 0x00A0(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChildInitial;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YW82[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Parent;                                                  // 0x0018(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParentInitial;                                          // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K8QQ[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0030(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0090(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x00B0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetSpaceTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetSpaceTransform : public FRigUnit
	{
	public:
		class FName                                                Space;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      SpaceType;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EE4R[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x0080(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetTransform : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIIL[0xA];                                   // 0x0016(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0080(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetTransformArray
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetTransformArray : public FRigUnit
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_77U6[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedIndex;                                             // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetTransformItemArray
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetTransformItemArray : public FRigUnit
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIM1[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedIndex;                                             // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetWorldTime
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
	{
	public:
		float                                                      Year;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Month;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Day;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeekDay;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Hours;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minutes;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Seconds;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverallSeconds;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParent
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0040(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParents
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeChild;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverse;                                                // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BIV[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Parents;                                                 // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedParents;                                           // 0x0048(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeChild;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverse;                                                // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0LE[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Parents;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedParents;                                           // 0x0048(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Parent;                                                  // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeParent;                                          // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B99G[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Children;                                                // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedChildren;                                          // 0x0048(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeItem;                                            // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZPY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Siblings;                                                // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItem;                                              // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedSiblings;                                          // 0x0048(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeItem;                                            // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNG9[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Siblings;                                                // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItem;                                              // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedSiblings;                                          // 0x0048(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetPose
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
	{
	public:
		bool                                                       Initial;                                                 // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5RI[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            ItemsToGet;                                              // 0x0010(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigPose                                            Pose;                                                    // 0x0020(0x0070) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
	{
	public:
		bool                                                       Initial;                                                 // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MFM[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              ItemsToGet;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigPose                                            Pose;                                                    // 0x0020(0x0070) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchySetPose
	 * Size -> 0x0090 (FullSize[0x0160] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x00D0(0x0070) NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0141(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GO43[0x6];                                   // 0x0142(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            ItemsToSet;                                              // 0x0148(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZGD[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
	 * Size -> 0x0090 (FullSize[0x0160] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x00D0(0x0070) NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0141(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I8IE[0x6];                                   // 0x0142(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              ItemsToSet;                                              // 0x0148(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMX9[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseIsEmpty
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) NativeAccessSpecifierPublic
		bool                                                       IsEmpty;                                                 // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5112[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetItems
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W2TS[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Items;                                                   // 0x0080(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZW9[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetDelta
	 * Size -> 0x0120 (FullSize[0x0128] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            PoseA;                                                   // 0x0008(0x0070) NativeAccessSpecifierPublic
		struct FRigPose                                            PoseB;                                                   // 0x0078(0x0070) NativeAccessSpecifierPublic
		float                                                      PositionThreshold;                                       // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationThreshold;                                       // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleThreshold;                                          // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveThreshold;                                          // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00F9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R9G8[0x6];                                   // 0x00FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            ItemsToCompare;                                          // 0x0100(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PosesAreEqual;                                           // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59C1[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            ItemsWithDelta;                                          // 0x0118(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetTransform
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x0078(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0084(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Valid;                                                   // 0x0085(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNQQ[0xA];                                   // 0x0086(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0090(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurveValue;                                              // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedPoseElementIndex;                                  // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedPoseHash;                                          // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VWH[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Valid;                                                   // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPZD[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetCurve
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) NativeAccessSpecifierPublic
		class FName                                                Curve;                                                   // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Valid;                                                   // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HG3I[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurveValue;                                              // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedPoseElementIndex;                                  // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedPoseHash;                                          // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseLoop
	 * Size -> 0x0220 (FullSize[0x02F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x00D0(0x0070) NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x0140(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GEB8[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GlobalTransform;                                         // 0x0150(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x01B0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurveValue;                                              // 0x0210(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0214(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0218(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x021C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Continue;                                                // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKMM[0xF];                                   // 0x0221(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           Completed;                                               // 0x0230(0x00C0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_InverseExecution
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_InverseExecution : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_X35E[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x00C0) Edit, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_IsInteracting
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_IsInteracting : public FRigUnit
	{
	public:
		bool                                                       bIsInteracting;                                          // 0x0008(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4C9V[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemBaseMutable
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemExists
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemExists : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Exists;                                                  // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NP6C[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0018(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemReplace
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Old;                                                     // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Result;                                                  // 0x0024(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemEquals : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      A;                                                       // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      B;                                                       // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1X1V[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemNotEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      A;                                                       // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      B;                                                       // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04WA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemTypeEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      A;                                                       // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      B;                                                       // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RW8[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      A;                                                       // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      B;                                                       // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6SA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_KalmanFloat
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OR3K[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Buffer;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWDS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_KalmanVector
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_KalmanVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3Z3[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Buffer;                                                  // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6EU[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_KalmanTransform
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_5D2E[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41YF[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0080(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Buffer;                                                  // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SN2[0xC];                                   // 0x00F4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathMutableBase
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_MathMutableBase : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolConstant
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       Value;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3577[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       Value;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIRD[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       A;                                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       B;                                                       // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_676O[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolNot
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolAnd
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolNand
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolOr
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolEquals
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       A;                                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       B;                                                       // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WBR[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       A;                                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       B;                                                       // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AB1D[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolToggled
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolToggled : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       Value;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Toggled;                                                 // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Initialized;                                             // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LastValue;                                               // 0x000B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12OS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
	{
	public:
		struct FLinearColor                                        A;                                                       // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        B;                                                       // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Result;                                                  // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorFromFloat
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Result;                                                  // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GCH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorAdd
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorSub
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorMul
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorLerp
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
	{
	public:
		struct FLinearColor                                        A;                                                       // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        B;                                                       // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Result;                                                  // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYAG[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstant
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTA6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KO72[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstPi
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstE
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatConstE : public FRigUnit_MathFloatConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAdd
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSub
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMul
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatDiv
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMod
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMin
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMax
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatPow
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSqrt
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatNegate
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAbs
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatFloor
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TMF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatCeil
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDBU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatRound
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1K8P[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatToInt
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSign
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatClamp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLerp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatRemap
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMinimum;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClamp;                                                  // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SVT[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FV8X[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatEquals
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQAJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8FZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatGreater
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0S02[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLess
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F56J[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8Q5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DO16[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_44XV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q0P[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8MK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IfTrue;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IfFalse;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatDeg
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatRad
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSin
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatCos
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatTan
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAsin
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAcos
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAtan
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      C;                                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlphaAngle;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BetaAngle;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GammaAngle;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NOG[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatExponential
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatExponential : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PYA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntAdd
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntSub
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntMul
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntDiv
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntMod
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntMin
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntMax
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntPow
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntNegate
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntAbs
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntToFloat
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntSign
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntClamp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntEquals
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntEquals : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGBO[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntNotEquals
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntNotEquals : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IJC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntGreater
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntGreater : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NB71[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntLess
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntLess : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SKH[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENAI[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntLessEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntLessEqual : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4LHN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathMatrixBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathMatrixBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathMatrixUnaryOp
	 * Size -> 0x0108 (FullSize[0x0110] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathMatrixUnaryOp : public FRigUnit_MathMatrixBase
	{
	public:
		unsigned char                                              UnknownData_PWRY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrix                                             Value;                                                   // 0x0010(0x0080) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMatrix                                             Result;                                                  // 0x0090(0x0080) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathMatrixBinaryOp
	 * Size -> 0x0188 (FullSize[0x0190] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathMatrixBinaryOp : public FRigUnit_MathMatrixBase
	{
	public:
		unsigned char                                              UnknownData_2LD8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrix                                             A;                                                       // 0x0010(0x0080) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMatrix                                             B;                                                       // 0x0090(0x0080) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMatrix                                             Result;                                                  // 0x0110(0x0080) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathMatrixToTransform
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathMatrixToTransform : public FRigUnit_MathMatrixBase
	{
	public:
		unsigned char                                              UnknownData_5L50[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrix                                             Value;                                                   // 0x0010(0x0080) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0090(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathMatrixFromTransform
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathMatrixFromTransform : public FRigUnit_MathMatrixBase
	{
	public:
		unsigned char                                              UnknownData_YW9V[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMatrix                                             Result;                                                  // 0x0070(0x0080) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathMatrixToVectors
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathMatrixToVectors : public FRigUnit_MathMatrixBase
	{
	public:
		unsigned char                                              UnknownData_LRPV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrix                                             Value;                                                   // 0x0010(0x0080) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Origin;                                                  // 0x0090(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             X;                                                       // 0x00A8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Y;                                                       // 0x00C0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Z;                                                       // 0x00D8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathMatrixFromVectors
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathMatrixFromVectors : public FRigUnit_MathMatrixBase
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             X;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Y;                                                       // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Z;                                                       // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BOR[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrix                                             Result;                                                  // 0x0070(0x0080) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathMatrixMul
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	struct FRigUnit_MathMatrixMul : public FRigUnit_MathMatrixBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathMatrixInverse
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	struct FRigUnit_MathMatrixInverse : public FRigUnit_MathMatrixUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_AOGB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_QIJI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0050(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3D8[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FVector                                             Euler;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrder;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92JG[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2VA[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0040(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_XTSD[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKHN[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionScale
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_7SH6[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEKZ[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_EZ2L[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrder;                                           // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FV4R[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_LP8V[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IN0E[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionMul
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_SSK0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQKN[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0060(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_DDVR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMC0[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_E4JH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JS06[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65BG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               IfTrue;                                                  // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               IfFalse;                                                 // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0050(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionDot
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_8Z9G[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3WTL[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_DL9G[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quaternion;                                              // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_EL61[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quaternion;                                              // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAxis                                                      Axis;                                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVEN[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_GIOF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BUB[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Swing;                                                   // 0x0050(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Twist;                                                   // 0x0070(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
	{
	public:
		EEulerRotationOrder                                        RotationOrder;                                           // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2W6U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
	 * Size -> 0x0090
	 */
	struct FRigUnit_MathRBFInterpolateQuatWorkData
	{
	public:
		unsigned char                                              UnknownData_K49J[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
	 * Size -> 0x0090
	 */
	struct FRigUnit_MathRBFInterpolateVectorWorkData
	{
	public:
		unsigned char                                              UnknownData_8R18[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
	{
	public:
		unsigned char                                              UnknownData_DT0X[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERBFQuatDistanceType                                       DistanceFunction;                                        // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFKernelType                                             SmoothingFunction;                                       // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWMT[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingAngle;                                          // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalizeOutput;                                        // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJVE[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TwistAxis;                                               // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MF32[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_MathRBFInterpolateQuatWorkData             WorkData;                                                // 0x0060(0x0090) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
	{
	public:
		struct FVector                                             Input;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFVectorDistanceType                                     DistanceFunction;                                        // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFKernelType                                             SmoothingFunction;                                       // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXG4[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingRadius;                                         // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalizeOutput;                                        // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAOE[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_MathRBFInterpolateVectorWorkData           WorkData;                                                // 0x0030(0x0090) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
	 * Size -> 0x0030
	 */
	struct FMathRBFInterpolateQuatFloat_Target
	{
	public:
		struct FQuat                                               Target;                                                  // 0x0000(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E744[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
	{
	public:
		TArray<struct FMathRBFInterpolateQuatFloat_Target>         Targets;                                                 // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Output;                                                  // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3C65[0xC];                                   // 0x0104(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
	 * Size -> 0x0040
	 */
	struct FMathRBFInterpolateQuatVector_Target
	{
	public:
		struct FQuat                                               Target;                                                  // 0x0000(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Value;                                                   // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJQW[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase
	{
	public:
		TArray<struct FMathRBFInterpolateQuatVector_Target>        Targets;                                                 // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             Output;                                                  // 0x0100(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_89U9[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
	 * Size -> 0x0030
	 */
	struct FMathRBFInterpolateQuatColor_Target
	{
	public:
		struct FQuat                                               Target;                                                  // 0x0000(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Value;                                                   // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
	{
	public:
		TArray<struct FMathRBFInterpolateQuatColor_Target>         Targets;                                                 // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Output;                                                  // 0x0100(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
	 * Size -> 0x0040
	 */
	struct FMathRBFInterpolateQuatQuat_Target
	{
	public:
		struct FQuat                                               Target;                                                  // 0x0000(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Value;                                                   // 0x0020(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
	{
	public:
		TArray<struct FMathRBFInterpolateQuatQuat_Target>          Targets;                                                 // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FQuat                                               Output;                                                  // 0x0100(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
	 * Size -> 0x0080
	 */
	struct FMathRBFInterpolateQuatXform_Target
	{
	public:
		struct FQuat                                               Target;                                                  // 0x0000(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Value;                                                   // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
	 * Size -> 0x0070 (FullSize[0x0160] - InheritedSize[0x00F0])
	 */
	struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
	{
	public:
		TArray<struct FMathRBFInterpolateQuatXform_Target>         Targets;                                                 // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          Output;                                                  // 0x0100(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
	 * Size -> 0x0020
	 */
	struct FMathRBFInterpolateVectorFloat_Target
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWWC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
	{
	public:
		TArray<struct FMathRBFInterpolateVectorFloat_Target>       Targets;                                                 // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Output;                                                  // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Y09[0xC];                                   // 0x00D4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
	 * Size -> 0x0030
	 */
	struct FMathRBFInterpolateVectorVector_Target
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Value;                                                   // 0x0018(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
	 * Size -> 0x0030 (FullSize[0x00F0] - InheritedSize[0x00C0])
	 */
	struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
	{
	public:
		TArray<struct FMathRBFInterpolateVectorVector_Target>      Targets;                                                 // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             Output;                                                  // 0x00D0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMF7[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
	 * Size -> 0x0028
	 */
	struct FMathRBFInterpolateVectorColor_Target
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Value;                                                   // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
	{
	public:
		TArray<struct FMathRBFInterpolateVectorColor_Target>       Targets;                                                 // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Output;                                                  // 0x00D0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
	 * Size -> 0x0040
	 */
	struct FMathRBFInterpolateVectorQuat_Target
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6K5I[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0020(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
	 * Size -> 0x0030 (FullSize[0x00F0] - InheritedSize[0x00C0])
	 */
	struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase
	{
	public:
		TArray<struct FMathRBFInterpolateVectorQuat_Target>        Targets;                                                 // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FQuat                                               Output;                                                  // 0x00D0(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
	 * Size -> 0x0080
	 */
	struct FMathRBFInterpolateVectorXform_Target
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y58S[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
	 * Size -> 0x0070 (FullSize[0x0130] - InheritedSize[0x00C0])
	 */
	struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
	{
	public:
		TArray<struct FMathRBFInterpolateVectorXform_Target>       Targets;                                                 // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          Output;                                                  // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformMutableBase
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_MathTransformMutableBase : public FRigUnit_MathMutableBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_5ZUK[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_RJ6U[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          A;                                                       // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          B;                                                       // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
	{
	public:
		struct FEulerTransform                                     EulerTransform;                                          // 0x0008(0x0048) NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0050(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_X05K[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEulerTransform                                     Result;                                                  // 0x0070(0x0048) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIGQ[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformMul
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_G5RU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Global;                                                  // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Parent;                                                  // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Local;                                                   // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_8FL4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Local;                                                   // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Parent;                                                  // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Global;                                                  // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformAccumulateArray
	 * Size -> 0x0090 (FullSize[0x0160] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_MathTransformAccumulateArray : public FRigUnit_MathTransformMutableBase
	{
	public:
		TArray<struct FTransform>                                  Transforms;                                              // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      TargetSpace;                                             // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4D0[0xF];                                   // 0x00E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Root;                                                    // 0x00F0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ParentIndices;                                           // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformInverse
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformLerp
	 * Size -> 0x0138 (FullSize[0x0140] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_4YJK[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          A;                                                       // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          B;                                                       // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZI1[0xC];                                   // 0x00D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNX1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          IfTrue;                                                  // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          IfFalse;                                                 // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_O7N8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0070(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0088(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_UOFW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0070(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0088(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
	 * Size -> 0x0108 (FullSize[0x0110] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
	{
	public:
		struct FVector                                             Location;                                                // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrder;                                           // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6OY[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O4UW[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0060(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEulerTransform                                     EulerTransform;                                          // 0x00C0(0x0048) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGEM[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
	 * Size -> 0x0158 (FullSize[0x0160] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_FCRS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAxis                                                      Axis;                                                    // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigClampSpatialMode                                Type;                                                    // 0x0071(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7VX[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZAC[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Space;                                                   // 0x0080(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L4PY[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x00E4(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugThickness;                                          // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGFR[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0100(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFCD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorAdd
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSub
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMul
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorScale
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Factor;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LRR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDiv
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMod
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMin
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMax
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorNegate
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorAbs
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorFloor
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorCeil
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorRound
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSign
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorClamp
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Minimum;                                                 // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Maximum;                                                 // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorLerp
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DPWA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorRemap
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SourceMinimum;                                           // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SourceMaximum;                                           // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetMinimum;                                           // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetMaximum;                                           // 0x0068(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClamp;                                                  // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBHD[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0088(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorEquals
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMGH[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5B9Q[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PA2[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AH8[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4HK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             IfTrue;                                                  // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             IfFalse;                                                 // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDeg
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorRad
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YWRE[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorLength
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0GD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDistance
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ES4U[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorCross
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDot
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XBQ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorUnit
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSetLength
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FW39[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorClampLength
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumLength;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumLength;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMirror
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorAngle
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8P3M[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorParallel
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ICY[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60SS[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0008(0x0060) NoDestructor, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYW7[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0070(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Tangent;                                                 // 0x0088(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0008(0x0060) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      Axis;                                                    // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigClampSpatialMode                                Type;                                                    // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRIY[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JZ9[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Space;                                                   // 0x0030(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_230A[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x0094(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugThickness;                                          // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x00A8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntersectPlane
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Start;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlanePoint;                                              // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlaneNormal;                                             // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0068(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNT5[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathDistanceToPlane
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathDistanceToPlane : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Point;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlanePoint;                                              // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlaneNormal;                                             // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ClosestPointOnPlane;                                     // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SignedDistance;                                          // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22W5[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
	 * Size -> 0x0070
	 */
	struct FRigUnit_ModifyBoneTransforms_PerBone
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VFW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
	 * Size -> 0x0010
	 */
	struct FRigUnit_ModifyTransforms_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_ModifyBoneTransforms_PerBone>       BoneToModify;                                            // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMinimum;                                           // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMaximum;                                           // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigModifyBoneMode                                  Mode;                                                    // 0x00EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LT6Y[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_ModifyBoneTransforms_WorkData              WorkData;                                                // 0x00F0(0x0010) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
	 * Size -> 0x0070
	 */
	struct FRigUnit_ModifyTransforms_PerItem
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5OR3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyTransforms
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_ModifyTransforms_PerItem>           ItemToModify;                                            // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMinimum;                                           // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMaximum;                                           // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigModifyBoneMode                                  Mode;                                                    // 0x00EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ21[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_ModifyTransforms_WorkData                  WorkData;                                                // 0x00F0(0x0010) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
	 * Size -> 0x0068
	 */
	struct FRigUnit_MultiFABRIK_WorkData
	{
	public:
		unsigned char                                              UnknownData_NTRK[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
	 * Size -> 0x0020
	 */
	struct FRigUnit_MultiFABRIK_EndEffector
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK
	 * Size -> 0x0090 (FullSize[0x0160] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                RootBone;                                                // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_MultiFABRIK_EndEffector>            Effectors;                                               // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9AR[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBPU[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_MultiFABRIK_WorkData                       WorkData;                                                // 0x00F8(0x0068) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NameBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NameBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NameConcat
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NameConcat : public FRigUnit_NameBase
	{
	public:
		class FName                                                A;                                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                B;                                                       // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Result;                                                  // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NameTruncate
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NameTruncate : public FRigUnit_NameBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FromEnd;                                                 // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7WK[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Remainder;                                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Chopped;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NameReplace
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NameReplace : public FRigUnit_NameBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Old;                                                     // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Result;                                                  // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_EndsWith
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_EndsWith : public FRigUnit_NameBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Ending;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOG7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_StartsWith
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_StartsWith : public FRigUnit_NameBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Start;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31GY[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Contains
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Contains : public FRigUnit_NameBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Search;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASKG[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NoiseFloat
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z990[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NoiseVector
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NoiseVector : public FRigUnit_MathBase
	{
	public:
		struct FVector                                             position;                                                // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Speed;                                                   // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Frequency;                                               // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0058(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Time;                                                    // 0x0070(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
	 * Size -> 0x00A0 (FullSize[0x0170] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BX5L[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OffsetTransform;                                         // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0144(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KNK[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0148(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPE2[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
	 * Size -> 0x01A0 (FullSize[0x0270] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Subject;                                                 // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Parents;                                                 // 0x00E0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          InitialGlobalTransform;                                  // 0x00F0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HN1H[0xC];                                   // 0x0154(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0160(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Switched;                                                // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8G7[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSubject;                                           // 0x01C8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x01E8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIUM[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeOffset;                                          // 0x0210(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
	 * Size -> 0x01A0 (FullSize[0x0270] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Subject;                                                 // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Parents;                                                 // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitialGlobalTransform;                                  // 0x00F0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OPMA[0xC];                                   // 0x0154(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0160(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Switched;                                                // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYW4[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSubject;                                           // 0x01C8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x01E8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWML[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeOffset;                                          // 0x0210(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
	 * Size -> 0x0080
	 */
	struct FRigUnit_PointSimulation_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOSW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionScale;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawPointsAsSpheres;                                    // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRUW[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0020(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
	 * Size -> 0x0014
	 */
	struct FRigUnit_PointSimulation_BoneTarget
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TranslationPoint;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimaryAimPoint;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondaryAimPoint;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
	 * Size -> 0x0088
	 */
	struct FRigUnit_PointSimulation_WorkData
	{
	public:
		struct FCRSimPointContainer                                Simulation;                                              // 0x0000(0x0078) NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           BoneIndices;                                             // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SimBaseMutable
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SimBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation
	 * Size -> 0x0210 (FullSize[0x02E0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
	{
	public:
		TArray<struct FCRSimPoint>                                 Points;                                                  // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimLinearSpring>                          Links;                                                   // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointForce>                            Forces;                                                  // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimSoftCollision>                         CollisionVolumes;                                        // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SimulatedStepsPerSecond;                                 // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECRSimPointIntegrateType                                   IntegratorType;                                          // 0x0114(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36DM[0x3];                                   // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerletBlend;                                             // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQQ2[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_PointSimulation_BoneTarget>         BoneTargets;                                             // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bLimitLocalPosition;                                     // 0x0130(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0131(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VUN[0x6];                                   // 0x0132(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PrimaryAimAxis;                                          // 0x0138(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAimAxis;                                        // 0x0150(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NHJ[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_PointSimulation_DebugSettings              DebugSettings;                                           // 0x0170(0x0080) NoDestructor, NativeAccessSpecifierPublic
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x01F0(0x0060) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_PointSimulation_WorkData                   WorkData;                                                // 0x0250(0x0088) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QBDH[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PrepareForExecution
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PrepareForExecution : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_KV8S[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x00C0) Edit, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_StartProfilingTimer
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_EndProfilingTimer
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
	{
	public:
		int32_t                                                    NumberOfMeasurements;                                    // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JX82[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Prefix;                                                  // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeasurementsLeft;                                        // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChildInitial;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88CZ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      OldParent;                                               // 0x0018(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOldParentInitial;                                       // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O31O[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      NewParent;                                               // 0x0028(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNewParentInitial;                                       // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVDB[0xB];                                   // 0x0035(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0040(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x00A0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedOldParent;                                         // 0x00C0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedNewParent;                                         // 0x00E0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PropagateTransform
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_PropagateTransform : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecomputeGlobal;                                        // 0x00DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToChildren;                                        // 0x00DD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x00DE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O187[0x1];                                   // 0x00DF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x00E0(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryQuaternionOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_21SZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument0;                                               // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Argument1;                                               // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0050(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_UnaryQuaternionOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_6JH8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument;                                                // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_InverseQuaterion
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_268O[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument;                                                // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGSE[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQ01[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionToAngle
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionToAngle : public FRigUnit
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Argument;                                                // 0x0020(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NB43[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RandomFloat
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_RandomFloat : public FRigUnit_MathBase
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastResult;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastSeed;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseSeed;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeft;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TND[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RandomVector
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_RandomVector : public FRigUnit_MathBase
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0018(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastResult;                                              // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastSeed;                                                // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseSeed;                                                // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeft;                                                // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3UE2[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SendEvent
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SendEvent : public FRigUnitMutable
	{
	public:
		ERigEvent                                                  Event;                                                   // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVUK[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Item;                                                    // 0x00D4(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetInSeconds;                                         // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnable;                                                 // 0x00E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyDuringInteraction;                                  // 0x00E5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8W1[0xA];                                   // 0x00E6(0x000A) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SequenceExecution
	 * Size -> 0x03C8 (FullSize[0x03D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SequenceExecution : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_CX7X[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x00C0) Edit, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           A;                                                       // 0x00D0(0x00C0) Edit, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           B;                                                       // 0x0190(0x00C0) Edit, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           C;                                                       // 0x0250(0x00C0) Edit, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           D;                                                       // 0x0310(0x00C0) Edit, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KWE[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0140(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x01A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H67E[0x6];                                   // 0x01A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x01A8(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KUI[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneRotation
	 * Size -> 0x0060 (FullSize[0x0130] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetBoneRotation : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBY3[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x00E0(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6AX[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ED20[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x0110(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneTransform
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5IV[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0140(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x01A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GYU[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x01A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_968B[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x01B0(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneTranslation
	 * Size -> 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x00D8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KM30[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9U1[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x0100(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlColor
	 * Size -> 0x0040 (FullSize[0x0110] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetControlColor : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00D8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x00E8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1FL3[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlOffset
	 * Size -> 0x00A0 (FullSize[0x0170] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetControlOffset : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KKJ[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Offset;                                                  // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A8VC[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0148(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUGO[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlBool
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetControlBool : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JEN[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x00E0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
	 * Size -> 0x000C
	 */
	struct FRigUnit_SetMultiControlBool_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2N7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlBool
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlBool_Entry>          Entries;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlFloat
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetControlFloat : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x00E0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
	 * Size -> 0x000C
	 */
	struct FRigUnit_SetMultiControlFloat_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlFloat_Entry>         Entries;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7Y4[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NQNT[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlInteger
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetControlInteger : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntegerValue;                                            // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x00E0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
	 * Size -> 0x000C
	 */
	struct FRigUnit_SetMultiControlInteger_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntegerValue;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlInteger_Entry>       Entries;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TEKY[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIH9[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVector2D
	 * Size -> 0x0040 (FullSize[0x0110] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetControlVector2D : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A1AQ[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Vector;                                                  // 0x00E0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x00F0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
	 * Size -> 0x0018
	 */
	struct FRigUnit_SetMultiControlVector2D_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector;                                                  // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlVector2D_Entry>      Entries;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APJ0[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BDC[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVector
	 * Size -> 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetControlVector : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6FX[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T86E[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0100(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlRotator
	 * Size -> 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetControlRotator : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7G0G[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            Rotator;                                                 // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIE0[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0100(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
	 * Size -> 0x0028
	 */
	struct FRigUnit_SetMultiControlRotator_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotator;                                                 // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IPI[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlRotator_Entry>       Entries;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FELF[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7X95[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlTransform
	 * Size -> 0x00A0 (FullSize[0x0170] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetControlTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAKF[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PI3F[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0148(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KY6[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVisibility
	 * Size -> 0x0040 (FullSize[0x0110] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetControlVisibility : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y80N[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Pattern;                                                 // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisible;                                                // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGM4[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NTL4[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetCurveValue
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetCurveValue : public FRigUnitMutable
	{
	public:
		class FName                                                Curve;                                                   // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_09IO[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedCurveIndex;                                        // 0x00E0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
	 * Size -> 0x00C0 (FullSize[0x0190] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0144(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7C98[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x0148(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x0168(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L807[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
	 * Size -> 0x00D0 (FullSize[0x01A0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x00DC(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParentInitial;                                          // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J591[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x00F0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0154(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KCR[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedChild;                                             // 0x0158(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0178(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4L2D[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
	{
	public:
		class FName                                                SpaceName;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SKP[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0140(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x01A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJ5F[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x01A8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFLC[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetSpaceTransform
	 * Size -> 0x00A0 (FullSize[0x0170] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Space;                                                   // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QUT[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      SpaceType;                                               // 0x0140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ZWY[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x0148(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_856X[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTransform
	 * Size -> 0x00A0 (FullSize[0x0170] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetTransform : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x00DD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFIB[0x2];                                   // 0x00DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00E0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0144(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQFX[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0148(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1B84[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTranslation
	 * Size -> 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetTranslation : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2FF[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Translation;                                             // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQ03[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0100(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRotation
	 * Size -> 0x0060 (FullSize[0x0130] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetRotation : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STN7[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x00E0(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0104(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_231H[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0108(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKTD[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetScale
	 * Size -> 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetScale : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1J5C[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75CI[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0100(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTransformArray
	 * Size -> 0x0040 (FullSize[0x0110] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetTransformArray : public FRigUnitMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x00D0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x00E1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6T7[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTGG[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedIndex;                                             // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTransformItemArray
	 * Size -> 0x0040 (FullSize[0x0110] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetTransformItemArray : public FRigUnitMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x00E1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0WF[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNZ3[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedIndex;                                             // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
	 * Size -> 0x0048
	 */
	struct FRigUnit_SlideChain_WorkData
	{
	public:
		float                                                      ChainLength;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8UD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              ItemSegments;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Transforms;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  BlendedTransforms;                                       // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChain
	 * Size -> 0x0060 (FullSize[0x0130] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideAmount;                                             // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28YI[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SlideChain_WorkData                        WorkData;                                                // 0x00E8(0x0048) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChainPerItem
	 * Size -> 0x0060 (FullSize[0x0130] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x00D0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideAmount;                                             // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZEK[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SlideChain_WorkData                        WorkData;                                                // 0x00E8(0x0048) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChainItemArray
	 * Size -> 0x0060 (FullSize[0x0130] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SlideAmount;                                             // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZFT[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SlideChain_WorkData                        WorkData;                                                // 0x00E8(0x0048) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RegionScaleFactors
	 * Size -> 0x0010
	 */
	struct FRegionScaleFactors
	{
	public:
		float                                                      PositiveWidth;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NegativeWidth;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositiveHeight;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NegativeHeight;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.SphericalRegion
	 * Size -> 0x0014
	 */
	struct FSphericalRegion
	{
	public:
		unsigned char                                              UnknownData_IPHK[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
	 * Size -> 0x0010
	 */
	struct FSphericalPoseReaderDebugSettings
	{
	public:
		bool                                                       bDrawDebug;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDraw2D;                                                 // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLocalAxes;                                          // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WT9A[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugScale;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebugSegments;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugThickness;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SphericalPoseReader
	 * Size -> 0x00E0 (FullSize[0x01B0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
	{
	public:
		float                                                      OutputParam;                                             // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      DriverItem;                                              // 0x00D4(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DriverAxis;                                              // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationOffset;                                          // 0x00F8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActiveRegionSize;                                        // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRegionScaleFactors                                 ActiveRegionScaleFactors;                                // 0x0114(0x0010) NoDestructor, NativeAccessSpecifierPublic
		float                                                      FalloffSize;                                             // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRegionScaleFactors                                 FalloffRegionScaleFactors;                               // 0x0128(0x0010) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       FlipWidthScaling;                                        // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlipHeightScaling;                                       // 0x0139(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMU7[0x2];                                   // 0x013A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      OptionalParentItem;                                      // 0x013C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSphericalPoseReaderDebugSettings                   Debug;                                                   // 0x0148(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FSphericalRegion                                    InnerRegion;                                             // 0x0158(0x0014) Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FSphericalRegion                                    OuterRegion;                                             // 0x016C(0x0014) Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             DriverNormal;                                            // 0x0180(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Driver2D;                                                // 0x0198(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
	 * Size -> 0x0080
	 */
	struct FRigUnit_SpringIK_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PXI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z5H3[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0020(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
	 * Size -> 0x00B8
	 */
	struct FRigUnit_SpringIK_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedBones;                                             // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedPoleVector;                                        // 0x0010(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Transforms;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCRSimPointContainer                                Simulation;                                              // 0x0040(0x0078) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK
	 * Size -> 0x01D0 (FullSize[0x02A0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HierarchyStrength;                                       // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectorStrength;                                        // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectorRatio;                                           // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootStrength;                                            // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootRatio;                                               // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x00F8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipPolePlane;                                          // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      PoleVectorKind;                                          // 0x0111(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YYJ[0x2];                                   // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PoleVectorSpace;                                         // 0x0114(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FW1[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PrimaryAxis;                                             // 0x0120(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0138(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLiveSimulation;                                         // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Y73[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Iterations;                                              // 0x0154(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitLocalPosition;                                     // 0x0158(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0159(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PZ3[0x6];                                   // 0x015A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SpringIK_DebugSettings                     DebugSettings;                                           // 0x0160(0x0080) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_SpringIK_WorkData                          WorkData;                                                // 0x01E0(0x00B8) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXF0[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringInterp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpringInterp : public FRigUnit_SimBase
	{
	public:
		float                                                      Current;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Target;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stiffness;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatSpringState                                   SpringState;                                             // 0x0020(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUH5[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringInterpVector
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpringInterpVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Current;                                                 // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Target;                                                  // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stiffness;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XP5N[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorSpringState                                  SpringState;                                             // 0x0060(0x0038) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringInterpV2
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpringInterpV2 : public FRigUnit_SimBase
	{
	public:
		float                                                      Target;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Force;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurrentInput;                                        // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FM2H[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Current;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetVelocityAmount;                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitializeFromTarget;                                   // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3D3U[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Velocity;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulatedResult;                                         // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatSpringState                                   SpringState;                                             // 0x0034(0x000C) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
	 * Size -> 0x00E0 (FullSize[0x00E8] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpringInterpVectorV2 : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Target;                                                  // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Force;                                                   // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurrentInput;                                        // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NRY[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Current;                                                 // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetVelocityAmount;                                    // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitializeFromTarget;                                   // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ES7[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0068(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0080(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SimulatedResult;                                         // 0x0098(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorSpringState                                  SpringState;                                             // 0x00B0(0x0038) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpringInterpQuaternionV2 : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_K9KK[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Target;                                                  // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Torque;                                                  // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurrentInput;                                        // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGQQ[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Current;                                                 // 0x0060(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TargetVelocityAmount;                                    // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitializeFromTarget;                                   // 0x0084(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZR2P[0xB];                                   // 0x0085(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0090(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x00B0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4A6[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               SimulatedResult;                                         // 0x00D0(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuaternionSpringState                              SpringState;                                             // 0x00F0(0x0040) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FramesToSeconds
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase
	{
	public:
		float                                                      Frames;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Seconds;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SecondsToFrames
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
	{
	public:
		float                                                      Seconds;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frames;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Timeline
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Timeline : public FRigUnit_SimBase
	{
	public:
		float                                                      Speed;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5EO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsAgo;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRange;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0ZG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Buffer;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DeltaTimes;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpperBound;                                              // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TimeOffsetVector
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsAgo;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRange;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y3KW[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Buffer;                                                  // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DeltaTimes;                                              // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpperBound;                                              // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
	 * Size -> 0x0108 (FullSize[0x0110] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_AJPL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SecondsAgo;                                              // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRange;                                               // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZP2G[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0080(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Buffer;                                                  // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DeltaTimes;                                              // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpperBound;                                              // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S22I[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryTransformOp
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryTransformOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_FY5T[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Argument0;                                               // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Argument1;                                               // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x00D0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiplyTransform
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeTransform
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
	{	};

	/**
	 * ScriptStruct ControlRig.ConstraintTarget
	 * Size -> 0x0070
	 */
	struct FConstraintTarget
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x0065(0x0009) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSVW[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
	 * Size -> 0x0060
	 */
	struct FRigUnit_TransformConstraint_WorkData
	{
	public:
		TArray<struct FConstraintData>                             ConstraintData;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<int32_t, int32_t>                                     ConstraintDataToTargets;                                 // 0x0010(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraint
	 * Size -> 0x00F0 (FullSize[0x01C0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                bone;                                                    // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        BaseTransformSpace;                                      // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_53NQ[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x00E0(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BaseBone;                                                // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConstraintTarget>                           Targets;                                                 // 0x0148(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseInitialTransforms;                                   // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKUJ[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TransformConstraint_WorkData               WorkData;                                                // 0x0160(0x0060) Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
	 * Size -> 0x0100 (FullSize[0x01D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x00D0(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        BaseTransformSpace;                                      // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8C8X[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x00E0(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigElementKey                                      BaseItem;                                                // 0x0140(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC1B[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintTarget>                           Targets;                                                 // 0x0150(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseInitialTransforms;                                   // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEGA[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TransformConstraint_WorkData               WorkData;                                                // 0x0168(0x0060) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WMCT[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ConstraintParent
	 * Size -> 0x0010
	 */
	struct FConstraintParent
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
	 * Size -> 0x0002
	 */
	struct FRigUnit_ParentConstraint_AdvancedSettings
	{
	public:
		EConstraintInterpType                                      InterpolationType;                                       // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrderForFilter;                                  // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ParentConstraint
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x00D0(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x00DD(0x0009) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T6W3[0x2];                                   // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigUnit_ParentConstraint_AdvancedSettings          AdvancedSettings;                                        // 0x00F8(0x0002) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZQG[0x2];                                   // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PositionConstraint
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x00D0(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x00DD(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0KP[0xC];                                   // 0x00F4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x00D0(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x00DD(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWAI[0xC];                                   // 0x00F4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
	 * Size -> 0x0002
	 */
	struct FRigUnit_RotationConstraint_AdvancedSettings
	{
	public:
		EConstraintInterpType                                      InterpolationType;                                       // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrderForFilter;                                  // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RotationConstraint
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x00D0(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x00DD(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigUnit_RotationConstraint_AdvancedSettings        AdvancedSettings;                                        // 0x00F0(0x0002) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDNA[0x2];                                   // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TU7I[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x00D0(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x00DD(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigUnit_RotationConstraint_AdvancedSettings        AdvancedSettings;                                        // 0x00F0(0x0002) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UIJ[0x2];                                   // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRCP[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ScaleConstraint
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x00D0(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x00DD(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NUA[0xC];                                   // 0x00F4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x00D0(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x00DD(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLWU[0xC];                                   // 0x00F4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
	 * Size -> 0x0030
	 */
	struct FRigUnit_TwistBones_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemRatios;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ItemTransforms;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwistBones
	 * Size -> 0x0080 (FullSize[0x0150] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleAxis;                                                // 0x00F8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  TwistEaseType;                                           // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O4I4[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0118(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PM63[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwistBones_WorkData                        WorkData;                                                // 0x0120(0x0030) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
	 * Size -> 0x0080 (FullSize[0x0150] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x00D0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleAxis;                                                // 0x00F8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  TwistEaseType;                                           // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFED[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0118(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7MUD[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwistBones_WorkData                        WorkData;                                                // 0x0120(0x0030) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
	 * Size -> 0x0310 (FullSize[0x03E0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
	{
	public:
		class FName                                                StartJoint;                                              // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndJoint;                                                // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleTarget;                                              // 0x00E0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spin;                                                    // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GCZ[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EndEffector;                                             // 0x0100(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      IKBlend;                                                 // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GU6[0xC];                                   // 0x0164(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartJointFKTransform;                                   // 0x0170(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          MidJointFKTransform;                                     // 0x01D0(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          EndJointFKTransform;                                     // 0x0230(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      PreviousFKIKBlend;                                       // 0x0290(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BHPP[0xC];                                   // 0x0294(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartJointIKTransform;                                   // 0x02A0(0x0060) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          MidJointIKTransform;                                     // 0x0300(0x0060) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          EndJointIKTransform;                                     // 0x0360(0x0060) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		int32_t                                                    StartJointIndex;                                         // 0x03C0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MidJointIndex;                                           // 0x03C4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    EndJointIndex;                                           // 0x03C8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      UpperLimbLength;                                         // 0x03CC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LowerLimbLength;                                         // 0x03D0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DACR[0xC];                                   // 0x03D4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
	 * Size -> 0x0070
	 */
	struct FRigUnit_TwoBoneIKSimple_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G12F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DWY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
	 * Size -> 0x01F0 (FullSize[0x02C0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                BoneA;                                                   // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneB;                                                   // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BES[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Effector;                                                // 0x00F0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0150(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0168(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWXX[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PoleVector;                                              // 0x0188(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      PoleVectorKind;                                          // 0x01A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLOU[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PoleVectorSpace;                                         // 0x01A4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x01AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YSH[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x01B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x01B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x01BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x01C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BIJI[0xB];                                   // 0x01C5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwoBoneIKSimple_DebugSettings              DebugSettings;                                           // 0x01D0(0x0070) NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBoneAIndex;                                        // 0x0240(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBoneBIndex;                                        // 0x0260(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffectorBoneIndex;                                 // 0x0280(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedPoleVectorSpaceIndex;                              // 0x02A0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
	 * Size -> 0x0200 (FullSize[0x02D0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      ItemA;                                                   // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      ItemB;                                                   // 0x00DC(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      EffectorItem;                                            // 0x00E8(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNX4[0xC];                                   // 0x00F4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Effector;                                                // 0x0100(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0160(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0178(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x0190(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCMS[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PoleVector;                                              // 0x0198(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      PoleVectorKind;                                          // 0x01B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2OY[0x3];                                   // 0x01B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      PoleVectorSpace;                                         // 0x01B4(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJEW[0x3];                                   // 0x01C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x01C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x01C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemALength;                                             // 0x01D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemBLength;                                             // 0x01D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPGZ[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwoBoneIKSimple_DebugSettings              DebugSettings;                                           // 0x01E0(0x0070) NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItemAIndex;                                        // 0x0250(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItemBIndex;                                        // 0x0270(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffectorItemIndex;                                 // 0x0290(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedPoleVectorSpaceIndex;                              // 0x02B0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
	{
	public:
		struct FVector                                             Root;                                                    // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Effector;                                                // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8XX[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B4J4[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Elbow;                                                   // 0x0068(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
	 * Size -> 0x0198 (FullSize[0x01A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
	{
	public:
		unsigned char                                              UnknownData_1EAS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Root;                                                    // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0070(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUQE[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Effector;                                                // 0x0090(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x00F0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0108(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x0124(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZPT[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNUC[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Elbow;                                                   // 0x0140(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryVectorOp
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryVectorOp : public FRigUnit
	{
	public:
		struct FVector                                             Argument0;                                               // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Argument1;                                               // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Add_VectorVector
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Divide_VectorVector
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Distance_VectorVector
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Distance_VectorVector : public FRigUnit
	{
	public:
		struct FVector                                             Argument0;                                               // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Argument1;                                               // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEG7[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Target;                                                  // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damp;                                                    // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FK1A[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Force;                                                   // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0060(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Acceleration;                                            // 0x0078(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCRSimPoint                                         Point;                                                   // 0x0090(0x0040) Transient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInitialized;                                            // 0x00D0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGQ7[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugVector
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigUnitVisualDebugPointMode                               Mode;                                                    // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEJ8[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0024(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneSpace;                                               // 0x003C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KA2O[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigUnitVisualDebugPointMode                               Mode;                                                    // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DA54[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0024(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x003C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugQuat
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_U4K1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9D7[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Thickness;                                               // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneSpace;                                               // 0x003C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9T6[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_5OAC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1M0B[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Thickness;                                               // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x003C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LGV[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugTransform
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_97XJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVM4[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Thickness;                                               // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneSpace;                                               // 0x007C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWNL[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_CGYU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EAYF[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Thickness;                                               // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x007C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUKR[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SphereTraceWorld
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SphereTraceWorld : public FRigUnit
	{
	public:
		struct FVector                                             Start;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          Channel;                                                 // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPON[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHit;                                                    // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_610Q[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x0060(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SphereTraceByTraceChannel : public FRigUnit
	{
	public:
		struct FVector                                             Start;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETraceTypeQuery                                            TraceChannel;                                            // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEJX[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHit;                                                    // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_339F[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x0060(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SphereTraceByObjectTypes : public FRigUnit
	{
	public:
		struct FVector                                             Start;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EObjectTypeQuery>                                   ObjectTypes;                                             // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHit;                                                    // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SU7S[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x0068(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_25CT[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          World;                                                   // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToRigSpace_Transform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_3EWN[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Global;                                                  // 0x0070(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToWorldSpace_Location : public FRigUnit
	{
	public:
		struct FVector                                             Location;                                                // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             World;                                                   // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToRigSpace_Location : public FRigUnit
	{
	public:
		struct FVector                                             Location;                                                // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Global;                                                  // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_Z75Q[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               World;                                                   // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_DE32[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0010(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Global;                                                  // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.StructReference
	 * Size -> 0x0008
	 */
	struct FStructReference
	{
	public:
		unsigned char                                              UnknownData_4ET7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
