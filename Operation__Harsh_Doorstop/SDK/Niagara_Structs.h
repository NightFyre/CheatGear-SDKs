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
	 * Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
	 */
	enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
	{
		SetSystemInactive = 0,
		Deactivate        = 1,
		None              = 2,
		MAX               = 3
	};

	/**
	 * Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
	 */
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
	{
		ActivateIfInactive = 0,
		None               = 1,
		MAX                = 2
	};

	/**
	 * Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
	 */
	enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
	{
		Activate = 0,
		MAX      = 1
	};

	/**
	 * Enum Niagara.ENiagaraCollisionMode
	 */
	enum class ENiagaraCollisionMode : uint8_t
	{
		None          = 0,
		SceneGeometry = 1,
		DepthBuffer   = 2,
		DistanceField = 3,
		MAX           = 4
	};

	/**
	 * Enum Niagara.ENiagaraLegacyTrailWidthMode
	 */
	enum class ENiagaraLegacyTrailWidthMode : uint8_t
	{
		FromCentre = 0,
		FromFirst  = 1,
		FromSecond = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraIterationSource
	 */
	enum class ENiagaraIterationSource : uint8_t
	{
		Particles     = 0,
		DataInterface = 1,
		MAX           = 2
	};

	/**
	 * Enum Niagara.ENiagaraScriptGroup
	 */
	enum class ENiagaraScriptGroup : uint8_t
	{
		Particle = 0,
		Emitter  = 1,
		System   = 2,
		Max      = 3
	};

	/**
	 * Enum Niagara.ENiagaraScriptUsage
	 */
	enum class ENiagaraScriptUsage : uint8_t
	{
		Function                        = 0,
		Module                          = 1,
		DynamicInput                    = 2,
		ParticleSpawnScript             = 3,
		ParticleSpawnScriptInterpolated = 4,
		ParticleUpdateScript            = 5,
		ParticleEventScript             = 6,
		ParticleSimulationStageScript   = 7,
		ParticleGPUComputeScript        = 8,
		EmitterSpawnScript              = 9,
		EmitterUpdateScript             = 10,
		SystemSpawnScript               = 11,
		SystemUpdateScript              = 12,
		MAX                             = 13
	};

	/**
	 * Enum Niagara.ENiagaraScriptCompileStatus
	 */
	enum class ENiagaraScriptCompileStatus : uint8_t
	{
		NCS_Unknown                     = 0,
		NCS_Dirty                       = 1,
		NCS_Error                       = 2,
		NCS_UpToDate                    = 3,
		NCS_BeingCreated                = 4,
		NCS_UpToDateWithWarnings        = 5,
		NCS_ComputeUpToDateWithWarnings = 6,
		NCS_MAX                         = 7
	};

	/**
	 * Enum Niagara.ENiagaraInputNodeUsage
	 */
	enum class ENiagaraInputNodeUsage : uint8_t
	{
		Undefined               = 0,
		Parameter               = 1,
		Attribute               = 2,
		SystemConstant          = 3,
		TranslatorConstant      = 4,
		RapidIterationParameter = 5,
		MAX                     = 6
	};

	/**
	 * Enum Niagara.ENiagaraDataSetType
	 */
	enum class ENiagaraDataSetType : uint8_t
	{
		ParticleData = 0,
		Shared       = 1,
		Event        = 2,
		MAX          = 3
	};

	/**
	 * Enum Niagara.ENiagaraAgeUpdateMode
	 */
	enum class ENiagaraAgeUpdateMode : uint8_t
	{
		TickDeltaTime    = 0,
		DesiredAge       = 1,
		DesiredAgeNoSeek = 2,
		MAX              = 3
	};

	/**
	 * Enum Niagara.ENiagaraSimTarget
	 */
	enum class ENiagaraSimTarget : uint8_t
	{
		CPUSim        = 0,
		GPUComputeSim = 1,
		MAX           = 2
	};

	/**
	 * Enum Niagara.ENiagaraDefaultMode
	 */
	enum class ENiagaraDefaultMode : uint8_t
	{
		Value   = 0,
		Binding = 1,
		Custom  = 2,
		MAX     = 3
	};

	/**
	 * Enum Niagara.ENiagaraTickBehavior
	 */
	enum class ENiagaraTickBehavior : uint8_t
	{
		UsePrereqs            = 0,
		UseComponentTickGroup = 1,
		ForceTickFirst        = 2,
		ForceTickLast         = 3,
		MAX                   = 4
	};

	/**
	 * Enum Niagara.ENCPoolMethod
	 */
	enum class ENCPoolMethod : uint8_t
	{
		None                     = 0,
		AutoRelease              = 1,
		ManualRelease            = 2,
		ManualRelease_OnComplete = 3,
		FreeInPool               = 4,
		MAX                      = 5
	};

	/**
	 * Enum Niagara.ENDISkeletalMesh_SkinningMode
	 */
	enum class ENDISkeletalMesh_SkinningMode : uint8_t
	{
		Invalid              = 0,
		None                 = 1,
		SkinOnTheFly         = 2,
		PreSkin              = 3,
		ENDISkeletalMesh_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraScalabilityUpdateFrequency
	 */
	enum class ENiagaraScalabilityUpdateFrequency : uint8_t
	{
		SpawnOnly  = 0,
		Low        = 1,
		Medium     = 2,
		High       = 3,
		Continuous = 4,
		MAX        = 5
	};

	/**
	 * Enum Niagara.ENiagaraCullReaction
	 */
	enum class ENiagaraCullReaction : uint8_t
	{
		Deactivate                = 0,
		DeactivateImmediate       = 1,
		DeactivateResume          = 2,
		DeactivateImmediateResume = 3,
		MAX                       = 4
	};

	/**
	 * Enum Niagara.EParticleAllocationMode
	 */
	enum class EParticleAllocationMode : uint8_t
	{
		AutomaticEstimate = 0,
		ManualEstimate    = 1,
		MAX               = 2
	};

	/**
	 * Enum Niagara.EScriptExecutionMode
	 */
	enum class EScriptExecutionMode : uint8_t
	{
		EveryParticle    = 0,
		SpawnedParticles = 1,
		SingleParticle   = 2,
		MAX              = 3
	};

	/**
	 * Enum Niagara.ENiagaraSortMode
	 */
	enum class ENiagaraSortMode : uint8_t
	{
		None            = 0,
		ViewDepth       = 1,
		ViewDistance    = 2,
		CustomAscending = 3,
		CustomDecending = 4,
		MAX             = 5
	};

	/**
	 * Enum Niagara.ENiagaraMeshLockedAxisSpace
	 */
	enum class ENiagaraMeshLockedAxisSpace : uint8_t
	{
		Simulation = 0,
		World      = 1,
		Local      = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraMeshFacingMode
	 */
	enum class ENiagaraMeshFacingMode : uint8_t
	{
		Default        = 0,
		Velocity       = 1,
		CameraPosition = 2,
		CameraPlane    = 3,
		MAX            = 4
	};

	/**
	 * Enum Niagara.ENiagaraPlatformSetState
	 */
	enum class ENiagaraPlatformSetState : uint8_t
	{
		Disabled = 0,
		Enabled  = 1,
		Active   = 2,
		Unknown  = 3,
		MAX      = 4
	};

	/**
	 * Enum Niagara.ENiagaraPlatformSelectionState
	 */
	enum class ENiagaraPlatformSelectionState : uint8_t
	{
		Default  = 0,
		Enabled  = 1,
		Disabled = 2,
		MAX      = 3
	};

	/**
	 * Enum Niagara.ENiagaraPreviewGridResetMode
	 */
	enum class ENiagaraPreviewGridResetMode : uint8_t
	{
		Never      = 0,
		Individual = 1,
		All        = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraRibbonTessellationMode
	 */
	enum class ENiagaraRibbonTessellationMode : uint8_t
	{
		Automatic = 0,
		Custom    = 1,
		Disabled  = 2,
		MAX       = 3
	};

	/**
	 * Enum Niagara.ENiagaraRibbonDrawDirection
	 */
	enum class ENiagaraRibbonDrawDirection : uint8_t
	{
		FrontToBack = 0,
		BackToFront = 1,
		MAX         = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonAgeOffsetMode
	 */
	enum class ENiagaraRibbonAgeOffsetMode : uint8_t
	{
		Scale = 0,
		Clip  = 1,
		MAX   = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonFacingMode
	 */
	enum class ENiagaraRibbonFacingMode : uint8_t
	{
		Screen           = 0,
		Custom           = 1,
		CustomSideVector = 2,
		MAX              = 3
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyScriptConstraint
	 */
	enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
	{
		SameScript = 0,
		AllScripts = 1,
		MAX        = 2
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyType
	 */
	enum class ENiagaraModuleDependencyType : uint8_t
	{
		PreDependency  = 0,
		PostDependency = 1,
		MAX            = 2
	};

	/**
	 * Enum Niagara.EUnusedAttributeBehaviour
	 */
	enum class EUnusedAttributeBehaviour : uint8_t
	{
		Copy        = 0,
		Zero        = 1,
		None        = 2,
		MarkInvalid = 3,
		PassThrough = 4,
		MAX         = 5
	};

	/**
	 * Enum Niagara.ENiagaraSpriteFacingMode
	 */
	enum class ENiagaraSpriteFacingMode : uint8_t
	{
		FaceCamera              = 0,
		FaceCameraPlane         = 1,
		CustomFacingVector      = 2,
		FaceCameraPosition      = 3,
		FaceCameraDistanceBlend = 4,
		MAX                     = 5
	};

	/**
	 * Enum Niagara.ENiagaraSpriteAlignment
	 */
	enum class ENiagaraSpriteAlignment : uint8_t
	{
		Unaligned       = 0,
		VelocityAligned = 1,
		CustomAlignment = 2,
		MAX             = 3
	};

	/**
	 * Enum Niagara.ENiagaraParameterPanelCategory
	 */
	enum class ENiagaraParameterPanelCategory : uint8_t
	{
		Input           = 0,
		Attributes      = 1,
		Output          = 2,
		Local           = 3,
		User            = 4,
		Engine          = 5,
		Owner           = 6,
		System          = 7,
		Emitter         = 8,
		Particles       = 9,
		ScriptTransient = 10,
		StaticSwitch    = 11,
		None            = 12,
		Num             = 13,
		MAX             = 14
	};

	/**
	 * Enum Niagara.ENiagaraScriptParameterUsage
	 */
	enum class ENiagaraScriptParameterUsage : uint8_t
	{
		Input             = 0,
		Output            = 1,
		Local             = 2,
		InputOutput       = 3,
		InitialValueInput = 4,
		None              = 5,
		Num               = 6,
		MAX               = 7
	};

	/**
	 * Enum Niagara.ENiagaraParameterScope
	 */
	enum class ENiagaraParameterScope : uint8_t
	{
		Input                     = 0,
		User                      = 1,
		Engine                    = 2,
		Owner                     = 3,
		System                    = 4,
		Emitter                   = 5,
		Particles                 = 6,
		ScriptPersistent          = 7,
		ScriptTransient           = 8,
		Local                     = 9,
		Custom                    = 10,
		DISPLAY_ONLY_StaticSwitch = 11,
		Output                    = 12,
		None                      = 13,
		Num                       = 14,
		MAX                       = 15
	};

	/**
	 * Enum Niagara.ENiagaraExecutionState
	 */
	enum class ENiagaraExecutionState : uint8_t
	{
		Active        = 0,
		Inactive      = 1,
		InactiveClear = 2,
		Complete      = 3,
		Disabled      = 4,
		Num           = 5,
		MAX           = 6
	};

	/**
	 * Enum Niagara.ENiagaraExecutionStateSource
	 */
	enum class ENiagaraExecutionStateSource : uint8_t
	{
		Scalability        = 0,
		Internal           = 1,
		Owner              = 2,
		InternalCompletion = 3,
		MAX                = 4
	};

	/**
	 * Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
	 */
	enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
	{
		None     = 0,
		Largest  = 1,
		Smallest = 2,
		Scalar   = 3,
		MAX      = 4
	};

	/**
	 * Enum Niagara.ENiagaraVariantMode
	 */
	enum class ENiagaraVariantMode : uint8_t
	{
		None          = 0,
		Object        = 1,
		DataInterface = 2,
		Bytes         = 3,
		MAX           = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Niagara.NiagaraTypeDefinition
	 * Size -> 0x0010
	 */
	struct FNiagaraTypeDefinition
	{
	public:
		class UObject*                                             ClassStructOrEnum;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   UnderlyingType;                                          // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3RZ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableBase
	 * Size -> 0x0018
	 */
	struct FNiagaraVariableBase
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNiagaraTypeDefinition                              TypeDef;                                                 // 0x0008(0x0010) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariable
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FNiagaraVariable : public FNiagaraVariableBase
	{
	public:
		TArray<unsigned char>                                      VarData;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableWithOffset
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
	{
	public:
		int32_t                                                    Offset;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJSS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterStore
	 * Size -> 0x00B8
	 */
	struct FNiagaraParameterStore
	{
	public:
		unsigned char                                              UnknownData_CSB8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Owner;                                                   // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraVariableWithOffset>                  SortedParameterOffsets;                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      ParameterData;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UNiagaraDataInterface*>                       DataInterfaces;                                          // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UObject*>                                     UObjects;                                                // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AYOZ[0x68];                                  // 0x0050(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
	{
	public:
		TMap<struct FNiagaraVariable, struct FNiagaraVariable>     UserParameterRedirects;                                  // 0x00B8(0x0050) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NCPoolElement
	 * Size -> 0x0010
	 */
	struct FNCPoolElement
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OYQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NCPool
	 * Size -> 0x0038
	 */
	struct FNCPool
	{
	public:
		TArray<struct FNCPoolElement>                              FreeElements;                                            // 0x0000(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNiagaraComponent*>                           InUseComponents_Auto;                                    // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNiagaraComponent*>                           InUseComponents_Manual;                                  // 0x0020(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVMC[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraUserParameterBinding
	 * Size -> 0x0028
	 */
	struct FNiagaraUserParameterBinding
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0000(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NDIStaticMeshSectionFilter
	 * Size -> 0x0010
	 */
	struct FNDIStaticMeshSectionFilter
	{
	public:
		TArray<int32_t>                                            AllowedMaterialSlots;                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
	 * Size -> 0x0010
	 */
	struct FNiagaraDeviceProfileStateEntry
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   QualityLevelMask;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SetQualityLevelMask;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSet
	 * Size -> 0x0020
	 */
	struct FNiagaraPlatformSet
	{
	public:
		int32_t                                                    QualityLevelMask;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OO0S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDeviceProfileStateEntry>             DeviceProfileStates;                                     // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HC70[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilitySettings
	 * Size -> 0x0030
	 */
	struct FNiagaraSystemScalabilitySettings
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0000(0x0020) Edit, NativeAccessSpecifierPublic
		unsigned char                                              bCullByDistance : 1;                                     // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCullMaxInstanceCount : 1;                               // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCullByMaxTimeWithoutRender : 1;                         // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZT5[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistance;                                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxInstances;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeWithoutRender;                                    // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
	 * Size -> 0x0010
	 */
	struct FNiagaraSystemScalabilitySettingsArray
	{
	public:
		TArray<struct FNiagaraSystemScalabilitySettings>           Settings;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
	 * Size -> 0x0028
	 */
	struct FNiagaraEmitterScalabilitySettings
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0000(0x0020) Edit, NativeAccessSpecifierPublic
		unsigned char                                              bScaleSpawnCount : 1;                                    // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_95ZT[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnCountScale;                                         // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
	 * Size -> 0x0010
	 */
	struct FNiagaraEmitterScalabilitySettingsArray
	{
	public:
		TArray<struct FNiagaraEmitterScalabilitySettings>          Settings;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEventReceiverProperties
	 * Size -> 0x0018
	 */
	struct FNiagaraEventReceiverProperties
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEventGenerator;                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEmitter;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraTypeLayoutInfo
	 * Size -> 0x0040
	 */
	struct FNiagaraTypeLayoutInfo
	{
	public:
		TArray<uint32_t>                                           FloatComponentByteOffsets;                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           FloatComponentRegisterOffsets;                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Int32ComponentByteOffsets;                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Int32ComponentRegisterOffsets;                           // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableLayoutInfo
	 * Size -> 0x0048
	 */
	struct FNiagaraVariableLayoutInfo
	{
	public:
		uint32_t                                                   FloatComponentStart;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Int32ComponentStart;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraTypeLayoutInfo                              LayoutInfo;                                              // 0x0008(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetID
	 * Size -> 0x000C
	 */
	struct FNiagaraDataSetID
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDataSetType                                        Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1XS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetCompiledData
	 * Size -> 0x0040
	 */
	struct FNiagaraDataSetCompiledData
	{
	public:
		TArray<struct FNiagaraVariable>                            Variables;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariableLayoutInfo>                  VariableLayouts;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalFloatComponents;                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalInt32Components;                                    // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresPersistentIDs : 1;                              // 0x0028(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8A43[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraDataSetID                                   ID;                                                      // 0x002C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSimTarget                                          SimTarget;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ALHP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraEventGeneratorProperties
	 * Size -> 0x0050
	 */
	struct FNiagaraEventGeneratorProperties
	{
	public:
		int32_t                                                    MaxEventsPerFrame;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ID;                                                      // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41TT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x0010(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScriptProperties
	 * Size -> 0x0028
	 */
	struct FNiagaraEmitterScriptProperties
	{
	public:
		class UNiagaraScript*                                      Script;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraEventReceiverProperties>             EventReceivers;                                          // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraEventGeneratorProperties>            EventGenerators;                                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
	 * Size -> 0x0014
	 */
	struct FNiagaraDetailsLevelScaleOverrides
	{
	public:
		float                                                      Low;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Medium;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      High;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Epic;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cine;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
	{
	public:
		unsigned char                                              bOverrideSpawnCountScale : 1;                            // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D58G[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
	 * Size -> 0x0010
	 */
	struct FNiagaraEmitterScalabilityOverrides
	{
	public:
		TArray<struct FNiagaraEmitterScalabilityOverride>          Overrides;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEventScriptProperties
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
	{
	public:
		EScriptExecutionMode                                       ExecutionMode;                                           // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCUA[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SpawnNumber;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxEventsPerFrame;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               SourceEmitterID;                                         // 0x0034(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEventName;                                         // 0x0044(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomSpawnNumber;                                      // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TCT[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MinSpawnNumber;                                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TLG5[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableAttributeBinding
	 * Size -> 0x0078
	 */
	struct FNiagaraVariableAttributeBinding
	{
	public:
		struct FNiagaraVariable                                    BoundVariable;                                           // 0x0000(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    DataSetVariable;                                         // 0x0028(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    DefaultValueIfNonExistent;                               // 0x0050(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraMeshMaterialOverride
	 * Size -> 0x0030
	 */
	struct FNiagaraMeshMaterialOverride
	{
	public:
		class UMaterialInterface*                                  ExplicitMat;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        UserParamBinding;                                        // 0x0008(0x0028) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
	 * Size -> 0x0008
	 */
	struct FNiagaraScriptExecutionPaddingInfo
	{
	public:
		uint16_t                                                   SrcOffset;                                               // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DestOffset;                                              // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   SrcSize;                                                 // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DestSize;                                                // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
	{
	public:
		int32_t                                                    ParameterSize;                                           // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   PaddedParameterSize;                                     // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraScriptExecutionPaddingInfo>          PaddingInfo;                                             // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bInitialized : 1;                                        // 0x00D0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2LCE[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraBoundParameter
	 * Size -> 0x0030
	 */
	struct FNiagaraBoundParameter
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0000(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SrcOffset;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DestOffset;                                              // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableDataId
	 * Size -> 0x0048
	 */
	struct FNiagaraVMExecutableDataId
	{
	public:
		struct FGuid                                               CompilerVersionID;                                       // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraScriptUsage                                        ScriptUsageType;                                         // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1WA[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ScriptUsageTypeID;                                       // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsesRapidIterationParams : 1;                           // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInterpolatedSpawn : 1;                                  // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresPersistentIDs : 1;                              // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOTO[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               BaseScriptID;                                            // 0x0028(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraCompileHash                                 BaseScriptCompileHash;                                   // 0x0038(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameters
	 * Size -> 0x0010
	 */
	struct FNiagaraParameters
	{
	public:
		TArray<struct FNiagaraVariable>                            Parameters;                                              // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataUsageInfo
	 * Size -> 0x0001
	 */
	struct FNiagaraScriptDataUsageInfo
	{
	public:
		bool                                                       bReadsAttributeData;                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
	 * Size -> 0x0038
	 */
	struct FNiagaraScriptDataInterfaceCompileInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserPtrIdx;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80UA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeDefinition                              Type;                                                    // 0x0010(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapRead;                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapWrite;                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlaceholder;                                          // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0OZ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.VMFunctionSpecifier
	 * Size -> 0x0010
	 */
	struct FVMFunctionSpecifier
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Value;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.VMExternalFunctionBindingInfo
	 * Size -> 0x0038
	 */
	struct FVMExternalFunctionBindingInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OwnerName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               InputParamLocations;                                     // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumOutputs;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSU0[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVMFunctionSpecifier>                        FunctionSpecifiers;                                      // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetProperties
	 * Size -> 0x0020
	 */
	struct FNiagaraDataSetProperties
	{
	public:
		struct FNiagaraDataSetID                                   ID;                                                      // 0x0000(0x000C) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R61Q[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraVariable>                            Variables;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraStatScope
	 * Size -> 0x0010
	 */
	struct FNiagaraStatScope
	{
	public:
		class FName                                                FullName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FriendlyName;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.SimulationStageMetaData
	 * Size -> 0x0028
	 */
	struct FSimulationStageMetaData
	{
	public:
		class FName                                                IterationSource;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpawnOnly : 1;                                          // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWritesParticles : 1;                                    // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0U4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        OutputDestinations;                                      // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinStage;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxStage;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableData
	 * Size -> 0x0128
	 */
	struct FNiagaraVMExecutableData
	{
	public:
		TArray<unsigned char>                                      ByteCode;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      OptimizedByteCode;                                       // 0x0010(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumTempRegisters;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumUserPtrs;                                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraParameters                                  Parameters;                                              // 0x0028(0x0010) NativeAccessSpecifierPublic
		struct FNiagaraParameters                                  InternalParameters;                                      // 0x0038(0x0010) NativeAccessSpecifierPublic
		TMap<class FName, struct FNiagaraParameters>               DataSetToParameters;                                     // 0x0048(0x0050) NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Attributes;                                              // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraScriptDataUsageInfo                         DataUsage;                                               // 0x00A8(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BLH[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraScriptDataInterfaceCompileInfo>      DataInterfaceInfo;                                       // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVMExternalFunctionBindingInfo>              CalledVMExternalFunctions;                               // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataSetID>                           ReadDataSets;                                            // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataSetProperties>                   WriteDataSets;                                           // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraStatScope>                           StatScopes;                                              // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataInterfaceGPUParamInfo>           DIParamInfo;                                             // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraScriptCompileStatus                                LastCompileStatus;                                       // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRD8[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSimulationStageMetaData>                    SimulationStageMetaData;                                 // 0x0118(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
	 * Size -> 0x0038
	 */
	struct FNiagaraScriptDataInterfaceInfo
	{
	public:
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserPtrIdx;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F975[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeDefinition                              Type;                                                    // 0x0018(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapRead;                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapWrite;                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
	 * Size -> 0x0028
	 */
	struct FNiagaraVariableDataInterfaceBinding
	{
	public:
		struct FNiagaraVariable                                    BoundVariable;                                           // 0x0000(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilityOverride
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
	{
	public:
		unsigned char                                              bOverrideDistanceSettings : 1;                           // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideInstanceCountSettings : 1;                      // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideTimeSinceRendererSettings : 1;                  // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGU5[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
	 * Size -> 0x0010
	 */
	struct FNiagaraSystemScalabilityOverrides
	{
	public:
		TArray<struct FNiagaraSystemScalabilityOverride>           Overrides;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterHandle
	 * Size -> 0x0030
	 */
	struct FNiagaraEmitterHandle
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                IdName;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsEnabled;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6XI3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UHYK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEmitter*                                     Instance;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterDataSetBinding
	 * Size -> 0x0008
	 */
	struct FNiagaraParameterDataSetBinding
	{
	public:
		int32_t                                                    ParameterOffset;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataSetComponentOffset;                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
	 * Size -> 0x0020
	 */
	struct FNiagaraParameterDataSetBindingCollection
	{
	public:
		TArray<struct FNiagaraParameterDataSetBinding>             FloatOffsets;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBinding>             Int32Offsets;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemCompiledData
	 * Size -> 0x0258
	 */
	struct FNiagaraSystemCompiledData
	{
	public:
		struct FNiagaraParameterStore                              InstanceParamStore;                                      // 0x0000(0x00B8) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x00B8(0x0040) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         SpawnInstanceParamsDataSetCompiledData;                  // 0x00F8(0x0040) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         UpdateInstanceParamsDataSetCompiledData;                 // 0x0138(0x0040) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceGlobalBinding;                              // 0x0178(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceSystemBinding;                              // 0x0198(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceOwnerBinding;                               // 0x01B8(0x0020) NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBindingCollection>   SpawnInstanceEmitterBindings;                            // 0x01D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceGlobalBinding;                             // 0x01E8(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceSystemBinding;                             // 0x0208(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceOwnerBinding;                              // 0x0228(0x0020) NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBindingCollection>   UpdateInstanceEmitterBindings;                           // 0x0248(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0020(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
	 * Size -> 0x0090 (FullSize[0x00D8] - InheritedSize[0x0048])
	 */
	struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneBoolChannel                              BoolChannel;                                             // 0x0048(0x0090) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
	 * Size -> 0x0280 (FullSize[0x02C8] - InheritedSize[0x0048])
	 */
	struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             RedChannel;                                              // 0x0048(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             GreenChannel;                                            // 0x00E8(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             BlueChannel;                                             // 0x0188(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             AlphaChannel;                                            // 0x0228(0x00A0) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
	 * Size -> 0x00A0 (FullSize[0x00E8] - InheritedSize[0x0048])
	 */
	struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             FloatChannel;                                            // 0x0048(0x00A0) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
	 * Size -> 0x0090 (FullSize[0x00D8] - InheritedSize[0x0048])
	 */
	struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneIntegerChannel                           IntegerChannel;                                          // 0x0048(0x0090) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
	{
	public:
		struct FFrameNumber                                        SpawnSectionStartFrame;                                  // 0x0010(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumber                                        SpawnSectionEndFrame;                                    // 0x0014(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ENiagaraSystemSpawnSectionStartBehavior                    SpawnSectionStartBehavior;                               // 0x0018(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EPRT[0x3];                                   // 0x0019(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEvaluateBehavior                 SpawnSectionEvaluateBehavior;                            // 0x001C(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8LTU[0x3];                                   // 0x001D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEndBehavior                      SpawnSectionEndBehavior;                                 // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_75MI[0x3];                                   // 0x0021(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraAgeUpdateMode                                      AgeUpdateMode;                                           // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QB7W[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
	{	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
	 * Size -> 0x0288 (FullSize[0x02D0] - InheritedSize[0x0048])
	 */
	struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             VectorChannels[0x4];                                     // 0x0048(0x0280) NativeAccessSpecifierPrivate
		int32_t                                                    ChannelsUsed;                                            // 0x02C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XNP9[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraRandInfo
	 * Size -> 0x000C
	 */
	struct FNiagaraRandInfo
	{
	public:
		int32_t                                                    Seed1;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed2;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed3;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptVariableBinding
	 * Size -> 0x0008
	 */
	struct FNiagaraScriptVariableBinding
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableInfo
	 * Size -> 0x0048
	 */
	struct FNiagaraVariableInfo
	{
	public:
		struct FNiagaraVariable                                    Variable;                                                // 0x0000(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Definition;                                              // 0x0028(0x0018) NativeAccessSpecifierPublic
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemUpdateContext
	 * Size -> 0x0038
	 */
	struct FNiagaraSystemUpdateContext
	{
	public:
		TArray<class UNiagaraComponent*>                           ComponentsToReset;                                       // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UNiagaraComponent*>                           ComponentsToReInit;                                      // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UNiagaraSystem*>                              SystemSimsToDestroy;                                     // 0x0020(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0R0V[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraFunctionSignature
	 * Size -> 0x0088
	 */
	struct FNiagaraFunctionSignature
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Inputs;                                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Outputs;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OwnerName;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresContext : 1;                                    // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMemberFunction : 1;                                     // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bExperimental : 1;                                       // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsCPU : 1;                                        // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsGPU : 1;                                        // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWriteFunction : 1;                                      // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K25Y[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FName>                             FunctionSpecifiers;                                      // 0x0038(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.BasicParticleData
	 * Size -> 0x001C
	 */
	struct FBasicParticleData
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.MeshTriCoordinate
	 * Size -> 0x0010
	 */
	struct FMeshTriCoordinate
	{
	public:
		int32_t                                                    Tri;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaryCoord;                                               // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraGraphViewSettings
	 * Size -> 0x0010
	 */
	struct FNiagaraGraphViewSettings
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Zoom;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsValid;                                                // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C4R1[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraCollisionEventPayload
	 * Size -> 0x002C
	 */
	struct FNiagaraCollisionEventPayload
	{
	public:
		struct FVector                                             CollisionPos;                                            // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionNormal;                                         // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionVelocity;                                       // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticleIndex;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalMaterialIndex;                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
	 * Size -> 0x000C
	 */
	struct FNiagaraPlatformSetConflictEntry
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QualityLevelMask;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
	 * Size -> 0x0018
	 */
	struct FNiagaraPlatformSetConflictInfo
	{
	public:
		int32_t                                                    SetAIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SetBIndex;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraPlatformSetConflictEntry>            Conflicts;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScalabilityManager
	 * Size -> 0x0040
	 */
	struct FNiagaraScalabilityManager
	{
	public:
		class UNiagaraEffectType*                                  EffectType;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNiagaraComponent*>                           ManagedComponents;                                       // 0x0008(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PH1K[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraModuleDependency
	 * Size -> 0x0028
	 */
	struct FNiagaraModuleDependency
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraModuleDependencyType                               Type;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraModuleDependencyScriptConstraint                   ScriptConstraint;                                        // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JBX[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0010(0x0018) Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptHighlight
	 * Size -> 0x0028
	 */
	struct FNiagaraScriptHighlight
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemCompileRequest
	 * Size -> 0x0080
	 */
	struct FNiagaraSystemCompileRequest
	{
	public:
		unsigned char                                              UnknownData_81D3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     RootObjects;                                             // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LORO[0x68];                                  // 0x0018(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.EmitterCompiledScriptPair
	 * Size -> 0x0078
	 */
	struct FEmitterCompiledScriptPair
	{
	public:
		unsigned char                                              UnknownData_5WU3[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterCompiledData
	 * Size -> 0x0140
	 */
	struct FNiagaraEmitterCompiledData
	{
	public:
		TArray<class FName>                                        SpawnAttributes;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterSpawnIntervalVar;                                 // 0x0010(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterInterpSpawnStartDTVar;                            // 0x0038(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterSpawnGroupVar;                                    // 0x0060(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterAgeVar;                                           // 0x0088(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterRandomSeedVar;                                    // 0x00B0(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterTotalSpawnedParticlesVar;                         // 0x00D8(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x0100(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraInputConditionMetadata
	 * Size -> 0x0018
	 */
	struct FNiagaraInputConditionMetadata
	{
	public:
		class FName                                                InputName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      TargetValues;                                            // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableMetaData
	 * Size -> 0x00E8
	 */
	struct FNiagaraVariableMetaData
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                CategoryName;                                            // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bAdvancedDisplay;                                        // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQTW[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EditorSortPriority;                                      // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInlineEditConditionToggle;                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DFL[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraInputConditionMetadata                      EditCondition;                                           // 0x0040(0x0018) Edit, NativeAccessSpecifierPublic
		struct FNiagaraInputConditionMetadata                      VisibleCondition;                                        // 0x0058(0x0018) Edit, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           PropertyMetaData;                                        // 0x0070(0x0050) Edit, NativeAccessSpecifierPublic
		class FName                                                ScopeName;                                               // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ENiagaraScriptParameterUsage                               Usage;                                                   // 0x00C8(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GOAG[0x3];                                   // 0x00C9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bIsStaticSwitch;                                         // 0x00CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_40S9[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StaticSwitchDefaultValue;                                // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAddedToNodeGraphDeepCopy;                               // 0x00D4(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOutputIsPersistent;                                     // 0x00D5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q61D[0x2];                                   // 0x00D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CachedNamespacelessVariableName;                         // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCreatedInSystemEditor;                                  // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseLegacyNameString;                                    // 0x00E1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GDFI[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterScopeInfo
	 * Size -> 0x0018
	 */
	struct FNiagaraParameterScopeInfo
	{
	public:
		ENiagaraParameterScope                                     Scope;                                                   // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B0SZ[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_QCLN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NamespaceString;                                         // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
	 * Size -> 0x0030
	 */
	struct FNiagaraCompileHashVisitorDebugInfo
	{
	public:
		class FString                                              Object;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      PropertyKeys;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      PropertyValues;                                          // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraID
	 * Size -> 0x0008
	 */
	struct FNiagaraID
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AcquireTag;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSpawnInfo
	 * Size -> 0x0010
	 */
	struct FNiagaraSpawnInfo
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpStartDt;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntervalDt;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnGroup;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraMatrix
	 * Size -> 0x0040
	 */
	struct FNiagaraMatrix
	{
	public:
		struct FVector4                                            Row0;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row1;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row2;                                                    // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row3;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraTestStructInner
	 * Size -> 0x0018
	 */
	struct FNiagaraTestStructInner
	{
	public:
		struct FVector                                             InnerVector1;                                            // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InnerVector2;                                            // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraTestStruct
	 * Size -> 0x0048
	 */
	struct FNiagaraTestStruct
	{
	public:
		struct FVector                                             Vector1;                                                 // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector2;                                                 // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraTestStructInner                             InnerStruct1;                                            // 0x0018(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraTestStructInner                             InnerStruct2;                                            // 0x0030(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterMap
	 * Size -> 0x0001
	 */
	struct FNiagaraParameterMap
	{
	public:
		unsigned char                                              UnknownData_Q4BR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraNumeric
	 * Size -> 0x0001
	 */
	struct FNiagaraNumeric
	{
	public:
		unsigned char                                              UnknownData_8J2P[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraBool
	 * Size -> 0x0004
	 */
	struct FNiagaraBool
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraInt32
	 * Size -> 0x0004
	 */
	struct FNiagaraInt32
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraFloat
	 * Size -> 0x0004
	 */
	struct FNiagaraFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariant
	 * Size -> 0x0028
	 */
	struct FNiagaraVariant
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      Bytes;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ENiagaraVariantMode                                        CurrentMode;                                             // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1JII[0x3];                                   // 0x0021(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_T2NJ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraWorldManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FNiagaraWorldManagerTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_IF4N[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
