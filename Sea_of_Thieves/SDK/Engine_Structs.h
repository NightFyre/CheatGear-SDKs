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
	 * Enum Engine.EAttachLocation
	 */
	enum class EAttachLocation : uint8_t
	{
		KeepRelativeOffset         = 0,
		KeepWorldPosition          = 1,
		SnapToTarget               = 2,
		SnapToTargetIncludingScale = 3,
		MAX                        = 4
	};

	/**
	 * Enum Engine.EEndPlayReason
	 */
	enum class EEndPlayReason : uint8_t
	{
		Destroyed        = 0,
		LevelTransition  = 1,
		EndPlayInEditor  = 2,
		RemovedFromWorld = 3,
		Quit             = 4,
		MAX              = 5
	};

	/**
	 * Enum Engine.ETickingGroup
	 */
	enum class ETickingGroup : uint8_t
	{
		TG_PrePhysics     = 0,
		TG_StartPhysics   = 1,
		TG_DuringPhysics  = 2,
		TG_EndPhysics     = 3,
		TG_PostPhysics    = 4,
		TG_PostUpdateWork = 5,
		TG_NewlySpawned   = 6,
		TG_MAX            = 7
	};

	/**
	 * Enum Engine.ESpawnActorCollisionHandlingMethod
	 */
	enum class ESpawnActorCollisionHandlingMethod : uint8_t
	{
		Undefined                               = 0,
		AlwaysSpawn                             = 1,
		AdjustIfPossibleButAlwaysSpawn          = 2,
		AdjustIfPossibleButDontSpawnIfColliding = 3,
		DontSpawnIfColliding                    = 4,
		MAX                                     = 5
	};

	/**
	 * Enum Engine.EAutoReceiveInput
	 */
	enum class EAutoReceiveInput : uint8_t
	{
		Disabled = 0,
		Player0  = 1,
		Player1  = 2,
		Player2  = 3,
		Player3  = 4,
		Player4  = 5,
		Player5  = 6,
		Player6  = 7,
		Player7  = 8,
		MAX      = 9
	};

	/**
	 * Enum Engine.EActorSpawnRestrictions
	 */
	enum class EActorSpawnRestrictions : uint8_t
	{
		ServerOnly          = 0,
		ClientOnly          = 1,
		ServerAndClient     = 2,
		SpawnRestrictionMax = 3,
		MAX                 = 4
	};

	/**
	 * Enum Engine.ENetRole
	 */
	enum class ENetRole : uint8_t
	{
		ROLE_None            = 0,
		ROLE_SimulatedProxy  = 1,
		ROLE_AutonomousProxy = 2,
		ROLE_Authority       = 3,
		ROLE_MAX             = 4
	};

	/**
	 * Enum Engine.ERotatorQuantization
	 */
	enum class ERotatorQuantization : uint8_t
	{
		ByteComponents  = 0,
		ShortComponents = 1,
		MAX             = 2
	};

	/**
	 * Enum Engine.EVectorQuantization
	 */
	enum class EVectorQuantization : uint8_t
	{
		RoundWholeNumber = 0,
		RoundOneDecimal  = 1,
		RoundTwoDecimals = 2,
		MAX              = 3
	};

	/**
	 * Enum Engine.ENavPathEvent
	 */
	enum class ENavPathEvent : uint8_t
	{
		Cleared                       = 0,
		NewPath                       = 1,
		UpdatedDueToGoalMoved         = 2,
		UpdatedDueToNavigationChanged = 3,
		Invalidated                   = 4,
		RePathFailed                  = 5,
		Custom                        = 6,
		MAX                           = 7
	};

	/**
	 * Enum Engine.EComponentNetDormancy
	 */
	enum class EComponentNetDormancy : uint8_t
	{
		NotSupported = 0,
		Awake        = 1,
		FollowOwner  = 2,
		Dormant      = 3,
		Count        = 4,
		MAX          = 5
	};

	/**
	 * Enum Engine.EComponentCreationMethod
	 */
	enum class EComponentCreationMethod : uint8_t
	{
		Native                   = 0,
		SimpleConstructionScript = 1,
		UserConstructionScript   = 2,
		Instance                 = 3,
		MAX                      = 4
	};

	/**
	 * Enum Engine.EPlaneConstraintAxisSetting
	 */
	enum class EPlaneConstraintAxisSetting : uint8_t
	{
		Custom                  = 0,
		X                       = 1,
		Y                       = 2,
		Z                       = 3,
		UseGlobalPhysicsSetting = 4,
		MAX                     = 5
	};

	/**
	 * Enum Engine.EInterpToBehaviourType
	 */
	enum class EInterpToBehaviourType : uint8_t
	{
		OneShot         = 0,
		OneShot_Reverse = 1,
		Loop_Reset      = 2,
		PingPong        = 3,
		MAX             = 4
	};

	/**
	 * Enum Engine.EPlatformInterfaceDataType
	 */
	enum class EPlatformInterfaceDataType : uint8_t
	{
		PIDT_None   = 0,
		PIDT_Int    = 1,
		PIDT_Float  = 2,
		PIDT_String = 3,
		PIDT_Object = 4,
		PIDT_Custom = 5,
		PIDT_MAX    = 6
	};

	/**
	 * Enum Engine.EMovementMode
	 */
	enum class EMovementMode : uint8_t
	{
		MOVE_None       = 0,
		MOVE_Walking    = 1,
		MOVE_NavWalking = 2,
		MOVE_Falling    = 3,
		MOVE_Swimming   = 4,
		MOVE_Flying     = 5,
		MOVE_Custom     = 6,
		MOVE_MAX        = 7
	};

	/**
	 * Enum Engine.EOverlapFilterOption
	 */
	enum class EOverlapFilterOption : uint8_t
	{
		OverlapFilter_All         = 0,
		OverlapFilter_DynamicOnly = 1,
		OverlapFilter_StaticOnly  = 2,
		OverlapFilter_MAX         = 3
	};

	/**
	 * Enum Engine.EObjectTypeQuery
	 */
	enum class EObjectTypeQuery : uint8_t
	{
		ObjectTypeQuery1    = 0,
		ObjectTypeQuery2    = 1,
		ObjectTypeQuery3    = 2,
		ObjectTypeQuery4    = 3,
		ObjectTypeQuery5    = 4,
		ObjectTypeQuery6    = 5,
		ObjectTypeQuery7    = 6,
		ObjectTypeQuery8    = 7,
		ObjectTypeQuery9    = 8,
		ObjectTypeQuery10   = 9,
		ObjectTypeQuery11   = 10,
		ObjectTypeQuery12   = 11,
		ObjectTypeQuery13   = 12,
		ObjectTypeQuery14   = 13,
		ObjectTypeQuery15   = 14,
		ObjectTypeQuery16   = 15,
		ObjectTypeQuery17   = 16,
		ObjectTypeQuery18   = 17,
		ObjectTypeQuery19   = 18,
		ObjectTypeQuery20   = 19,
		ObjectTypeQuery21   = 20,
		ObjectTypeQuery22   = 21,
		ObjectTypeQuery23   = 22,
		ObjectTypeQuery24   = 23,
		ObjectTypeQuery25   = 24,
		ObjectTypeQuery26   = 25,
		ObjectTypeQuery27   = 26,
		ObjectTypeQuery28   = 27,
		ObjectTypeQuery29   = 28,
		ObjectTypeQuery30   = 29,
		ObjectTypeQuery31   = 30,
		ObjectTypeQuery32   = 31,
		ObjectTypeQuery_MAX = 32,
		MAX                 = 33
	};

	/**
	 * Enum Engine.EDrawDebugTrace
	 */
	enum class EDrawDebugTrace : uint8_t
	{
		None        = 0,
		ForOneFrame = 1,
		ForDuration = 2,
		Persistent  = 3,
		MAX         = 4
	};

	/**
	 * Enum Engine.ETraceTypeQuery
	 */
	enum class ETraceTypeQuery : uint8_t
	{
		TraceTypeQuery1    = 0,
		TraceTypeQuery2    = 1,
		TraceTypeQuery3    = 2,
		TraceTypeQuery4    = 3,
		TraceTypeQuery5    = 4,
		TraceTypeQuery6    = 5,
		TraceTypeQuery7    = 6,
		TraceTypeQuery8    = 7,
		TraceTypeQuery9    = 8,
		TraceTypeQuery10   = 9,
		TraceTypeQuery11   = 10,
		TraceTypeQuery12   = 11,
		TraceTypeQuery13   = 12,
		TraceTypeQuery14   = 13,
		TraceTypeQuery15   = 14,
		TraceTypeQuery16   = 15,
		TraceTypeQuery17   = 16,
		TraceTypeQuery18   = 17,
		TraceTypeQuery19   = 18,
		TraceTypeQuery20   = 19,
		TraceTypeQuery21   = 20,
		TraceTypeQuery22   = 21,
		TraceTypeQuery23   = 22,
		TraceTypeQuery24   = 23,
		TraceTypeQuery25   = 24,
		TraceTypeQuery26   = 25,
		TraceTypeQuery27   = 26,
		TraceTypeQuery28   = 27,
		TraceTypeQuery29   = 28,
		TraceTypeQuery30   = 29,
		TraceTypeQuery31   = 30,
		TraceTypeQuery32   = 31,
		TraceTypeQuery_MAX = 32,
		MAX                = 33
	};

	/**
	 * Enum Engine.ECollisionChannel
	 */
	enum class ECollisionChannel : uint8_t
	{
		ECC_WorldStatic           = 0,
		ECC_WorldDynamic          = 1,
		ECC_Pawn                  = 2,
		ECC_Visibility            = 3,
		ECC_Camera                = 4,
		ECC_PhysicsBody           = 5,
		ECC_Vehicle               = 6,
		ECC_Destructible          = 7,
		ECC_EngineTraceChannel1   = 8,
		ECC_EngineTraceChannel2   = 9,
		ECC_EngineTraceChannel3   = 10,
		ECC_EngineTraceChannel4   = 11,
		ECC_EngineTraceChannel5   = 12,
		ECC_EngineTraceChannel6   = 13,
		ECC_GameTraceChannel1     = 14,
		ECC_GameTraceChannel2     = 15,
		ECC_GameTraceChannel3     = 16,
		ECC_GameTraceChannel4     = 17,
		ECC_GameTraceChannel5     = 18,
		ECC_GameTraceChannel6     = 19,
		ECC_GameTraceChannel7     = 20,
		ECC_GameTraceChannel8     = 21,
		ECC_GameTraceChannel9     = 22,
		ECC_GameTraceChannel10    = 23,
		ECC_GameTraceChannel11    = 24,
		ECC_GameTraceChannel12    = 25,
		ECC_GameTraceChannel13    = 26,
		ECC_GameTraceChannel14    = 27,
		ECC_GameTraceChannel15    = 28,
		ECC_GameTraceChannel16    = 29,
		ECC_GameTraceChannel17    = 30,
		ECC_GameTraceChannel18    = 31,
		ECC_OverlapAll_Deprecated = 32,
		ECC_MAX                   = 33
	};

	/**
	 * Enum Engine.EMoveComponentAction
	 */
	enum class EMoveComponentAction : uint8_t
	{
		Move   = 0,
		Stop   = 1,
		Return = 2,
		MAX    = 3
	};

	/**
	 * Enum Engine.EQuitPreference
	 */
	enum class EQuitPreference : uint8_t
	{
		Quit       = 0,
		Background = 1,
		MAX        = 2
	};

	/**
	 * Enum Engine.ENodeAdvancedPins
	 */
	enum class ENodeAdvancedPins : uint8_t
	{
		NoPins = 0,
		Shown  = 1,
		Hidden = 2,
		MAX    = 3
	};

	/**
	 * Enum Engine.ENodeTitleType
	 */
	enum class ENodeTitleType : uint8_t
	{
		FullTitle      = 0,
		ListView       = 1,
		EditableTitle  = 2,
		MenuTitle      = 3,
		MAX_TitleTypes = 4,
		MAX            = 5
	};

	/**
	 * Enum Engine.EEdGraphPinDirection
	 */
	enum class EEdGraphPinDirection : uint8_t
	{
		EGPD_Input  = 0,
		EGPD_Output = 1,
		EGPD_MAX    = 2
	};

	/**
	 * Enum Engine.EBlueprintPinStyleType
	 */
	enum class EBlueprintPinStyleType : uint8_t
	{
		BPST_Original = 0,
		BPST_VariantA = 1,
		BPST_MAX      = 2
	};

	/**
	 * Enum Engine.EViewModeIndex
	 */
	enum class EViewModeIndex : uint8_t
	{
		VMI_BrushWireframe             = 0,
		VMI_Wireframe                  = 1,
		VMI_Unlit                      = 2,
		VMI_Lit                        = 3,
		VMI_Lit_DetailLighting         = 4,
		VMI_LightingOnly               = 5,
		VMI_LightComplexity            = 6,
		VMI_ShaderComplexity           = 7,
		VMI_LightmapDensity            = 8,
		VMI_LitLightmapDensity         = 9,
		VMI_ReflectionOverride         = 10,
		VMI_VisualizeBuffer            = 11,
		VMI_StationaryLightOverlap     = 12,
		VMI_CollisionPawn              = 13,
		VMI_CollisionVisibility        = 14,
		VMI_CollisionWireframe         = 15,
		VMI_LODColoration              = 16,
		VMI_TriangleDensityScreenSpace = 17,
		VMI_TriangleDensityWorldSpace  = 18,
		VMI_Max                        = 19,
		VMI_Unknown                    = 20
	};

	/**
	 * Enum Engine.EDemoPlayFailure
	 */
	enum class EDemoPlayFailure : uint8_t
	{
		Generic        = 0,
		DemoNotFound   = 1,
		Corrupt        = 2,
		InvalidVersion = 3,
		MAX            = 4
	};

	/**
	 * Enum Engine.ETravelType
	 */
	enum class ETravelType : uint8_t
	{
		TRAVEL_Absolute = 0,
		TRAVEL_Partial  = 1,
		TRAVEL_Relative = 2,
		TRAVEL_MAX      = 3
	};

	/**
	 * Enum Engine.ETravelFailure
	 */
	enum class ETravelFailure : uint8_t
	{
		NoLevel                     = 0,
		LoadMapFailure              = 1,
		InvalidURL                  = 2,
		PackageMissing              = 3,
		PackageVersion              = 4,
		NoDownload                  = 5,
		TravelFailure               = 6,
		CheatCommands               = 7,
		PendingNetGameCreateFailure = 8,
		CloudSaveFailure            = 9,
		ServerTravelFailure         = 10,
		ClientTravelFailure         = 11,
		MAX                         = 12
	};

	/**
	 * Enum Engine.ENetworkFailure
	 */
	enum class ENetworkFailure : uint8_t
	{
		NetDriverAlreadyExists                   = 0,
		NetDriverCreateFailure                   = 1,
		NetDriverListenFailure                   = 2,
		ConnectionLost                           = 3,
		ConnectionTimeout                        = 4,
		FailureReceived                          = 5,
		OutdatedClient                           = 6,
		OutdatedServer                           = 7,
		PendingConnectionFailure                 = 8,
		InvalidFeatureConfig                     = 9,
		RPCSpamDetected                          = 10,
		FailedPreLogin                           = 11,
		InitialConnectionTimeout                 = 12,
		PendingConnectionTimeout                 = 13,
		PlayerDeemedInactive                     = 14,
		CrewMigrationRequested                   = 15,
		ServerAtMatchmakingCapacity              = 16,
		ServerShuttingDownWhilstMigrationOngoing = 17,
		ServerShuttingDown                       = 18,
		CrewSessionLost                          = 19,
		MAX                                      = 20
	};

	/**
	 * Enum Engine.EInputEvent
	 */
	enum class EInputEvent : uint8_t
	{
		IE_Pressed     = 0,
		IE_Released    = 1,
		IE_Repeat      = 2,
		IE_DoubleClick = 3,
		IE_Axis        = 4,
		IE_MAX         = 5
	};

	/**
	 * Enum Engine.EAngularConstraintMotion
	 */
	enum class EAngularConstraintMotion : uint8_t
	{
		ACM_Free    = 0,
		ACM_Limited = 1,
		ACM_Locked  = 2,
		ACM_MAX     = 3
	};

	/**
	 * Enum Engine.EComponentSocketType
	 */
	enum class EComponentSocketType : uint8_t
	{
		Invalid = 0,
		Bone    = 1,
		Socket  = 2,
		MAX     = 3
	};

	/**
	 * Enum Engine.EComponentMobility
	 */
	enum class EComponentMobility : uint8_t
	{
		Static     = 0,
		Stationary = 1,
		Movable    = 2,
		MAX        = 3
	};

	/**
	 * Enum Engine.EPhysicalSurface
	 */
	enum class EPhysicalSurface : uint8_t
	{
		SurfaceType_Default = 0,
		SurfaceType1        = 1,
		SurfaceType2        = 2,
		SurfaceType3        = 3,
		SurfaceType4        = 4,
		SurfaceType5        = 5,
		SurfaceType6        = 6,
		SurfaceType7        = 7,
		SurfaceType8        = 8,
		SurfaceType9        = 9,
		SurfaceType10       = 10,
		SurfaceType11       = 11,
		SurfaceType12       = 12,
		SurfaceType13       = 13,
		SurfaceType14       = 14,
		SurfaceType15       = 15,
		SurfaceType16       = 16,
		SurfaceType17       = 17,
		SurfaceType18       = 18,
		SurfaceType19       = 19,
		SurfaceType20       = 20,
		SurfaceType21       = 21,
		SurfaceType22       = 22,
		SurfaceType23       = 23,
		SurfaceType24       = 24,
		SurfaceType25       = 25,
		SurfaceType26       = 26,
		SurfaceType27       = 27,
		SurfaceType28       = 28,
		SurfaceType29       = 29,
		SurfaceType30       = 30,
		SurfaceType31       = 31,
		SurfaceType32       = 32,
		SurfaceType33       = 33,
		SurfaceType34       = 34,
		SurfaceType35       = 35,
		SurfaceType36       = 36,
		SurfaceType37       = 37,
		SurfaceType38       = 38,
		SurfaceType39       = 39,
		SurfaceType40       = 40,
		SurfaceType41       = 41,
		SurfaceType42       = 42,
		SurfaceType43       = 43,
		SurfaceType44       = 44,
		SurfaceType45       = 45,
		SurfaceType46       = 46,
		SurfaceType47       = 47,
		SurfaceType48       = 48,
		SurfaceType49       = 49,
		SurfaceType50       = 50,
		SurfaceType51       = 51,
		SurfaceType52       = 52,
		SurfaceType53       = 53,
		SurfaceType54       = 54,
		SurfaceType55       = 55,
		SurfaceType56       = 56,
		SurfaceType57       = 57,
		SurfaceType58       = 58,
		SurfaceType59       = 59,
		SurfaceType60       = 60,
		SurfaceType61       = 61,
		SurfaceType62       = 62,
		SurfaceType_Max     = 63,
		MAX                 = 64
	};

	/**
	 * Enum Engine.EWalkableSlopeBehavior
	 */
	enum class EWalkableSlopeBehavior : uint8_t
	{
		WalkableSlope_Default    = 0,
		WalkableSlope_Increase   = 1,
		WalkableSlope_Decrease   = 2,
		WalkableSlope_Unwalkable = 3,
		WalkableSlope_Max        = 4
	};

	/**
	 * Enum Engine.EAutoPossessAI
	 */
	enum class EAutoPossessAI : uint8_t
	{
		Disabled               = 0,
		PlacedInWorld          = 1,
		Spawned                = 2,
		PlacedInWorldOrSpawned = 3,
		MAX                    = 4
	};

	/**
	 * Enum Engine.ENetDormancy
	 */
	enum class ENetDormancy : uint8_t
	{
		DORM_Never          = 0,
		DORM_Awake          = 1,
		DORM_DormantAll     = 2,
		DORM_DormantPartial = 3,
		DORM_Initial        = 4,
		DORM_MAX            = 5
	};

	/**
	 * Enum Engine.ESimplygonMaterialChannel
	 */
	enum class ESimplygonMaterialChannel : uint8_t
	{
		SG_MATERIAL_CHANNEL_AMBIENT      = 0,
		SG_MATERIAL_CHANNEL_DIFFUSE      = 1,
		SG_MATERIAL_CHANNEL_SPECULAR     = 2,
		SG_MATERIAL_CHANNEL_OPACITY      = 3,
		SG_MATERIAL_CHANNEL_EMISSIVE     = 4,
		SG_MATERIAL_CHANNEL_NORMALS      = 5,
		SG_MATERIAL_CHANNEL_DISPLACEMENT = 6,
		SG_MATERIAL_CHANNEL_BASECOLOR    = 7,
		SG_MATERIAL_CHANNEL_ROUGHNESS    = 8,
		SG_MATERIAL_CHANNEL_METALLIC     = 9,
		SG_MATERIAL_CHANNEL_AO           = 10,
		SG_MATERIAL_CHANNEL_MAX          = 11
	};

	/**
	 * Enum Engine.ESimplygonTextureResolution
	 */
	enum class ESimplygonTextureResolution : uint8_t
	{
		TextureResolution     = 0,
		TextureResolution01   = 1,
		TextureResolution02   = 2,
		TextureResolution03   = 3,
		TextureResolution04   = 4,
		TextureResolution05   = 5,
		TextureResolution06   = 6,
		TextureResolution07   = 7,
		TextureResolution_MAX = 8
	};

	/**
	 * Enum Engine.ESimplygonColorChannels
	 */
	enum class ESimplygonColorChannels : uint8_t
	{
		RGBA = 0,
		RGB  = 1,
		L    = 2,
		MAX  = 3
	};

	/**
	 * Enum Engine.ESimplygonTextureSamplingQuality
	 */
	enum class ESimplygonTextureSamplingQuality : uint8_t
	{
		Poor   = 0,
		Low    = 1,
		Medium = 2,
		High   = 3,
		MAX    = 4
	};

	/**
	 * Enum Engine.ESimplygonCasterType
	 */
	enum class ESimplygonCasterType : uint8_t
	{
		None    = 0,
		Color   = 1,
		Normals = 2,
		Opacity = 3,
		MAX     = 4
	};

	/**
	 * Enum Engine.ESimplygonTextureStrech
	 */
	enum class ESimplygonTextureStrech : uint8_t
	{
		None      = 0,
		VerySmall = 1,
		Small     = 2,
		Medium    = 3,
		Large     = 4,
		VeryLarge = 5,
		MAX       = 6
	};

	/**
	 * Enum Engine.EMaterialLODType
	 */
	enum class EMaterialLODType : uint8_t
	{
		Off             = 0,
		BakeTexture     = 1,
		BakeVertexColor = 2,
		Replace         = 3,
		MAX             = 4
	};

	/**
	 * Enum Engine.ESimplygonLODType
	 */
	enum class ESimplygonLODType : uint8_t
	{
		Reduction = 0,
		Remeshing = 1,
		MAX       = 2
	};

	/**
	 * Enum Engine.EMeshFeatureImportance
	 */
	enum class EMeshFeatureImportance : uint8_t
	{
		Off     = 0,
		Lowest  = 1,
		Low     = 2,
		Normal  = 3,
		High    = 4,
		Highest = 5,
		MAX     = 6
	};

	/**
	 * Enum Engine.EShadowMapFlags
	 */
	enum class EShadowMapFlags : uint8_t
	{
		SMF_None     = 0,
		SMF_Streamed = 1,
		SMF_MAX      = 2
	};

	/**
	 * Enum Engine.ELightMapPaddingType
	 */
	enum class ELightMapPaddingType : uint8_t
	{
		LMPT_NormalPadding = 0,
		LMPT_PrePadding    = 1,
		LMPT_NoPadding     = 2,
		LMPT_MAX           = 3
	};

	/**
	 * Enum Engine.EDominanceGroup
	 */
	enum class EDominanceGroup : uint8_t
	{
		DominanceGroup     = 0,
		DominanceGroup01   = 1,
		DominanceGroup02   = 2,
		DominanceGroup03   = 3,
		DominanceGroup04   = 4,
		DominanceGroup05   = 5,
		DominanceGroup06   = 6,
		DominanceGroup07   = 7,
		DominanceGroup08   = 8,
		DominanceGroup09   = 9,
		DominanceGroup10   = 10,
		DominanceGroup11   = 11,
		DominanceGroup12   = 12,
		DominanceGroup13   = 13,
		DominanceGroup14   = 14,
		DominanceGroup15   = 15,
		DominanceGroup16   = 16,
		DominanceGroup17   = 17,
		DominanceGroup18   = 18,
		DominanceGroup19   = 19,
		DominanceGroup20   = 20,
		DominanceGroup21   = 21,
		DominanceGroup22   = 22,
		DominanceGroup23   = 23,
		DominanceGroup24   = 24,
		DominanceGroup25   = 25,
		DominanceGroup26   = 26,
		DominanceGroup27   = 27,
		DominanceGroup28   = 28,
		DominanceGroup29   = 29,
		DominanceGroup30   = 30,
		DominanceGroup31   = 31,
		DominanceGroup_Max = 32
	};

	/**
	 * Enum Engine.ECollisionEnabled
	 */
	enum class ECollisionEnabled : uint8_t
	{
		NoCollision     = 0,
		QueryOnly       = 1,
		PhysicsOnly     = 2,
		QueryAndPhysics = 3,
		MAX             = 4
	};

	/**
	 * Enum Engine.ETimelineSigType
	 */
	enum class ETimelineSigType : uint8_t
	{
		ETS_EventSignature       = 0,
		ETS_FloatSignature       = 1,
		ETS_VectorSignature      = 2,
		ETS_LinearColorSignature = 3,
		ETS_InvalidSignature     = 4,
		ETS_MAX                  = 5
	};

	/**
	 * Enum Engine.ESleepFamily
	 */
	enum class ESleepFamily : uint8_t
	{
		Normal    = 0,
		Sensitive = 1,
		Custom    = 2,
		MAX       = 3
	};

	/**
	 * Enum Engine.ERadialImpulseFalloff
	 */
	enum class ERadialImpulseFalloff : uint8_t
	{
		RIF_Constant = 0,
		RIF_Linear   = 1,
		RIF_MAX      = 2
	};

	/**
	 * Enum Engine.EInputConsumeOptions
	 */
	enum class EInputConsumeOptions : uint8_t
	{
		ICO_ConsumeAll       = 0,
		ICO_ConsumeBoundKeys = 1,
		ICO_ConsumeNone      = 2,
		ICO_MAX              = 3
	};

	/**
	 * Enum Engine.EFilterInterpolationType
	 */
	enum class EFilterInterpolationType : uint8_t
	{
		BSIT_Average = 0,
		BSIT_Linear  = 1,
		BSIT_Cubic   = 2,
		BSIT_MAX     = 3
	};

	/**
	 * Enum Engine.ECollisionResponse
	 */
	enum class ECollisionResponse : uint8_t
	{
		ECR_Ignore  = 0,
		ECR_Overlap = 1,
		ECR_Block   = 2,
		ECR_MAX     = 3
	};

	/**
	 * Enum Engine.EPhysicsSceneType
	 */
	enum class EPhysicsSceneType : uint8_t
	{
		PST_Sync  = 0,
		PST_Cloth = 1,
		PST_Async = 2,
		PST_MAX   = 3
	};

	/**
	 * Enum Engine.ETriangleSortAxis
	 */
	enum class ETriangleSortAxis : uint8_t
	{
		TSA_X_Axis = 0,
		TSA_Y_Axis = 1,
		TSA_Z_Axis = 2,
		TSA_MAX    = 3
	};

	/**
	 * Enum Engine.ETriangleSortOption
	 */
	enum class ETriangleSortOption : uint8_t
	{
		TRISORT_None                 = 0,
		TRISORT_CenterRadialDistance = 1,
		TRISORT_Random               = 2,
		TRISORT_MergeContiguous      = 3,
		TRISORT_Custom               = 4,
		TRISORT_CustomLeftRight      = 5,
		TRISORT_MAX                  = 6
	};

	/**
	 * Enum Engine.ELightingBuildQuality
	 */
	enum class ELightingBuildQuality : uint8_t
	{
		Quality_Preview    = 0,
		Quality_Medium     = 1,
		Quality_High       = 2,
		Quality_Production = 3,
		Quality_MAX        = 4
	};

	/**
	 * Enum Engine.EMaterialSamplerType
	 */
	enum class EMaterialSamplerType : uint8_t
	{
		SAMPLERTYPE_Color             = 0,
		SAMPLERTYPE_Grayscale         = 1,
		SAMPLERTYPE_Alpha             = 2,
		SAMPLERTYPE_Normal            = 3,
		SAMPLERTYPE_Masks             = 4,
		SAMPLERTYPE_DistanceFieldFont = 5,
		SAMPLERTYPE_LinearColor       = 6,
		SAMPLERTYPE_LinearGrayscale   = 7,
		SAMPLERTYPE_MAX               = 8
	};

	/**
	 * Enum Engine.EPresortedBillboardsMode
	 */
	enum class EPresortedBillboardsMode : uint8_t
	{
		PBM_Disabled      = 0,
		PBM_FrontToBack2D = 1,
		PBM_BackToFront2D = 2,
		PBM_MAX           = 3
	};

	/**
	 * Enum Engine.EMaterialGeometryMode
	 */
	enum class EMaterialGeometryMode : uint8_t
	{
		MGM_Normal                        = 0,
		MGM_VerticesAsBillboards          = 1,
		MGM_TriangleDensityView           = 2,
		MGM_TriangleDensityViewWorldSpace = 3,
		MGM_MAX                           = 4
	};

	/**
	 * Enum Engine.ELowResTranslucencyCascade
	 */
	enum class ELowResTranslucencyCascade : uint8_t
	{
		LRTC_QuarterRes = 0,
		LRTC_HalfRes    = 1,
		LRTC_FullRes    = 2,
		LRTC_MAX        = 3
	};

	/**
	 * Enum Engine.EMaterialTessellationMode
	 */
	enum class EMaterialTessellationMode : uint8_t
	{
		MTM_NoTessellation   = 0,
		MTM_FlatTessellation = 1,
		MTM_PNTriangles      = 2,
		MTM_MAX              = 3
	};

	/**
	 * Enum Engine.EMaterialShadingModel
	 */
	enum class EMaterialShadingModel : uint8_t
	{
		MSM_Unlit             = 0,
		MSM_DefaultLit        = 1,
		MSM_Subsurface        = 2,
		MSM_PreintegratedSkin = 3,
		MSM_ClearCoat         = 4,
		MSM_SubsurfaceProfile = 5,
		MSM_TwoSidedFoliage   = 6,
		MSM_MAX               = 7
	};

	/**
	 * Enum Engine.EParticleCollisionMode
	 */
	enum class EParticleCollisionMode : uint8_t
	{
		SceneDepth    = 0,
		DistanceField = 1,
		MAX           = 2
	};

	/**
	 * Enum Engine.ETrailWidthMode
	 */
	enum class ETrailWidthMode : uint8_t
	{
		FromCentre = 0,
		FromFirst  = 1,
		FromSecond = 2,
		MAX        = 3
	};

	/**
	 * Enum Engine.ETranslucentSortPolicy
	 */
	enum class ETranslucentSortPolicy : uint8_t
	{
		SortByDistance   = 0,
		SortByProjectedZ = 1,
		SortAlongAxis    = 2,
		MAX              = 3
	};

	/**
	 * Enum Engine.ETranslucencyLightingMode
	 */
	enum class ETranslucencyLightingMode : uint8_t
	{
		TLM_VolumetricNonDirectional          = 0,
		TLM_VolumetricDirectional             = 1,
		TLM_VolumetricPerVertexNonDirectional = 2,
		TLM_VolumetricPerVertexDirectional    = 3,
		TLM_Surface                           = 4,
		TLM_SurfacePerPixelLighting           = 5,
		TLM_DirectionalInnerCascade           = 6,
		TLM_NonDirectionalInnerCascade        = 7,
		TLM_MAX                               = 8
	};

	/**
	 * Enum Engine.ESamplerSourceMode
	 */
	enum class ESamplerSourceMode : uint8_t
	{
		SSM_FromTextureAsset         = 0,
		SSM_Wrap_WorldGroupSettings  = 1,
		SSM_Clamp_WorldGroupSettings = 2,
		SSM_MAX                      = 3
	};

	/**
	 * Enum Engine.EConstantMaterial
	 */
	enum class EConstantMaterial : uint8_t
	{
		CONSTMAT_None        = 0,
		CONSTMAT_GroundCover = 1,
		CONSTMAT_TreeFoliage = 2,
		CONSTMAT_MAX         = 3
	};

	/**
	 * Enum Engine.EBlendMode
	 */
	enum class EBlendMode : uint8_t
	{
		BLEND_Opaque             = 0,
		BLEND_Masked             = 1,
		BLEND_Translucent        = 2,
		BLEND_Additive           = 3,
		BLEND_Modulate           = 4,
		BLEND_BlendedOIT         = 5,
		BLEND_LowResTranslucent  = 6,
		BLEND_AlphaBlend         = 7,
		BLEND_TranslucentUI      = 8,
		BLEND_PremultipliedAlpha = 9,
		BLEND_MAX                = 10
	};

	/**
	 * Enum Engine.EIndirectLightingCacheQuality
	 */
	enum class EIndirectLightingCacheQuality : uint8_t
	{
		ILCQ_Off    = 0,
		ILCQ_Point  = 1,
		ILCQ_Volume = 2,
		ILCQ_MAX    = 3
	};

	/**
	 * Enum Engine.ESceneDepthPriorityGroup
	 */
	enum class ESceneDepthPriorityGroup : uint8_t
	{
		SDPG_World      = 0,
		SDPG_Foreground = 1,
		SDPG_MAX        = 2
	};

	/**
	 * Enum Engine.EDetachmentRule
	 */
	enum class EDetachmentRule : uint8_t
	{
		KeepRelative = 0,
		KeepWorld    = 1,
		MAX          = 2
	};

	/**
	 * Enum Engine.EAttachmentRule
	 */
	enum class EAttachmentRule : uint8_t
	{
		KeepRelative = 0,
		KeepWorld    = 1,
		SnapToTarget = 2,
		MAX          = 3
	};

	/**
	 * Enum Engine.EActorMetricsType
	 */
	enum class EActorMetricsType : uint8_t
	{
		METRICS_VERTS    = 0,
		METRICS_TRIS     = 1,
		METRICS_SECTIONS = 2,
		METRICS_MAX      = 3
	};

	/**
	 * Enum Engine.EAspectRatioAxisConstraint
	 */
	enum class EAspectRatioAxisConstraint : uint8_t
	{
		AspectRatio_MaintainYFOV                   = 0,
		AspectRatio_MaintainXFOV                   = 1,
		AspectRatio_MajorAxisFOV                   = 2,
		AspectRatio_MaintainYFOV_UnitIsXFovIn16By9 = 3,
		AspectRatio_MAX                            = 4
	};

	/**
	 * Enum Engine.EBlueprintType
	 */
	enum class EBlueprintType : uint8_t
	{
		BPTYPE_Normal          = 0,
		BPTYPE_Const           = 1,
		BPTYPE_MacroLibrary    = 2,
		BPTYPE_Interface       = 3,
		BPTYPE_LevelScript     = 4,
		BPTYPE_FunctionLibrary = 5,
		BPTYPE_MAX             = 6
	};

	/**
	 * Enum Engine.EBlueprintStatus
	 */
	enum class EBlueprintStatus : uint8_t
	{
		BS_Unknown              = 0,
		BS_Dirty                = 1,
		BS_Error                = 2,
		BS_UpToDate             = 3,
		BS_BeingCreated         = 4,
		BS_UpToDateWithWarnings = 5,
		BS_MAX                  = 6
	};

	/**
	 * Enum Engine.ERelativeTransformSpace
	 */
	enum class ERelativeTransformSpace : uint8_t
	{
		RTS_World     = 0,
		RTS_Actor     = 1,
		RTS_Component = 2,
		RTS_Basis     = 3,
		RTS_BasisGrid = 4,
		RTS_MAX       = 5
	};

	/**
	 * Enum Engine.EDetailMode
	 */
	enum class EDetailMode : uint8_t
	{
		DM_Low    = 0,
		DM_Medium = 1,
		DM_High   = 2,
		DM_MAX    = 3
	};

	/**
	 * Enum Engine.ENetSpatialClusteringOptions
	 */
	enum class ENetSpatialClusteringOptions : uint8_t
	{
		OptIn         = 0,
		OptOut        = 1,
		NeverRelevant = 2,
		MAX           = 3
	};

	/**
	 * Enum Engine.EBrushType
	 */
	enum class EBrushType : uint8_t
	{
		Brush_Default  = 0,
		Brush_Add      = 1,
		Brush_Subtract = 2,
		Brush_MAX      = 3
	};

	/**
	 * Enum Engine.ECsgOper
	 */
	enum class ECsgOper : uint8_t
	{
		CSG_Active      = 0,
		CSG_Add         = 1,
		CSG_Subtract    = 2,
		CSG_Intersect   = 3,
		CSG_Deintersect = 4,
		CSG_None        = 5,
		CSG_MAX         = 6
	};

	/**
	 * Enum Engine.ReverbPreset
	 */
	enum class EReverbPreset : uint8_t
	{
		REVERB_Default       = 0,
		REVERB_Bathroom      = 1,
		REVERB_StoneRoom     = 2,
		REVERB_Auditorium    = 3,
		REVERB_ConcertHall   = 4,
		REVERB_Cave          = 5,
		REVERB_Hallway       = 6,
		REVERB_StoneCorridor = 7,
		REVERB_Alley         = 8,
		REVERB_Forest        = 9,
		REVERB_City          = 10,
		REVERB_Mountains     = 11,
		REVERB_Quarry        = 12,
		REVERB_Plain         = 13,
		REVERB_ParkingLot    = 14,
		REVERB_SewerPipe     = 15,
		REVERB_Underwater    = 16,
		REVERB_SmallRoom     = 17,
		REVERB_MediumRoom    = 18,
		REVERB_LargeRoom     = 19,
		REVERB_MediumHall    = 20,
		REVERB_LargeHall     = 21,
		REVERB_Plate         = 22,
		REVERB_MAX           = 23
	};

	/**
	 * Enum Engine.EStreamingVolumeUsage
	 */
	enum class EStreamingVolumeUsage : uint8_t
	{
		SVB_Loading                  = 0,
		SVB_LoadingAndVisibility     = 1,
		SVB_VisibilityBlockingOnLoad = 2,
		SVB_BlockingOnLoad           = 3,
		SVB_LoadingNotVisible        = 4,
		SVB_MAX                      = 5
	};

	/**
	 * Enum Engine.ENavigationQueryResult
	 */
	enum class ENavigationQueryResult : uint8_t
	{
		Invalid = 0,
		Error   = 1,
		Fail    = 2,
		Success = 3,
		MAX     = 4
	};

	/**
	 * Enum Engine.ENavDataGatheringModeConfig
	 */
	enum class ENavDataGatheringModeConfig : uint8_t
	{
		Invalid = 0,
		Instant = 1,
		Lazy    = 2,
		MAX     = 3
	};

	/**
	 * Enum Engine.ENavDataGatheringMode
	 */
	enum class ENavDataGatheringMode : uint8_t
	{
		Default = 0,
		Instant = 1,
		Lazy    = 2,
		MAX     = 3
	};

	/**
	 * Enum Engine.ENavigationOptionFlag
	 */
	enum class ENavigationOptionFlag : uint8_t
	{
		Default = 0,
		Enable  = 1,
		Disable = 2,
		MAX     = 3,
		MAX01   = 4
	};

	/**
	 * Enum Engine.EBlendableLocation
	 */
	enum class EBlendableLocation : uint8_t
	{
		BL_AfterTonemapping         = 0,
		BL_BeforeTonemapping        = 1,
		BL_BeforeTranslucency       = 2,
		BL_ReplacingTonemapper      = 3,
		BL_ActualBeforeTranslucency = 4,
		BL_BeforeLighting           = 5,
		BL_MAX                      = 6
	};

	/**
	 * Enum Engine.EDisableShadowMapMethod
	 */
	enum class EDisableShadowMapMethod : uint8_t
	{
		DSM_None               = 0,
		DSM_DisableLast        = 1,
		DSM_DisableThirdSecond = 2,
		DSM_DisableAll         = 3,
		DSM_MAX                = 4
	};

	/**
	 * Enum Engine.EAntiAliasingMethod
	 */
	enum class EAntiAliasingMethod : uint8_t
	{
		AAM_None       = 0,
		AAM_FXAA       = 1,
		AAM_TemporalAA = 2,
		AAM_MAX        = 3
	};

	/**
	 * Enum Engine.EDepthOfFieldMethod
	 */
	enum class EDepthOfFieldMethod : uint8_t
	{
		DOFM_BokehDOF  = 0,
		DOFM_Gaussian  = 1,
		DOFM_CircleDOF = 2,
		DOFM_MAX       = 3
	};

	/**
	 * Enum Engine.ECameraAnimPlaySpace
	 */
	enum class ECameraAnimPlaySpace : uint8_t
	{
		CameraLocal                  = 0,
		World                        = 1,
		UserDefined                  = 2,
		RARE_CutsceneWorld           = 3,
		RARE_RelativeToWorldLocation = 4,
		MAX                          = 5
	};

	/**
	 * Enum Engine.ECameraProjectionMode
	 */
	enum class ECameraProjectionMode : uint8_t
	{
		Perspective  = 0,
		Orthographic = 1,
		MAX          = 2
	};

	/**
	 * Enum Engine.EInitialOscillatorOffset
	 */
	enum class EInitialOscillatorOffset : uint8_t
	{
		EOO_OffsetRandom = 0,
		EOO_OffsetZero   = 1,
		EOO_MAX          = 2
	};

	/**
	 * Enum Engine.EViewTargetBlendFunction
	 */
	enum class EViewTargetBlendFunction : uint8_t
	{
		VTBlend_Linear    = 0,
		VTBlend_Cubic     = 1,
		VTBlend_EaseIn    = 2,
		VTBlend_EaseOut   = 3,
		VTBlend_EaseInOut = 4,
		VTBlend_MAX       = 5
	};

	/**
	 * Enum Engine.EControllerAnalogStick
	 */
	enum class EControllerAnalogStick : uint8_t
	{
		CAS_LeftStick  = 0,
		CAS_RightStick = 1,
		CAS_MAX        = 2
	};

	/**
	 * Enum Engine.ERichCurveExtrapolation
	 */
	enum class ERichCurveExtrapolation : uint8_t
	{
		RCCE_Cycle           = 0,
		RCCE_CycleWithOffset = 1,
		RCCE_Oscillate       = 2,
		RCCE_Linear          = 3,
		RCCE_Constant        = 4,
		RCCE_None            = 5,
		RCCE_MAX             = 6
	};

	/**
	 * Enum Engine.ERichCurveTangentWeightMode
	 */
	enum class ERichCurveTangentWeightMode : uint8_t
	{
		RCTWM_WeightedNone   = 0,
		RCTWM_WeightedArrive = 1,
		RCTWM_WeightedLeave  = 2,
		RCTWM_WeightedBoth   = 3,
		RCTWM_MAX            = 4
	};

	/**
	 * Enum Engine.ERichCurveTangentMode
	 */
	enum class ERichCurveTangentMode : uint8_t
	{
		RCTM_Auto  = 0,
		RCTM_User  = 1,
		RCTM_Break = 2,
		RCTM_None  = 3,
		RCTM_MAX   = 4
	};

	/**
	 * Enum Engine.ERichCurveInterpMode
	 */
	enum class ERichCurveInterpMode : uint8_t
	{
		RCIM_Linear   = 0,
		RCIM_Constant = 1,
		RCIM_Cubic    = 2,
		RCIM_None     = 3,
		RCIM_MAX      = 4
	};

	/**
	 * Enum Engine.EDynamicForceFeedbackAction
	 */
	enum class EDynamicForceFeedbackAction : uint8_t
	{
		Start  = 0,
		Update = 1,
		Stop   = 2,
		MAX    = 3
	};

	/**
	 * Enum Engine.EStandbyType
	 */
	enum class EStandbyType : uint8_t
	{
		STDBY_Rx      = 0,
		STDBY_Tx      = 1,
		STDBY_BadPing = 2,
		STDBY_MAX     = 3
	};

	/**
	 * Enum Engine.EWorldCompositionSetting
	 */
	enum class EWorldCompositionSetting : uint8_t
	{
		NoWorldComposition     = 0,
		WorldComposition       = 1,
		NestedWorldComposition = 2,
		MAX                    = 3
	};

	/**
	 * Enum Engine.EVisibilityAggressiveness
	 */
	enum class EVisibilityAggressiveness : uint8_t
	{
		VIS_LeastAggressive      = 0,
		VIS_ModeratelyAggressive = 1,
		VIS_MostAggressive       = 2,
		VIS_Max                  = 3
	};

	/**
	 * Enum Engine.ESimpleLightFunctionType
	 */
	enum class ESimpleLightFunctionType : uint8_t
	{
		NoFunction = 0,
		Pulse      = 1,
		Flicker    = 2,
		MAX        = 3
	};

	/**
	 * Enum Engine.ERuntimeGenerationType
	 */
	enum class ERuntimeGenerationType : uint8_t
	{
		Static               = 0,
		DynamicModifiersOnly = 1,
		Dynamic              = 2,
		LegacyGeneration     = 3,
		MAX                  = 4
	};

	/**
	 * Enum Engine.ERecastPartitioning
	 */
	enum class ERecastPartitioning : uint8_t
	{
		Monotone       = 0,
		Watershed      = 1,
		ChunkyMonotone = 2,
		MAX            = 3
	};

	/**
	 * Enum Engine.ENavCostDisplay
	 */
	enum class ENavCostDisplay : uint8_t
	{
		TotalCost     = 0,
		HeuristicOnly = 1,
		RealCostOnly  = 2,
		MAX           = 3
	};

	/**
	 * Enum Engine.ENavLinkDirection
	 */
	enum class ENavLinkDirection : uint8_t
	{
		BothWays    = 0,
		LeftToRight = 1,
		RightToLeft = 2,
		MAX         = 3
	};

	/**
	 * Enum Engine.ETranslucencyPass
	 */
	enum class ETranslucencyPass : uint8_t
	{
		Default            = 0,
		BeforeTranslucency = 1,
		BeforeVolumeFog    = 2,
		WriteDepth         = 3,
		MAX                = 4
	};

	/**
	 * Enum Engine.EMaterialUsage
	 */
	enum class EMaterialUsage : uint8_t
	{
		MATUSAGE_SkeletalMesh          = 0,
		MATUSAGE_ParticleSprites       = 1,
		MATUSAGE_BeamTrails            = 2,
		MATUSAGE_MeshParticles         = 3,
		MATUSAGE_StaticLighting        = 4,
		MATUSAGE_MorphTargets          = 5,
		MATUSAGE_SplineMesh            = 6,
		MATUSAGE_Landscape             = 7,
		MATUSAGE_InstancedStaticMeshes = 8,
		MATUSAGE_Clothing              = 9,
		MATUSAGE_Deformables           = 10,
		MATUSAGE_FFTWaterMask          = 11,
		MATUSAGE_DynamicObjectFading   = 12,
		MATUSAGE_Clouds                = 13,
		MATUSAGE_InstancedRopes        = 14,
		MATUSAGE_WaterBoundary         = 15,
		MATUSAGE_PlanarReflection      = 16,
		MATUSAGE_CPUParticleSprites    = 17,
		MATUSAGE_Coverage              = 18,
		MATUSAGE_GPUInstanceCulling    = 19,
		MATUSAGE_PointLightShadow      = 20,
		MATUSAGE_MAX                   = 21
	};

	/**
	 * Enum Engine.EDOFMode
	 */
	enum class EDOFMode : uint8_t
	{
		Default = 0,
		SixDOF  = 1,
		YZPlane = 2,
		XZPlane = 3,
		XYPlane = 4,
		None    = 5,
		MAX     = 6
	};

	/**
	 * Enum Engine.EExcludeFromCascades
	 */
	enum class EExcludeFromCascades : uint8_t
	{
		LastCascade       = 0,
		LastTwoCascades   = 1,
		LastThreeCascades = 2,
		MAX               = 3
	};

	/**
	 * Enum Engine.EHasCustomNavigableGeometry
	 */
	enum class EHasCustomNavigableGeometry : uint8_t
	{
		No                  = 0,
		Yes                 = 1,
		EvenIfNotCollidable = 2,
		DontExport          = 3,
		MAX                 = 4
	};

	/**
	 * Enum Engine.ECanBeCharacterBase
	 */
	enum class ECanBeCharacterBase : uint8_t
	{
		ECB_No    = 0,
		ECB_Yes   = 1,
		ECB_Owner = 2,
		ECB_MAX   = 3
	};

	/**
	 * Enum Engine.EParticleSystemOcclusionBoundsMethod
	 */
	enum class EParticleSystemOcclusionBoundsMethod : uint8_t
	{
		EPSOBM_None           = 0,
		EPSOBM_ParticleBounds = 1,
		EPSOBM_CustomBounds   = 2,
		EPSOBM_MAX            = 3
	};

	/**
	 * Enum Engine.ParticleSystemLODMethod
	 */
	enum class EParticleSystemLODMethod : uint8_t
	{
		PARTICLESYSTEMLODMETHOD_Automatic         = 0,
		PARTICLESYSTEMLODMETHOD_DirectSet         = 1,
		PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
		PARTICLESYSTEMLODMETHOD_MAX               = 3
	};

	/**
	 * Enum Engine.EParticleSystemUpdateMode
	 */
	enum class EParticleSystemUpdateMode : uint8_t
	{
		EPSUM_RealTime  = 0,
		EPSUM_FixedTime = 1,
		EPSUM_MAX       = 2
	};

	/**
	 * Enum Engine.EParticleEventType
	 */
	enum class EParticleEventType : uint8_t
	{
		EPET_Any             = 0,
		EPET_Spawn           = 1,
		EPET_Death           = 2,
		EPET_Collision       = 3,
		EPET_Burst           = 4,
		EPET_Blueprint       = 5,
		EPET_KillByKillPlane = 6,
		EPET_MAX             = 7
	};

	/**
	 * Enum Engine.ParticleReplayState
	 */
	enum class EParticleReplayState : uint8_t
	{
		PRS_Disabled  = 0,
		PRS_Capturing = 1,
		PRS_Replaying = 2,
		PRS_MAX       = 3
	};

	/**
	 * Enum Engine.EParticleSysParamType
	 */
	enum class EParticleSysParamType : uint8_t
	{
		PSPT_None          = 0,
		PSPT_Scalar        = 1,
		PSPT_ScalarRand    = 2,
		PSPT_Vector        = 3,
		PSPT_VectorRand    = 4,
		PSPT_Color         = 5,
		PSPT_Actor         = 6,
		PSPT_Material      = 7,
		PSPT_EmitterPoints = 8,
		PSPT_MAX           = 9
	};

	/**
	 * Enum Engine.SkeletalMeshOptimizationType
	 */
	enum class ESkeletalMeshOptimizationType : uint8_t
	{
		SMOT_NumOfTriangles = 0,
		SMOT_MaxDeviation   = 1,
		SMOT_MAX            = 2
	};

	/**
	 * Enum Engine.SkeletalMeshOptimizationImportance
	 */
	enum class ESkeletalMeshOptimizationImportance : uint8_t
	{
		SMOI_Off     = 0,
		SMOI_Lowest  = 1,
		SMOI_Low     = 2,
		SMOI_Normal  = 3,
		SMOI_High    = 4,
		SMOI_Highest = 5,
		SMOI_MAX     = 6
	};

	/**
	 * Enum Engine.EAnimGroupRole
	 */
	enum class EAnimGroupRole : uint8_t
	{
		CanBeLeader    = 0,
		AlwaysFollower = 1,
		AlwaysLeader   = 2,
		MAX            = 3
	};

	/**
	 * Enum Engine.ERootMotionMode
	 */
	enum class ERootMotionMode : uint8_t
	{
		NoRootMotionExtraction     = 0,
		IgnoreRootMotion           = 1,
		RootMotionFromEverything   = 2,
		RootMotionFromMontagesOnly = 3,
		MAX                        = 4
	};

	/**
	 * Enum Engine.ERootMotionRootLock
	 */
	enum class ERootMotionRootLock : uint8_t
	{
		RefPose        = 0,
		AnimFirstFrame = 1,
		Zero           = 2,
		MAX            = 3
	};

	/**
	 * Enum Engine.EBoneSpaces
	 */
	enum class EBoneSpaces : uint8_t
	{
		WorldSpace     = 0,
		ComponentSpace = 1,
		MAX            = 2
	};

	/**
	 * Enum Engine.EMeshComponentUpdateFlag
	 */
	enum class EMeshComponentUpdateFlag : uint8_t
	{
		AlwaysTickPoseAndRefreshBones = 0,
		AlwaysTickPose                = 1,
		OnlyTickPoseWhenRendered      = 2,
		OnlyIfLODChanged              = 3,
		MAX                           = 4
	};

	/**
	 * Enum Engine.EPhysBodyOp
	 */
	enum class EPhysBodyOp : uint8_t
	{
		PBO_None    = 0,
		PBO_Term    = 1,
		PBO_Disable = 2,
		PBO_MAX     = 3
	};

	/**
	 * Enum Engine.EBoneVisibilityStatus
	 */
	enum class EBoneVisibilityStatus : uint8_t
	{
		BVS_HiddenByParent   = 0,
		BVS_Visible          = 1,
		BVS_ExplicitlyHidden = 2,
		BVS_MAX              = 3
	};

	/**
	 * Enum Engine.EAngularDriveMode
	 */
	enum class EAngularDriveMode : uint8_t
	{
		SLERP         = 0,
		TwistAndSwing = 1,
		MAX           = 2
	};

	/**
	 * Enum Engine.EConstraintFrame
	 */
	enum class EConstraintFrame : uint8_t
	{
		Frame1 = 0,
		Frame2 = 1,
		MAX    = 2
	};

	/**
	 * Enum Engine.ELinearConstraintMotion
	 */
	enum class ELinearConstraintMotion : uint8_t
	{
		LCM_Free    = 0,
		LCM_Limited = 1,
		LCM_Locked  = 2,
		LCM_MAX     = 3
	};

	/**
	 * Enum Engine.EBoneTranslationRetargetingMode
	 */
	enum class EBoneTranslationRetargetingMode : uint8_t
	{
		Animation         = 0,
		Skeleton          = 1,
		AnimationScaled   = 2,
		AnimationRelative = 3,
		MAX               = 4
	};

	/**
	 * Enum Engine.EAnimLinkMethod
	 */
	enum class EAnimLinkMethod : uint8_t
	{
		Absolute     = 0,
		Relative     = 1,
		Proportional = 2,
		MAX          = 3
	};

	/**
	 * Enum Engine.ECurveBlendOption
	 */
	enum class ECurveBlendOption : uint8_t
	{
		MaxWeight         = 0,
		NormalizeByWeight = 1,
		BlendByWeight     = 2,
		MAX               = 3
	};

	/**
	 * Enum Engine.EAdditiveAnimationType
	 */
	enum class EAdditiveAnimationType : uint8_t
	{
		AAT_None                    = 0,
		AAT_LocalSpaceBase          = 1,
		AAT_RotationOffsetMeshSpace = 2,
		AAT_MAX                     = 3
	};

	/**
	 * Enum Engine.ENotifyFilterType
	 */
	enum class ENotifyFilterType : uint8_t
	{
		NoFiltering = 0,
		LOD         = 1,
		MAX         = 2
	};

	/**
	 * Enum Engine.EMontageNotifyTickType
	 */
	enum class EMontageNotifyTickType : uint8_t
	{
		Queued         = 0,
		BranchingPoint = 1,
		MAX            = 2
	};

	/**
	 * Enum Engine.EAnimationMode
	 */
	enum class EAnimationMode : uint8_t
	{
		AnimationBlueprint  = 0,
		AnimationSingleNode = 1,
		AnimationCustomMode = 2,
		MAX                 = 3
	};

	/**
	 * Enum Engine.EKinematicBonesUpdateToPhysics
	 */
	enum class EKinematicBonesUpdateToPhysics : uint8_t
	{
		SkipSimulatingBones = 0,
		SkipAllBones        = 1,
		MAX                 = 2
	};

	/**
	 * Enum Engine.ESplineCoordinateSpace
	 */
	enum class ESplineCoordinateSpace : uint8_t
	{
		Local = 0,
		World = 1,
		MAX   = 2
	};

	/**
	 * Enum Engine.ESplinePointType
	 */
	enum class ESplinePointType : uint8_t
	{
		Linear             = 0,
		Curve              = 1,
		Constant           = 2,
		CurveClamped       = 3,
		CurveCustomTangent = 4,
		MAX                = 5
	};

	/**
	 * Enum Engine.FNavigationSystemRunMode
	 */
	enum class EFNavigationSystemRunMode : uint8_t
	{
		FNavigationSystemRunMode_InvalidMode                  = 0,
		FNavigationSystemRunMode_GameMode                     = 1,
		FNavigationSystemRunMode_EditorMode                   = 2,
		FNavigationSystemRunMode_SimulationMode               = 3,
		FNavigationSystemRunMode_PIEMode                      = 4,
		FNavigationSystemRunMode_FNavigationSystemRunMode_MAX = 5
	};

	/**
	 * Enum Engine.ETypeAdvanceAnim
	 */
	enum class ETypeAdvanceAnim : uint8_t
	{
		ETAA_Default  = 0,
		ETAA_Finished = 1,
		ETAA_Looped   = 2,
		ETAA_MAX      = 3
	};

	/**
	 * Enum Engine.EAlphaBlendOption
	 */
	enum class EAlphaBlendOption : uint8_t
	{
		Linear         = 0,
		Cubic          = 1,
		HermiteCubic   = 2,
		Sinusoidal     = 3,
		QuadraticInOut = 4,
		CubicInOut     = 5,
		QuarticInOut   = 6,
		QuinticInOut   = 7,
		CircularIn     = 8,
		CircularOut    = 9,
		CircularInOut  = 10,
		ExpIn          = 11,
		ExpOut         = 12,
		ExpInOut       = 13,
		Source         = 14,
		Target         = 15,
		Custom         = 16,
		MAX            = 17
	};

	/**
	 * Enum Engine.ETransitionLogicType
	 */
	enum class ETransitionLogicType : uint8_t
	{
		TLT_StandardBlend = 0,
		TLT_Custom        = 1,
		TLT_MAX           = 2
	};

	/**
	 * Enum Engine.ETransitionBlendMode
	 */
	enum class ETransitionBlendMode : uint8_t
	{
		TBM_Linear = 0,
		TBM_Cubic  = 1,
		TBM_MAX    = 2
	};

	/**
	 * Enum Engine.EBoneRotationSource
	 */
	enum class EBoneRotationSource : uint8_t
	{
		BRS_KeepComponentSpaceRotation = 0,
		BRS_KeepLocalSpaceRotation     = 1,
		BRS_CopyFromTarget             = 2,
		BRS_MAX                        = 3
	};

	/**
	 * Enum Engine.EBoneControlSpace
	 */
	enum class EBoneControlSpace : uint8_t
	{
		BCS_WorldSpace      = 0,
		BCS_ComponentSpace  = 1,
		BCS_ParentBoneSpace = 2,
		BCS_BoneSpace       = 3,
		BCS_MAX             = 4
	};

	/**
	 * Enum Engine.EAnimNotifyEventType
	 */
	enum class EAnimNotifyEventType : uint8_t
	{
		Begin = 0,
		End   = 1,
		MAX   = 2
	};

	/**
	 * Enum Engine.ESoundSpatializationAlgorithm
	 */
	enum class ESoundSpatializationAlgorithm : uint8_t
	{
		SPATIALIZATION_Default = 0,
		SPATIALIZATION_HRTF    = 1,
		SPATIALIZATION_MAX     = 2
	};

	/**
	 * Enum Engine.EAttenuationShape
	 */
	enum class EAttenuationShape : uint8_t
	{
		Sphere  = 0,
		Capsule = 1,
		Box     = 2,
		Cone    = 3,
		MAX     = 4
	};

	/**
	 * Enum Engine.ESoundDistanceCalc
	 */
	enum class ESoundDistanceCalc : uint8_t
	{
		SOUNDDISTANCE_Normal          = 0,
		SOUNDDISTANCE_InfiniteXYPlane = 1,
		SOUNDDISTANCE_InfiniteXZPlane = 2,
		SOUNDDISTANCE_InfiniteYZPlane = 3,
		SOUNDDISTANCE_MAX             = 4
	};

	/**
	 * Enum Engine.ESoundDistanceModel
	 */
	enum class ESoundDistanceModel : uint8_t
	{
		ATTENUATION_Linear       = 0,
		ATTENUATION_Logarithmic  = 1,
		ATTENUATION_Inverse      = 2,
		ATTENUATION_LogReverse   = 3,
		ATTENUATION_NaturalSound = 4,
		ATTENUATION_Custom       = 5,
		ATTENUATION_MAX          = 6
	};

	/**
	 * Enum Engine.EAmbientLightClusteringPolicy
	 */
	enum class EAmbientLightClusteringPolicy : uint8_t
	{
		OnlyLight          = 0,
		ClosePriorityLight = 1,
		BlendableInCouple  = 2,
		NoGrouping         = 3,
		MAX                = 4
	};

	/**
	 * Enum Engine.EAmbientLightConeShape
	 */
	enum class EAmbientLightConeShape : uint8_t
	{
		Sphere        = 0,
		Hemisphere    = 1,
		VeryWideCone  = 2,
		WideCone      = 3,
		NarrowishCone = 4,
		MAX           = 5
	};

	/**
	 * Enum Engine.ESkyLightSourceType
	 */
	enum class ESkyLightSourceType : uint8_t
	{
		SLS_CapturedScene    = 0,
		SLS_SpecifiedCubemap = 1,
		SLS_MAX              = 2
	};

	/**
	 * Enum Engine.EOptimizationType
	 */
	enum class EOptimizationType : uint8_t
	{
		OT_NumOfTriangles = 0,
		OT_MaxDeviation   = 1,
		OT_MAX            = 2
	};

	/**
	 * Enum Engine.EImportanceLevel
	 */
	enum class EImportanceLevel : uint8_t
	{
		IL_Off       = 0,
		IL_Lowest    = 1,
		IL_Low       = 2,
		IL_Normal    = 3,
		IL_High      = 4,
		IL_Highest   = 5,
		TEMP_BROKEN2 = 6,
		MAX          = 7
	};

	/**
	 * Enum Engine.ENormalMode
	 */
	enum class ENormalMode : uint8_t
	{
		NM_PreserveSmoothingGroups  = 0,
		NM_RecalculateNormals       = 1,
		NM_RecalculateNormalsSmooth = 2,
		NM_RecalculateNormalsHard   = 3,
		TEMP_BROKEN                 = 4,
		MAX                         = 5
	};

	/**
	 * Enum Engine.EPoseableAnimMode
	 */
	enum class EPoseableAnimMode : uint8_t
	{
		Poseable = 0,
		Animated = 1,
		MAX      = 2
	};

	/**
	 * Enum Engine.ETextureSamplerFilter
	 */
	enum class ETextureSamplerFilter : uint8_t
	{
		Point             = 0,
		Bilinear          = 1,
		Trilinear         = 2,
		AnisotropicPoint  = 3,
		AnisotropicLinear = 4,
		MAX               = 5
	};

	/**
	 * Enum Engine.ETexturePowerOfTwoSetting
	 */
	enum class ETexturePowerOfTwoSetting : uint8_t
	{
		None                  = 0,
		PadToPowerOfTwo       = 1,
		PadToSquarePowerOfTwo = 2,
		PadToMultipleOfFour   = 3,
		MAX                   = 4
	};

	/**
	 * Enum Engine.TextureMipGenSettings
	 */
	enum class ETextureMipGenSettings : uint8_t
	{
		TMGS_FromTextureGroup  = 0,
		TMGS_SimpleAverage     = 1,
		TMGS_Sharpen0          = 2,
		TMGS_Sharpen1          = 3,
		TMGS_Sharpen2          = 4,
		TMGS_Sharpen3          = 5,
		TMGS_Sharpen4          = 6,
		TMGS_Sharpen5          = 7,
		TMGS_Sharpen6          = 8,
		TMGS_Sharpen7          = 9,
		TMGS_Sharpen8          = 10,
		TMGS_Sharpen9          = 11,
		TMGS_Sharpen10         = 12,
		TMGS_NoMipmaps         = 13,
		TMGS_LeaveExistingMips = 14,
		TMGS_Blur1             = 15,
		TMGS_Blur2             = 16,
		TMGS_Blur3             = 17,
		TMGS_Blur4             = 18,
		TMGS_Blur5             = 19,
		TMGS_MAX               = 20
	};

	/**
	 * Enum Engine.TextureGroup
	 */
	enum class ETextureGroup : uint8_t
	{
		TEXTUREGROUP_World                 = 0,
		TEXTUREGROUP_WorldNormalMap        = 1,
		TEXTUREGROUP_WorldSpecular         = 2,
		TEXTUREGROUP_Character             = 3,
		TEXTUREGROUP_CharacterNormalMap    = 4,
		TEXTUREGROUP_CharacterSpecular     = 5,
		TEXTUREGROUP_Weapon                = 6,
		TEXTUREGROUP_WeaponNormalMap       = 7,
		TEXTUREGROUP_WeaponSpecular        = 8,
		TEXTUREGROUP_Vehicle               = 9,
		TEXTUREGROUP_VehicleNormalMap      = 10,
		TEXTUREGROUP_VehicleSpecular       = 11,
		TEXTUREGROUP_Cinematic             = 12,
		TEXTUREGROUP_Effects               = 13,
		TEXTUREGROUP_EffectsNotFiltered    = 14,
		TEXTUREGROUP_Skybox                = 15,
		TEXTUREGROUP_UI                    = 16,
		TEXTUREGROUP_Lightmap              = 17,
		TEXTUREGROUP_RenderTarget          = 18,
		TEXTUREGROUP_MobileFlattened       = 19,
		TEXTUREGROUP_ProcBuilding_Face     = 20,
		TEXTUREGROUP_ProcBuilding_LightMap = 21,
		TEXTUREGROUP_Shadowmap             = 22,
		TEXTUREGROUP_ColorLookupTable      = 23,
		TEXTUREGROUP_Terrain_Heightmap     = 24,
		TEXTUREGROUP_Terrain_Weightmap     = 25,
		TEXTUREGROUP_Bokeh                 = 26,
		TEXTUREGROUP_IESLightProfile       = 27,
		TEXTUREGROUP_Pixels2D              = 28,
		TEXTUREGROUP_RareLoDTest           = 29,
		TEXTUREGROUP_Unassigned            = 30,
		TEXTUREGROUP_Animation             = 31,
		TEXTUREGROUP_Coherent              = 32,
		TEXTUREGROUP_MippedUI              = 33,
		TEXTUREGROUP_LoadingScreen         = 34,
		TEXTUREGROUP_MAX                   = 35
	};

	/**
	 * Enum Engine.ETextureSourceFormat
	 */
	enum class ETextureSourceFormat : uint8_t
	{
		TSF_Invalid = 0,
		TSF_G8      = 1,
		TSF_BGRA8   = 2,
		TSF_BGRE8   = 3,
		TSF_RGBA16  = 4,
		TSF_RGBA16F = 5,
		TSF_RGBA8   = 6,
		TSF_RGBE8   = 7,
		TSF_RGBA32F = 8,
		TSF_MAX     = 9
	};

	/**
	 * Enum Engine.ETextureSourceArtType
	 */
	enum class ETextureSourceArtType : uint8_t
	{
		TSAT_Uncompressed  = 0,
		TSAT_PNGCompressed = 1,
		TSAT_DDSFile       = 2,
		TSAT_MAX           = 3
	};

	/**
	 * Enum Engine.ETextureMipCount
	 */
	enum class ETextureMipCount : uint8_t
	{
		TMC_ResidentMips         = 0,
		TMC_AllMips              = 1,
		TMC_AllMipsBiased        = 2,
		TMC_ResidentMipsUnpadded = 3,
		TMC_MAX                  = 4
	};

	/**
	 * Enum Engine.ECompositeTextureMode
	 */
	enum class ECompositeTextureMode : uint8_t
	{
		CTM_Disabled               = 0,
		CTM_NormalRoughnessToRed   = 1,
		CTM_NormalRoughnessToGreen = 2,
		CTM_NormalRoughnessToBlue  = 3,
		CTM_NormalRoughnessToAlpha = 4,
		CTM_MAX                    = 5
	};

	/**
	 * Enum Engine.TextureAddress
	 */
	enum class ETextureAddress : uint8_t
	{
		TA_Wrap   = 0,
		TA_Clamp  = 1,
		TA_Mirror = 2,
		TA_MAX    = 3
	};

	/**
	 * Enum Engine.TextureFilter
	 */
	enum class ETextureFilter : uint8_t
	{
		TF_Nearest   = 0,
		TF_Bilinear  = 1,
		TF_Trilinear = 2,
		TF_Default   = 3,
		TF_MAX       = 4
	};

	/**
	 * Enum Engine.TextureCompressionSettings
	 */
	enum class ETextureCompressionSettings : uint8_t
	{
		TC_Default               = 0,
		TC_Normalmap             = 1,
		TC_Masks                 = 2,
		TC_Grayscale             = 3,
		TC_Displacementmap       = 4,
		TC_VectorDisplacementmap = 5,
		TC_HDR                   = 6,
		TC_EditorIcon            = 7,
		TC_Alpha                 = 8,
		TC_DistanceFieldFont     = 9,
		TC_HDR_Compressed        = 10,
		TC_BC7                   = 11,
		TC_SignedHDR             = 12,
		TC_UnsignedHDR           = 13,
		TC_HighQuality           = 14,
		TC_TwoChannelFloat       = 15,
		TC_MAX                   = 16
	};

	/**
	 * Enum Engine.ESplineMeshAxis
	 */
	enum class ESplineMeshAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum Engine.EVerticalTextAligment
	 */
	enum class EVerticalTextAligment : uint8_t
	{
		EVRTA_TextTop    = 0,
		EVRTA_TextCenter = 1,
		EVRTA_TextBottom = 2,
		EVRTA_QuadTop    = 3,
		EVRTA_MAX        = 4
	};

	/**
	 * Enum Engine.EHorizTextAligment
	 */
	enum class EHorizTextAligment : uint8_t
	{
		EHTA_Left   = 0,
		EHTA_Center = 1,
		EHTA_Right  = 2,
		EHTA_MAX    = 3
	};

	/**
	 * Enum Engine.ESceneCaptureSource
	 */
	enum class ESceneCaptureSource : uint8_t
	{
		SCS_SceneColorHDR = 0,
		SCS_FinalColorLDR = 1,
		SCS_MAX           = 2
	};

	/**
	 * Enum Engine.ETimelineDirection
	 */
	enum class ETimelineDirection : uint8_t
	{
		Forward  = 0,
		Backward = 1,
		MAX      = 2
	};

	/**
	 * Enum Engine.ETimelineLengthMode
	 */
	enum class ETimelineLengthMode : uint8_t
	{
		TL_TimelineLength = 0,
		TL_LastKeyFrame   = 1,
		TL_MAX            = 2
	};

	/**
	 * Enum Engine.EAdditiveBasePoseType
	 */
	enum class EAdditiveBasePoseType : uint8_t
	{
		ABPT_None       = 0,
		ABPT_RefPose    = 1,
		ABPT_AnimScaled = 2,
		ABPT_AnimFrame  = 3,
		ABPT_MAX        = 4
	};

	/**
	 * Enum Engine.AnimationKeyFormat
	 */
	enum class EAnimationKeyFormat : uint8_t
	{
		AKF_ConstantKeyLerp     = 0,
		AKF_VariableKeyLerp     = 1,
		AKF_PerTrackCompression = 2,
		AKF_MAX                 = 3
	};

	/**
	 * Enum Engine.AnimationCompressionFormat
	 */
	enum class EAnimationCompressionFormat : uint8_t
	{
		ACF_None               = 0,
		ACF_Float96NoW         = 1,
		ACF_Fixed48NoW         = 2,
		ACF_IntervalFixed32NoW = 3,
		ACF_Fixed32NoW         = 4,
		ACF_Float32NoW         = 5,
		ACF_Identity           = 6,
		ACF_MAX                = 7
	};

	/**
	 * Enum Engine.ENotifyTriggerMode
	 */
	enum class ENotifyTriggerMode : uint8_t
	{
		AllAnimations            = 0,
		HighestWeightedAnimation = 1,
		None                     = 2,
		MAX                      = 3
	};

	/**
	 * Enum Engine.EBlendSpaceAxis
	 */
	enum class EBlendSpaceAxis : uint8_t
	{
		BSA_None = 0,
		BSA_X    = 1,
		BSA_Y    = 2,
		BSA_Max  = 3
	};

	/**
	 * Enum Engine.EEvaluateCurveTableResult
	 */
	enum class EEvaluateCurveTableResult : uint8_t
	{
		RowFound    = 0,
		RowNotFound = 1,
		MAX         = 2
	};

	/**
	 * Enum Engine.EGrammaticalNumber
	 */
	enum class EGrammaticalNumber : uint8_t
	{
		Singular = 0,
		Plural   = 1,
		MAX      = 2
	};

	/**
	 * Enum Engine.EGrammaticalGender
	 */
	enum class EGrammaticalGender : uint8_t
	{
		Neuter    = 0,
		Masculine = 1,
		Feminine  = 2,
		Mixed     = 3,
		MAX       = 4
	};

	/**
	 * Enum Engine.ESuggestProjVelocityTraceOption
	 */
	enum class ESuggestProjVelocityTraceOption : uint8_t
	{
		DoNotTrace             = 0,
		TraceFullPath          = 1,
		OnlyTraceWhileAsceding = 2,
		MAX                    = 3
	};

	/**
	 * Enum Engine.EEasingFunc
	 */
	enum class EEasingFunc : uint8_t
	{
		Linear          = 0,
		Step            = 1,
		SinusoidalIn    = 2,
		SinusoidalOut   = 3,
		SinusoidalInOut = 4,
		EaseIn          = 5,
		EaseOut         = 6,
		EaseInOut       = 7,
		ExpoIn          = 8,
		ExpoOut         = 9,
		ExpoInOut       = 10,
		CircularIn      = 11,
		CircularOut     = 12,
		CircularInOut   = 13,
		MAX             = 14
	};

	/**
	 * Enum Engine.ERoundingMode
	 */
	enum class ERoundingMode : uint8_t
	{
		HalfToEven         = 0,
		HalfFromZero       = 1,
		HalfToZero         = 2,
		FromZero           = 3,
		ToZero             = 4,
		ToNegativeInfinity = 5,
		ToPositiveInfinity = 6,
		MAX                = 7
	};

	/**
	 * Enum Engine.EBodyCollisionResponse
	 */
	enum class EBodyCollisionResponse : uint8_t
	{
		BodyCollision_Enabled  = 0,
		BodyCollision_Disabled = 1,
		BodyCollision_MAX      = 2
	};

	/**
	 * Enum Engine.EPhysicsType
	 */
	enum class EPhysicsType : uint8_t
	{
		PhysType_Default   = 0,
		PhysType_Kinematic = 1,
		PhysType_Simulated = 2,
		PhysType_MAX       = 3
	};

	/**
	 * Enum Engine.ECollisionTraceFlag
	 */
	enum class ECollisionTraceFlag : uint8_t
	{
		CTF_UseDefault         = 0,
		CTF_UseSimpleAsComplex = 1,
		CTF_UseComplexAsSimple = 2,
		CTF_MAX                = 3
	};

	/**
	 * Enum Engine.ReliabilityType
	 */
	enum class EReliabilityType : uint8_t
	{
		ReliabilityType_Reliable            = 0,
		ReliabilityType_Unreliable          = 1,
		ReliabilityType_Count               = 2,
		ReliabilityType_ReliabilityType_MAX = 3
	};

	/**
	 * Enum Engine.EUIScalingRule
	 */
	enum class EUIScalingRule : uint8_t
	{
		ShortestSide = 0,
		LongestSide  = 1,
		Horizontal   = 2,
		Vertical     = 3,
		Custom       = 4,
		MAX          = 5
	};

	/**
	 * Enum Engine.ERenderFocusRule
	 */
	enum class ERenderFocusRule : uint8_t
	{
		Always         = 0,
		NonPointer     = 1,
		NavigationOnly = 2,
		Never          = 3,
		MAX            = 4
	};

	/**
	 * Enum Engine.ESettingsLockedAxis
	 */
	enum class ESettingsLockedAxis : uint8_t
	{
		None    = 0,
		X       = 1,
		Y       = 2,
		Z       = 3,
		Invalid = 4,
		MAX     = 5
	};

	/**
	 * Enum Engine.ESettingsDOF
	 */
	enum class ESettingsDOF : uint8_t
	{
		Full3D  = 0,
		YZPlane = 1,
		XZPlane = 2,
		XYPlane = 3,
		MAX     = 4
	};

	/**
	 * Enum Engine.EFrictionCombineMode
	 */
	enum class EFrictionCombineMode : uint8_t
	{
		Average  = 0,
		Min      = 1,
		Multiply = 2,
		Max      = 3,
		MAX      = 4
	};

	/**
	 * Enum Engine.EAntiAliasingMethodUI
	 */
	enum class EAntiAliasingMethodUI : uint8_t
	{
		AAM_None       = 0,
		AAM_FXAA       = 1,
		AAM_TemporalAA = 2,
		AAM_MAX        = 3
	};

	/**
	 * Enum Engine.EDepthSort
	 */
	enum class EDepthSort : uint8_t
	{
		Default   = 0,
		ForcedOff = 1,
		ForcedOn  = 2,
		MAX       = 3
	};

	/**
	 * Enum Engine.EEarlyZPass
	 */
	enum class EEarlyZPass : uint8_t
	{
		None            = 0,
		OpaqueOnly      = 1,
		OpaqueAndMasked = 2,
		Auto            = 3,
		MAX             = 4
	};

	/**
	 * Enum Engine.ECustomDepthStencil
	 */
	enum class ECustomDepthStencil : uint8_t
	{
		Disabled           = 0,
		Enabled            = 1,
		EnabledOnDemand    = 2,
		EnabledWithStencil = 3,
		MAX                = 4
	};

	/**
	 * Enum Engine.ECompositingSampleCount
	 */
	enum class ECompositingSampleCount : uint8_t
	{
		One   = 0,
		Two   = 1,
		Four  = 2,
		Eight = 3,
		MAX   = 4
	};

	/**
	 * Enum Engine.EClearSceneOptions
	 */
	enum class EClearSceneOptions : uint8_t
	{
		NoClear                    = 0,
		HardwareClear              = 1,
		QuadAtMaxZ                 = 2,
		HardwareClearAndQuadAtMaxZ = 3,
		MAX                        = 4
	};

	/**
	 * Enum Engine.DistributionParamMode
	 */
	enum class EDistributionParamMode : uint8_t
	{
		DPM_Normal = 0,
		DPM_Abs    = 1,
		DPM_Direct = 2,
		DPM_MAX    = 3
	};

	/**
	 * Enum Engine.EDistributionVectorMirrorFlags
	 */
	enum class EDistributionVectorMirrorFlags : uint8_t
	{
		EDVMF_Same      = 0,
		EDVMF_Different = 1,
		EDVMF_Mirror    = 2,
		EDVMF_MAX       = 3
	};

	/**
	 * Enum Engine.EDistributionVectorLockFlags
	 */
	enum class EDistributionVectorLockFlags : uint8_t
	{
		EDVLF_None = 0,
		EDVLF_XY   = 1,
		EDVLF_XZ   = 2,
		EDVLF_YZ   = 3,
		EDVLF_XYZ  = 4,
		EDVLF_MAX  = 5
	};

	/**
	 * Enum Engine.ECanCreateConnectionResponse
	 */
	enum class ECanCreateConnectionResponse : uint8_t
	{
		CONNECT_RESPONSE_MAKE                      = 0,
		CONNECT_RESPONSE_DISALLOW                  = 1,
		CONNECT_RESPONSE_BREAK_OTHERS_A            = 2,
		CONNECT_RESPONSE_BREAK_OTHERS_B            = 3,
		CONNECT_RESPONSE_BREAK_OTHERS_AB           = 4,
		CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
		CONNECT_RESPONSE_MAX                       = 6
	};

	/**
	 * Enum Engine.EGraphType
	 */
	enum class EGraphType : uint8_t
	{
		GT_Function     = 0,
		GT_Ubergraph    = 1,
		GT_Macro        = 2,
		GT_Animation    = 3,
		GT_StateMachine = 4,
		GT_MAX          = 5
	};

	/**
	 * Enum Engine.EConsoleType
	 */
	enum class EConsoleType : uint8_t
	{
		CONSOLE_Any    = 0,
		CONSOLE_Mobile = 1,
		CONSOLE_MAX    = 2
	};

	/**
	 * Enum Engine.ETransitionType
	 */
	enum class ETransitionType : uint8_t
	{
		TT_None             = 0,
		TT_Paused           = 1,
		TT_Loading          = 2,
		TT_Saving           = 3,
		TT_Connecting       = 4,
		TT_Precaching       = 5,
		TT_WaitingToConnect = 6,
		TT_MAX              = 7
	};

	/**
	 * Enum Engine.EFullyLoadPackageType
	 */
	enum class EFullyLoadPackageType : uint8_t
	{
		FULLYLOAD_Map                = 0,
		FULLYLOAD_Game_PreLoadClass  = 1,
		FULLYLOAD_Game_PostLoadClass = 2,
		FULLYLOAD_Always             = 3,
		FULLYLOAD_Mutator            = 4,
		FULLYLOAD_MAX                = 5
	};

	/**
	 * Enum Engine.ECustomTimeStepSynchronizationState
	 */
	enum class ECustomTimeStepSynchronizationState : uint8_t
	{
		Closed        = 0,
		Error         = 1,
		Synchronized  = 2,
		Synchronizing = 3,
		MAX           = 4
	};

	/**
	 * Enum Engine.EFontImportCharacterSet
	 */
	enum class EFontImportCharacterSet : uint8_t
	{
		FontICS_Default = 0,
		FontICS_Ansi    = 1,
		FontICS_Symbol  = 2,
		FontICS_MAX     = 3
	};

	/**
	 * Enum Engine.EFontCacheType
	 */
	enum class EFontCacheType : uint8_t
	{
		Offline = 0,
		Runtime = 1,
		MAX     = 2
	};

	/**
	 * Enum Engine.EPostCopyOperation
	 */
	enum class EPostCopyOperation : uint8_t
	{
		None              = 0,
		LogicalNegateBool = 1,
		MAX               = 2
	};

	/**
	 * Enum Engine.EPinHidingMode
	 */
	enum class EPinHidingMode : uint8_t
	{
		NeverAsPin         = 0,
		PinHiddenByDefault = 1,
		PinShownByDefault  = 2,
		AlwaysAsPin        = 3,
		MAX                = 4
	};

	/**
	 * Enum Engine.EHIKEffector
	 */
	enum class EHIKEffector : uint8_t
	{
		HIKEffector_Hips                 = 0,
		HIKEffector_LeftAnkle            = 1,
		HIKEffector_RightAnkle           = 2,
		HIKEffector_LeftWrist            = 3,
		HIKEffector_RightWrist           = 4,
		HIKEffector_LeftKnee             = 5,
		HIKEffector_RightKnee            = 6,
		HIKEffector_LeftElbow            = 7,
		HIKEffector_RightElbow           = 8,
		HIKEffector_ChestOrigin          = 9,
		HIKEffector_ChestEnd             = 10,
		HIKEffector_LeftFoot             = 11,
		HIKEffector_RightFoot            = 12,
		HIKEffector_LeftShoulder         = 13,
		HIKEffector_RightShoulder        = 14,
		HIKEffector_Head                 = 15,
		HIKEffector_LeftHip              = 16,
		HIKEffector_RightHip             = 17,
		HIKEffector_LeftHand             = 18,
		HIKEffector_RightHand            = 19,
		HIKEffector_LeftHandThumb        = 20,
		HIKEffector_LeftHandIndex        = 21,
		HIKEffector_LeftHandMiddle       = 22,
		HIKEffector_LeftHandRing         = 23,
		HIKEffector_LeftHandPinky        = 24,
		HIKEffector_LeftHandExtraFinger  = 25,
		HIKEffector_RightHandThumb       = 26,
		HIKEffector_RightHandIndex       = 27,
		HIKEffector_RightHandMiddle      = 28,
		HIKEffector_RightHandRing        = 29,
		HIKEffector_RightHandPinky       = 30,
		HIKEffector_RightHandExtraFinger = 31,
		HIKEffector_LeftFootThumb        = 32,
		HIKEffector_LeftFootIndex        = 33,
		HIKEffector_LeftFootMiddle       = 34,
		HIKEffector_LeftFootRing         = 35,
		HIKEffector_LeftFootPinky        = 36,
		HIKEffector_LeftFootExtraFinger  = 37,
		HIKEffector_RightFootThumb       = 38,
		HIKEffector_RightFootIndex       = 39,
		HIKEffector_RightFootMiddle      = 40,
		HIKEffector_RightFootRing        = 41,
		HIKEffector_RightFootPinky       = 42,
		HIKEffector_RightFootExtraFinger = 43,
		HIKEffector_Last                 = 44,
		HIKEffector_MAX                  = 45
	};

	/**
	 * Enum Engine.EHIKProperty
	 */
	enum class EHIKProperty : uint8_t
	{
		HIKProp_HIKForceActorSpaceId                  = 0,
		HIKProp_ScaleCompensationId                   = 1,
		HIKProp_MassCenterCompensationId              = 2,
		HIKProp_AnkleHeightCompensationId             = 3,
		HIKProp_AnkleProximityCompensationId          = 4,
		HIKProp_HipsHeightCompensationId              = 5,
		HIKProp_ReachActorLeftAnkleId                 = 6,
		HIKProp_ReachActorRightAnkleId                = 7,
		HIKProp_ReachActorChestId                     = 8,
		HIKProp_ReachActorLeftWristId                 = 9,
		HIKProp_ReachActorRightWristId                = 10,
		HIKProp_ReachActorLeftKneeId                  = 11,
		HIKProp_ReachActorRightKneeId                 = 12,
		HIKProp_ReachActorHeadId                      = 13,
		HIKProp_ReachActorLeftElbowId                 = 14,
		HIKProp_ReachActorRightElbowId                = 15,
		HIKProp_ReachActorLeftAnkleRotationId         = 16,
		HIKProp_ReachActorRightAnkleRotationId        = 17,
		HIKProp_ReachActorHeadRotationId              = 18,
		HIKProp_ReachActorLeftWristRotationId         = 19,
		HIKProp_ReachActorRightWristRotationId        = 20,
		HIKProp_ReachActorLeftFingerBaseId            = 21,
		HIKProp_ReachActorRightFingerBaseId           = 22,
		HIKProp_ReachActorLeftToesBaseId              = 23,
		HIKProp_ReachActorRightToesBaseId             = 24,
		HIKProp_ReachActorLeftFingerBaseRotationId    = 25,
		HIKProp_ReachActorRightFingerBaseRotationId   = 26,
		HIKProp_ReachActorLeftToesBaseRotationId      = 27,
		HIKProp_ReachActorRightToesBaseRotationId     = 28,
		HIKProp_ReachActorChestRotationId             = 29,
		HIKProp_ReachActorLowerChestRotationId        = 30,
		HIKProp_ReachActorLeftHandThumbId             = 31,
		HIKProp_ReachActorLeftHandIndexId             = 32,
		HIKProp_ReachActorLeftHandMiddleId            = 33,
		HIKProp_ReachActorLeftHandRingId              = 34,
		HIKProp_ReachActorLeftHandPinkyId             = 35,
		HIKProp_ReachActorLeftHandExtraFingerId       = 36,
		HIKProp_ReachActorRightHandThumbId            = 37,
		HIKProp_ReachActorRightHandIndexId            = 38,
		HIKProp_ReachActorRightHandMiddleId           = 39,
		HIKProp_ReachActorRightHandRingId             = 40,
		HIKProp_ReachActorRightHandPinkyId            = 41,
		HIKProp_ReachActorRightHandExtraFingerId      = 42,
		HIKProp_ReachActorLeftFootThumbId             = 43,
		HIKProp_ReachActorLeftFootIndexId             = 44,
		HIKProp_ReachActorLeftFootMiddleId            = 45,
		HIKProp_ReachActorLeftFootRingId              = 46,
		HIKProp_ReachActorLeftFootPinkyId             = 47,
		HIKProp_ReachActorLeftFootExtraFingerId       = 48,
		HIKProp_ReachActorRightFootThumbId            = 49,
		HIKProp_ReachActorRightFootIndexId            = 50,
		HIKProp_ReachActorRightFootMiddleId           = 51,
		HIKProp_ReachActorRightFootRingId             = 52,
		HIKProp_ReachActorRightFootPinkyId            = 53,
		HIKProp_ReachActorRightFootExtraFingerId      = 54,
		HIKProp_FootFloorContactId                    = 55,
		HIKProp_FootBottomToAnkleId                   = 56,
		HIKProp_FootBackToAnkleId                     = 57,
		HIKProp_FootMiddleToAnkleId                   = 58,
		HIKProp_FootFrontToMiddleId                   = 59,
		HIKProp_FootInToAnkleId                       = 60,
		HIKProp_FootOutToAnkleId                      = 61,
		HIKProp_HandFloorContactId                    = 62,
		HIKProp_HandBottomToWristId                   = 63,
		HIKProp_HandBackToWristId                     = 64,
		HIKProp_HandMiddleToWristId                   = 65,
		HIKProp_HandFrontToMiddleId                   = 66,
		HIKProp_HandInToWristId                       = 67,
		HIKProp_HandOutToWristId                      = 68,
		HIKProp_HandContactTypeId                     = 69,
		HIKProp_HandFingerContactId                   = 70,
		HIKProp_HandFingerContactModeId               = 71,
		HIKProp_FootContactTypeId                     = 72,
		HIKProp_FootFingerContactId                   = 73,
		HIKProp_FootFingerContactModeId               = 74,
		HIKProp_LeftUpLegRollId                       = 75,
		HIKProp_LeftLegRollId                         = 76,
		HIKProp_RightUpLegRollId                      = 77,
		HIKProp_RightLegRollId                        = 78,
		HIKProp_LeftArmRollId                         = 79,
		HIKProp_LeftForeArmRollId                     = 80,
		HIKProp_RightArmRollId                        = 81,
		HIKProp_RightForeArmRollId                    = 82,
		HIKProp_MirrorId                              = 83,
		HIKProp_LeftKneeKillPitchId                   = 84,
		HIKProp_RightKneeKillPitchId                  = 85,
		HIKProp_LeftElbowKillPitchId                  = 86,
		HIKProp_RightElbowKillPitchId                 = 87,
		HIKProp_CtrlPullLeftFootId                    = 88,
		HIKProp_CtrlPullRightFootId                   = 89,
		HIKProp_CtrlPullLeftHandId                    = 90,
		HIKProp_CtrlPullRightHandId                   = 91,
		HIKProp_CtrlPullHeadId                        = 92,
		HIKProp_CtrlPullLeftToeBaseId                 = 93,
		HIKProp_CtrlPullLeftKneeId                    = 94,
		HIKProp_CtrlPullRightToeBaseId                = 95,
		HIKProp_CtrlPullRightKneeId                   = 96,
		HIKProp_CtrlPullLeftFingerBaseId              = 97,
		HIKProp_CtrlPullLeftElbowId                   = 98,
		HIKProp_CtrlPullRightFingerBaseId             = 99,
		HIKProp_CtrlPullRightElbowId                  = 100,
		HIKProp_CtrlChestPullLeftHandId               = 101,
		HIKProp_CtrlChestPullRightHandId              = 102,
		HIKProp_CtrlResistHipsPositionId              = 103,
		HIKProp_CtrlEnforceGravityId                  = 104,
		HIKProp_CtrlResistHipsOrientationId           = 105,
		HIKProp_CtrlResistChestPositionId             = 106,
		HIKProp_CtrlResistChestOrientationId          = 107,
		HIKProp_CtrlResistLeftCollarId                = 108,
		HIKProp_CtrlResistRightCollarId               = 109,
		HIKProp_CtrlResistLeftKneeId                  = 110,
		HIKProp_CtrlResistRightKneeId                 = 111,
		HIKProp_CtrlResistLeftElbowId                 = 112,
		HIKProp_CtrlResistRightElbowId                = 113,
		HIKProp_CtrlSpineStiffnessId                  = 114,
		HIKProp_HipsTOffsetXId                        = 115,
		HIKProp_HipsTOffsetYId                        = 116,
		HIKProp_HipsTOffsetZId                        = 117,
		HIKProp_ChestTOffsetXId                       = 118,
		HIKProp_ChestTOffsetYId                       = 119,
		HIKProp_ChestTOffsetZId                       = 120,
		HIKProp_FootAutomaticToesId                   = 121,
		HIKProp_FootFloorPivotId                      = 122,
		HIKProp_PostureId                             = 123,
		HIKProp_HandAutomaticFingersId                = 124,
		HIKProp_HandFloorPivotId                      = 125,
		HIKProp_CtrlNeckStiffnessId                   = 126,
		HIKProp_HipsTranslationModeId                 = 127,
		HIKProp_FingerSolvingId                       = 128,
		HIKProp_FootContactStiffnessId                = 129,
		HIKProp_CtrlResistMaximumExtensionLeftKnee    = 130,
		HIKProp_CtrlResistMaximumExtensionRightKnee   = 131,
		HIKProp_CtrlResistMaximumExtensionLeftElbow   = 132,
		HIKProp_CtrlResistMaximumExtensionRightElbow  = 133,
		HIKProp_CtrlResistCompressionFactorLeftKnee   = 134,
		HIKProp_CtrlResistCompressionFactorRightKnee  = 135,
		HIKProp_CtrlResistCompressionFactorLeftElbow  = 136,
		HIKProp_CtrlResistCompressionFactorRightElbow = 137,
		HIKProp_HandFingerContactRollStiffness        = 138,
		HIKProp_FootFingerContactRollStiffness        = 139,
		HIKProp_HandContactStiffness                  = 140,
		HIKProp_RollExtractionMode                    = 141,
		HIKProp_PullIterationCount                    = 142,
		HIKProp_LeftHandThumbTip                      = 143,
		HIKProp_LeftHandIndexTip                      = 144,
		HIKProp_LeftHandMiddleTip                     = 145,
		HIKProp_LeftHandRingTip                       = 146,
		HIKProp_LeftHandPinkyTip                      = 147,
		HIKProp_LeftHandExtraFingerTip                = 148,
		HIKProp_RightHandThumbTip                     = 149,
		HIKProp_RightHandIndexTip                     = 150,
		HIKProp_RightHandMiddleTip                    = 151,
		HIKProp_RightHandRingTip                      = 152,
		HIKProp_RightHandPinkyTip                     = 153,
		HIKProp_RightHandExtraFingerTip               = 154,
		HIKProp_LeftFootThumbTip                      = 155,
		HIKProp_LeftFootIndexTip                      = 156,
		HIKProp_LeftFootMiddleTip                     = 157,
		HIKProp_LeftFootRingTip                       = 158,
		HIKProp_LeftFootPinkyTip                      = 159,
		HIKProp_LeftFootExtraFingerTip                = 160,
		HIKProp_RightFootThumbTip                     = 161,
		HIKProp_RightFootIndexTip                     = 162,
		HIKProp_RightFootMiddleTip                    = 163,
		HIKProp_RightFootRingTip                      = 164,
		HIKProp_RightFootPinkyTip                     = 165,
		HIKProp_RightFootExtraFingerTip               = 166,
		HIKProp_RealisticShoulder                     = 167,
		HIKProp_LeftLegMaxExtensionAngle              = 168,
		HIKProp_RightLegMaxExtensionAngle             = 169,
		HIKProp_LeftArmMaxExtensionAngle              = 170,
		HIKProp_RightArmMaxExtensionAngle             = 171,
		HIKProp_ExtraCollarRatioId                    = 172,
		HIKProp_CollarStiffnessX                      = 173,
		HIKProp_CollarStiffnessY                      = 174,
		HIKProp_CollarStiffnessZ                      = 175,
		HIKProp_ReachActorLeftShoulderId              = 176,
		HIKProp_ReachActorRightShoulderId             = 177,
		HIKProp_FingerPropagationId                   = 178,
		HIKProp_RealisticLeftKneeSolvingId            = 179,
		HIKProp_RealisticRightKneeSolvingId           = 180,
		HIKProp_StretchStartArmsAndLegs               = 181,
		HIKProp_StretchStopArmsAndLegs                = 182,
		HIKProp_SnSScaleArmsAndLegs                   = 183,
		HIKProp_SnSReachLeftWrist                     = 184,
		HIKProp_SnSReachRightWrist                    = 185,
		HIKProp_SnSReachLeftAnkle                     = 186,
		HIKProp_SnSReachRightAnkle                    = 187,
		HIKProp_SnSScaleSpine                         = 188,
		HIKProp_SnSScaleSpineChildren                 = 189,
		HIKProp_SnSReachChestEnd                      = 190,
		HIKProp_SnSScaleNeck                          = 191,
		HIKProp_SnSReachHead                          = 192,
		HIKProp_LeftUpLegRollExId                     = 193,
		HIKProp_LeftLegRollExId                       = 194,
		HIKProp_RightUpLegRollExId                    = 195,
		HIKProp_RightLegRollExId                      = 196,
		HIKProp_LeftArmRollExId                       = 197,
		HIKProp_LeftForeArmRollExId                   = 198,
		HIKProp_RightArmRollExId                      = 199,
		HIKProp_RightForeArmRollExId                  = 200,
		HIKProp_TopSpineCorrectionId                  = 201,
		HIKProp_LowerSpineCorrectionId                = 202,
		HIKProp_SnSSmoothReach                        = 203,
		HIKProp_LockXId                               = 204,
		HIKProp_LockYId                               = 205,
		HIKProp_LockZId                               = 206,
		HIKProp_RealisticArmSolvingId                 = 207,
		HIKProp_LastPropertyId                        = 208,
		HIKProp_MAX                                   = 209
	};

	/**
	 * Enum Engine.EHIKEffectorSpace
	 */
	enum class EHIKEffectorSpace : uint8_t
	{
		HIKEffectorSpace_World     = 0,
		HIKEffectorSpace_Character = 1,
		HIKEffectorSpace_MAX       = 2
	};

	/**
	 * Enum Engine.EHIKHandsContactType
	 */
	enum class EHIKHandsContactType : uint8_t
	{
		HIKHandsContactType_Normal     = 0,
		HIKHandsContactType_Wrist      = 1,
		HIKHandsContactType_FingerBase = 2,
		HIKHandsContactType_Hoof       = 3,
		HIKHandsContactType_MAX        = 4
	};

	/**
	 * Enum Engine.EHIKFeetContactType
	 */
	enum class EHIKFeetContactType : uint8_t
	{
		HIKFeetContactType_Normal  = 0,
		HIKFeetContactType_Ankle   = 1,
		HIKFeetContactType_ToeBase = 2,
		HIKFeetContactType_Hoof    = 3,
		HIKFeetContactType_MAX     = 4
	};

	/**
	 * Enum Engine.ETrackActiveCondition
	 */
	enum class ETrackActiveCondition : uint8_t
	{
		ETAC_Always       = 0,
		ETAC_GoreEnabled  = 1,
		ETAC_GoreDisabled = 2,
		ETAC_MAX          = 3
	};

	/**
	 * Enum Engine.EInterpTrackMoveRotMode
	 */
	enum class EInterpTrackMoveRotMode : uint8_t
	{
		IMR_Keyframed   = 0,
		IMR_LookAtGroup = 1,
		IMR_Ignore      = 2,
		IMR_MAX         = 3
	};

	/**
	 * Enum Engine.EInterpMoveAxis
	 */
	enum class EInterpMoveAxis : uint8_t
	{
		AXIS_TranslationX = 0,
		AXIS_TranslationY = 1,
		AXIS_TranslationZ = 2,
		AXIS_RotationX    = 3,
		AXIS_RotationY    = 4,
		AXIS_RotationZ    = 5,
		AXIS_MAX          = 6
	};

	/**
	 * Enum Engine.ETrackToggleAction
	 */
	enum class ETrackToggleAction : uint8_t
	{
		ETTA_Off     = 0,
		ETTA_On      = 1,
		ETTA_Toggle  = 2,
		ETTA_Trigger = 3,
		ETTA_MAX     = 4
	};

	/**
	 * Enum Engine.EVisibilityTrackCondition
	 */
	enum class EVisibilityTrackCondition : uint8_t
	{
		EVTC_Always       = 0,
		EVTC_GoreEnabled  = 1,
		EVTC_GoreDisabled = 2,
		EVTC_MAX          = 3
	};

	/**
	 * Enum Engine.EVisibilityTrackAction
	 */
	enum class EVisibilityTrackAction : uint8_t
	{
		EVTA_Hide   = 0,
		EVTA_Show   = 1,
		EVTA_Toggle = 2,
		EVTA_MAX    = 3
	};

	/**
	 * Enum Engine.EClampMode
	 */
	enum class EClampMode : uint8_t
	{
		CMODE_Clamp    = 0,
		CMODE_ClampMin = 1,
		CMODE_ClampMax = 2,
		CMODE_MAX      = 3
	};

	/**
	 * Enum Engine.ECustomMaterialOutputType
	 */
	enum class ECustomMaterialOutputType : uint8_t
	{
		CMOT_Float1 = 0,
		CMOT_Float2 = 1,
		CMOT_Float3 = 2,
		CMOT_Float4 = 3,
		CMOT_MAX    = 4
	};

	/**
	 * Enum Engine.EDepthOfFieldFunctionValue
	 */
	enum class EDepthOfFieldFunctionValue : uint8_t
	{
		TDOF_NearAndFarMask = 0,
		TDOF_NearMask       = 1,
		TDOF_FarMask        = 2,
		TDOF_MAX            = 3
	};

	/**
	 * Enum Engine.EFunctionInputType
	 */
	enum class EFunctionInputType : uint8_t
	{
		FunctionInput_Scalar             = 0,
		FunctionInput_Vector2            = 1,
		FunctionInput_Vector3            = 2,
		FunctionInput_Vector4            = 3,
		FunctionInput_Texture2D          = 4,
		FunctionInput_TextureCube        = 5,
		FunctionInput_StaticBool         = 6,
		FunctionInput_MaterialAttributes = 7,
		FunctionInput_MAX                = 8
	};

	/**
	 * Enum Engine.EIfExpressionAttribute
	 */
	enum class EIfExpressionAttribute : uint8_t
	{
		Default = 0,
		Branch  = 1,
		Flatten = 2,
		MAX     = 3
	};

	/**
	 * Enum Engine.EIfExpressionCondition
	 */
	enum class EIfExpressionCondition : uint8_t
	{
		Equal          = 0,
		Greater        = 1,
		GreaterOrEqual = 2,
		Less           = 3,
		LessOrEqual    = 4,
		MAX            = 5
	};

	/**
	 * Enum Engine.ENoiseFunction
	 */
	enum class ENoiseFunction : uint8_t
	{
		NOISEFUNCTION_Simplex      = 0,
		NOISEFUNCTION_Perlin       = 1,
		NOISEFUNCTION_Gradient     = 2,
		NOISEFUNCTION_FastGradient = 3,
		NOISEFUNCTION_MAX          = 4
	};

	/**
	 * Enum Engine.EMaterialSceneAttributeInputMode
	 */
	enum class EMaterialSceneAttributeInputMode : uint8_t
	{
		Coordinates    = 0,
		OffsetFraction = 1,
		MAX            = 2
	};

	/**
	 * Enum Engine.ESceneTextureId
	 */
	enum class ESceneTextureId : uint8_t
	{
		PPI_SceneColor           = 0,
		PPI_SceneDepth           = 1,
		PPI_DiffuseColor         = 2,
		PPI_SpecularColor        = 3,
		PPI_SubsurfaceColor      = 4,
		PPI_BaseColor            = 5,
		PPI_Specular             = 6,
		PPI_Metallic             = 7,
		PPI_WorldNormal          = 8,
		PPI_SeparateTranslucency = 9,
		PPI_Opacity              = 10,
		PPI_Roughness            = 11,
		PPI_MaterialAO           = 12,
		PPI_CustomDepth          = 13,
		PPI_PostProcessInput0    = 14,
		PPI_PostProcessInput1    = 15,
		PPI_PostProcessInput2    = 16,
		PPI_PostProcessInput3    = 17,
		PPI_PostProcessInput4    = 18,
		PPI_PostProcessInput5    = 19,
		PPI_PostProcessInput6    = 20,
		PPI_DecalMask            = 21,
		PPI_ShadingModel         = 22,
		PPI_AmbientOcclusion     = 23,
		PPI_CustomStencil        = 24,
		PPI_PlanarReflections    = 25,
		PPI_Mask                 = 26,
		PPI_PreviousMask         = 27,
		PPI_MAX                  = 28
	};

	/**
	 * Enum Engine.ESpeedTreeLODType
	 */
	enum class ESpeedTreeLODType : uint8_t
	{
		STLOD_Pop    = 0,
		STLOD_Smooth = 1,
		STLOD_MAX    = 2
	};

	/**
	 * Enum Engine.ESpeedTreeWindType
	 */
	enum class ESpeedTreeWindType : uint8_t
	{
		STW_None     = 0,
		STW_Fastest  = 1,
		STW_Fast     = 2,
		STW_Better   = 3,
		STW_Best     = 4,
		STW_Palm     = 5,
		STW_BestPlus = 6,
		STW_MAX      = 7
	};

	/**
	 * Enum Engine.ESpeedTreeGeometryType
	 */
	enum class ESpeedTreeGeometryType : uint8_t
	{
		STG_Branch     = 0,
		STG_Frond      = 1,
		STG_Leaf       = 2,
		STG_FacingLeaf = 3,
		STG_Billboard  = 4,
		STG_MAX        = 5
	};

	/**
	 * Enum Engine.ETextureMipValueMode
	 */
	enum class ETextureMipValueMode : uint8_t
	{
		TMVM_None       = 0,
		TMVM_MipLevel   = 1,
		TMVM_MipBias    = 2,
		TMVM_Derivative = 3,
		TMVM_MAX        = 4
	};

	/**
	 * Enum Engine.ETextureColorChannel
	 */
	enum class ETextureColorChannel : uint8_t
	{
		TCC_Red   = 0,
		TCC_Green = 1,
		TCC_Blue  = 2,
		TCC_Alpha = 3,
		TCC_MAX   = 4
	};

	/**
	 * Enum Engine.EMaterialVectorCoordTransform
	 */
	enum class EMaterialVectorCoordTransform : uint8_t
	{
		TRANSFORM_Tangent = 0,
		TRANSFORM_Local   = 1,
		TRANSFORM_World   = 2,
		TRANSFORM_View    = 3,
		TRANSFORM_MAX     = 4
	};

	/**
	 * Enum Engine.EMaterialVectorCoordTransformSource
	 */
	enum class EMaterialVectorCoordTransformSource : uint8_t
	{
		TRANSFORMSOURCE_Tangent = 0,
		TRANSFORMSOURCE_Local   = 1,
		TRANSFORMSOURCE_World   = 2,
		TRANSFORMSOURCE_View    = 3,
		TRANSFORMSOURCE_MAX     = 4
	};

	/**
	 * Enum Engine.EMaterialPositionTransformSource
	 */
	enum class EMaterialPositionTransformSource : uint8_t
	{
		TRANSFORMPOSSOURCE_Local           = 0,
		TRANSFORMPOSSOURCE_World           = 1,
		TRANSFORMPOSSOURCE_TranslatedWorld = 2,
		TRANSFORMPOSSOURCE_View            = 3,
		TRANSFORMPOSSOURCE_MAX             = 4
	};

	/**
	 * Enum Engine.EMaterialExposedViewProperty
	 */
	enum class EMaterialExposedViewProperty : uint8_t
	{
		MEVP_BufferSize               = 0,
		MEVP_FieldOfView              = 1,
		MEVP_TanHalfFieldOfView       = 2,
		MEVP_ViewSize                 = 3,
		MEVP_WorldSpaceCameraPosition = 4,
		MEVP_MAX                      = 5
	};

	/**
	 * Enum Engine.EWorldPositionIncludedOffsets
	 */
	enum class EWorldPositionIncludedOffsets : uint8_t
	{
		WPT_Default                 = 0,
		WPT_ExcludeAllShaderOffsets = 1,
		WPT_CameraRelative          = 2,
		WPT_CameraRelativeNoOffsets = 3,
		WPT_MAX                     = 4
	};

	/**
	 * Enum Engine.EMaterialDecalResponse
	 */
	enum class EMaterialDecalResponse : uint8_t
	{
		MDR_None                 = 0,
		MDR_ColorNormalRoughness = 1,
		MDR_Color                = 2,
		MDR_ColorNormal          = 3,
		MDR_ColorRoughness       = 4,
		MDR_Normal               = 5,
		MDR_NormalRoughness      = 6,
		MDR_Roughness            = 7,
		MDR_MAX                  = 8
	};

	/**
	 * Enum Engine.EMaterialDomain
	 */
	enum class EMaterialDomain : uint8_t
	{
		MD_Surface       = 0,
		MD_DeferredDecal = 1,
		MD_LightFunction = 2,
		MD_PostProcess   = 3,
		MD_UI            = 4,
		MD_MAX           = 5
	};

	/**
	 * Enum Engine.EDecalBlendMode
	 */
	enum class EDecalBlendMode : uint8_t
	{
		DBM_Translucent                  = 0,
		DBM_Stain                        = 1,
		DBM_Normal                       = 2,
		DBM_Emissive                     = 3,
		DBM_DBuffer_ColorNormalRoughness = 4,
		DBM_DBuffer_Color                = 5,
		DBM_DBuffer_ColorNormal          = 6,
		DBM_DBuffer_ColorRoughness       = 7,
		DBM_DBuffer_Normal               = 8,
		DBM_DBuffer_NormalRoughness      = 9,
		DBM_DBuffer_Roughness            = 10,
		DBM_Volumetric_DistanceFunction  = 11,
		DBM_Wet                          = 12,
		DBM_MAX                          = 13
	};

	/**
	 * Enum Engine.ECanvasRenderTargetMips
	 */
	enum class ECanvasRenderTargetMips : uint8_t
	{
		Disabled = 0,
		Enabled  = 1,
		MAX      = 2
	};

	/**
	 * Enum Engine.EEmitterRenderMode
	 */
	enum class EEmitterRenderMode : uint8_t
	{
		ERM_Normal     = 0,
		ERM_Point      = 1,
		ERM_Cross      = 2,
		ERM_LightsOnly = 3,
		ERM_None       = 4,
		ERM_MAX        = 5
	};

	/**
	 * Enum Engine.EParticleSubUVInterpMethod
	 */
	enum class EParticleSubUVInterpMethod : uint8_t
	{
		PSUVIM_None           = 0,
		PSUVIM_Linear         = 1,
		PSUVIM_Linear_NoBlend = 2,
		PSUVIM_Linear_Blend   = 3,
		PSUVIM_Random         = 4,
		PSUVIM_Random_Blend   = 5,
		PSUVIM_MAX            = 6
	};

	/**
	 * Enum Engine.EEmitterQuality
	 */
	enum class EEmitterQuality : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		MAX    = 3
	};

	/**
	 * Enum Engine.EBurstGroup
	 */
	enum class EBurstGroup : uint8_t
	{
		GroupA           = 0,
		GroupB           = 1,
		GroupC           = 2,
		GroupD           = 3,
		GroupE           = 4,
		GroupReplacement = 5,
		Group_MAX        = 6,
		MAX              = 7
	};

	/**
	 * Enum Engine.EParticleBurstMethod
	 */
	enum class EParticleBurstMethod : uint8_t
	{
		EPBM_Instant      = 0,
		EPBM_Interpolated = 1,
		EPBM_MAX          = 2
	};

	/**
	 * Enum Engine.EParticleScreenAlignment
	 */
	enum class EParticleScreenAlignment : uint8_t
	{
		PSA_FacingCameraPosition  = 0,
		PSA_Square                = 1,
		PSA_Rectangle             = 2,
		PSA_Velocity              = 3,
		PSA_AwayFromCenter        = 4,
		PSA_TypeSpecific          = 5,
		PSA_VelocityScreen        = 6,
		PSA_InitialVelocityScreen = 7,
		PSA_InitialVelocity       = 8,
		PSA_VelocityOnly          = 9,
		PSA_MAX                   = 10
	};

	/**
	 * Enum Engine.EParticleSourceSelectionMethod
	 */
	enum class EParticleSourceSelectionMethod : uint8_t
	{
		EPSSM_Random     = 0,
		EPSSM_Sequential = 1,
		EPSSM_MAX        = 2
	};

	/**
	 * Enum Engine.EModuleType
	 */
	enum class EModuleType : uint8_t
	{
		EPMT_General  = 0,
		EPMT_TypeData = 1,
		EPMT_Beam     = 2,
		EPMT_Trail    = 3,
		EPMT_Spawn    = 4,
		EPMT_Required = 5,
		EPMT_Event    = 6,
		EPMT_Light    = 7,
		EPMT_MAX      = 8
	};

	/**
	 * Enum Engine.EAccelerationGroupNames
	 */
	enum class EAccelerationGroupNames : uint8_t
	{
		AccelerationGroupB           = 0,
		AccelerationGroupC           = 1,
		AccelerationGroupD           = 2,
		AccelerationGroupE           = 3,
		AccelerationGroupReplacement = 4,
		AccelerationGroup_MAX        = 5,
		MAX                          = 6
	};

	/**
	 * Enum Engine.EDragOnLocalVelocityGroupName
	 */
	enum class EDragOnLocalVelocityGroupName : uint8_t
	{
		DragOnLocalVelocityGroupB           = 0,
		DragOnLocalVelocityGroupC           = 1,
		DragOnLocalVelocityGroupD           = 2,
		DragOnLocalVelocityGroupE           = 3,
		DragOnLocalVelocityGroupReplacement = 4,
		DragOnLocalVelocityGroup_MAX        = 5,
		MAX                                 = 6
	};

	/**
	 * Enum Engine.EDragCoefficientGroupName
	 */
	enum class EDragCoefficientGroupName : uint8_t
	{
		DragCoefficientGroupB           = 0,
		DragCoefficientGroupC           = 1,
		DragCoefficientGroupD           = 2,
		DragCoefficientGroupE           = 3,
		DragCoefficientGroupReplacement = 4,
		DragCoefficientGroup_MAX        = 5,
		MAX                             = 6
	};

	/**
	 * Enum Engine.EAttractorParticleSelectionMethod
	 */
	enum class EAttractorParticleSelectionMethod : uint8_t
	{
		EAPSM_Random     = 0,
		EAPSM_Sequential = 1,
		EAPSM_MAX        = 2
	};

	/**
	 * Enum Engine.Beam2SourceTargetTangentMethod
	 */
	enum class EBeam2SourceTargetTangentMethod : uint8_t
	{
		PEB2STTM_Direct       = 0,
		PEB2STTM_UserSet      = 1,
		PEB2STTM_Distribution = 2,
		PEB2STTM_Emitter      = 3,
		PEB2STTM_MAX          = 4
	};

	/**
	 * Enum Engine.Beam2SourceTargetMethod
	 */
	enum class EBeam2SourceTargetMethod : uint8_t
	{
		PEB2STM_Default  = 0,
		PEB2STM_UserSet  = 1,
		PEB2STM_Emitter  = 2,
		PEB2STM_Particle = 3,
		PEB2STM_Actor    = 4,
		PEB2STM_MAX      = 5
	};

	/**
	 * Enum Engine.BeamModifierType
	 */
	enum class EBeamModifierType : uint8_t
	{
		PEB2MT_Source = 0,
		PEB2MT_Target = 1,
		PEB2MT_MAX    = 2
	};

	/**
	 * Enum Engine.EParticleCameraOffsetUpdateMethod
	 */
	enum class EParticleCameraOffsetUpdateMethod : uint8_t
	{
		EPCOUM_DirectSet = 0,
		EPCOUM_Additive  = 1,
		EPCOUM_Scalar    = 2,
		EPCOUM_MAX       = 3
	};

	/**
	 * Enum Engine.EParticleCollisionComplete
	 */
	enum class EParticleCollisionComplete : uint8_t
	{
		EPCC_Kill              = 0,
		EPCC_Freeze            = 1,
		EPCC_HaltCollisions    = 2,
		EPCC_FreezeTranslation = 3,
		EPCC_FreezeRotation    = 4,
		EPCC_FreezeMovement    = 5,
		EPCC_MAX               = 6
	};

	/**
	 * Enum Engine.EParticleCollisionResponse
	 */
	enum class EParticleCollisionResponse : uint8_t
	{
		Bounce = 0,
		Stop   = 1,
		Kill   = 2,
		MAX    = 3
	};

	/**
	 * Enum Engine.EStartAlphaGroupsName
	 */
	enum class EStartAlphaGroupsName : uint8_t
	{
		StartAlphaB           = 0,
		StartAlphaC           = 1,
		StartAlphaD           = 2,
		StartAlphaE           = 3,
		StartAlphaReplacement = 4,
		StartAlpha_MAX        = 5,
		MAX                   = 6
	};

	/**
	 * Enum Engine.EStartColorGroupsName
	 */
	enum class EStartColorGroupsName : uint8_t
	{
		StartColorB           = 0,
		StartColorC           = 1,
		StartColorD           = 2,
		StartColorE           = 3,
		StartColorReplacement = 4,
		StartColor_MAX        = 5,
		MAX                   = 6
	};

	/**
	 * Enum Engine.EGPUParticleCollisionEventLimit
	 */
	enum class EGPUParticleCollisionEventLimit : uint8_t
	{
		OnlyOnFirstCollision     = 0,
		OnlyOnFirstTwoCollisions = 1,
		Unlimited                = 2,
		MAX                      = 3
	};

	/**
	 * Enum Engine.ESpawnEventGroupNames
	 */
	enum class ESpawnEventGroupNames : uint8_t
	{
		SpawnEventGroupB            = 0,
		SpawnEventGroupC            = 1,
		SpawnEventGroupD            = 2,
		SpawnEventGroupE            = 3,
		SpawnEventGroupReplacemnent = 4,
		SpawnEventGroup_MAX         = 5,
		MAX                         = 6
	};

	/**
	 * Enum Engine.EFFTWaterKillPointLocation
	 */
	enum class EFFTWaterKillPointLocation : uint8_t
	{
		FFTWaterKillPointLocation_LowerBound = 0,
		FFTWaterKillPointLocation_Center     = 1,
		FFTWaterKillPointLocation_UpperBound = 2,
		FFTWaterKillPointLocation_MAX        = 3
	};

	/**
	 * Enum Engine.EFFTWaterKillPointGroupName
	 */
	enum class EFFTWaterKillPointGroupName : uint8_t
	{
		FFTWaterKillPointGroupB           = 0,
		FFTWaterKillPointGroupC           = 1,
		FFTWaterKillPointGroupD           = 2,
		FFTWaterKillPointGroupE           = 3,
		FFTWaterKillPointGroupReplacement = 4,
		FFTWaterKillPointGroup_MAX        = 5,
		MAX                               = 6
	};

	/**
	 * Enum Engine.ELifetimeGroupsName
	 */
	enum class ELifetimeGroupsName : uint8_t
	{
		LifetimeB           = 0,
		LifetimeC           = 1,
		LifetimeD           = 2,
		LifetimeE           = 3,
		LifetimeReplacement = 4,
		Lifetime_MAX        = 5,
		MAX                 = 6
	};

	/**
	 * Enum Engine.EStartLocationGroupNames
	 */
	enum class EStartLocationGroupNames : uint8_t
	{
		StartLocationGroupB    = 0,
		StartLocationGroupC    = 1,
		StartLocationGroupD    = 2,
		StartLocationGroupE    = 3,
		StartLocationGroup_MAX = 4,
		MAX                    = 5
	};

	/**
	 * Enum Engine.ELocationBoneSocketSelectionMethod
	 */
	enum class ELocationBoneSocketSelectionMethod : uint8_t
	{
		BONESOCKETSEL_Sequential = 0,
		BONESOCKETSEL_Random     = 1,
		BONESOCKETSEL_MAX        = 2
	};

	/**
	 * Enum Engine.ELocationBoneSocketSource
	 */
	enum class ELocationBoneSocketSource : uint8_t
	{
		BONESOCKETSOURCE_Bones   = 0,
		BONESOCKETSOURCE_Sockets = 1,
		BONESOCKETSOURCE_MAX     = 2
	};

	/**
	 * Enum Engine.ELocationEmitterSelectionMethod
	 */
	enum class ELocationEmitterSelectionMethod : uint8_t
	{
		ELESM_Random     = 0,
		ELESM_Sequential = 1,
		ELESM_MAX        = 2
	};

	/**
	 * Enum Engine.EStartLocationGPUGroupNames
	 */
	enum class EStartLocationGPUGroupNames : uint8_t
	{
		StartLocationGPUGroupB           = 0,
		StartLocationGPUGroupC           = 1,
		StartLocationGPUGroupD           = 2,
		StartLocationGPUGroupE           = 3,
		StartLocationGPUGroupReplacement = 4,
		StartLocationGPUGroup_MAX        = 5,
		MAX                              = 6
	};

	/**
	 * Enum Engine.EStartHeightGroupNames
	 */
	enum class EStartHeightGroupNames : uint8_t
	{
		StartHeightGroupB    = 0,
		StartHeightGroupC    = 1,
		StartHeightGroupD    = 2,
		StartHeightGroupE    = 3,
		StartHeightGroup_MAX = 4,
		MAX                  = 5
	};

	/**
	 * Enum Engine.EStartRadiusGroupNames
	 */
	enum class EStartRadiusGroupNames : uint8_t
	{
		StartRadiusGroupB    = 0,
		StartRadiusGroupC    = 1,
		StartRadiusGroupD    = 2,
		StartRadiusGroupE    = 3,
		StartRadiusGroup_MAX = 4,
		MAX                  = 5
	};

	/**
	 * Enum Engine.EAngleRangeGroupNames
	 */
	enum class EAngleRangeGroupNames : uint8_t
	{
		AngleRangeGroupB    = 0,
		AngleRangeGroupC    = 1,
		AngleRangeGroupD    = 2,
		AngleRangeGroupE    = 3,
		AngleRangeGroup_MAX = 4,
		MAX                 = 5
	};

	/**
	 * Enum Engine.CylinderHeightAxis
	 */
	enum class ECylinderHeightAxis : uint8_t
	{
		PMLPC_HEIGHTAXIS_X   = 0,
		PMLPC_HEIGHTAXIS_Y   = 1,
		PMLPC_HEIGHTAXIS_Z   = 2,
		PMLPC_HEIGHTAXIS_MAX = 3
	};

	/**
	 * Enum Engine.EVelocityScaleGroupNames
	 */
	enum class EVelocityScaleGroupNames : uint8_t
	{
		VelocityScaleGroupB    = 0,
		VelocityScaleGroupC    = 1,
		VelocityScaleGroupD    = 2,
		VelocityScaleGroupE    = 3,
		VelocityScaleGroup_MAX = 4,
		MAX                    = 5
	};

	/**
	 * Enum Engine.ELocationSkelVertSurfaceSource
	 */
	enum class ELocationSkelVertSurfaceSource : uint8_t
	{
		VERTSURFACESOURCE_Vert    = 0,
		VERTSURFACESOURCE_Surface = 1,
		VERTSURFACESOURCE_MAX     = 2
	};

	/**
	 * Enum Engine.EOrbitChainMode
	 */
	enum class EOrbitChainMode : uint8_t
	{
		EOChainMode_Add   = 0,
		EOChainMode_Scale = 1,
		EOChainMode_Link  = 2,
		EOChainMode_MAX   = 3
	};

	/**
	 * Enum Engine.EParticleAxisLock
	 */
	enum class EParticleAxisLock : uint8_t
	{
		EPAL_NONE       = 0,
		EPAL_X          = 1,
		EPAL_Y          = 2,
		EPAL_Z          = 3,
		EPAL_NEGATIVE_X = 4,
		EPAL_NEGATIVE_Y = 5,
		EPAL_NEGATIVE_Z = 6,
		EPAL_ROTATE_X   = 7,
		EPAL_ROTATE_Y   = 8,
		EPAL_ROTATE_Z   = 9,
		EPAL_MAX        = 10
	};

	/**
	 * Enum Engine.EEmitterDynamicParameterValue
	 */
	enum class EEmitterDynamicParameterValue : uint8_t
	{
		EDPV_UserSet     = 0,
		EDPV_VelocityX   = 1,
		EDPV_VelocityY   = 2,
		EDPV_VelocityZ   = 3,
		EDPV_VelocityMag = 4,
		EDPV_MAX         = 5
	};

	/**
	 * Enum Engine.EGroupScales
	 */
	enum class EGroupScales : uint8_t
	{
		GroupAScale           = 0,
		GroupBScale           = 1,
		GroupCScale           = 2,
		GroupDScale           = 3,
		GroupEScale           = 4,
		GroupReplacementScale = 5,
		GroupScale_MAX        = 6,
		MAX                   = 7
	};

	/**
	 * Enum Engine.EOpacitySourceMode
	 */
	enum class EOpacitySourceMode : uint8_t
	{
		OSM_Alpha           = 0,
		OSM_ColorBrightness = 1,
		OSM_RedChannel      = 2,
		OSM_GreenChannel    = 3,
		OSM_BlueChannel     = 4,
		OSM_MAX             = 5
	};

	/**
	 * Enum Engine.ESubUVBoundingVertexCount
	 */
	enum class ESubUVBoundingVertexCount : uint8_t
	{
		BVC_FourVertices  = 0,
		BVC_EightVertices = 1,
		BVC_MAX           = 2
	};

	/**
	 * Enum Engine.EPriorityGroups
	 */
	enum class EPriorityGroups : uint8_t
	{
		PriorityZero  = 0,
		PriorityOne   = 1,
		PriorityTwo   = 2,
		PriorityThree = 3,
		PriorityFour  = 4,
		PriorityFive  = 5,
		Priority_MAX  = 6,
		MAX           = 7
	};

	/**
	 * Enum Engine.EScreenAlignmentGroupNames
	 */
	enum class EScreenAlignmentGroupNames : uint8_t
	{
		ScreenAlignmentGroupB           = 0,
		ScreenAlignmentGroupC           = 1,
		ScreenAlignmentGroupD           = 2,
		ScreenAlignmentGroupE           = 3,
		ScreenAlignmentGroupReplacement = 4,
		ScreenAlignmentGroup_MAX        = 5,
		MAX                             = 6
	};

	/**
	 * Enum Engine.EEmitterOriginGroupNames
	 */
	enum class EEmitterOriginGroupNames : uint8_t
	{
		EmitterOriginGroupB           = 0,
		EmitterOriginGroupC           = 1,
		EmitterOriginGroupD           = 2,
		EmitterOriginGroupE           = 3,
		EmitterOriginGroupReplacement = 4,
		EmitterOriginGroup_MAX        = 5,
		MAX                           = 6
	};

	/**
	 * Enum Engine.EEmitterNormalsMode
	 */
	enum class EEmitterNormalsMode : uint8_t
	{
		ENM_CameraFacing = 0,
		ENM_Spherical    = 1,
		ENM_Cylindrical  = 2,
		ENM_MAX          = 3
	};

	/**
	 * Enum Engine.EParticleSortMode
	 */
	enum class EParticleSortMode : uint8_t
	{
		PSORTMODE_None            = 0,
		PSORTMODE_ViewProjDepth   = 1,
		PSORTMODE_DistanceToView  = 2,
		PSORTMODE_Age_OldestFirst = 3,
		PSORTMODE_Age_NewestFirst = 4,
		PSORTMODE_MAX             = 5
	};

	/**
	 * Enum Engine.EParticleUVFlipMode
	 */
	enum class EParticleUVFlipMode : uint8_t
	{
		None                    = 0,
		FlipUV                  = 1,
		FlipUOnly               = 2,
		FlipVOnly               = 3,
		RandomFlipUV            = 4,
		RandomFlipUOnly         = 5,
		RandomFlipVOnly         = 6,
		RandomFlipUVIndependent = 7,
		MAX                     = 8
	};

	/**
	 * Enum Engine.ERotationAboutArbitraryAxisGroupName
	 */
	enum class ERotationAboutArbitraryAxisGroupName : uint8_t
	{
		RotationAboutArbitraryAxisGroupB           = 0,
		RotationAboutArbitraryAxisGroupC           = 1,
		RotationAboutArbitraryAxisGroupD           = 2,
		RotationAboutArbitraryAxisGroupE           = 3,
		RotationAboutArbitraryAxisGroupReplacement = 4,
		RotationAboutArbitraryAxisGroup_MAX        = 5,
		MAX                                        = 6
	};

	/**
	 * Enum Engine.EStartRotationGroupNames
	 */
	enum class EStartRotationGroupNames : uint8_t
	{
		StartRotationGroupB           = 0,
		StartRotationGroupC           = 1,
		StartRotationGroupD           = 2,
		StartRotationGroupE           = 3,
		StartRotationGroupReplacement = 4,
		StartRotationGroup_MAX        = 5,
		MAX                           = 6
	};

	/**
	 * Enum Engine.EStartRotationRateGroupNames
	 */
	enum class EStartRotationRateGroupNames : uint8_t
	{
		StartRotationRateGroupB           = 0,
		StartRotationRateGroupC           = 1,
		StartRotationRateGroupD           = 2,
		StartRotationRateGroupE           = 3,
		StartRotationRateGroupReplacement = 4,
		StartRotationRateGroup_MAX        = 5,
		MAX                               = 6
	};

	/**
	 * Enum Engine.EStartSizeGroupNames
	 */
	enum class EStartSizeGroupNames : uint8_t
	{
		StartSizeB           = 0,
		StartSizeC           = 1,
		StartSizeD           = 2,
		StartSizeE           = 3,
		StartSizeReplacement = 4,
		StartSize_MAX        = 5,
		MAX                  = 6
	};

	/**
	 * Enum Engine.ERateGroupNames
	 */
	enum class ERateGroupNames : uint8_t
	{
		RateB           = 0,
		RateC           = 1,
		RateD           = 2,
		RateE           = 3,
		RateReplacement = 4,
		Rate_MAX        = 5,
		MAX             = 6
	};

	/**
	 * Enum Engine.ETrail2SourceMethod
	 */
	enum class ETrail2SourceMethod : uint8_t
	{
		PET2SRCM_Default  = 0,
		PET2SRCM_Particle = 1,
		PET2SRCM_Actor    = 2,
		PET2SRCM_MAX      = 3
	};

	/**
	 * Enum Engine.EBeamTaperMethod
	 */
	enum class EBeamTaperMethod : uint8_t
	{
		PEBTM_None    = 0,
		PEBTM_Full    = 1,
		PEBTM_Partial = 2,
		PEBTM_MAX     = 3
	};

	/**
	 * Enum Engine.EBeam2Method
	 */
	enum class EBeam2Method : uint8_t
	{
		PEB2M_Distance = 0,
		PEB2M_Target   = 1,
		PEB2M_Branch   = 2,
		PEB2M_MAX      = 3
	};

	/**
	 * Enum Engine.EKillPlaneKillPointLocation
	 */
	enum class EKillPlaneKillPointLocation : uint8_t
	{
		KillPlaneKillPointLocation_LowerBound = 0,
		KillPlaneKillPointLocation_Center     = 1,
		KillPlaneKillPointLocation_UpperBound = 2,
		KillPlaneKillPointLocation_MAX        = 3
	};

	/**
	 * Enum Engine.EInteractionWithKillPlane
	 */
	enum class EInteractionWithKillPlane : uint8_t
	{
		None                     = 0,
		KillOnFrontOfPlanes      = 1,
		KillOnBackOfPlanes       = 2,
		CollideWithFront         = 3,
		KillOnIntersectionPlanes = 4,
		MAX                      = 5
	};

	/**
	 * Enum Engine.EParticleAlphaThresholdLevel
	 */
	enum class EParticleAlphaThresholdLevel : uint8_t
	{
		NoCulling      = 0,
		Permissive     = 1,
		Mild           = 2,
		MildAggressive = 3,
		Aggressive     = 4,
		MAX            = 5
	};

	/**
	 * Enum Engine.EMeshCameraFacingOptions
	 */
	enum class EMeshCameraFacingOptions : uint8_t
	{
		XAxisFacing_NoUp                    = 0,
		XAxisFacing_ZUp                     = 1,
		XAxisFacing_NegativeZUp             = 2,
		XAxisFacing_YUp                     = 3,
		XAxisFacing_NegativeYUp             = 4,
		LockedAxis_ZAxisFacing              = 5,
		LockedAxis_NegativeZAxisFacing      = 6,
		LockedAxis_YAxisFacing              = 7,
		LockedAxis_NegativeYAxisFacing      = 8,
		VelocityAligned_ZAxisFacing         = 9,
		VelocityAligned_NegativeZAxisFacing = 10,
		VelocityAligned_YAxisFacing         = 11,
		VelocityAligned_NegativeYAxisFacing = 12,
		MAX                                 = 13
	};

	/**
	 * Enum Engine.EMeshCameraFacingUpAxis
	 */
	enum class EMeshCameraFacingUpAxis : uint8_t
	{
		CameraFacing_NoneUP      = 0,
		CameraFacing_ZUp         = 1,
		CameraFacing_NegativeZUp = 2,
		CameraFacing_YUp         = 3,
		CameraFacing_NegativeYUp = 4,
		CameraFacing_MAX         = 5
	};

	/**
	 * Enum Engine.EMeshScreenAlignment
	 */
	enum class EMeshScreenAlignment : uint8_t
	{
		PSMA_MeshFaceCameraWithRoll       = 0,
		PSMA_MeshFaceCameraWithSpin       = 1,
		PSMA_MeshFaceCameraWithLockedAxis = 2,
		PSMA_MAX                          = 3
	};

	/**
	 * Enum Engine.ETrailsRenderAxisOption
	 */
	enum class ETrailsRenderAxisOption : uint8_t
	{
		Trails_CameraUp = 0,
		Trails_SourceUp = 1,
		Trails_WorldUp  = 2,
		Trails_MAX      = 3
	};

	/**
	 * Enum Engine.EStartVelocityGroupsName
	 */
	enum class EStartVelocityGroupsName : uint8_t
	{
		StartVelocityB            = 0,
		StartVelocityC            = 1,
		StartVelocityD            = 2,
		StartVelocityE            = 3,
		StartVelocityReplacemnent = 4,
		StartVelocity_MAX         = 5,
		MAX                       = 6
	};

	/**
	 * Enum Engine.EVelocityConeGroupNames
	 */
	enum class EVelocityConeGroupNames : uint8_t
	{
		VelocityConeGroupB            = 0,
		VelocityConeGroupC            = 1,
		VelocityConeGroupD            = 2,
		VelocityConeGroupE            = 3,
		VelocityConeGroupReplacemnent = 4,
		VelocityConeGroup_MAX         = 5,
		MAX                           = 6
	};

	/**
	 * Enum Engine.ECloudStorageDelegate
	 */
	enum class ECloudStorageDelegate : uint8_t
	{
		CSD_KeyValueReadComplete     = 0,
		CSD_KeyValueWriteComplete    = 1,
		CSD_ValueChanged             = 2,
		CSD_DocumentQueryComplete    = 3,
		CSD_DocumentReadComplete     = 4,
		CSD_DocumentWriteComplete    = 5,
		CSD_DocumentConflictDetected = 6,
		CSD_MAX                      = 7
	};

	/**
	 * Enum Engine.EAdManagerDelegate
	 */
	enum class EAdManagerDelegate : uint8_t
	{
		AMD_ClickedBanner = 0,
		AMD_UserClosedAd  = 1,
		AMD_MAX           = 2
	};

	/**
	 * Enum Engine.EMicroTransactionResult
	 */
	enum class EMicroTransactionResult : uint8_t
	{
		MTR_Succeeded          = 0,
		MTR_Failed             = 1,
		MTR_Canceled           = 2,
		MTR_RestoredFromServer = 3,
		MTR_MAX                = 4
	};

	/**
	 * Enum Engine.EMicroTransactionDelegate
	 */
	enum class EMicroTransactionDelegate : uint8_t
	{
		MTD_PurchaseQueryComplete = 0,
		MTD_PurchaseComplete      = 1,
		MTD_MAX                   = 2
	};

	/**
	 * Enum Engine.ETwitterIntegrationDelegate
	 */
	enum class ETwitterIntegrationDelegate : uint8_t
	{
		TID_AuthorizeComplete = 0,
		TID_TweetUIComplete   = 1,
		TID_RequestComplete   = 2,
		TID_MAX               = 3
	};

	/**
	 * Enum Engine.ETwitterRequestMethod
	 */
	enum class ETwitterRequestMethod : uint8_t
	{
		TRM_Get    = 0,
		TRM_Post   = 1,
		TRM_Delete = 2,
		TRM_MAX    = 3
	};

	/**
	 * Enum Engine.EReporterLineStyle
	 */
	enum class EReporterLineStyle : uint8_t
	{
		Line = 0,
		Dash = 1,
		MAX  = 2
	};

	/**
	 * Enum Engine.ELegendPosition
	 */
	enum class ELegendPosition : uint8_t
	{
		Outside = 0,
		Inside  = 1,
		MAX     = 2
	};

	/**
	 * Enum Engine.EGraphDataStyle
	 */
	enum class EGraphDataStyle : uint8_t
	{
		Lines  = 0,
		Filled = 1,
		MAX    = 2
	};

	/**
	 * Enum Engine.EGraphAxisStyle
	 */
	enum class EGraphAxisStyle : uint8_t
	{
		Lines   = 0,
		Notches = 1,
		Grid    = 2,
		MAX     = 3
	};

	/**
	 * Enum Engine.EConstraintTransform
	 */
	enum class EConstraintTransform : uint8_t
	{
		Absolute = 0,
		Relative = 1,
		MAX      = 2
	};

	/**
	 * Enum Engine.EControlConstraint
	 */
	enum class EControlConstraint : uint8_t
	{
		Orientation = 0,
		Translation = 1,
		Max         = 2,
		MAX         = 3
	};

	/**
	 * Enum Engine.EImpactDamageOverride
	 */
	enum class EImpactDamageOverride : uint8_t
	{
		IDO_None = 0,
		IDO_On   = 1,
		IDO_Off  = 2,
		IDO_MAX  = 3
	};

	/**
	 * Enum Engine.EMaxConcurrentResolutionRule
	 */
	enum class EMaxConcurrentResolutionRule : uint8_t
	{
		PreventNew                 = 0,
		StopOldest                 = 1,
		StopFarthestThenPreventNew = 2,
		StopFarthestThenOldest     = 3,
		MAX                        = 4
	};

	/**
	 * Enum Engine.ESoundGroup
	 */
	enum class ESoundGroup : uint8_t
	{
		SOUNDGROUP_Default          = 0,
		SOUNDGROUP_Effects          = 1,
		SOUNDGROUP_UI               = 2,
		SOUNDGROUP_Music            = 3,
		SOUNDGROUP_Voice            = 4,
		SOUNDGROUP_GameSoundGroup1  = 5,
		SOUNDGROUP_GameSoundGroup2  = 6,
		SOUNDGROUP_GameSoundGroup3  = 7,
		SOUNDGROUP_GameSoundGroup4  = 8,
		SOUNDGROUP_GameSoundGroup5  = 9,
		SOUNDGROUP_GameSoundGroup6  = 10,
		SOUNDGROUP_GameSoundGroup7  = 11,
		SOUNDGROUP_GameSoundGroup8  = 12,
		SOUNDGROUP_GameSoundGroup9  = 13,
		SOUNDGROUP_GameSoundGroup10 = 14,
		SOUNDGROUP_GameSoundGroup11 = 15,
		SOUNDGROUP_GameSoundGroup12 = 16,
		SOUNDGROUP_GameSoundGroup13 = 17,
		SOUNDGROUP_GameSoundGroup14 = 18,
		SOUNDGROUP_GameSoundGroup15 = 19,
		SOUNDGROUP_GameSoundGroup16 = 20,
		SOUNDGROUP_GameSoundGroup17 = 21,
		SOUNDGROUP_GameSoundGroup18 = 22,
		SOUNDGROUP_GameSoundGroup19 = 23,
		SOUNDGROUP_GameSoundGroup20 = 24,
		SOUNDGROUP_MAX              = 25
	};

	/**
	 * Enum Engine.EDecompressionType
	 */
	enum class EDecompressionType : uint8_t
	{
		DTYPE_Setup      = 0,
		DTYPE_Invalid    = 1,
		DTYPE_Preview    = 2,
		DTYPE_Native     = 3,
		DTYPE_RealTime   = 4,
		DTYPE_Procedural = 5,
		DTYPE_Xenon      = 6,
		DTYPE_Streaming  = 7,
		DTYPE_MAX        = 8
	};

	/**
	 * Enum Engine.EAudioOutputTarget
	 */
	enum class EAudioOutputTarget : uint8_t
	{
		Speaker                     = 0,
		Controller                  = 1,
		ControllerFallbackToSpeaker = 2,
		MAX                         = 3
	};

	/**
	 * Enum Engine.ModulationParamMode
	 */
	enum class EModulationParamMode : uint8_t
	{
		MPM_Normal = 0,
		MPM_Abs    = 1,
		MPM_Direct = 2,
		MPM_MAX    = 3
	};

	/**
	 * Enum Engine.ETimecodeProviderSynchronizationState
	 */
	enum class ETimecodeProviderSynchronizationState : uint8_t
	{
		Closed        = 0,
		Error         = 1,
		Synchronized  = 2,
		Synchronizing = 3,
		MAX           = 4
	};

	/**
	 * Enum Engine.EUserDefinedStructureStatus
	 */
	enum class EUserDefinedStructureStatus : uint8_t
	{
		UDSS_UpToDate  = 0,
		UDSS_Dirty     = 1,
		UDSS_Error     = 2,
		UDSS_Duplicate = 3,
		UDSS_MAX       = 4
	};

	/**
	 * Enum Engine.EVectorFieldConstructionOp
	 */
	enum class EVectorFieldConstructionOp : uint8_t
	{
		VFCO_Extrude = 0,
		VFCO_Revolve = 1,
		VFCO_MAX     = 2
	};

	/**
	 * Enum Engine.EHIKLookAtInterpolation
	 */
	enum class EHIKLookAtInterpolation : uint8_t
	{
		Constant = 0,
		EaseOut  = 1,
		MAX      = 2
	};

	/**
	 * Enum Engine.EHIKLookAtLimits
	 */
	enum class EHIKLookAtLimits : uint8_t
	{
		None    = 0,
		Clamp   = 1,
		Disable = 2,
		MAX     = 3
	};

	/**
	 * Enum Engine.ERefPoseType
	 */
	enum class ERefPoseType : uint8_t
	{
		EIT_LocalSpace = 0,
		EIT_Additive   = 1,
		EIT_MAX        = 2
	};

	/**
	 * Enum Engine.EEvaluatorMode
	 */
	enum class EEvaluatorMode : uint8_t
	{
		EM_Standard      = 0,
		EM_Freeze        = 1,
		EM_DelayedFreeze = 2,
		EM_MAX           = 3
	};

	/**
	 * Enum Engine.EEvaluatorDataSource
	 */
	enum class EEvaluatorDataSource : uint8_t
	{
		EDS_SourcePose      = 0,
		EDS_DestinationPose = 1,
		EDS_MAX             = 2
	};

	/**
	 * Enum Engine.ECameraAlphaBlendMode
	 */
	enum class ECameraAlphaBlendMode : uint8_t
	{
		CABM_Linear = 0,
		CABM_Cubic  = 1,
		CABM_MAX    = 2
	};

	/**
	 * Enum Engine.EShippingStatCategory
	 */
	enum class EShippingStatCategory : uint8_t
	{
		FrameSegment = 0,
		Game         = 1,
		Engine       = 2,
		Blueprint    = 3,
		MAX          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Engine.TickFunction
	 * Size -> 0x0048
	 */
	struct FTickFunction
	{
	public:
		unsigned char                                              UnknownData_1FNY[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETickingGroup                                              TickGroup;                                               // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_38IV[0x1];                                   // 0x0031(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bTickEvenWhenPaused : 1;                                 // 0x0032(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		unsigned char                                              bCanEverTick : 1;                                        // 0x0032(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bStartWithTickEnabled : 1;                               // 0x0032(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              bAllowTickOnDedicatedServer : 1;                         // 0x0032(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_U40W[0xD];                                   // 0x0033(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TickInterval;                                            // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VONE[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ActorComponentTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FActorComponentTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_UUK8[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SimpleMemberReference
	 * Size -> 0x0020
	 */
	struct FSimpleMemberReference
	{
	public:
		class UObject*                                             MemberParent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MemberName;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               MemberGuid;                                              // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ActorTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FActorTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_TU89[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.RepMovement
	 * Size -> 0x0038
	 */
	struct FRepMovement
	{
	public:
		struct FVector                                             LinearVelocity;                                          // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             AngularVelocity;                                         // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             Location;                                                // 0x0018(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x0024(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              bSimulatedPhysicSleep : 1;                               // 0x0030(0x0001) BIT_FIELD Transient, NoDestructor
		unsigned char                                              bRepPhysics : 1;                                         // 0x0030(0x0001) BIT_FIELD Transient, NoDestructor
		EVectorQuantization                                        LocationQuantizationLevel;                               // 0x0031(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		EVectorQuantization                                        VelocityQuantizationLevel;                               // 0x0032(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		ERotatorQuantization                                       RotationQuantizationLevel;                               // 0x0033(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_ADA6[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantize100
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantize100 : public FVector
	{	};

	/**
	 * ScriptStruct Engine.RepAttachment
	 * Size -> 0x0048
	 */
	struct FRepAttachment
	{
	public:
		class AActor*                                              AttachParent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector_NetQuantize100                              LocationOffset;                                          // 0x0008(0x000C)
		struct FVector_NetQuantize100                              RelativeScale3D;                                         // 0x0014(0x000C)
		struct FRotator                                            RotationOffset;                                          // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                AttachSocket;                                            // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LMLV[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     AttachComponent;                                         // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IARV[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ActorPtr
	 * Size -> 0x0008
	 */
	struct FActorPtr
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantize
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantize : public FVector
	{	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantizeNormal
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantizeNormal : public FVector
	{	};

	/**
	 * ScriptStruct Engine.HitResult
	 * Size -> 0x0080
	 */
	struct FHitResult
	{
	public:
		unsigned char                                              bBlockingHit : 1;                                        // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bStartPenetrating : 1;                                   // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_F953[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Time;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Distance;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector_NetQuantize                                 Location;                                                // 0x000C(0x000C)
		struct FVector_NetQuantize                                 ImpactPoint;                                             // 0x0018(0x000C)
		struct FVector_NetQuantizeNormal                           Normal;                                                  // 0x0024(0x000C)
		struct FVector_NetQuantizeNormal                           ImpactNormal;                                            // 0x0030(0x000C)
		struct FVector_NetQuantize                                 TraceStart;                                              // 0x003C(0x000C)
		struct FVector_NetQuantize                                 TraceEnd;                                                // 0x0048(0x000C)
		float                                                      PenetrationDepth;                                        // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Item;                                                    // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TWeakObjectPtr<class UPhysicalMaterial>                    PhysMaterial;                                            // 0x005C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0064(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class UPrimitiveComponent>                  Component;                                               // 0x006C(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper
		class FName                                                BoneName;                                                // 0x0074(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FaceIndex;                                               // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BasedMovementInfo
	 * Size -> 0x0038
	 */
	struct FBasedMovementInfo
	{
	public:
		class UPrimitiveComponent*                                 MovementBase;                                            // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BoneName;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector_NetQuantize100                              Location;                                                // 0x0010(0x000C)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bServerHasBaseComponent;                                 // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRelativeRotation;                                       // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KUPD[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearVelocity;                                          // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.RootMotionMovementParams
	 * Size -> 0x0040
	 */
	struct FRootMotionMovementParams
	{
	public:
		bool                                                       bHasRootMotion;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8SVW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendWeight;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LQ7N[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RootMotionTransform;                                     // 0x0010(0x0030) IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantize10
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantize10 : public FVector
	{	};

	/**
	 * ScriptStruct Engine.RepRootMotionMontage
	 * Size -> 0x0040
	 */
	struct FRepRootMotionMontage
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Position;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector_NetQuantize10                               Location;                                                // 0x000C(0x000C)
		struct FRotator                                            Rotation;                                                // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RXTW[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 MovementBase;                                            // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MovementBaseBoneName;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRelativePosition;                                       // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRelativeRotation;                                       // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y43R[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SimulatedRootMotionReplicatedMove
	 * Size -> 0x0048
	 */
	struct FSimulatedRootMotionReplicatedMove
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U1ZL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRepRootMotionMontage                               RootMotion;                                              // 0x0008(0x0040) ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.AnimTickRecord
	 * Size -> 0x0040
	 */
	struct FAnimTickRecord
	{
	public:
		class UAnimationAsset*                                     SourceAsset;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CH3Y[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimGroupInstance
	 * Size -> 0x0018
	 */
	struct FAnimGroupInstance
	{
	public:
		unsigned char                                              UnknownData_XGRP[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ActiveVertexAnim
	 * Size -> 0x0010
	 */
	struct FActiveVertexAnim
	{
	public:
		class UVertexAnimBase*                                     VertAnim;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weight;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AnimLinkableElement
	 * Size -> 0x0030
	 */
	struct FAnimLinkableElement
	{
	public:
		unsigned char                                              UnknownData_GVBN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        LinkedMontage;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		int32_t                                                    SlotIndex;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		int32_t                                                    SegmentIndex;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		EAnimLinkMethod                                            LinkMethod;                                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		EAnimLinkMethod                                            CachedLinkMethod;                                        // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_B1T5[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SegmentBeginTime;                                        // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      SegmentLength;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      LinkValue;                                               // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UAnimSequenceBase*                                   LinkedSequence;                                          // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AnimNotifyEvent
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	struct FAnimNotifyEvent : public FAnimLinkableElement
	{
	public:
		float                                                      DisplayTime;                                             // 0x0030(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TriggerTimeOffset;                                       // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndTriggerTimeOffset;                                    // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TriggerWeightThreshold;                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NotifyName;                                              // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimNotify*                                         Notify;                                                  // 0x0048(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAnimNotifyState*                                    NotifyStateClass;                                        // 0x0050(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAnimNotifyCondition*                                NotifyCondition;                                         // 0x0058(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      Duration;                                                // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ER01[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimLinkableElement                                EndLink;                                                 // 0x0068(0x0030)
		bool                                                       bConvertedFromBranchingPoint;                            // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		EMontageNotifyTickType                                     MontageTickType;                                         // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G47O[0x2];                                   // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NotifyTriggerChance;                                     // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ENotifyFilterType                                          NotifyFilterType;                                        // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VK9K[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NotifyFilterLOD;                                         // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TrackIndex;                                              // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2U5A[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.RainPostProcessSettings
	 * Size -> 0x00C0
	 */
	struct FRainPostProcessSettings
	{
	public:
		unsigned char                                              bOverride_RainParticleTexture : 1;                       // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshTexture : 1;                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainIntensity : 1;                             // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainParticleAlpha : 1;                         // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainCloseParticleAlphaReductionMultiplier : 1; // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainCloseParticleAlphaDistance : 1;            // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainParticleDensity : 1;                       // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainParticleSpeed : 1;                         // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainParticleWindVelocity : 1;                  // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainParticleWidth : 1;                         // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainParticleLength : 1;                        // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshScale : 1;                             // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshTextureScroll : 1;                     // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshTextureTiling : 1;                     // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshAlpha : 1;                             // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshRowDivision : 1;                       // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshColumnDivision : 1;                    // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshBrightness : 1;                        // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainBrightness : 1;                            // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainTint : 1;                                  // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshEndRadiusScale : 1;                    // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshEndAlphaFade : 1;                      // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainMeshFadeDistance : 1;                      // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainAnimationFrameTime : 1;                    // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainSplashesPerSecond : 1;                     // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainSplashesPerSquareMetre : 1;                // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainSplashesMaxPlacementAngle : 1;             // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainSplashData : 1;                            // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainSplashesMaxDistance1 : 1;                  // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainSplashData2 : 1;                           // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_RainSplashesMaxDistance2 : 1;                  // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_TYVY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            RainParticleTexture;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UTexture*                                            RainMeshTexture;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainIntensity;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainParticleAlpha;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainCloseParticleAlphaReductionMultiplier;               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainCloseParticleAlphaDistance;                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainParticleDensity;                                     // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainParticleSpeed;                                       // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FVector                                             RainParticleWindVelocity;                                // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      RainParticleWidth;                                       // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainParticleLength;                                      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FVector                                             RainMeshScale;                                           // 0x0044(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FVector2D                                           RainMeshTextureScroll;                                   // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FVector2D                                           RainMeshTextureTiling;                                   // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      RainMeshAlpha;                                           // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    RainMeshRowDivision;                                     // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    RainMeshColumnDivision;                                  // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainMeshEndRadiusScale;                                  // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainMeshEndAlphaFade;                                    // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainMeshFadeDistance;                                    // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainMeshBrightness;                                      // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainBrightness;                                          // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FLinearColor                                        RainTint;                                                // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      RainAnimationFrameTime;                                  // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    RainSplashesPerSecond;                                   // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainSplashesPerSquareMetre;                              // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainSplashesMaxPlacementAngle;                           // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UParticleComputeShaderData*                          RainSplashData;                                          // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainSplashesMaxDistance1;                                // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_WQ3P[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleComputeShaderData*                          RainSplashData2;                                         // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RainSplashesMaxDistance2;                                // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_EVS4[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LPVCascadeSettings
	 * Size -> 0x0070
	 */
	struct FLPVCascadeSettings
	{
	public:
		unsigned char                                              bOverride_LPVIntensity : 1;                              // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVDirectionalOcclusionIntensity : 1;          // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVDirectionalOcclusionRadius : 1;             // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVDiffuseOcclusionExponent : 1;               // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVSpecularOcclusionExponent : 1;              // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVDiffuseOcclusionIntensity : 1;              // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVSpecularOcclusionIntensity : 1;             // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVSize : 1;                                   // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVSecondaryOcclusionIntensity : 1;            // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVSecondaryBounceIntensity : 1;               // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVGeometryVolumeBias : 1;                     // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVVplInjectionBias : 1;                       // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVEmissiveInjectionIntensity : 1;             // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_NumberOfPropagationSteps : 1;                  // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bFreezeLPVUpdate : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, Interp, NoDestructor
		unsigned char                                              UnknownData_804E[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LPVIntensity;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LPVVplInjectionBias;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVSize;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LPVSecondaryOcclusionIntensity;                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LPVSecondaryBounceIntensity;                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVGeometryVolumeBias;                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVEmissiveInjectionIntensity;                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVDirectionalOcclusionIntensity;                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LPVDirectionalOcclusionRadius;                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVDiffuseOcclusionExponent;                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LPVSpecularOcclusionExponent;                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LPVDiffuseOcclusionIntensity;                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVSpecularOcclusionIntensity;                           // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    LPVNumberOfPropagationSteps;                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_XHG7[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LPVWorldRef;                                             // 0x0040(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.PlayerAmbientLightOverrideSettings
	 * Size -> 0x0018
	 */
	struct FPlayerAmbientLightOverrideSettings
	{
	public:
		unsigned char                                              OverrideBodyLightAmbience : 1;                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_32GX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BodyLightAmbienceLightFactor;                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      BodyLightAmbienceBlendWithDefault;                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              OverrideLanternAmbience : 1;                             // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_KJM2[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LanternAmbienceLightFactor;                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LanternAmbienceBlendWithDefault;                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.WeightedBlendable
	 * Size -> 0x0010
	 */
	struct FWeightedBlendable
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_COAU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Object;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.WeightedBlendables
	 * Size -> 0x0010
	 */
	struct FWeightedBlendables
	{
	public:
		TArray<struct FWeightedBlendable>                          Array;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.PostProcessSettings
	 * Size -> 0x0540
	 */
	struct FPostProcessSettings
	{
	public:
		unsigned char                                              bOverride_WhiteTemp : 1;                                 // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_WhiteTint : 1;                                 // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ColorSaturation : 1;                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ColorContrast : 1;                             // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ColorGamma : 1;                                // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ColorGain : 1;                                 // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ColorOffset : 1;                               // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmWhitePoint : 1;                            // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmSaturation : 1;                            // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmChannelMixerRed : 1;                       // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmChannelMixerGreen : 1;                     // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmChannelMixerBlue : 1;                      // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmContrast : 1;                              // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmDynamicRange : 1;                          // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmHealAmount : 1;                            // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmToeAmount : 1;                             // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmShadowTint : 1;                            // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmShadowTintBlend : 1;                       // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmShadowTintAmount : 1;                      // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmSlope : 1;                                 // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmToe : 1;                                   // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmShoulder : 1;                              // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmBlackClip : 1;                             // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_FilmWhiteClip : 1;                             // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_SceneColorTint : 1;                            // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_SceneFringeIntensity : 1;                      // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_SceneFringeSaturation : 1;                     // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientCubemapTint : 1;                        // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientCubemapIntensity : 1;                   // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_BloomIntensity : 1;                            // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_BloomThreshold : 1;                            // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom1Tint : 1;                                // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom1Size : 1;                                // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom2Size : 1;                                // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom2Tint : 1;                                // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom3Tint : 1;                                // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom3Size : 1;                                // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom4Tint : 1;                                // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom4Size : 1;                                // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom5Tint : 1;                                // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom5Size : 1;                                // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom6Tint : 1;                                // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_Bloom6Size : 1;                                // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_BloomSizeScale : 1;                            // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_BloomDirtMaskIntensity : 1;                    // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_BloomDirtMaskTint : 1;                         // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_BloomDirtMask : 1;                             // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AutoExposureLowPercent : 1;                    // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AutoExposureHighPercent : 1;                   // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AutoExposureMinBrightness : 1;                 // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AutoExposureMaxBrightness : 1;                 // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AutoExposureSpeedUp : 1;                       // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AutoExposureSpeedDown : 1;                     // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AutoExposureBias : 1;                          // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_HistogramLogMin : 1;                           // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_HistogramLogMax : 1;                           // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LensFlareIntensity : 1;                        // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LensFlareTint : 1;                             // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LensFlareTints : 1;                            // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LensFlareBokehSize : 1;                        // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LensFlareBokehShape : 1;                       // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LensFlareThreshold : 1;                        // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_VignetteIntensity : 1;                         // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_GrainIntensity : 1;                            // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_GrainJitter : 1;                               // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionIntensity : 1;                 // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionStaticFraction : 1;            // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionRadius : 1;                    // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionFadeDistance : 1;              // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionFadeRadius : 1;                // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionDistance : 1;                  // 0x0008(0x0001) BIT_FIELD Deprecated, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionRadiusInWS : 1;                // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionPower : 1;                     // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionBias : 1;                      // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionQuality : 1;                   // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionMipBlend : 1;                  // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionMipScale : 1;                  // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionMipThreshold : 1;              // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiIntensity : 1;             // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiPower : 1;                 // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiRadius : 1;                // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiBlurTolerance : 1;         // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiUpsampleTolerance : 1;     // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiNoiseFilterTolerance : 1;  // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiRejectionFalloff : 1;      // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiBias : 1;                  // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiMaxDepthDownsample : 1;    // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiUseNormals : 1;            // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiCombineBeforeBlur : 1;     // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AmbientOcclusionHemiCombineWithMultiply : 1;   // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_MinOverdrawCount : 1;                          // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_MaxOverdrawCount : 1;                          // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_MinOverdrawColour : 1;                         // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_MaxOverdrawColour : 1;                         // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVIntensity : 1;                              // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVDirectionalOcclusionIntensity : 1;          // 0x000B(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverride_LPVDirectionalOcclusionRadius : 1;             // 0x000C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverride_LPVDiffuseOcclusionExponent : 1;               // 0x000C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverride_LPVSpecularOcclusionExponent : 1;              // 0x000C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverride_LPVDiffuseOcclusionIntensity : 1;              // 0x000C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverride_LPVSpecularOcclusionIntensity : 1;             // 0x000C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverride_LPVSize : 1;                                   // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVSecondaryOcclusionIntensity : 1;            // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVSecondaryBounceIntensity : 1;               // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVGeometryVolumeBias : 1;                     // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVVplInjectionBias : 1;                       // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVEmissiveInjectionIntensity : 1;             // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_LPVWorldRef : 1;                               // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_IndirectLightingColor : 1;                     // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_IndirectLightingIntensity : 1;                 // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ColorGradingIntensity : 1;                     // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ColorGradingLUT : 1;                           // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldFocalDistance : 1;                 // 0x000E(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldFstop : 1;                         // 0x000E(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldDepthBlurRadius : 1;               // 0x000E(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldDepthBlurAmount : 1;               // 0x000E(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldFocalRegion : 1;                   // 0x000E(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldNearTransitionRegion : 1;          // 0x000E(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldFarTransitionRegion : 1;           // 0x000E(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldScale : 1;                         // 0x000E(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldMaxBokehSize : 1;                  // 0x000F(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldNearBlurSize : 1;                  // 0x000F(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldFarBlurSize : 1;                   // 0x000F(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldMethod : 1;                        // 0x000F(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldBokehShape : 1;                    // 0x000F(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldOcclusion : 1;                     // 0x000F(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldColorThreshold : 1;                // 0x000F(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldSizeThreshold : 1;                 // 0x000F(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DepthOfFieldSkyFocusDistance : 1;              // 0x0010(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_MotionBlurAmount : 1;                          // 0x0010(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_MotionBlurMax : 1;                             // 0x0010(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_MotionBlurPerObjectSize : 1;                   // 0x0010(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ScreenPercentage : 1;                          // 0x0010(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_AntiAliasingMethod : 1;                        // 0x0010(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ScreenSpaceReflectionIntensity : 1;            // 0x0010(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ScreenSpaceReflectionQuality : 1;              // 0x0010(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ScreenSpaceReflectionMaxRoughness : 1;         // 0x0011(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_ScreenSpaceReflectionRoughnessScale : 1;       // 0x0011(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_SkyLightIntensityScale : 1;                    // 0x0011(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_SkyLightIntensityScaleForMinSpec : 1;          // 0x0011(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_SkyLightIntensityScaleInteriorInfluence : 1;   // 0x0011(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_GlobalReflectionTint : 1;                      // 0x0011(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_InsideAmbientColourForParticlesInfluence : 1;  // 0x0011(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_InsideAmbientColourForParticles : 1;           // 0x0011(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bUseThisVolumeForLPVSettings : 1;                        // 0x0012(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_GaussianBlur : 1;                              // 0x0012(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_DisableShadowMapMethod : 1;                    // 0x0012(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_UseVolumeFogScale : 1;                         // 0x0012(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bOverride_VolumeFogScale : 1;                            // 0x0012(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_8BEJ[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WhiteTemp;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      WhiteTint;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ColorSaturation;                                         // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FVector                                             ColorContrast;                                           // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FVector                                             ColorGamma;                                              // 0x0034(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FVector                                             ColorGain;                                               // 0x0040(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FVector                                             ColorOffset;                                             // 0x004C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FLinearColor                                        FilmWhitePoint;                                          // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FLinearColor                                        FilmShadowTint;                                          // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      FilmShadowTintBlend;                                     // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FilmShadowTintAmount;                                    // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FilmSaturation;                                          // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FilmChannelMixerRed;                                     // 0x0084(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        FilmChannelMixerGreen;                                   // 0x0094(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        FilmChannelMixerBlue;                                    // 0x00A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      FilmContrast;                                            // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      FilmToeAmount;                                           // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FilmHealAmount;                                          // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FilmDynamicRange;                                        // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FilmSlope;                                               // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FilmToe;                                                 // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FilmShoulder;                                            // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FilmBlackClip;                                           // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FilmWhiteClip;                                           // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FLinearColor                                        SceneColorTint;                                          // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      SceneFringeIntensity;                                    // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      SceneFringeSaturation;                                   // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      BloomIntensity;                                          // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      BloomThreshold;                                          // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      BloomSizeScale;                                          // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      Bloom1Size;                                              // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      Bloom2Size;                                              // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      Bloom3Size;                                              // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      Bloom4Size;                                              // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      Bloom5Size;                                              // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      Bloom6Size;                                              // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FLinearColor                                        Bloom1Tint;                                              // 0x0114(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        Bloom2Tint;                                              // 0x0124(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        Bloom3Tint;                                              // 0x0134(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        Bloom4Tint;                                              // 0x0144(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        Bloom5Tint;                                              // 0x0154(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        Bloom6Tint;                                              // 0x0164(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      BloomDirtMaskIntensity;                                  // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BloomDirtMaskTint;                                       // 0x0178(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		class UTexture*                                            BloomDirtMask;                                           // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LPVIntensity;                                            // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LPVVplInjectionBias;                                     // 0x0194(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVSize;                                                 // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LPVSecondaryOcclusionIntensity;                          // 0x019C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LPVSecondaryBounceIntensity;                             // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVGeometryVolumeBias;                                   // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVEmissiveInjectionIntensity;                           // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVDirectionalOcclusionIntensity;                        // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          LPVWorldRef;                                             // 0x01B0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float                                                      LPVDirectionalOcclusionRadius;                           // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVDiffuseOcclusionExponent;                             // 0x01E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LPVSpecularOcclusionExponent;                            // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LPVDiffuseOcclusionIntensity;                            // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LPVSpecularOcclusionIntensity;                           // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FLinearColor                                        AmbientCubemapTint;                                      // 0x01F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientCubemapIntensity;                                 // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UTextureCube*                                        AmbientCubemap;                                          // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AutoExposureLowPercent;                                  // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AutoExposureHighPercent;                                 // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AutoExposureMinBrightness;                               // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      AutoExposureMaxBrightness;                               // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      AutoExposureSpeedUp;                                     // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AutoExposureSpeedDown;                                   // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AutoExposureBias;                                        // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      HistogramLogMin;                                         // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      HistogramLogMax;                                         // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LensFlareIntensity;                                      // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LensFlareTint;                                           // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      LensFlareBokehSize;                                      // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      LensFlareThreshold;                                      // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UTexture*                                            LensFlareBokehShape;                                     // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LensFlareTints[0x8];                                     // 0x0258(0x0080) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      VignetteIntensity;                                       // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      GrainJitter;                                             // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      GrainIntensity;                                          // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      AmbientOcclusionIntensity;                               // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      AmbientOcclusionStaticFraction;                          // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionRadius;                                  // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              AmbientOcclusionRadiusInWS : 1;                          // 0x02F0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_5CZI[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmbientOcclusionFadeDistance;                            // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionFadeRadius;                              // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionDistance;                                // 0x02FC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AmbientOcclusionPower;                                   // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionBias;                                    // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionQuality;                                 // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionMipBlend;                                // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionMipScale;                                // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionMipThreshold;                            // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionHemiIntensity;                           // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      AmbientOcclusionHemiPower;                               // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      AmbientOcclusionHemiRadius;                              // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      AmbientOcclusionHemiBlurTolerance;                       // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionHemiUpsampleTolerance;                   // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionHemiNoiseFilterTolerance;                // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionHemiRejectionFalloff;                    // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      AmbientOcclusionHemiBias;                                // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              AmbientOcclusionHemiMaxDepthDownsample : 1;              // 0x0338(0x0001) BIT_FIELD Edit, BlueprintVisible, Interp, NoDestructor, AdvancedDisplay
		unsigned char                                              AmbientOcclusionHemiUseNormals : 1;                      // 0x0338(0x0001) BIT_FIELD Edit, BlueprintVisible, Interp, NoDestructor, AdvancedDisplay
		unsigned char                                              AmbientOcclusionHemiCombineBeforeBlur : 1;               // 0x0338(0x0001) BIT_FIELD Edit, BlueprintVisible, Interp, NoDestructor, AdvancedDisplay
		unsigned char                                              AmbientOcclusionHemiCombineWithMultiply : 1;             // 0x0338(0x0001) BIT_FIELD Edit, BlueprintVisible, Interp, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_P547[0x3];                                   // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinOverdrawCount;                                        // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      MaxOverdrawCount;                                        // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MinOverdrawColour;                                       // 0x0344(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FLinearColor                                        MaxOverdrawColour;                                       // 0x0354(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FLinearColor                                        IndirectLightingColor;                                   // 0x0364(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      IndirectLightingIntensity;                               // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      ColorGradingIntensity;                                   // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YD9D[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            ColorGradingLUT;                                         // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDepthOfFieldMethod                                        DepthOfFieldMethod;                                      // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8KL3[0x3];                                   // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DepthOfFieldDepthBlurAmount;                             // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      DepthOfFieldDepthBlurRadius;                             // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      DepthOfFieldFstop;                                       // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      DepthOfFieldFocalDistance;                               // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      DepthOfFieldFocalRegion;                                 // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      DepthOfFieldNearTransitionRegion;                        // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      DepthOfFieldFarTransitionRegion;                         // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      DepthOfFieldScale;                                       // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      DepthOfFieldMaxBokehSize;                                // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      DepthOfFieldNearBlurSize;                                // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      DepthOfFieldFarBlurSize;                                 // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            DepthOfFieldBokehShape;                                  // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      DepthOfFieldOcclusion;                                   // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      DepthOfFieldColorThreshold;                              // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      DepthOfFieldSizeThreshold;                               // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      DepthOfFieldSkyFocusDistance;                            // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      MotionBlurAmount;                                        // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      MotionBlurMax;                                           // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      MotionBlurPerObjectSize;                                 // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      ScreenPercentage;                                        // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		EAntiAliasingMethod                                        AntiAliasingMethod;                                      // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_P6T8[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScreenSpaceReflectionIntensity;                          // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenSpaceReflectionQuality;                            // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenSpaceReflectionMaxRoughness;                       // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      SkyLightIntensityScale;                                  // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      SkyLightIntensityScaleForMinSpec;                        // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      SkyLightIntensityScaleInteriorInfluence;                 // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              bUseVolumeFogScale : 1;                                  // 0x03FC(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_L2I7[0x3];                                   // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumeFogScale;                                          // 0x0400(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        GlobalReflectionTint;                                    // 0x0404(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      InsideAmbientColourForParticlesInfluence;                // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FLinearColor                                        InsideAmbientColourForParticles;                         // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FRainPostProcessSettings                            RainSettings;                                            // 0x0428(0x00C0) Edit, BlueprintVisible
		TArray<struct FLPVCascadeSettings>                         LPVSettings;                                             // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FPlayerAmbientLightOverrideSettings                 PlayerAmbientLightOverrideSettings;                      // 0x04F8(0x0018) Edit, BlueprintVisible
		float                                                      GaussianBlurIntensity;                                   // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		EDisableShadowMapMethod                                    DisableShadowMethod;                                     // 0x0514(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_OQYL[0x3];                                   // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedBlendables                                 WeightedBlendables;                                      // 0x0518(0x0010) Edit
		TArray<class UObject*>                                     Blendables;                                              // 0x0528(0x0010) ZeroConstructor, Deprecated
		unsigned char                                              UnknownData_TMQW[0x8];                                   // 0x0538(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MinimalViewInfo
	 * Size -> 0x05A0
	 */
	struct FMinimalViewInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D6CT[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FOV;                                                     // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrthoWidth;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrthoNearClipPlane;                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      OrthoFarClipPlane;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      AspectRatio;                                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bConstrainAspectRatio : 1;                               // 0x003C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bUseFieldOfViewForLOD : 1;                               // 0x003C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_9Z4E[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECameraProjectionMode                                      ProjectionMode;                                          // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G57W[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PostProcessBlendWeight;                                  // 0x0044(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AV44[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                PostProcessSettings;                                     // 0x0050(0x0540) BlueprintVisible
		unsigned char                                              UnknownData_SS4B[0x10];                                  // 0x0590(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MovementProperties
	 * Size -> 0x0004
	 */
	struct FMovementProperties
	{
	public:
		unsigned char                                              bCanCrouch : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bCanJump : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bCanWalk : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bCanSwim : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bCanFly : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_RF7A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NavAgentProperties
	 * Size -> 0x002C (FullSize[0x0030] - InheritedSize[0x0004])
	 */
	struct FNavAgentProperties : public FMovementProperties
	{
	public:
		class FName                                                Name;                                                    // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AgentRadius;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AgentHeight;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AgentStepHeight;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NavWalkingSearchHeightScale;                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NavWalkingSearchRadiusScale;                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NavWalkingSearchRadiusScaleOffMesh;                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AgentMaxSlope;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinRegionArea;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZCAB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FindFloorResult
	 * Size -> 0x008C
	 */
	struct FFindFloorResult
	{
	public:
		unsigned char                                              bBlockingHit : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor
		unsigned char                                              bWalkableFloor : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor
		unsigned char                                              bLineTrace : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor
		unsigned char                                              UnknownData_45WJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloorDist;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LineDist;                                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHitResult                                          HitResult;                                               // 0x000C(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.NavAvoidanceMask
	 * Size -> 0x0004
	 */
	struct FNavAvoidanceMask
	{
	public:
		unsigned char                                              bGroup0 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup1 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup2 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup3 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup4 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup5 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup6 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup7 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup8 : 1;                                             // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup9 : 1;                                             // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup10 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup11 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup12 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup13 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup14 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup15 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup16 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup17 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup18 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup19 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup20 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup21 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup22 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup23 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup24 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup25 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup26 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup27 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup28 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup29 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup30 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bGroup31 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CharacterMovementComponentPreClothTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FCharacterMovementComponentPreClothTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_VM0L[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StatColorMapEntry
	 * Size -> 0x0008
	 */
	struct FStatColorMapEntry
	{
	public:
		float                                                      In;                                                      // 0x0000(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              Out;                                                     // 0x0004(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.StatColorMapping
	 * Size -> 0x0028
	 */
	struct FStatColorMapping
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010) ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash
		TArray<struct FStatColorMapEntry>                          ColorMap;                                                // 0x0010(0x0010) ZeroConstructor, Config, GlobalConfig
		unsigned char                                              DisableBlend : 1;                                        // 0x0020(0x0001) BIT_FIELD Config, GlobalConfig, NoDestructor
		unsigned char                                              UnknownData_P6HT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.GameNameRedirect
	 * Size -> 0x0020
	 */
	struct FGameNameRedirect
	{
	public:
		class FString                                              OldGameName;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              NewGameName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ClassRedirect
	 * Size -> 0x0058
	 */
	struct FClassRedirect
	{
	public:
		class FString                                              ObjectName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              OldClassName;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              NewClassName;                                            // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              OldSubobjName;                                           // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              NewSubobjName;                                           // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash
		bool                                                       InstanceOnly;                                            // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SGW8[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PluginRedirect
	 * Size -> 0x0020
	 */
	struct FPluginRedirect
	{
	public:
		class FString                                              OldPluginName;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              NewPluginName;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.StructRedirect
	 * Size -> 0x0020
	 */
	struct FStructRedirect
	{
	public:
		class FString                                              OldStructName;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              NewStructName;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DropNoteInfo
	 * Size -> 0x0028
	 */
	struct FDropNoteInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              Comment;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.RigidBodyErrorCorrection
	 * Size -> 0x001C
	 */
	struct FRigidBodyErrorCorrection
	{
	public:
		float                                                      LinearDeltaThresholdSq;                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LinearInterpAlpha;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LinearRecipFixTime;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngularDeltaThreshold;                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngularInterpAlpha;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngularRecipFixTime;                                     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BodySpeedThresholdSq;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NetDriverDefinition
	 * Size -> 0x0018
	 */
	struct FNetDriverDefinition
	{
	public:
		class FName                                                DefName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DriverClassName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DriverClassNameFallback;                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.GameClassShortName
	 * Size -> 0x0020
	 */
	struct FGameClassShortName
	{
	public:
		class FString                                              ShortName;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              GameClassName;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CustomPrimitiveData
	 * Size -> 0x0010
	 */
	struct FCustomPrimitiveData
	{
	public:
		TArray<float>                                              Data;                                                    // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.CollisionResponseContainer
	 * Size -> 0x0020
	 */
	struct FCollisionResponseContainer
	{
	public:
		ECollisionResponse                                         WorldStatic;                                             // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         WorldDynamic;                                            // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         Pawn;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         Visibility;                                              // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         Camera;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         PhysicsBody;                                             // 0x0005(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         Vehicle;                                                 // 0x0006(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         Destructible;                                            // 0x0007(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         EngineTraceChannel1;                                     // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         EngineTraceChannel2;                                     // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         EngineTraceChannel3;                                     // 0x000A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         EngineTraceChannel4;                                     // 0x000B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         EngineTraceChannel5;                                     // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         EngineTraceChannel6;                                     // 0x000D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel1;                                       // 0x000E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel2;                                       // 0x000F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel3;                                       // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel4;                                       // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel5;                                       // 0x0012(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel6;                                       // 0x0013(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel7;                                       // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel8;                                       // 0x0015(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel9;                                       // 0x0016(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel10;                                      // 0x0017(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel11;                                      // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel12;                                      // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel13;                                      // 0x001A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel14;                                      // 0x001B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel15;                                      // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel16;                                      // 0x001D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel17;                                      // 0x001E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         GameTraceChannel18;                                      // 0x001F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ResponseChannel
	 * Size -> 0x000C
	 */
	struct FResponseChannel
	{
	public:
		class FName                                                Channel;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         Response;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6ZA6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CollisionResponse
	 * Size -> 0x0030
	 */
	struct FCollisionResponse
	{
	public:
		struct FCollisionResponseContainer                         ResponseToChannels;                                      // 0x0000(0x0020) Transient
		TArray<struct FResponseChannel>                            ResponseArray;                                           // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MassPropertiesOverride
	 * Size -> 0x0024
	 */
	struct FMassPropertiesOverride
	{
	public:
		struct FVector                                             InertiaTensorOverride;                                   // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             COMTranslationOverride;                                  // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            COMRotatorOverride;                                      // 0x0018(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.WalkableSlopeOverride
	 * Size -> 0x0008
	 */
	struct FWalkableSlopeOverride
	{
	public:
		EWalkableSlopeBehavior                                     WalkableSlopeBehavior;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8W52[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkableSlopeAngle;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BodyInstance
	 * Size -> 0x0180
	 */
	struct FBodyInstance
	{
	public:
		unsigned char                                              UnknownData_WSOQ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale3D;                                                 // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_28P8[0x4];                                   // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CollisionProfileName;                                    // 0x0014(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L7KV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCollisionResponse                                  CollisionResponses;                                      // 0x0020(0x0030) Edit
		unsigned char                                              bUseCCD : 1;                                             // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay
		unsigned char                                              bNotifyRigidBodyCollision : 1;                           // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bSimulatePhysics : 1;                                    // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bOverrideMass : 1;                                       // 0x0050(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverrideMassProperties : 1;                             // 0x0050(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bEnableGravity : 1;                                      // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bAutoWeld : 1;                                           // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_CNGE : 1;                                    // 0x0050(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bStartAwake : 1;                                         // 0x0051(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay
		unsigned char                                              bGenerateWakeEvents : 1;                                 // 0x0051(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay
		unsigned char                                              bUpdateMassWhenScaleChanges : 1;                         // 0x0051(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bLockTranslation : 1;                                    // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLockRotation : 1;                                       // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLockXTranslation : 1;                                   // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLockYTranslation : 1;                                   // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLockZTranslation : 1;                                   // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLockXRotation : 1;                                      // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLockYRotation : 1;                                      // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLockZRotation : 1;                                      // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bOverrideMaxAngularVelocity : 1;                         // 0x0052(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_XUK2 : 1;                                    // 0x0052(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bUseAsyncScene : 1;                                      // 0x0052(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected
		unsigned char                                              bOverrideMaxDepenetrationVelocity : 1;                   // 0x0052(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              bOverrideWalkableSlopeOnInstance : 1;                    // 0x0052(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              UnknownData_7D8D[0x1];                                   // 0x0053(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDepenetrationVelocity;                                // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash
		float                                                      MassInKg;                                                // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMassPropertiesOverride                             MassPropertiesOverride;                                  // 0x005C(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay
		float                                                      LinearDamping;                                           // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngularDamping;                                          // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             COMNudge;                                                // 0x0088(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      MassScale;                                               // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_OOJW[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWalkableSlopeOverride                              WalkableSlopeOverride;                                   // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected
		class UPhysicalMaterial*                                   PhysMaterialOverride;                                    // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      MaxAngularVelocity;                                      // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      CustomSleepThresholdMultiplier;                          // 0x00BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      PhysicsBlendWeight;                                      // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PositionSolverIterationCount;                            // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		EDominanceGroup                                            DominanceGroup;                                          // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PVX4[0x37];                                  // 0x00C9(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   RigidActorSyncId;                                        // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint64_t                                                   RigidActorAsyncId;                                       // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    VelocitySolverIterationCount;                            // 0x0110(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_TUOJ[0x68];                                  // 0x0114(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESleepFamily                                               SleepFamily;                                             // 0x017C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		EDOFMode                                                   DOFMode;                                                 // 0x017D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionEnabled                                          CollisionEnabled;                                        // 0x017E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionChannel                                          ObjectType;                                              // 0x017F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_BMUQ[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.OverlapInfo
	 * Size -> 0x0084
	 */
	struct FOverlapInfo
	{
	public:
		unsigned char                                              UnknownData_6S1B[0x84];                                  // 0x0000(0x0084) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DebugDisplayProperty
	 * Size -> 0x0020
	 */
	struct FDebugDisplayProperty
	{
	public:
		class UObject*                                             Obj;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              WithinClass;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_7ZXL[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.UniqueNetIdRepl
	 * Size -> 0x0018
	 */
	struct FUniqueNetIdRepl
	{
	public:
		unsigned char                                              UnknownData_NAXA[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ActiveForceFeedbackEffect
	 * Size -> 0x0018
	 */
	struct FActiveForceFeedbackEffect
	{
	public:
		class UForceFeedbackEffect*                                ForceFeedbackEffect;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HG6W[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ViewTargetTransitionParams
	 * Size -> 0x0010
	 */
	struct FViewTargetTransitionParams
	{
	public:
		float                                                      BlendTime;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EViewTargetBlendFunction                                   BlendFunction;                                           // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SYTW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendExp;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bLockOutgoing : 1;                                       // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_4K0E[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LatentActionInfo
	 * Size -> 0x0018
	 */
	struct FLatentActionInfo
	{
	public:
		int32_t                                                    Linkage;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    UUID;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ExecutionFunction;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             CallbackTarget;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.LevelStreamingStatusUpdateInfo
	 * Size -> 0x0018
	 */
	struct FLevelStreamingStatusUpdateInfo
	{
	public:
		class FString                                              PackageName;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    LODIndex;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bNewShouldBeLoaded : 1;                                  // 0x0014(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bNewShouldBeVisible : 1;                                 // 0x0014(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bNewShouldBlockOnLoad : 1;                               // 0x0014(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_0NAA[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.GeomSelection
	 * Size -> 0x000C
	 */
	struct FGeomSelection
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Index;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectionIndex;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.GameModePrefix
	 * Size -> 0x0020
	 */
	struct FGameModePrefix
	{
	public:
		class FString                                              Prefix;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              GameMode;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.LightmassWorldInfoSettings
	 * Size -> 0x0044
	 */
	struct FLightmassWorldInfoSettings
	{
	public:
		float                                                      StaticLightingLevelScale;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    NumIndirectLightingBounces;                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndirectLightingQuality;                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      IndirectLightingSmoothness;                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FColor                                              EnvironmentColor;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EnvironmentIntensity;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmissiveBoost;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DiffuseBoost;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bUseAmbientOcclusion : 1;                                // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bGenerateAmbientOcclusionMaterialMask : 1;               // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_T2ML[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DirectIlluminationOcclusionFraction;                     // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndirectIlluminationOcclusionFraction;                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OcclusionExponent;                                       // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FullyOccludedSamplesFraction;                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxOcclusionDistance;                                    // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bVisualizeMaterialDiffuse : 1;                           // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              bVisualizeAmbientOcclusion : 1;                          // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_6XMO[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumeLightSamplePlacementScale;                         // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              bCompressLightmaps : 1;                                  // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_Z9IN[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ReverbSettings
	 * Size -> 0x0018
	 */
	struct FReverbSettings
	{
	public:
		unsigned char                                              bApplyReverb : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_QC6M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EReverbPreset                                              ReverbType;                                              // 0x0004(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SYRZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReverbEffect*                                       ReverbEffect;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Volume;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeTime;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.InteriorSettings
	 * Size -> 0x0024
	 */
	struct FInteriorSettings
	{
	public:
		unsigned char                                              bIsWorldSettings : 1;                                    // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_C00P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExteriorVolume;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExteriorTime;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExteriorLPF;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExteriorLPFTime;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InteriorVolume;                                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InteriorTime;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InteriorLPF;                                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InteriorLPFTime;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NetViewer
	 * Size -> 0x0028
	 */
	struct FNetViewer
	{
	public:
		class AActor*                                              InViewer;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ViewTarget;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ViewLocation;                                            // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ViewDir;                                                 // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ExternalMip
	 * Size -> 0x0028
	 */
	struct FExternalMip
	{
	public:
		uint32_t                                                   SizeX;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   SizeY;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   OffsetInFile;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   DataSizeOnDisk;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   DataSize;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   DecompressionFlags;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N37T[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DebugTextInfo
	 * Size -> 0x0060
	 */
	struct FDebugTextInfo
	{
	public:
		class AActor*                                              SrcActor;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SrcActorOffset;                                          // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SrcActorDesiredOffset;                                   // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              DebugText;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		float                                                      TimeRemaining;                                           // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Duration;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              TextColor;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              bAbsoluteLocation : 1;                                   // 0x003C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bKeepAttachedToActor : 1;                                // 0x003C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bDrawShadow : 1;                                         // 0x003C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_639A[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OrigActorLocation;                                       // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4ZLX[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               Font;                                                    // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FontScale;                                               // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_57TL[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FeatureToggledStringAssetReferenceEntry
	 * Size -> 0x0018
	 */
	struct FFeatureToggledStringAssetReferenceEntry
	{
	public:
		struct FStringAssetReference                               Asset;                                                   // 0x0000(0x0010) Edit, ZeroConstructor
		class FName                                                Feature;                                                 // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.PaintedVertex
	 * Size -> 0x0014
	 */
	struct FPaintedVertex
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FPackedNormal                                       Normal;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              Color;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.StaticMeshComponentLODInfo
	 * Size -> 0x0028
	 */
	struct FStaticMeshComponentLODInfo
	{
	public:
		unsigned char                                              UnknownData_XPW9[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPaintedVertex>                              PaintedVertices;                                         // 0x0010(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_2JTU[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LightmassMaterialInterfaceSettings
	 * Size -> 0x0014
	 */
	struct FLightmassMaterialInterfaceSettings
	{
	public:
		unsigned char                                              bCastShadowAsMasked : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_8AUT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EmissiveBoost;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DiffuseBoost;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExportResolutionScale;                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bOverrideCastShadowAsMasked : 1;                         // 0x0010(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverrideEmissiveBoost : 1;                              // 0x0010(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverrideDiffuseBoost : 1;                               // 0x0010(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverrideExportResolutionScale : 1;                      // 0x0010(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_ZBWG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MaterialInput
	 * Size -> 0x0038
	 */
	struct FMaterialInput
	{
	public:
		class UMaterialExpression*                                 Expression;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OutputIndex;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6PK6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InputName;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    Mask;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskR;                                                   // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskG;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskB;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskA;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GCC64_Padding;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ColorMaterialInput
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FColorMaterialInput : public FMaterialInput
	{
	public:
		unsigned char                                              UseConstant : 1;                                         // 0x0038(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_17CG[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              Constant;                                                // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ScalarMaterialInput
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FScalarMaterialInput : public FMaterialInput
	{
	public:
		unsigned char                                              UseConstant : 1;                                         // 0x0038(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_ZQY7[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Constant;                                                // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.VectorMaterialInput
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	struct FVectorMaterialInput : public FMaterialInput
	{
	public:
		unsigned char                                              UseConstant : 1;                                         // 0x0038(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_5LPI[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Constant;                                                // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Vector2MaterialInput
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	struct FVector2MaterialInput : public FMaterialInput
	{
	public:
		unsigned char                                              UseConstant : 1;                                         // 0x0038(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_ASG3[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConstantX;                                               // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ConstantY;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1A5J[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ExpressionInput
	 * Size -> 0x0038
	 */
	struct FExpressionInput
	{
	public:
		class UMaterialExpression*                                 Expression;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OutputIndex;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R1EE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InputName;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    Mask;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskR;                                                   // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskG;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskB;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskA;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GCC64_Padding;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.MaterialAttributesInput
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FMaterialAttributesInput : public FExpressionInput
	{	};

	/**
	 * ScriptStruct Engine.MaterialFunctionInfo
	 * Size -> 0x0018
	 */
	struct FMaterialFunctionInfo
	{
	public:
		struct FGuid                                               StateId;                                                 // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialFunction*                                   Function;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.MaterialParameterCollectionInfo
	 * Size -> 0x0018
	 */
	struct FMaterialParameterCollectionInfo
	{
	public:
		struct FGuid                                               StateId;                                                 // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialParameterCollection*                        ParameterCollection;                                     // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.EmitterPointData
	 * Size -> 0x0040
	 */
	struct FEmitterPointData
	{
	public:
		struct FVector4                                            Position;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            InheritedVelocity;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            Orientation;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Scale;                                                   // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_98MS[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ParticleSysParam
	 * Size -> 0x0050
	 */
	struct FParticleSysParam
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EParticleSysParamType                                      ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VGKG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scalar;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Scalar_Low;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Vector;                                                  // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Vector_Low;                                              // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              Color;                                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              Actor;                                                   // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  Material;                                                // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FEmitterPointData>                           EmitterPoints;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MaterialRelevance
	 * Size -> 0x000C
	 */
	struct FMaterialRelevance
	{
	public:
		unsigned char                                              bOpaque : 1;                                             // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bMasked : 1;                                             // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bDistortion : 1;                                         // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSeparateTranslucency : 1;                               // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bNormalTranslucency : 1;                                 // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bDisableDepthTest : 1;                                   // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOutputsVelocityInBasePass : 1;                          // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bUsesGlobalDistanceField : 1;                            // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_G4JB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   ShadingModelMask;                                        // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G784[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOITTranslucencyRelevance : 1;                           // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOITAfterTranslucencyRelevance : 1;                      // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bLowResTranslucencyRelevance : 1;                        // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bLowResCloudsRelevance : 1;                              // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bMaskPassRelevance : 1;                                  // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bTranslucentBeforeTranslucency : 1;                      // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bTranslucentBeforeVolumeFog : 1;                         // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bTranslucentWithDepthWrite : 1;                          // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_X9MJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InstancedStaticMeshInstanceData
	 * Size -> 0x0050
	 */
	struct FInstancedStaticMeshInstanceData
	{
	public:
		struct FMatrix                                             Transform;                                               // 0x0000(0x0040) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           LightmapUVBias;                                          // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ShadowmapUVBias;                                         // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InstancedStaticMeshMappingInfo
	 * Size -> 0x0008
	 */
	struct FInstancedStaticMeshMappingInfo
	{
	public:
		unsigned char                                              UnknownData_R54E[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FontParameterValue
	 * Size -> 0x0028
	 */
	struct FFontParameterValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFont*                                               FontValue;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FontPage;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               ExpressionGUID;                                          // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RYHO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ScalarParameterValue
	 * Size -> 0x001C
	 */
	struct FScalarParameterValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ParameterValue;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               ExpressionGUID;                                          // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TextureParameterValue
	 * Size -> 0x0020
	 */
	struct FTextureParameterValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            ParameterValue;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               ExpressionGUID;                                          // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.VectorParameterValue
	 * Size -> 0x0028
	 */
	struct FVectorParameterValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ParameterValue;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               ExpressionGUID;                                          // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
	 * Size -> 0x0084
	 */
	struct FMaterialInstanceBasePropertyOverrides
	{
	public:
		bool                                                       bOverride_OpacityMaskClipValue;                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_BlendMode;                                     // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_ShadingModel;                                  // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_DitheredLODTransition;                         // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_TwoSided;                                      // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_TessellationMode;                              // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_LowResTranslucency;                            // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_SkyLightWhenOccluded;                          // 0x0007(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_CloudShadowInfluence;                          // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_LightColorInfluence;                           // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_AmbientLightColorInfluence;                    // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_LightIntensityInfluence;                       // 0x000B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_AmbientLightIntensityInfluence;                // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_AlternativeAmbientLightColorInfluence;         // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_AlternativeAmbientLightIntensityInfluence;     // 0x000E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_EvaluateLightningAtParticleCenter;             // 0x000F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_DontRenderWhenPlayerInsideShip;                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_ObjectFadeEnabled;                             // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_ObjectFadeRate;                                // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_ObjectFadeDistanceThreshold;                   // 0x0013(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_TranslucencyDirectionalLightingIntensity;      // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_TranslucencyVolumeFogScale;                    // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_TranslucencyDistanceFog;                       // 0x0016(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_TranslucencyPass;                              // 0x0017(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_TranslucencyInReflection;                      // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BY3F[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OpacityMaskClipValue;                                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBlendMode                                                 BlendMode;                                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMaterialShadingModel                                      ShadingModel;                                            // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_II50[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TwoSided : 1;                                            // 0x0024(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              DitheredLODTransition : 1;                               // 0x0024(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_RI74[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMaterialTessellationMode                                  D3D11TessellationMode;                                   // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5284[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ForceResolution : 1;                                     // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_0OAW[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELowResTranslucencyCascade                                 ForcedResolution;                                        // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F1MF[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DisableTransition : 1;                                   // 0x0034(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_GMDS[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FirstSplitDistance;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SecondSplitDistance;                                     // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FullResInFrontMaxDistance;                               // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              FullResInFront : 1;                                      // 0x0044(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              PopPerParticle : 1;                                      // 0x0044(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_NLP9[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SkyLightWhenOccluded;                                    // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloudShadowInfluence;                                    // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightIntensityInfluence;                                 // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightColorInfluence;                                     // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AmbientLightIntensityInfluence;                          // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AmbientLightColorInfluence;                              // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlternativeAmbientLightIntensityInfluence;               // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlternativeAmbientLightColorInfluence;                   // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bEvaluateLightningAtParticleCenter : 1;                  // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bDontRenderWhenPlayerInsideShip : 1;                     // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              ObjectFadeEnabled : 1;                                   // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_6G8E[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ObjectFadeRate;                                          // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ObjectFadeDistanceThreshold;                             // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TranslucencyDirectionalLightingIntensity;                // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TranslucencyVolumeFogScale;                              // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TranslucencyDistanceFog : 1;                             // 0x007C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              TranslucencyInReflection : 1;                            // 0x007C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_76X6[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETranslucencyPass                                          TranslucencyPass;                                        // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V80Y[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ExpressionOutput
	 * Size -> 0x0028
	 */
	struct FExpressionOutput
	{
	public:
		class FString                                              OutputName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    Mask;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskR;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskG;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskB;                                                   // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaskA;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OY0Z[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EventGraphFastCallPair
	 * Size -> 0x0010
	 */
	struct FEventGraphFastCallPair
	{
	public:
		class UFunction*                                           FunctionToPatch;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EventGraphCallOffset;                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_02ZO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EdGraphPinType
	 * Size -> 0x0050
	 */
	struct FEdGraphPinType
	{
	public:
		class FString                                              PinCategory;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              PinSubCategory;                                          // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		TWeakObjectPtr<class UObject>                              PinSubCategoryObject;                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		struct FSimpleMemberReference                              PinSubCategoryMemberReference;                           // 0x0028(0x0020)
		bool                                                       bIsArray;                                                // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsReference;                                            // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsConst;                                                // 0x004A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsWeakPointer;                                          // 0x004B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XV9B[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AutomaticInstancingMeshComponentArray
	 * Size -> 0x0010
	 */
	struct FAutomaticInstancingMeshComponentArray
	{
	public:
		TArray<class UInstancedStaticMeshComponent*>               Array;                                                   // 0x0000(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.CullDistanceSizePair
	 * Size -> 0x0008
	 */
	struct FCullDistanceSizePair
	{
	public:
		float                                                      Size;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CullDistance;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NavAgentSelector
	 * Size -> 0x0004
	 */
	struct FNavAgentSelector
	{
	public:
		unsigned char                                              bSupportsAgent0 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent1 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent2 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent3 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent4 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent5 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent6 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent7 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent8 : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent9 : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent10 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent11 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent12 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent13 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent14 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSupportsAgent15 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_GCS6[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FOscillator
	 * Size -> 0x000C
	 */
	struct FFOscillator
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInitialOscillatorOffset                                   InitialOffset;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RNUY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ROscillator
	 * Size -> 0x0024
	 */
	struct FROscillator
	{
	public:
		struct FFOscillator                                        Pitch;                                                   // 0x0000(0x000C) Edit
		struct FFOscillator                                        Yaw;                                                     // 0x000C(0x000C) Edit
		struct FFOscillator                                        Roll;                                                    // 0x0018(0x000C) Edit
	};

	/**
	 * ScriptStruct Engine.VOscillator
	 * Size -> 0x0024
	 */
	struct FVOscillator
	{
	public:
		struct FFOscillator                                        X;                                                       // 0x0000(0x000C) Edit
		struct FFOscillator                                        Y;                                                       // 0x000C(0x000C) Edit
		struct FFOscillator                                        Z;                                                       // 0x0018(0x000C) Edit
	};

	/**
	 * ScriptStruct Engine.CameraCacheEntry
	 * Size -> 0x05B0
	 */
	struct FCameraCacheEntry
	{
	public:
		float                                                      TimeStamp;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A69O[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinimalViewInfo                                    POV;                                                     // 0x0010(0x05A0)
	};

	/**
	 * ScriptStruct Engine.TViewTarget
	 * Size -> 0x05C0
	 */
	struct FTViewTarget
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2G2A[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinimalViewInfo                                    POV;                                                     // 0x0010(0x05A0) Edit, BlueprintVisible
		class APlayerState*                                        PlayerState;                                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_II5O[0x8];                                   // 0x05B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.KeyHandleMap
	 * Size -> 0x0050
	 */
	struct FKeyHandleMap
	{
	public:
		unsigned char                                              UnknownData_T2QY[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.IndexedCurve
	 * Size -> 0x0058
	 */
	struct FIndexedCurve
	{
	public:
		unsigned char                                              UnknownData_14HQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKeyHandleMap                                       KeyHandlesToIndices;                                     // 0x0008(0x0050) Transient, Protected
	};

	/**
	 * ScriptStruct Engine.RichCurveKey
	 * Size -> 0x001C
	 */
	struct FRichCurveKey
	{
	public:
		ERichCurveInterpMode                                       InterpMode;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERichCurveTangentMode                                      TangentMode;                                             // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERichCurveTangentWeightMode                                TangentWeightMode;                                       // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EKKU[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Time;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArriveTangent;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArriveTangentWeight;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeaveTangent;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeaveTangentWeight;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.RichCurve
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	struct FRichCurve : public FIndexedCurve
	{
	public:
		ERichCurveExtrapolation                                    PreInfinityExtrap;                                       // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERichCurveExtrapolation                                    PostInfinityExtrap;                                      // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C9O3[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRichCurveKey>                               Keys;                                                    // 0x0060(0x0010) Edit, EditFixedSize, ZeroConstructor
		float                                                      DefaultValue;                                            // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RRA3[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.RuntimeFloatCurve
	 * Size -> 0x0080
	 */
	struct FRuntimeFloatCurve
	{
	public:
		struct FRichCurve                                          EditorCurveData;                                         // 0x0000(0x0078)
		class UCurveFloat*                                         ExternalCurve;                                           // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ForceFeedbackChannelDetails
	 * Size -> 0x0088
	 */
	struct FForceFeedbackChannelDetails
	{
	public:
		unsigned char                                              bAffectsLeftLarge : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectsLeftSmall : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectsRightLarge : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectsRightSmall : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectsLeftTrigger : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectsRightTrigger : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_PCBE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0008(0x0080) Edit
	};

	/**
	 * ScriptStruct Engine.InterpGroupActorInfo
	 * Size -> 0x0018
	 */
	struct FInterpGroupActorInfo
	{
	public:
		class FName                                                ObjectName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Actors;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.CameraCutInfo
	 * Size -> 0x0010
	 */
	struct FCameraCutInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimeStamp;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NavigationFilterArea
	 * Size -> 0x0018
	 */
	struct FNavigationFilterArea
	{
	public:
		class UClass*                                              AreaClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TravelCostOverride;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnteringCostOverride;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bIsExcluded : 1;                                         // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bOverrideTravelCost : 1;                                 // 0x0010(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverrideEnteringCost : 1;                               // 0x0010(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_IN7Y[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NavigationFilterFlags
	 * Size -> 0x0004
	 */
	struct FNavigationFilterFlags
	{
	public:
		unsigned char                                              bNavFlag0 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag1 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag2 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag3 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag4 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag5 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag6 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag7 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag8 : 1;                                           // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag9 : 1;                                           // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag10 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag11 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag12 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag13 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag14 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNavFlag15 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_HCO4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NavDataConfig
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FNavDataConfig : public FNavAgentProperties
	{
	public:
		struct FColor                                              Color;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             DefaultQueryExtent;                                      // 0x0034(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              NavigationDataClass;                                     // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FStringClassReference                               NavigationDataClassName;                                 // 0x0048(0x0010) ZeroConstructor, Config
	};

	/**
	 * ScriptStruct Engine.SupportedAreaData
	 * Size -> 0x0020
	 */
	struct FSupportedAreaData
	{
	public:
		class FString                                              AreaClassName;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    AreaID;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_045D[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaClass;                                               // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NavigationLinkBase
	 * Size -> 0x0030
	 */
	struct FNavigationLinkBase
	{
	public:
		float                                                      LeftProjectHeight;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxFallDownLength;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ENavLinkDirection                                          Direction;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0GOQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SnapRadius;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SnapHeight;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bUseSnapHeight : 1;                                      // 0x0018(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSnapToCheapestArea : 1;                                 // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_S75S[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaClass;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x0028(0x0004) Edit
		unsigned char                                              bSupportsAgent0 : 1;                                     // 0x002C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent1 : 1;                                     // 0x002C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent2 : 1;                                     // 0x002C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent3 : 1;                                     // 0x002C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent4 : 1;                                     // 0x002C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent5 : 1;                                     // 0x002C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent6 : 1;                                     // 0x002C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent7 : 1;                                     // 0x002C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent8 : 1;                                     // 0x002D(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent9 : 1;                                     // 0x002D(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent10 : 1;                                    // 0x002D(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent11 : 1;                                    // 0x002D(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent12 : 1;                                    // 0x002D(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent13 : 1;                                    // 0x002D(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent14 : 1;                                    // 0x002D(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSupportsAgent15 : 1;                                    // 0x002D(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_D8NZ[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NavigationLink
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FNavigationLink : public FNavigationLinkBase
	{
	public:
		struct FVector                                             Left;                                                    // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Right;                                                   // 0x003C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.NavigationSegmentLink
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	struct FNavigationSegmentLink : public FNavigationLinkBase
	{
	public:
		struct FVector                                             LeftStart;                                               // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LeftEnd;                                                 // 0x003C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             RightStart;                                              // 0x0048(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             RightEnd;                                                // 0x0054(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ParticleSystemLOD
	 * Size -> 0x0001
	 */
	struct FParticleSystemLOD
	{
	public:
		unsigned char                                              UnknownData_KNTX[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LODSoloTrack
	 * Size -> 0x0010
	 */
	struct FLODSoloTrack
	{
	public:
		TArray<unsigned char>                                      SoloEnableSetting;                                       // 0x0000(0x0010) ZeroConstructor, Transient
	};

	/**
	 * ScriptStruct Engine.NamedEmitterMaterial
	 * Size -> 0x0010
	 */
	struct FNamedEmitterMaterial
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.SkeletalMaterial
	 * Size -> 0x0010
	 */
	struct FSkeletalMaterial
	{
	public:
		class UMaterialInterface*                                  MaterialInterface;                                       // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableShadowCasting;                                    // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SZXS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BoneMirrorInfo
	 * Size -> 0x0008
	 */
	struct FBoneMirrorInfo
	{
	public:
		int32_t                                                    SourceIndex;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAxis                                                      BoneFlipAxis;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KFRJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TriangleSortSettings
	 * Size -> 0x000C
	 */
	struct FTriangleSortSettings
	{
	public:
		ETriangleSortOption                                        TriangleSorting;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETriangleSortAxis                                          CustomLeftRightAxis;                                     // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5FP9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CustomLeftRightBoneName;                                 // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BoneReference
	 * Size -> 0x000C
	 */
	struct FBoneReference
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DLQG[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SimplygonChannelCastingSettings
	 * Size -> 0x0010
	 */
	struct FSimplygonChannelCastingSettings
	{
	public:
		ESimplygonMaterialChannel                                  MaterialChannel;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESimplygonCasterType                                       Caster;                                                  // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bActive;                                                 // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ESimplygonColorChannels                                    ColorChannels;                                           // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BitsPerChannel;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseSRGB;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBakeVertexColors;                                       // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bFlipBackfacingNormals;                                  // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseTangentSpaceNormals;                                 // 0x000B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bFlipGreenChannel;                                       // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ERUV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SimplygonMaterialLODSettings
	 * Size -> 0x0028
	 */
	struct FSimplygonMaterialLODSettings
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EMaterialLODType                                           MaterialLODType;                                         // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseAutomaticSizes;                                      // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ESimplygonTextureResolution                                TextureWidth;                                            // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESimplygonTextureResolution                                TextureHeight;                                           // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESimplygonTextureSamplingQuality                           SamplingQuality;                                         // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IPQY[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GutterSpace;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESimplygonTextureStrech                                    TextureStrech;                                           // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bReuseExistingCharts;                                    // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9IYP[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSimplygonChannelCastingSettings>            ChannelsToCast;                                          // 0x0010(0x0010) ZeroConstructor
		bool                                                       bBakeVertexData;                                         // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBakeActorData;                                          // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowMultiMaterial;                                     // 0x0022(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPreferTwoSideMaterials;                                 // 0x0023(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CBLQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMeshOptimizationSettings
	 * Size -> 0x0070
	 */
	struct FSkeletalMeshOptimizationSettings
	{
	public:
		ESkeletalMeshOptimizationType                              ReductionMethod;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z0W4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NumOfTrianglesPercentage;                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDeviationPercentage;                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WeldingThreshold;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRecalcNormals;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TWUZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NormalsThreshold;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESkeletalMeshOptimizationImportance                        SilhouetteImportance;                                    // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESkeletalMeshOptimizationImportance                        TextureImportance;                                       // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESkeletalMeshOptimizationImportance                        ShadingImportance;                                       // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESkeletalMeshOptimizationImportance                        SkinningImportance;                                      // 0x001B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BoneReductionRatio;                                      // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxBonesPerVertex;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B6Q2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneReference>                              BonesToRemove;                                           // 0x0028(0x0010) Edit, ZeroConstructor
		int32_t                                                    BaseLODModel;                                            // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LODChainLastIndex;                                       // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bForceRebuild;                                           // 0x0040(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JQI4[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSimplygonMaterialLODSettings                       MaterialLODSettings;                                     // 0x0048(0x0028) Edit
	};

	/**
	 * ScriptStruct Engine.SimplygonRemeshingSettings
	 * Size -> 0x0050
	 */
	struct FSimplygonRemeshingSettings
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KVO3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScreenSize;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRecalculateNormals;                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C4DN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HardAngleThreshold;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MergeDistance;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseClippingPlane;                                       // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CEU6[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClippingLevel;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AxisIndex;                                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPlaneNegativeHalfspace;                                 // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseMassiveLOD;                                          // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseAggregateLOD;                                        // 0x0022(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_21SD[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSimplygonMaterialLODSettings                       MaterialLODSettings;                                     // 0x0028(0x0028) Edit
	};

	/**
	 * ScriptStruct Engine.SkeletalMeshLODInfo
	 * Size -> 0x00F0
	 */
	struct FSkeletalMeshLODInfo
	{
	public:
		float                                                      ScreenSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LODHysteresis;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            LODMaterialMap;                                          // 0x0008(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FTriangleSortSettings>                       TriangleSortSettings;                                    // 0x0018(0x0010) Edit, EditFixedSize, ZeroConstructor
		unsigned char                                              bHasBeenSimplified : 1;                                  // 0x0028(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_D108[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSkeletalMeshOptimizationSettings                   ReductionSettings;                                       // 0x0030(0x0070) Edit
		struct FSimplygonRemeshingSettings                         RemeshingSettings;                                       // 0x00A0(0x0050) Edit
	};

	/**
	 * ScriptStruct Engine.DeformablesSettings
	 * Size -> 0x0010
	 */
	struct FDeformablesSettings
	{
	public:
		float                                                      DistanceStiffness;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VolumeStiffness;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Damping;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDistance;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ClothPhysicsProperties
	 * Size -> 0x0024
	 */
	struct FClothPhysicsProperties
	{
	public:
		float                                                      BendResistance;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShearResistance;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StretchLimit;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Friction;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Damping;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Drag;                                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GravityScale;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InertiaBlend;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SelfCollisionThickness;                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ClothingAssetData
	 * Size -> 0x0040
	 */
	struct FClothingAssetData
	{
	public:
		class FName                                                AssetName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ApexFileName;                                            // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		bool                                                       bClothPropertiesChanged;                                 // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7PEC[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClothPhysicsProperties                             PhysicsProperties;                                       // 0x001C(0x0024) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SkelMeshComponentLODInfo
	 * Size -> 0x0010
	 */
	struct FSkelMeshComponentLODInfo
	{
	public:
		TArray<bool>                                               HiddenMaterials;                                         // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.ConstrainComponentPropName
	 * Size -> 0x0008
	 */
	struct FConstrainComponentPropName
	{
	public:
		class FName                                                ComponentName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ConstraintInstance
	 * Size -> 0x0160
	 */
	struct FConstraintInstance
	{
	public:
		unsigned char                                              UnknownData_1VG9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     OwnerComponent;                                          // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VONU[0xC];                                   // 0x0010(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                JointName;                                               // 0x001C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ConstraintBone1;                                         // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ConstraintBone2;                                         // 0x002C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Pos1;                                                    // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             PriAxis1;                                                // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SecAxis1;                                                // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Pos2;                                                    // 0x0058(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             PriAxis2;                                                // 0x0064(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SecAxis2;                                                // 0x0070(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              bDisableCollision : 1;                                   // 0x007C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bEnableProjection : 1;                                   // 0x007C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_MSOD[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectionLinearTolerance;                               // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectionAngularTolerance;                              // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELinearConstraintMotion                                    LinearXMotion;                                           // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELinearConstraintMotion                                    LinearYMotion;                                           // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELinearConstraintMotion                                    LinearZMotion;                                           // 0x008A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K4H4[0x1];                                   // 0x008B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearLimitSize;                                         // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bLinearLimitSoft : 1;                                    // 0x0090(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_6MYB[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearLimitStiffness;                                    // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LinearLimitDamping;                                      // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              bLinearBreakable : 1;                                    // 0x009C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_SIJW[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearBreakThreshold;                                    // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		EAngularConstraintMotion                                   AngularSwing1Motion;                                     // 0x00A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAngularConstraintMotion                                   AngularTwistMotion;                                      // 0x00A5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAngularConstraintMotion                                   AngularSwing2Motion;                                     // 0x00A6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_010U[0x1];                                   // 0x00A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bSwingLimitSoft : 1;                                     // 0x00A8(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              bTwistLimitSoft : 1;                                     // 0x00A8(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_GZDP[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Swing1LimitAngle;                                        // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TwistLimitAngle;                                         // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Swing2LimitAngle;                                        // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SwingLimitStiffness;                                     // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      SwingLimitDamping;                                       // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      TwistLimitStiffness;                                     // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      TwistLimitDamping;                                       // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FRotator                                            AngularRotationOffset;                                   // 0x00C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              bAngularBreakable : 1;                                   // 0x00D4(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_EO49[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularBreakThreshold;                                   // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              bLinearXPositionDrive : 1;                               // 0x00DC(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLinearXVelocityDrive : 1;                               // 0x00DC(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLinearYPositionDrive : 1;                               // 0x00DC(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLinearYVelocityDrive : 1;                               // 0x00DC(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLinearZPositionDrive : 1;                               // 0x00DC(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLinearZVelocityDrive : 1;                               // 0x00DC(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLinearPositionDrive : 1;                                // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bLinearVelocityDrive : 1;                                // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              UnknownData_0SVR[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearPositionTarget;                                    // 0x00E0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LinearVelocityTarget;                                    // 0x00EC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LinearDriveSpring;                                       // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LinearDriveDamping;                                      // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LinearDriveForceLimit;                                   // 0x0100(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bSwingPositionDrive : 1;                                 // 0x0104(0x0001) BIT_FIELD Deprecated, NoDestructor
		unsigned char                                              bSwingVelocityDrive : 1;                                 // 0x0104(0x0001) BIT_FIELD Deprecated, NoDestructor
		unsigned char                                              bTwistPositionDrive : 1;                                 // 0x0104(0x0001) BIT_FIELD Deprecated, NoDestructor
		unsigned char                                              bTwistVelocityDrive : 1;                                 // 0x0104(0x0001) BIT_FIELD Deprecated, NoDestructor
		unsigned char                                              bAngularSlerpDrive : 1;                                  // 0x0104(0x0001) BIT_FIELD Deprecated, NoDestructor
		unsigned char                                              bAngularOrientationDrive : 1;                            // 0x0104(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bEnableSwingDrive : 1;                                   // 0x0104(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bEnableTwistDrive : 1;                                   // 0x0104(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bAngularVelocityDrive : 1;                               // 0x0105(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              UnknownData_WU7J[0xA];                                   // 0x0106(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               AngularPositionTarget;                                   // 0x0110(0x0010) Deprecated, IsPlainOldData, NoDestructor
		EAngularDriveMode                                          AngularDriveMode;                                        // 0x0120(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z7LX[0x3];                                   // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            AngularOrientationTarget;                                // 0x0124(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             AngularVelocityTarget;                                   // 0x0130(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AngularDriveSpring;                                      // 0x013C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngularDriveDamping;                                     // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngularDriveForceLimit;                                  // 0x0144(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SMCU[0x18];                                  // 0x0148(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BoneNode
	 * Size -> 0x0001
	 */
	struct FBoneNode
	{
	public:
		EBoneTranslationRetargetingMode                            TranslationRetargetingMode;                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.SkeletonToMeshLinkup
	 * Size -> 0x0020
	 */
	struct FSkeletonToMeshLinkup
	{
	public:
		TArray<int32_t>                                            SkeletonToMeshTable;                                     // 0x0000(0x0010) ZeroConstructor
		TArray<int32_t>                                            MeshToSkeletonTable;                                     // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.SmartNameContainer
	 * Size -> 0x0050
	 */
	struct FSmartNameContainer
	{
	public:
		unsigned char                                              UnknownData_5HL9[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimSlotGroup
	 * Size -> 0x0018
	 */
	struct FAnimSlotGroup
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        SlotNames;                                               // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.SingleAnimationPlayData
	 * Size -> 0x0020
	 */
	struct FSingleAnimationPlayData
	{
	public:
		class UAnimationAsset*                                     AnimToPlay;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVertexAnimation*                                    VertexAnimToPlay;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bSavedLooping : 1;                                       // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bSavedPlaying : 1;                                       // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_W7EC[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SavedPosition;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SavedPlayRate;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_LLWI[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpControlPoint
	 * Size -> 0x001C
	 */
	struct FInterpControlPoint
	{
	public:
		struct FVector                                             PositionControlPoint;                                    // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPositionIsRelative;                                     // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MZ98[0xF];                                   // 0x000D(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimCurveBase
	 * Size -> 0x0018
	 */
	struct FAnimCurveBase
	{
	public:
		unsigned char                                              UnknownData_DK5C[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LastObservedName;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O7S3[0x4];                                   // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurveTypeFlags;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.FloatCurve
	 * Size -> 0x0078 (FullSize[0x0090] - InheritedSize[0x0018])
	 */
	struct FFloatCurve : public FAnimCurveBase
	{
	public:
		struct FRichCurve                                          FloatCurve;                                              // 0x0018(0x0078)
	};

	/**
	 * ScriptStruct Engine.RawCurveTracks
	 * Size -> 0x0010
	 */
	struct FRawCurveTracks
	{
	public:
		TArray<struct FFloatCurve>                                 FloatCurves;                                             // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.CompositeSection
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FCompositeSection : public FAnimLinkableElement
	{
	public:
		class FName                                                SectionName;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartTime;                                               // 0x0038(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NextSectionName;                                         // 0x003C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A8WZ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimMetaData*>                               MetaData;                                                // 0x0048(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.AnimSegment
	 * Size -> 0x0020
	 */
	struct FAnimSegment
	{
	public:
		class UAnimSequenceBase*                                   AnimReference;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartPos;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimStartTime;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimEndTime;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimPlayRate;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LoopingCount;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3H71[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimTrack
	 * Size -> 0x0010
	 */
	struct FAnimTrack
	{
	public:
		TArray<struct FAnimSegment>                                AnimSegments;                                            // 0x0000(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.SlotAnimationTrack
	 * Size -> 0x0018
	 */
	struct FSlotAnimationTrack
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnimTrack                                          AnimTrack;                                               // 0x0008(0x0010) Edit
	};

	/**
	 * ScriptStruct Engine.BranchingPoint
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FBranchingPoint : public FAnimLinkableElement
	{
	public:
		class FName                                                EventName;                                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DisplayTime;                                             // 0x0038(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TriggerTimeOffset;                                       // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BranchingPointMarker
	 * Size -> 0x000C
	 */
	struct FBranchingPointMarker
	{
	public:
		int32_t                                                    NotifyIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TriggerTime;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimNotifyEventType                                       NotifyEventType;                                         // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JOWM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AtmospherePrecomputeParameters
	 * Size -> 0x002C
	 */
	struct FAtmospherePrecomputeParameters
	{
	public:
		float                                                      DensityHeight;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DecayHeight;                                             // 0x0004(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxScatteringOrder;                                      // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TransmittanceTexWidth;                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TransmittanceTexHeight;                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IrradianceTexWidth;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IrradianceTexHeight;                                     // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InscatterAltitudeSampleNum;                              // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InscatterMuNum;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InscatterMuSNum;                                         // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InscatterNuNum;                                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AttenuationSettings
	 * Size -> 0x00C0
	 */
	struct FAttenuationSettings
	{
	public:
		unsigned char                                              bAttenuate : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bSpatialize : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bAttenuateWithLPF : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_8T2L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESoundDistanceModel                                        DistanceAlgorithm;                                       // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5V4M[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  CustomAttenuationCurve;                                  // 0x0008(0x0080) Edit, BlueprintVisible
		ESoundDistanceCalc                                         DistanceType;                                            // 0x0088(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAttenuationShape                                          AttenuationShape;                                        // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MUU8[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      dBAttenuationAtMax;                                      // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OmniRadius;                                              // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESoundSpatializationAlgorithm                              SpatializationAlgorithm;                                 // 0x0094(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VE0D[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadiusMin;                                               // 0x0098(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadiusMax;                                               // 0x009C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             AttenuationShapeExtents;                                 // 0x00A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ConeOffset;                                              // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FalloffDistance;                                         // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LPFRadiusMin;                                            // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LPFRadiusMax;                                            // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UOS7[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AudioComponentParam
	 * Size -> 0x0020
	 */
	struct FAudioComponentParam
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FloatParam;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BoolParam;                                               // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HCWC[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntParam;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ENSC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundWave*                                          SoundWaveParam;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.LightmassLightSettings
	 * Size -> 0x000C
	 */
	struct FLightmassLightSettings
	{
	public:
		float                                                      IndirectLightingSaturation;                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShadowExponent;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseAreaShadowsForStationaryLight;                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7YET[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LightmassDirectionalLightSettings
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
	{
	public:
		float                                                      LightSourceAngle;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.LightmassPointLightSettings
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FLightmassPointLightSettings : public FLightmassLightSettings
	{	};

	/**
	 * ScriptStruct Engine.NavGraphNode
	 * Size -> 0x0018
	 */
	struct FNavGraphNode
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T967[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FFTWaterComponentWaveParticleType
	 * Size -> 0x0038
	 */
	struct FFFTWaterComponentWaveParticleType
	{
	public:
		struct FVector2D                                           SpawnRadiusRange;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           FoamRange;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           HeightRange;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           AngleRange;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           CalmWaterDampeningFactorRange;                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Density;                                                 // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A4C3[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleComputeShaderData*                          ParticleComputeShaderData;                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.FFTWaterComponentIntersectParticleType
	 * Size -> 0x0058
	 */
	struct FFFTWaterComponentIntersectParticleType
	{
	public:
		struct FVector2D                                           VelocityRange;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           FoamRange;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           HeightRange;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ParticleWaveVelocityRange;                               // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ParticleWaveAbsoluteSpeedDifferenceRange;                // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Density;                                                 // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VolumeHorizontalVelocityWeight;                          // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizontalDirectionFromVolumeWeight;                     // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizontalRandomVelocityWeight;                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VolumeVerticalVelocityWeight;                            // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VerticalRandomVelocityWeight;                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterVelocityWeight;                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VelocityScaling;                                         // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnderwaterParticles : 1;                                 // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_04PN[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleComputeShaderData*                          ParticleComputeShaderData;                               // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.FFTWaterComponentParticleParams
	 * Size -> 0x0248
	 */
	struct FFFTWaterComponentParticleParams
	{
	public:
		int32_t                                                    MaxParticlesPerFrame;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N9BA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFFTWaterComponentWaveParticleType                  WaveParticles[0x4];                                      // 0x0008(0x00E0) Edit
		struct FFFTWaterComponentIntersectParticleType             IntersectionParticles[0x4];                              // 0x00E8(0x0160) Edit
	};

	/**
	 * ScriptStruct Engine.FFTWaterComponentParams
	 * Size -> 0x0310
	 */
	struct FFFTWaterComponentParams
	{
	public:
		struct FLinearColor                                        AmbientColour;                                           // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        WaterColour;                                             // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ShallowWaterColour;                                      // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        BackLitColour;                                           // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FoamColour;                                              // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FoamHighlightColour;                                     // 0x0050(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FresnelPower;                                            // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpecularBrightness;                                      // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoamBrightness;                                          // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReflectionBrightness;                                    // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoamFadeStart;                                           // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoamFadeEnd;                                             // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DEBUG_Wireframe : 1;                                     // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_Y2WJ[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Size;                                                    // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WindSpeed;                                               // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WindSpeedInEditor;                                       // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CarrierWaveAmplitude;                                    // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CarrierWaveWaveLength;                                   // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CarrierWavePropagationSpeed;                             // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizonFadeDistance;                                     // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizonDarkenStart;                                      // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizonDarkenRange;                                      // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloudShadowDarkenStart;                                  // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloudShadowDarkenRange;                                  // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CausticsDepth;                                           // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JKUX[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            FoamColourTex;                                           // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFFTWaterComponentParticleParams                    ParticleParams;                                          // 0x00B8(0x0248) Edit
		float                                                      ExtendedPlaneSize;                                       // 0x0300(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExtendedPlaneFadeDistance;                               // 0x0304(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           PositionOffset;                                          // 0x0308(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MurkyRegion
	 * Size -> 0x0020
	 */
	struct FMurkyRegion
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZPOX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InnerRadius;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OuterRadius;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Density;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSuperHeatedWater;                                      // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6LVN[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MaterialSpriteElement
	 * Size -> 0x0028
	 */
	struct FMaterialSpriteElement
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DistanceToOpacityCurve;                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bSizeIsInScreenSpace : 1;                                // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_TEL8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseSizeX;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseSizeY;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UNWX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DistanceToSizeCurve;                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CollisionResponseTemplate
	 * Size -> 0x0060
	 */
	struct FCollisionResponseTemplate
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionEnabled                                          CollisionEnabled;                                        // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YN2J[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ObjectTypeName;                                          // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MOQN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FResponseChannel>                            CustomResponses;                                         // 0x0018(0x0010) ZeroConstructor
		class FString                                              HelpMessage;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash
		bool                                                       bCanModify;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W13O[0x27];                                  // 0x0039(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CustomChannelSetup
	 * Size -> 0x0010
	 */
	struct FCustomChannelSetup
	{
	public:
		ECollisionChannel                                          Channel;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q0Q4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         DefaultResponse;                                         // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTraceType;                                              // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bStaticObject;                                           // 0x000E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ABBH[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CustomProfile
	 * Size -> 0x0018
	 */
	struct FCustomProfile
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FResponseChannel>                            CustomResponses;                                         // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Redirector
	 * Size -> 0x0010
	 */
	struct FRedirector
	{
	public:
		class FName                                                OldName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NewName;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.MergedCollisionComponentStaticMeshInstanceData
	 * Size -> 0x0040
	 */
	struct FMergedCollisionComponentStaticMeshInstanceData
	{
	public:
		struct FTransform                                          RelativeTransform;                                       // 0x0000(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor
		class UStaticMesh*                                         StaticMesh;                                              // 0x0030(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OwningActorCrc32;                                        // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RTWN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FractureEffect
	 * Size -> 0x0010
	 */
	struct FFractureEffect
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Sound;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NameIndexPair
	 * Size -> 0x000C
	 */
	struct FNameIndexPair
	{
	public:
		unsigned char                                              UnknownData_L1FS[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FlatWaterMeshTextureOverride
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FFlatWaterMeshTextureOverride : public FNameIndexPair
	{
	public:
		unsigned char                                              UnknownData_3QGC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            Texture;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.InstancedCoverageMeshLOD
	 * Size -> 0x0008
	 */
	struct FInstancedCoverageMeshLOD
	{
	public:
		float                                                      LODReduction;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceToLOD;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.SplineMeshParams
	 * Size -> 0x0058
	 */
	struct FSplineMeshParams
	{
	public:
		struct FVector                                             StartPos;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             StartTangent;                                            // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           StartScale;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      StartRoll;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FVector2D                                           StartOffset;                                             // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FVector                                             EndPos;                                                  // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             EndTangent;                                              // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           EndScale;                                                // 0x0044(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      EndRoll;                                                 // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FVector2D                                           EndOffset;                                               // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
	};

	/**
	 * ScriptStruct Engine.EngineShowFlagsSetting
	 * Size -> 0x0018
	 */
	struct FEngineShowFlagsSetting
	{
	public:
		class FString                                              ShowFlagName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       Enabled;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BW6Y[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TimelineEventEntry
	 * Size -> 0x0014
	 */
	struct FTimelineEventEntry
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptDelegate                                      EventFunc;                                               // 0x0004(0x0010) ZeroConstructor, InstancedReference, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TimelineVectorTrack
	 * Size -> 0x0030
	 */
	struct FTimelineVectorTrack
	{
	public:
		class UCurveVector*                                        VectorCurve;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptDelegate                                      InterpFunc;                                              // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		class FName                                                VectorPropertyName;                                      // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStructProperty*                                     VectorProperty;                                          // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_68UD[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TimelineFloatTrack
	 * Size -> 0x0030
	 */
	struct FTimelineFloatTrack
	{
	public:
		class UCurveFloat*                                         FloatCurve;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptDelegate                                      InterpFunc;                                              // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		class FName                                                FloatPropertyName;                                       // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFloatProperty*                                      FloatProperty;                                           // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_96HP[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TimelineLinearColorTrack
	 * Size -> 0x0030
	 */
	struct FTimelineLinearColorTrack
	{
	public:
		class UCurveLinearColor*                                   LinearColorCurve;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptDelegate                                      InterpFunc;                                              // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		class FName                                                LinearColorPropertyName;                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStructProperty*                                     LinearColorProperty;                                     // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FS8W[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Timeline
	 * Size -> 0x0098
	 */
	struct FTimeline
	{
	public:
		ETimelineLengthMode                                        LengthMode;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MRFC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Length;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bLooping : 1;                                            // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bReversePlayback : 1;                                    // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bPlaying : 1;                                            // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_WYT5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Position;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9CP3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTimelineEventEntry>                         Events;                                                  // 0x0018(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference
		TArray<struct FTimelineVectorTrack>                        InterpVectors;                                           // 0x0028(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference
		TArray<struct FTimelineFloatTrack>                         InterpFloats;                                            // 0x0038(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference
		TArray<struct FTimelineLinearColorTrack>                   InterpLinearColors;                                      // 0x0048(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference
		class FScriptDelegate                                      TimelinePostUpdateFunc;                                  // 0x0058(0x0010) ZeroConstructor, InstancedReference, RepSkip, NoDestructor
		class FScriptDelegate                                      TimelineFinishedFunc;                                    // 0x0068(0x0010) ZeroConstructor, InstancedReference, RepSkip, NoDestructor
		unsigned char                                              UnknownData_U3W5[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UObject>                              PropertySetObject;                                       // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper
		class FName                                                DirectionPropertyName;                                   // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UByteProperty*                                       DirectionProperty;                                       // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.TrackToSkeletonMap
	 * Size -> 0x0004
	 */
	struct FTrackToSkeletonMap
	{
	public:
		int32_t                                                    BoneTreeIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.TranslationTrack
	 * Size -> 0x0020
	 */
	struct FTranslationTrack
	{
	public:
		TArray<struct FVector>                                     PosKeys;                                                 // 0x0000(0x0010) ZeroConstructor
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.RotationTrack
	 * Size -> 0x0020
	 */
	struct FRotationTrack
	{
	public:
		TArray<struct FQuat>                                       RotKeys;                                                 // 0x0000(0x0010) ZeroConstructor
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.ScaleTrack
	 * Size -> 0x0020
	 */
	struct FScaleTrack
	{
	public:
		TArray<struct FVector>                                     ScaleKeys;                                               // 0x0000(0x0010) ZeroConstructor
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.CompressedOffsetData
	 * Size -> 0x0018
	 */
	struct FCompressedOffsetData
	{
	public:
		TArray<int32_t>                                            OffsetData;                                              // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    StripSize;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VD3N[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BlendParameter
	 * Size -> 0x0020
	 */
	struct FBlendParameter
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		float                                                      Min;                                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Max;                                                     // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GridNum;                                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O7KX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpolationParameter
	 * Size -> 0x0008
	 */
	struct FInterpolationParameter
	{
	public:
		float                                                      InterpolationTime;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFilterInterpolationType                                   InterpolationType;                                       // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3PKF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PerBoneInterpolation
	 * Size -> 0x0010
	 */
	struct FPerBoneInterpolation
	{
	public:
		struct FBoneReference                                      BoneReference;                                           // 0x0000(0x000C) Edit
		float                                                      InterpolationSpeedPerSec;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BlendSample
	 * Size -> 0x0018
	 */
	struct FBlendSample
	{
	public:
		class UAnimSequence*                                       Animation;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SampleValue;                                             // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z5FL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EditorElement
	 * Size -> 0x0018
	 */
	struct FEditorElement
	{
	public:
		int32_t                                                    Indices[0x3];                                            // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weights[0x3];                                            // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BlendSampleData
	 * Size -> 0x0020
	 */
	struct FBlendSampleData
	{
	public:
		int32_t                                                    SampleDataIndex;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalWeight;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0CXP[0x14];                                  // 0x000C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BlendFilter
	 * Size -> 0x0090
	 */
	struct FBlendFilter
	{
	public:
		unsigned char                                              UnknownData_TABJ[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimSetMeshLinkup
	 * Size -> 0x0010
	 */
	struct FAnimSetMeshLinkup
	{
	public:
		TArray<int32_t>                                            BoneToTrackTable;                                        // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.FilePath
	 * Size -> 0x0010
	 */
	struct FFilePath
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.EditorMapPerformanceTestDefinition
	 * Size -> 0x0018
	 */
	struct FEditorMapPerformanceTestDefinition
	{
	public:
		struct FFilePath                                           PerformanceTestmap;                                      // 0x0000(0x0010) Edit, Config
		int32_t                                                    TestTimer;                                               // 0x0010(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2FZ0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ImportFactorySettingValues
	 * Size -> 0x0020
	 */
	struct FImportFactorySettingValues
	{
	public:
		class FString                                              SettingName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.EditorImportWorkflowDefinition
	 * Size -> 0x0020
	 */
	struct FEditorImportWorkflowDefinition
	{
	public:
		struct FFilePath                                           ImportFilePath;                                          // 0x0000(0x0010) Edit, Config
		TArray<struct FImportFactorySettingValues>                 FactorySettings;                                         // 0x0010(0x0010) Edit, ZeroConstructor, Config
	};

	/**
	 * ScriptStruct Engine.BuildPromotionImportWorkflowSettings
	 * Size -> 0x0150
	 */
	struct FBuildPromotionImportWorkflowSettings
	{
	public:
		struct FEditorImportWorkflowDefinition                     Diffuse;                                                 // 0x0000(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     Normal;                                                  // 0x0020(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     StaticMesh;                                              // 0x0040(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     ReimportStaticMesh;                                      // 0x0060(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     BlendShapeMesh;                                          // 0x0080(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     MorphMesh;                                               // 0x00A0(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     SkeletalMesh;                                            // 0x00C0(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     Animation;                                               // 0x00E0(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     Sound;                                                   // 0x0100(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     SurroundSound;                                           // 0x0120(0x0020) Edit, Config
		TArray<struct FEditorImportWorkflowDefinition>             OtherAssetsToImport;                                     // 0x0140(0x0010) Edit, ZeroConstructor, Config
	};

	/**
	 * ScriptStruct Engine.BuildPromotionOpenAssetSettings
	 * Size -> 0x0060
	 */
	struct FBuildPromotionOpenAssetSettings
	{
	public:
		struct FFilePath                                           BlueprintAsset;                                          // 0x0000(0x0010) Edit, Config
		struct FFilePath                                           MaterialAsset;                                           // 0x0010(0x0010) Edit, Config
		struct FFilePath                                           ParticleSystemAsset;                                     // 0x0020(0x0010) Edit, Config
		struct FFilePath                                           SkeletalMeshAsset;                                       // 0x0030(0x0010) Edit, Config
		struct FFilePath                                           StaticMeshAsset;                                         // 0x0040(0x0010) Edit, Config
		struct FFilePath                                           TextureAsset;                                            // 0x0050(0x0010) Edit, Config
	};

	/**
	 * ScriptStruct Engine.BuildPromotionBlueprintSettings
	 * Size -> 0x0020
	 */
	struct FBuildPromotionBlueprintSettings
	{
	public:
		struct FFilePath                                           FirstMeshPath;                                           // 0x0000(0x0010) Edit
		struct FFilePath                                           SecondMeshPath;                                          // 0x0010(0x0010) Edit
	};

	/**
	 * ScriptStruct Engine.DirectoryPath
	 * Size -> 0x0010
	 */
	struct FDirectoryPath
	{
	public:
		class FString                                              path;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BuildPromotionNewProjectSettings
	 * Size -> 0x0020
	 */
	struct FBuildPromotionNewProjectSettings
	{
	public:
		struct FDirectoryPath                                      NewProjectFolderOverride;                                // 0x0000(0x0010) Edit
		class FString                                              NewProjectNameOverride;                                  // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BuildPromotionTestSettings
	 * Size -> 0x0210
	 */
	struct FBuildPromotionTestSettings
	{
	public:
		struct FFilePath                                           DefaultStaticMeshAsset;                                  // 0x0000(0x0010) Edit
		struct FBuildPromotionImportWorkflowSettings               ImportWorkflow;                                          // 0x0010(0x0150) Edit
		struct FBuildPromotionOpenAssetSettings                    OpenAssets;                                              // 0x0160(0x0060) Edit
		struct FBuildPromotionBlueprintSettings                    BlueprintSettings;                                       // 0x01C0(0x0020) Edit
		struct FBuildPromotionNewProjectSettings                   NewProjectSettings;                                      // 0x01E0(0x0020) Edit
		struct FFilePath                                           SourceControlMaterial;                                   // 0x0200(0x0010) Edit
	};

	/**
	 * ScriptStruct Engine.MaterialEditorPromotionSettings
	 * Size -> 0x0030
	 */
	struct FMaterialEditorPromotionSettings
	{
	public:
		struct FFilePath                                           DefaultMaterialAsset;                                    // 0x0000(0x0010) Edit
		struct FFilePath                                           DefaultDiffuseTexture;                                   // 0x0010(0x0010) Edit
		struct FFilePath                                           DefaultNormalTexture;                                    // 0x0020(0x0010) Edit
	};

	/**
	 * ScriptStruct Engine.ParticleEditorPromotionSettings
	 * Size -> 0x0010
	 */
	struct FParticleEditorPromotionSettings
	{
	public:
		struct FFilePath                                           DefaultParticleAsset;                                    // 0x0000(0x0010) Edit
	};

	/**
	 * ScriptStruct Engine.OpenTestAsset
	 * Size -> 0x0018
	 */
	struct FOpenTestAsset
	{
	public:
		struct FFilePath                                           AssetToOpen;                                             // 0x0000(0x0010) Edit
		bool                                                       bSkipTestWhenUnAttended;                                 // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OMIB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ExternalToolDefinition
	 * Size -> 0x0060
	 */
	struct FExternalToolDefinition
	{
	public:
		class FString                                              ToolName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		struct FFilePath                                           ExecutablePath;                                          // 0x0010(0x0010) Edit, Config
		class FString                                              CommandLineOptions;                                      // 0x0020(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		struct FDirectoryPath                                      WorkingDirectory;                                        // 0x0030(0x0010) Edit, Config
		class FString                                              ScriptExtension;                                         // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		struct FDirectoryPath                                      ScriptDirectory;                                         // 0x0050(0x0010) Edit, Config
	};

	/**
	 * ScriptStruct Engine.EditorImportExportTestDefinition
	 * Size -> 0x0038
	 */
	struct FEditorImportExportTestDefinition
	{
	public:
		struct FFilePath                                           ImportFilePath;                                          // 0x0000(0x0010) Edit, Config
		class FString                                              ExportFileExtension;                                     // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		bool                                                       bSkipExport;                                             // 0x0020(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RSPN[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FImportFactorySettingValues>                 FactorySettings;                                         // 0x0028(0x0010) Edit, ZeroConstructor, Config
	};

	/**
	 * ScriptStruct Engine.LaunchOnTestSettings
	 * Size -> 0x0020
	 */
	struct FLaunchOnTestSettings
	{
	public:
		struct FFilePath                                           LaunchOnTestmap;                                         // 0x0000(0x0010) Edit, Config
		class FString                                              DeviceID;                                                // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NavAvoidanceData
	 * Size -> 0x003C
	 */
	struct FNavAvoidanceData
	{
	public:
		unsigned char                                              UnknownData_UF5C[0x3C];                                  // 0x0000(0x003C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimGroupInfo
	 * Size -> 0x0018
	 */
	struct FAnimGroupInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TableRowBase
	 * Size -> 0x0000
	 */
	struct FTableRowBase
	{	};

	/**
	 * ScriptStruct Engine.FeatureFlag
	 * Size -> 0x0008
	 */
	struct FFeatureFlag
	{
	public:
		class FName                                                FeatureName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DialogueContext
	 * Size -> 0x0018
	 */
	struct FDialogueContext
	{
	public:
		class UDialogueVoice*                                      Speaker;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UDialogueVoice*>                              Targets;                                                 // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.GenericStruct
	 * Size -> 0x0004
	 */
	struct FGenericStruct
	{
	public:
		int32_t                                                    Data;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CollisionProfileName
	 * Size -> 0x0008
	 */
	struct FCollisionProfileName
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.TimerHandle
	 * Size -> 0x0004
	 */
	struct FTimerHandle
	{
	public:
		unsigned char                                              UnknownData_CS7I[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DebugFloatHistory
	 * Size -> 0x0020
	 */
	struct FDebugFloatHistory
	{
	public:
		TArray<float>                                              Samples;                                                 // 0x0000(0x0010) ZeroConstructor, Transient
		float                                                      MaxSamples;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinValue;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxValue;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAutoAdjustMinMax;                                       // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D5DD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FormatTextArgument
	 * Size -> 0x0070
	 */
	struct FFormatTextArgument
	{
	public:
		class FText                                                ArgumentName;                                            // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnTemplate
		unsigned char                                              UnknownData_BGK1[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                TextValue;                                               // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnTemplate
		unsigned char                                              UnknownData_HRIR[0x20];                                  // 0x0050(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Engine.BakedStateExitTransition
	 * Size -> 0x0020
	 */
	struct FBakedStateExitTransition
	{
	public:
		int32_t                                                    CanTakeDelegateIndex;                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CustomResultNodeIndex;                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TransitionIndex;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDesiredTransitionReturnValue;                           // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAutomaticRemainingTimeRule;                             // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_29I4[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            PoseEvaluatorLinks;                                      // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.BakedAnimationState
	 * Size -> 0x0050
	 */
	struct FBakedAnimationState
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PathedStateName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBakedStateExitTransition>                   Transitions;                                             // 0x0010(0x0010) ZeroConstructor
		int32_t                                                    StateRootNodeIndex;                                      // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StartNotify;                                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EndNotify;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FullyBlendedNotify;                                      // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsAConduit;                                             // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A1RJ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EntryRuleNodeIndex;                                      // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            PlayerNodeIndices;                                       // 0x0038(0x0010) ZeroConstructor
		bool                                                       CanBeReEntered;                                          // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SC3I[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationStateBase
	 * Size -> 0x0008
	 */
	struct FAnimationStateBase
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AnimationTransitionBetweenStates
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAnimationTransitionBetweenStates : public FAnimationStateBase
	{
	public:
		int32_t                                                    PreviousState;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NextState;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrossfadeDuration;                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StartNotify;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EndNotify;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InterruptNotify;                                         // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAlphaBlendOption                                          BlendMode;                                               // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8ZSB[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomCurve;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETransitionLogicType                                       LogicType;                                               // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FR49[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BakedAnimationStateMachine
	 * Size -> 0x0030
	 */
	struct FBakedAnimationStateMachine
	{
	public:
		class FName                                                MachineName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InitialState;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IYZJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBakedAnimationState>                        States;                                                  // 0x0010(0x0010) ZeroConstructor
		TArray<struct FAnimationTransitionBetweenStates>           Transitions;                                             // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.KShapeElem
	 * Size -> 0x0020
	 */
	struct FKShapeElem
	{
	public:
		unsigned char                                              UnknownData_4RKK[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.KSphereElem
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FKSphereElem : public FKShapeElem
	{
	public:
		struct FVector                                             Center;                                                  // 0x0020(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x002C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.KBoxElem
	 * Size -> 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
	 */
	struct FKBoxElem : public FKShapeElem
	{
	public:
		struct FVector                                             Center;                                                  // 0x0020(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1MYY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Orientation;                                             // 0x0030(0x0010) Edit, EditConst, IsPlainOldData, NoDestructor
		float                                                      X;                                                       // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Y;                                                       // 0x0044(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Z;                                                       // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5JD1[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.KSphylElem
	 * Size -> 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
	 */
	struct FKSphylElem : public FKShapeElem
	{
	public:
		struct FVector                                             Center;                                                  // 0x0020(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_98K0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Orientation;                                             // 0x0030(0x0010) Edit, EditConst, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Length;                                                  // 0x0044(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ML3J[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.KConvexElem
	 * Size -> 0x0070 (FullSize[0x0090] - InheritedSize[0x0020])
	 */
	struct FKConvexElem : public FKShapeElem
	{
	public:
		TArray<struct FVector>                                     VertexData;                                              // 0x0020(0x0010) ZeroConstructor
		struct FBox                                                ElemBox;                                                 // 0x0030(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZAI5[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0050(0x0030) IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AF02[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.KAggregateGeom
	 * Size -> 0x0048
	 */
	struct FKAggregateGeom
	{
	public:
		TArray<struct FKSphereElem>                                SphereElems;                                             // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FKBoxElem>                                   BoxElems;                                                // 0x0010(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FKSphylElem>                                 SphylElems;                                              // 0x0020(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FKConvexElem>                                ConvexElems;                                             // 0x0030(0x0010) Edit, EditFixedSize, ZeroConstructor
		unsigned char                                              UnknownData_J9ZV[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CircleElement2D
	 * Size -> 0x000C
	 */
	struct FCircleElement2D
	{
	public:
		struct FVector2D                                           Center;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BoxElement2D
	 * Size -> 0x0014
	 */
	struct FBoxElement2D
	{
	public:
		struct FVector2D                                           Center;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Width;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Height;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Angle;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ConvexElement2D
	 * Size -> 0x0010
	 */
	struct FConvexElement2D
	{
	public:
		TArray<struct FVector2D>                                   VertexData;                                              // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AggregateGeometry2D
	 * Size -> 0x0030
	 */
	struct FAggregateGeometry2D
	{
	public:
		TArray<struct FCircleElement2D>                            CircleElements;                                          // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FBoxElement2D>                               BoxElements;                                             // 0x0010(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FConvexElement2D>                            ConvexElements;                                          // 0x0020(0x0010) Edit, EditFixedSize, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.BranchFilter
	 * Size -> 0x000C
	 */
	struct FBranchFilter
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BlendDepth;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.InputBlendPose
	 * Size -> 0x0010
	 */
	struct FInputBlendPose
	{
	public:
		TArray<struct FBranchFilter>                               BranchFilters;                                           // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.BuilderPoly
	 * Size -> 0x0020
	 */
	struct FBuilderPoly
	{
	public:
		TArray<int32_t>                                            VertexIndices;                                           // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    Direction;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ItemName;                                                // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PolyFlags;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CanvasUVTri
	 * Size -> 0x0060
	 */
	struct FCanvasUVTri
	{
	public:
		struct FVector2D                                           V0_Pos;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           V0_UV;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        V0_Color;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           V1_Pos;                                                  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           V1_UV;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        V1_Color;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           V2_Pos;                                                  // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           V2_UV;                                                   // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        V2_Color;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TextureRenderData
	 * Size -> 0x0048
	 */
	struct FTextureRenderData
	{
	public:
		class UTexture*                                            RenderTexture;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ScreenPosition;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ScreenSize;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           CoordinatePosition;                                      // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           CoordinateSize;                                          // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        RenderColor;                                             // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		EBlendMode                                                 BlendMode;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VRPB[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Rotation;                                                // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           PivotPoint;                                              // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InstancedNavMesh
	 * Size -> 0x0038
	 */
	struct FInstancedNavMesh
	{
	public:
		TAssetPtr<class UClass>                                    AssetClass;                                              // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_61EZ[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             Location;                                                // 0x0020(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                NavMeshName;                                             // 0x002C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x0034(0x0004) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Engine.FractureMaterial
	 * Size -> 0x0024
	 */
	struct FFractureMaterial
	{
	public:
		struct FVector2D                                           UVScale;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           UVOffset;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Tangent;                                                 // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UAngle;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InteriorElementIndex;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DestructibleChunkParameters
	 * Size -> 0x0004
	 */
	struct FDestructibleChunkParameters
	{
	public:
		bool                                                       bIsSupportChunk;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDoNotFracture;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDoNotDamage;                                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDoNotCrumble;                                           // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AudioQualitySettings
	 * Size -> 0x0040
	 */
	struct FAudioQualitySettings
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_T8RM[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    MaxChannels;                                             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AVCZ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PhysicalSurfaceName
	 * Size -> 0x000C
	 */
	struct FPhysicalSurfaceName
	{
	public:
		EPhysicalSurface                                           Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TJPX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DominanceGroupPair
	 * Size -> 0x000C
	 */
	struct FDominanceGroupPair
	{
	public:
		EDominanceGroup                                            FirstGroupId;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDominanceGroup                                            SecondGroupId;                                           // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4018[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FirstDominanceValue;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SecondDominanceValue;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DominanceGroupName
	 * Size -> 0x000C
	 */
	struct FDominanceGroupName
	{
	public:
		EDominanceGroup                                            Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GZZ4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.TextureLODGroup
	 * Size -> 0x003C
	 */
	struct FTextureLODGroup
	{
	public:
		ETextureGroup                                              Group;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HOPQ[0xB];                                   // 0x0001(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODBias;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FR4C[0x4];                                   // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumStreamedMips;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETextureMipGenSettings                                     MipGenSettings;                                          // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1X74[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinLODSize;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxLODSize;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MinMagFilter;                                            // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MipFilter;                                               // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TextureQualityReduction;                                 // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    bDisableMaxTextureResolutionOverride;                    // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DialogueContextMapping
	 * Size -> 0x0028
	 */
	struct FDialogueContextMapping
	{
	public:
		struct FDialogueContext                                    Context;                                                 // 0x0000(0x0018) Edit
		class USoundWave*                                          SoundWave;                                               // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDialogueSoundWaveProxy*                             Proxy;                                                   // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BlueprintComponentDelegateBinding
	 * Size -> 0x0018
	 */
	struct FBlueprintComponentDelegateBinding
	{
	public:
		class FName                                                ComponentPropertyName;                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DelegatePropertyName;                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FunctionNameToBind;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BlueprintInputDelegateBinding
	 * Size -> 0x0004
	 */
	struct FBlueprintInputDelegateBinding
	{
	public:
		unsigned char                                              bConsumeInput : 1;                                       // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bExecuteWhenPaused : 1;                                  // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOverrideParentBinding : 1;                              // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_VFGA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BlueprintInputActionDelegateBinding
	 * Size -> 0x0014 (FullSize[0x0018] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		class FName                                                InputActionName;                                         // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInputEvent                                                InputKeyEvent;                                           // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_REJI[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BlueprintInputAxisDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0014] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		class FName                                                InputAxisName;                                           // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FunctionNameToBind;                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
	 * Size -> 0x002C (FullSize[0x0030] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		unsigned char                                              UnknownData_4WX8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                AxisKey;                                                 // 0x0008(0x0020)
		class FName                                                FunctionNameToBind;                                      // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BlueprintInputKeyDelegateBinding
	 * Size -> 0x003C (FullSize[0x0040] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		unsigned char                                              UnknownData_SBMC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputChord                                         InputChord;                                              // 0x0008(0x0028)
		EInputEvent                                                InputKeyEvent;                                           // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HJAH[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_52LX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BlueprintInputTouchDelegateBinding
	 * Size -> 0x000C (FullSize[0x0010] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		EInputEvent                                                InputKeyEvent;                                           // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y6O4[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BlueprintInstancedActorDelegateBinding
	 * Size -> 0x0010
	 */
	struct FBlueprintInstancedActorDelegateBinding
	{
	public:
		class FName                                                DelegatePropertyName;                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FunctionNameToBind;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.FontImportOptionsData
	 * Size -> 0x00B0
	 */
	struct FFontImportOptionsData
	{
	public:
		class FString                                              FontName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		float                                                      Height;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bEnableAntialiasing : 1;                                 // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bEnableBold : 1;                                         // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bEnableItalic : 1;                                       // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bEnableUnderline : 1;                                    // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAlphaOnly : 1;                                          // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_QKYK[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFontImportCharacterSet                                    CharacterSet;                                            // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CYXF[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Chars;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              UnicodeRange;                                            // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              CharsFilePath;                                           // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              CharsFileWildcard;                                       // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		unsigned char                                              bCreatePrintableOnly : 1;                                // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bIncludeASCIIRange : 1;                                  // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_L1IH[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ForegroundColor;                                         // 0x0064(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              bEnableDropShadow : 1;                                   // 0x0074(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_X5YQ[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TexturePageWidth;                                        // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TexturePageMaxHeight;                                    // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    XPadding;                                                // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    YPadding;                                                // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ExtendBoxTop;                                            // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ExtendBoxBottom;                                         // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ExtendBoxRight;                                          // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ExtendBoxLeft;                                           // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bEnableLegacyMode : 1;                                   // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_T6Y7[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Kerning;                                                 // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bUseDistanceFieldAlpha : 1;                              // 0x00A0(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_SFG8[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DistanceFieldScaleFactor;                                // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceFieldScanRadiusScale;                            // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8XCB[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FontCharacter
	 * Size -> 0x0018
	 */
	struct FFontCharacter
	{
	public:
		int32_t                                                    StartU;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StartV;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    USize;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    VSize;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TextureIndex;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NAL2[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VerticalOffset;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.HapticFeedbackDetails
	 * Size -> 0x0100
	 */
	struct FHapticFeedbackDetails
	{
	public:
		struct FRuntimeFloatCurve                                  Frequency;                                               // 0x0000(0x0080) Edit
		struct FRuntimeFloatCurve                                  Amplitude;                                               // 0x0080(0x0080) Edit
	};

	/**
	 * ScriptStruct Engine.HIKBoneTransform
	 * Size -> 0x0030
	 */
	struct FHIKBoneTransform
	{
	public:
		int32_t                                                    BoneID;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Translation;                                             // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FQuat                                               Orientation;                                             // 0x0010(0x0010) Edit, IsPlainOldData, NoDestructor
		struct FVector                                             Scale;                                                   // 0x0020(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MBAQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.HIKBoneMapping
	 * Size -> 0x000C
	 */
	struct FHIKBoneMapping
	{
	public:
		class FName                                                UnrealBoneName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HumanIKBone;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ComponentKey
	 * Size -> 0x0020
	 */
	struct FComponentKey
	{
	public:
		class UClass*                                              OwnerClass;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SCSVariableName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AssociatedGuid;                                          // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ComponentOverrideRecord
	 * Size -> 0x0028
	 */
	struct FComponentOverrideRecord
	{
	public:
		class UActorComponent*                                     ComponentTemplate;                                       // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FComponentKey                                       ComponentKey;                                            // 0x0008(0x0020)
	};

	/**
	 * ScriptStruct Engine.KeyBind
	 * Size -> 0x0038
	 */
	struct FKeyBind
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0020) Config
		class FString                                              Command;                                                 // 0x0020(0x0010) ZeroConstructor, Config, HasGetValueTypeHash
		unsigned char                                              Control : 1;                                             // 0x0030(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              Shift : 1;                                               // 0x0030(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              Alt : 1;                                                 // 0x0030(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              Cmd : 1;                                                 // 0x0030(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              bIgnoreCtrl : 1;                                         // 0x0030(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              bIgnoreShift : 1;                                        // 0x0030(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              bIgnoreAlt : 1;                                          // 0x0030(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              bIgnoreCmd : 1;                                          // 0x0030(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              UnknownData_FDKE[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InputAxisProperties
	 * Size -> 0x0010
	 */
	struct FInputAxisProperties
	{
	public:
		float                                                      DeadZone;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sensitivity;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Exponent;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bInvert : 1;                                             // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_WP60[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InputAxisConfigEntry
	 * Size -> 0x0018
	 */
	struct FInputAxisConfigEntry
	{
	public:
		class FName                                                AxisKeyName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInputAxisProperties                                AxisProperties;                                          // 0x0008(0x0010) Edit
	};

	/**
	 * ScriptStruct Engine.InputActionKeyMapping
	 * Size -> 0x0030
	 */
	struct FInputActionKeyMapping
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKey                                                Key;                                                     // 0x0008(0x0020) Edit
		unsigned char                                              bShift : 1;                                              // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bCtrl : 1;                                               // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAlt : 1;                                                // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bCmd : 1;                                                // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_A472[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InputAxisKeyMapping
	 * Size -> 0x0030
	 */
	struct FInputAxisKeyMapping
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKey                                                Key;                                                     // 0x0008(0x0020) Edit
		float                                                      Scale;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RX6K[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InputCombinedAxisKeyMapping
	 * Size -> 0x0058
	 */
	struct FInputCombinedAxisKeyMapping
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKey                                                KeyX;                                                    // 0x0008(0x0020) Edit
		struct FKey                                                KeyY;                                                    // 0x0028(0x0020) Edit
		float                                                      Scale;                                                   // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CircularDeadZoneLowerBound;                              // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CircularDeadZoneUpperBound;                              // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Exponent;                                                // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CurveEdEntry
	 * Size -> 0x0038
	 */
	struct FCurveEdEntry
	{
	public:
		class UObject*                                             CurveObject;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              CurveColor;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BDMO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurveName;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    bHideCurve;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    bColorCurve;                                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    bFloatingPointColorCurve;                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    bClamp;                                                  // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClampLow;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClampHigh;                                               // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CurveEdTab
	 * Size -> 0x0030
	 */
	struct FCurveEdTab
	{
	public:
		class FString                                              TabName;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<struct FCurveEdEntry>                               Curves;                                                  // 0x0010(0x0010) ZeroConstructor
		float                                                      ViewStartInput;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ViewEndInput;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ViewStartOutput;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ViewEndOutput;                                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BoolTrackKey
	 * Size -> 0x0008
	 */
	struct FBoolTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Value : 1;                                               // 0x0004(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_BSNF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DirectorTrackCut
	 * Size -> 0x0014
	 */
	struct FDirectorTrackCut
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TransitionTime;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TargetCamGroup;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ShotNumber;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.EventTrackKey
	 * Size -> 0x000C
	 */
	struct FEventTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EventName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AnimControlTrackKey
	 * Size -> 0x0020
	 */
	struct FAnimControlTrackKey
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VAHW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       AnimSeq;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimStartOffset;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimEndOffset;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimPlayRate;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bLooping : 1;                                            // 0x001C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bReverse : 1;                                            // 0x001C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_336P[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpLookupPoint
	 * Size -> 0x000C
	 */
	struct FInterpLookupPoint
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.InterpLookupTrack
	 * Size -> 0x0010
	 */
	struct FInterpLookupTrack
	{
	public:
		TArray<struct FInterpLookupPoint>                          Points;                                                  // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.ParticleReplayTrackKey
	 * Size -> 0x000C
	 */
	struct FParticleReplayTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ClipIDNumber;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ToggleTrackKey
	 * Size -> 0x0008
	 */
	struct FToggleTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETrackToggleAction                                         ToggleAction;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HV58[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundTrackKey
	 * Size -> 0x0018
	 */
	struct FSoundTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Volume;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Pitch;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KUGN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Sound;                                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.VisibilityTrackKey
	 * Size -> 0x0008
	 */
	struct FVisibilityTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EVisibilityTrackAction                                     Action;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EVisibilityTrackCondition                                  ActiveCondition;                                         // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P8YW[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PrimitiveMaterialRef
	 * Size -> 0x0018
	 */
	struct FPrimitiveMaterialRef
	{
	public:
		class UPrimitiveComponent*                                 Primitive;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     Decal;                                                   // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ElementIndex;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LHSG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LayerActorStats
	 * Size -> 0x0010
	 */
	struct FLayerActorStats
	{
	public:
		class UClass*                                              Type;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Total;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G4WO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LightmassPrimitiveSettings
	 * Size -> 0x0018
	 */
	struct FLightmassPrimitiveSettings
	{
	public:
		unsigned char                                              bUseTwoSidedLighting : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bShadowIndirectOnly : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bUseEmissiveForStaticLighting : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bUseVertexNormalForHemisphereGather : 1;                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              UnknownData_N892[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EmissiveLightFalloffExponent;                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmissiveLightExplicitInfluenceRadius;                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmissiveBoost;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DiffuseBoost;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FullyOccludedSamplesFraction;                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CustomInput
	 * Size -> 0x0048
	 */
	struct FCustomInput
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		struct FExpressionInput                                    Input;                                                   // 0x0010(0x0038) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.FunctionExpressionInput
	 * Size -> 0x0050
	 */
	struct FFunctionExpressionInput
	{
	public:
		class UMaterialExpressionFunctionInput*                    ExpressionInput;                                         // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               ExpressionInputId;                                       // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FExpressionInput                                    Input;                                                   // 0x0018(0x0038) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.FunctionExpressionOutput
	 * Size -> 0x0040
	 */
	struct FFunctionExpressionOutput
	{
	public:
		class UMaterialExpressionFunctionOutput*                   ExpressionOutput;                                        // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               ExpressionOutputId;                                      // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FExpressionOutput                                   Output;                                                  // 0x0018(0x0028) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.CollectionParameterBase
	 * Size -> 0x0018
	 */
	struct FCollectionParameterBase
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               Id;                                                      // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CollectionScalarParameter
	 * Size -> 0x0004 (FullSize[0x001C] - InheritedSize[0x0018])
	 */
	struct FCollectionScalarParameter : public FCollectionParameterBase
	{
	public:
		float                                                      DefaultValue;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CollectionVectorParameter
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FCollectionVectorParameter : public FCollectionParameterBase
	{
	public:
		struct FLinearColor                                        DefaultValue;                                            // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.NavCollisionCylinder
	 * Size -> 0x0014
	 */
	struct FNavCollisionCylinder
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Height;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NavCollisionBox
	 * Size -> 0x0018
	 */
	struct FNavCollisionBox
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Extent;                                                  // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DistributionLookupTable
	 * Size -> 0x0028
	 */
	struct FDistributionLookupTable
	{
	public:
		unsigned char                                              Op;                                                      // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              EntryCount;                                              // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              EntryStride;                                             // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SubEntryStride;                                          // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeScale;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBias;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7HK6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Values;                                                  // 0x0010(0x0010) ZeroConstructor
		unsigned char                                              LockFlag;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZK35[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.RawDistribution
	 * Size -> 0x0028
	 */
	struct FRawDistribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.RawDistributionVector
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRawDistributionVector : public FRawDistribution
	{
	public:
		float                                                      MinValue;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxValue;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDistributionVector*                                 Distribution;                                            // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.RawDistributionFloat
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRawDistributionFloat : public FRawDistribution
	{
	public:
		float                                                      MinValue;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxValue;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDistributionFloat*                                  Distribution;                                            // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BeamModifierOptions
	 * Size -> 0x0004
	 */
	struct FBeamModifierOptions
	{
	public:
		unsigned char                                              bModify : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bScale : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bLock : 1;                                               // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_94PC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ParticleRandomSeedInfo
	 * Size -> 0x0020
	 */
	struct FParticleRandomSeedInfo
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bGetSeedFromInstance : 1;                                // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bInstanceSeedIsIndex : 1;                                // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bResetSeedOnEmitterLooping : 1;                          // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bRandomlySelectSeedArray : 1;                            // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_5ZDB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            RandomSeeds;                                             // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.ParticleEvent_GenerateInfo
	 * Size -> 0x0028
	 */
	struct FParticleEvent_GenerateInfo
	{
	public:
		EParticleEventType                                         Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PE8R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Frequency;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ParticleFrequency;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              FirstTimeOnly : 1;                                       // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              LastTimeOnly : 1;                                        // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UseReflectedImpactVector : 1;                            // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bUseOrbitOffset : 1;                                     // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_9UTQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CustomName;                                              // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UParticleModuleEventSendToGame*>              ParticleModuleEventsToSendToGame;                        // 0x0018(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.ParticleEventGPU_GenerateInfo
	 * Size -> 0x0028
	 */
	struct FParticleEventGPU_GenerateInfo
	{
	public:
		EParticleEventType                                         Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QU1I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Frequency;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CustomName;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGPUParticleCollisionEventLimit                            CollisionEventLimit;                                     // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SNJ7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UParticleModuleEventSendToGame*>              ParticleModuleEventsToSendToGame;                        // 0x0018(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.LocationBoneSocketInfo
	 * Size -> 0x0014
	 */
	struct FLocationBoneSocketInfo
	{
	public:
		class FName                                                BoneSocketName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Offset;                                                  // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.PrimitiveSphereEmitterAngleRanges
	 * Size -> 0x0010
	 */
	struct FPrimitiveSphereEmitterAngleRanges
	{
	public:
		struct FVector2D                                           HorizontalAngle;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           VerticalAngle;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.OrbitOptions
	 * Size -> 0x0004
	 */
	struct FOrbitOptions
	{
	public:
		unsigned char                                              bProcessDuringSpawn : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bProcessDuringUpdate : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bUseEmitterTime : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_I1BG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EmitterDynamicParameter
	 * Size -> 0x0050
	 */
	struct FEmitterDynamicParameter
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bUseEmitterTime : 1;                                     // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bSpawnTimeOnly : 1;                                      // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_VA7G[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEmitterDynamicParameterValue                              ValueMethod;                                             // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5ALT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bScaleVelocityByParamValue : 1;                          // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_E7AC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionFloat                               ParamValue;                                              // 0x0018(0x0038) Edit, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.ParticleBurst
	 * Size -> 0x0014
	 */
	struct FParticleBurst
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CountLow;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnMultiplier;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBurstGroup                                                Group;                                                   // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8JK7[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.RotationAboutAxisParameters
	 * Size -> 0x0010
	 */
	struct FRotationAboutAxisParameters
	{
	public:
		struct FVector                                             Rotation;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              bUseRotation : 1;                                        // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bUseLocalSpace : 1;                                      // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_Z8X5[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
	 * Size -> 0x0070
	 */
	struct FGPUSpriteLocalVectorFieldInfo
	{
	public:
		class UVectorField*                                        Field;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WSGD[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor
		struct FRotator                                            MinInitialRotation;                                      // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            MaxInitialRotation;                                      // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            RotationRate;                                            // 0x0058(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Intensity;                                               // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Tightness;                                               // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bIgnoreComponentTransform : 1;                           // 0x006C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bTileX : 1;                                              // 0x006C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bTileY : 1;                                              // 0x006C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bTileZ : 1;                                              // 0x006C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_YBG2[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FloatDistribution
	 * Size -> 0x0028
	 */
	struct FFloatDistribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.GPUSpriteEmitterInfo
	 * Size -> 0x02A0
	 */
	struct FGPUSpriteEmitterInfo
	{
	public:
		class UParticleModuleRequired*                             RequiredModule;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleModuleSpawn*                                SpawnModule;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleModuleSpawnPerUnit*                         SpawnPerUnitModule;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleModuleSpawnRepeatPerPoint*                  SpawnRepeatPerPointModule;                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleComputeShaderData*                          ParticleComputeData;                                     // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleModuleParametersOverVelocity*               ParametersOverVelocity;                                  // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleModuleParametersOverCustom*                 ParametersOverCustom;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UParticleModule*>                             SpawnModules;                                            // 0x0038(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_4T6S[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGPUSpriteLocalVectorFieldInfo                      LocalVectorField;                                        // 0x0050(0x0070)
		struct FFloatDistribution                                  VectorFieldScale;                                        // 0x00C0(0x0028) ZeroConstructor
		struct FFloatDistribution                                  PointAttractorStrength;                                  // 0x00E8(0x0028) ZeroConstructor
		struct FFloatDistribution                                  Resilience;                                              // 0x0110(0x0028) ZeroConstructor
		struct FVector                                             ConstantAcceleration;                                    // 0x0138(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             PointAttractorPosition;                                  // 0x0144(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PointAttractorRadiusSq;                                  // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OrbitOffsetBase;                                         // 0x0154(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitOffsetRange;                                        // 0x0160(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           InvMaxSize;                                              // 0x016C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxLifetime;                                             // 0x0174(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxParticleCount;                                        // 0x0178(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxDeathRate;                                            // 0x017C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EParticleScreenAlignment                                   ScreenAlignment[0x6];                                    // 0x0180(0x0006) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EParticleAxisLock                                          LockAxisFlag;                                            // 0x0186(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9BR1[0x1];                                   // 0x0187(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bEnableCollision : 1;                                    // 0x0188(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bNeedsVectorFields : 1;                                  // 0x0188(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bOpacitySpawnsOnCPU : 1;                                 // 0x0188(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSizeSpawnsOnCPU : 1;                                    // 0x0188(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bVelocitySpawnsOnCPU : 1;                                // 0x0188(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bIgnoreComponentColorTint : 1;                           // 0x0188(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bGeneratesDeathEvents : 1;                               // 0x0188(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bGeneratesCollisionEvents : 1;                           // 0x0188(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_N4WL[0x3];                                   // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EParticleCollisionMode                                     CollisionMode;                                           // 0x018C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XGQN[0x3];                                   // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionVector                              DynamicColor;                                            // 0x0190(0x0038) ContainsInstancedReference
		struct FRawDistributionFloat                               DynamicAlpha;                                            // 0x01C8(0x0038) ContainsInstancedReference
		struct FRawDistributionVector                              DynamicColorScale;                                       // 0x0200(0x0038) ContainsInstancedReference
		struct FRawDistributionFloat                               DynamicAlphaScale;                                       // 0x0238(0x0038) ContainsInstancedReference
		struct FVector4                                            MurkyColorScale;                                         // 0x0270(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                LocationEmitterName;                                     // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bUseInheritedVelocityLocationEmitter : 1;                // 0x0288(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_SQM6[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           InheritedVelocityScaleLocationEmitter;                   // 0x028C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              bKillParticlesOnFFTWater : 1;                            // 0x0294(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_UQPT[0xB];                                   // 0x0295(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.GPUSpriteResourceData
	 * Size -> 0x0A00
	 */
	struct FGPUSpriteResourceData
	{
	public:
		TArray<struct FColor>                                      QuantizedColorSamples;                                   // 0x0000(0x0010) ZeroConstructor
		TArray<struct FColor>                                      QuantizedMiscSamples;                                    // 0x0010(0x0010) ZeroConstructor
		TArray<struct FColor>                                      QuantizedDynamicParamSamples;                            // 0x0020(0x0010) ZeroConstructor
		TArray<struct FColor>                                      QuantizedSimulationAttrSamples;                          // 0x0030(0x0010) ZeroConstructor
		TArray<struct FColor>                                      QuantizedSizeOverVelocitySamples;                        // 0x0040(0x0010) ZeroConstructor
		struct FVector4                                            ColorScale;                                              // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            ColorBias;                                               // 0x0060(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            MiscScale;                                               // 0x0070(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            MiscBias;                                                // 0x0080(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            DynParamScale;                                           // 0x0090(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            DynParamBias;                                            // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            MurkyColorScale;                                         // 0x00B0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            SimulationAttrCurveScale;                                // 0x00C0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            SimulationAttrCurveBias;                                 // 0x00D0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            SizeOverVelocityScale;                                   // 0x00E0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            SizeOverVelocityBias;                                    // 0x00F0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            SubImageSize;                                            // 0x0100(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector4                                            SizeBySpeed;                                             // 0x0110(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ConstantAcceleration;                                    // 0x0120(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitOffsetBase;                                         // 0x012C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitOffsetRange;                                        // 0x0138(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitFrequencyBase;                                      // 0x0144(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitFrequencyRange;                                     // 0x0150(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitPhaseBase;                                          // 0x015C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitPhaseRange;                                         // 0x0168(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      GlobalVectorFieldScale;                                  // 0x0174(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlobalVectorFieldTightness;                              // 0x0178(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PerParticleVectorFieldScale;                             // 0x017C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PerParticleVectorFieldBias;                              // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DragCoefficientScale[0x6];                               // 0x0184(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DragCoefficientBias[0x6];                                // 0x019C(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DragLocalVelocityScale[0x6];                             // 0x01B4(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DragLocalVelocityBias[0x6];                              // 0x01CC(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ResilienceScale;                                         // 0x01E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ResilienceBias;                                          // 0x01E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CollisionRadiusScale;                                    // 0x01EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CollisionRadiusBias;                                     // 0x01F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CollisionTimeBias;                                       // 0x01F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OneMinusFriction;                                        // 0x01F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraMotionBlurAmount;                                  // 0x01FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlphaThreshold;                                          // 0x0200(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EParticleScreenAlignment                                   ScreenAlignment[0x6];                                    // 0x0204(0x0006) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EParticleAxisLock                                          LockAxisFlag;                                            // 0x020A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2MO2[0x1];                                   // 0x020B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PivotOffset;                                             // 0x020C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FMWZ[0x46C];                                 // 0x0214(0x046C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlignmentInheritedVelocityScale;                         // 0x0680(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I0HL[0x37C];                                 // 0x0684(0x037C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.VelocityConeGroupParams
	 * Size -> 0x0080
	 */
	struct FVelocityConeGroupParams
	{
	public:
		struct FRawDistributionFloat                               Angle;                                                   // 0x0000(0x0038) Edit, ContainsInstancedReference
		struct FRawDistributionFloat                               Velocity;                                                // 0x0038(0x0038) Edit, ContainsInstancedReference
		struct FVector                                             Direction;                                               // 0x0070(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C494[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DelegateArray
	 * Size -> 0x0010
	 */
	struct FDelegateArray
	{
	public:
		TArray<class FScriptDelegate>                              Delegates;                                               // 0x0000(0x0010) ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.PurchaseInfo
	 * Size -> 0x0040
	 */
	struct FPurchaseInfo
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              DisplayName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              DisplayDescription;                                      // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              DisplayPrice;                                            // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.RigTransformConstraint
	 * Size -> 0x0010
	 */
	struct FRigTransformConstraint
	{
	public:
		EConstraintTransform                                       TranformType;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9FCH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentSpace;                                             // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weight;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.TransformBaseConstraint
	 * Size -> 0x0010
	 */
	struct FTransformBaseConstraint
	{
	public:
		TArray<struct FRigTransformConstraint>                     TransformConstraints;                                    // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.TransformBase
	 * Size -> 0x0028
	 */
	struct FTransformBase
	{
	public:
		class FName                                                Node;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransformBaseConstraint                            Constraints[0x2];                                        // 0x0008(0x0020) Edit
	};

	/**
	 * ScriptStruct Engine.Node
	 * Size -> 0x0060
	 */
	struct FNode
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ParentName;                                              // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor
		class FString                                              DisplayName;                                             // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		bool                                                       bAdvanced;                                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NYW0[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BPVariableMetaDataEntry
	 * Size -> 0x0018
	 */
	struct FBPVariableMetaDataEntry
	{
	public:
		class FName                                                DataKey;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DataValue;                                               // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DestructibleDamageParameters
	 * Size -> 0x001C
	 */
	struct FDestructibleDamageParameters
	{
	public:
		float                                                      DamageThreshold;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageSpread;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableImpactDamage;                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OPP4[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImpactDamage;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DefaultImpactDamageDepth;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCustomImpactResistance;                                 // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A7FX[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImpactResistance;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DestructibleDebrisParameters
	 * Size -> 0x002C
	 */
	struct FDestructibleDebrisParameters
	{
	public:
		float                                                      DebrisLifetimeMin;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DebrisLifetimeMax;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DebrisMaxSeparationMin;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DebrisMaxSeparationMax;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBox                                                ValidBounds;                                             // 0x0010(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DestructibleAdvancedParameters
	 * Size -> 0x0010
	 */
	struct FDestructibleAdvancedParameters
	{
	public:
		float                                                      DamageCap;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ImpactVelocityThreshold;                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxChunkSpeed;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FractureImpulseScale;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DestructibleSpecialHierarchyDepths
	 * Size -> 0x0014
	 */
	struct FDestructibleSpecialHierarchyDepths
	{
	public:
		int32_t                                                    SupportDepth;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinimumFractureDepth;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableDebris;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D2RS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DebrisDepth;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EssentialDepth;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DestructibleDepthParameters
	 * Size -> 0x0001
	 */
	struct FDestructibleDepthParameters
	{
	public:
		EImpactDamageOverride                                      ImpactDamageOverride;                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DestructibleParametersFlag
	 * Size -> 0x0004
	 */
	struct FDestructibleParametersFlag
	{
	public:
		unsigned char                                              bAccumulateDamage : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAssetDefinedSupport : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bWorldSupport : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bDebrisTimeout : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bDebrisMaxSeparation : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bCrumbleSmallestChunks : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAccurateRaycasts : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bUseValidBounds : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bFormExtendedStructures : 1;                             // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_45FI[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DestructibleParameters
	 * Size -> 0x0088
	 */
	struct FDestructibleParameters
	{
	public:
		struct FDestructibleDamageParameters                       DamageParameters;                                        // 0x0000(0x001C) Edit
		struct FDestructibleDebrisParameters                       DebrisParameters;                                        // 0x001C(0x002C) Edit
		struct FDestructibleAdvancedParameters                     AdvancedParameters;                                      // 0x0048(0x0010) Edit
		struct FDestructibleSpecialHierarchyDepths                 SpecialHierarchyDepths;                                  // 0x0058(0x0014) Edit
		unsigned char                                              UnknownData_EJW1[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDestructibleDepthParameters>                DepthParameters;                                         // 0x0070(0x0010) Edit, EditFixedSize, ZeroConstructor
		struct FDestructibleParametersFlag                         Flags;                                                   // 0x0080(0x0004) Edit
		unsigned char                                              UnknownData_X4WR[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundGroup
	 * Size -> 0x0020
	 */
	struct FSoundGroup
	{
	public:
		ESoundGroup                                                SoundGroup;                                              // 0x0000(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EHOO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0008(0x0010) ZeroConstructor, Config, HasGetValueTypeHash
		unsigned char                                              bAlwaysDecompressOnLoad : 1;                             // 0x0018(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              UnknownData_AKJI[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DecompressedDuration;                                    // 0x001C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.SubtitleCue
	 * Size -> 0x0040
	 */
	struct FSubtitleCue
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible
		unsigned char                                              UnknownData_C9BG[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Time;                                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BSIC[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LocalizedSubtitle
	 * Size -> 0x0028
	 */
	struct FLocalizedSubtitle
	{
	public:
		class FString                                              LanguageExt;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<struct FSubtitleCue>                                Subtitles;                                               // 0x0010(0x0010) ZeroConstructor
		unsigned char                                              bMature : 1;                                             // 0x0020(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bManualWordWrap : 1;                                     // 0x0020(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSingleLine : 1;                                         // 0x0020(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_8MDM[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundClassProperties
	 * Size -> 0x0024
	 */
	struct FSoundClassProperties
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Pitch;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StereoBleed;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LFEBleed;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VoiceCenterChannelVolume;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadioFilterVolume;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadioFilterVolumeThreshold;                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bApplyEffects : 1;                                       // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAlwaysPlay : 1;                                         // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bIsUISound : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bIsMusic : 1;                                            // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bReverb : 1;                                             // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bCenterChannelOnly : 1;                                  // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bApplyAmbientVolumes : 1;                                // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_ANKL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAudioOutputTarget                                         OutputTarget;                                            // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D5SW[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PassiveSoundMixModifier
	 * Size -> 0x0010
	 */
	struct FPassiveSoundMixModifier
	{
	public:
		class USoundMix*                                           SoundMix;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinVolumeThreshold;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxVolumeThreshold;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AudioEQEffect
	 * Size -> 0x0028
	 */
	struct FAudioEQEffect
	{
	public:
		unsigned char                                              UnknownData_26IW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HFFrequency;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HFGain;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MFCutoffFrequency;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MFBandwidth;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MFGain;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LFFrequency;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LFGain;                                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N10M[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundClassAdjuster
	 * Size -> 0x0018
	 */
	struct FSoundClassAdjuster
	{
	public:
		class USoundClass*                                         SoundClassObject;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VolumeAdjuster;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchAdjuster;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bApplyToChildren : 1;                                    // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_2HIJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VoiceCenterChannelVolumeAdjuster;                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DialogueWaveParameter
	 * Size -> 0x0020
	 */
	struct FDialogueWaveParameter
	{
	public:
		class UDialogueWave*                                       DialogueWave;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogueContext                                    Context;                                                 // 0x0008(0x0018) Edit
	};

	/**
	 * ScriptStruct Engine.DistanceDatum
	 * Size -> 0x0014
	 */
	struct FDistanceDatum
	{
	public:
		float                                                      FadeInDistanceStart;                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeInDistanceEnd;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOutDistanceStart;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOutDistanceEnd;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Volume;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ModulatorContinuousParams
	 * Size -> 0x0020
	 */
	struct FModulatorContinuousParams
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Default;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinInput;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxInput;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinOutput;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxOutput;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EModulationParamMode                                       ParamMode;                                               // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GUS0[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SubsurfaceProfileStruct
	 * Size -> 0x0024
	 */
	struct FSubsurfaceProfileStruct
	{
	public:
		float                                                      ScatterRadius;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SubsurfaceColor;                                         // 0x0004(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FalloffColor;                                            // 0x0014(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TTTrackBase
	 * Size -> 0x000C
	 */
	struct FTTTrackBase
	{
	public:
		class FName                                                TrackName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsExternalCurve;                                        // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_48KT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TTEventTrack
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FTTEventTrack : public FTTTrackBase
	{
	public:
		unsigned char                                              UnknownData_7BPZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CurveKeys;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.TTFloatTrack
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FTTFloatTrack : public FTTTrackBase
	{
	public:
		unsigned char                                              UnknownData_Y5IP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CurveFloat;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.TTVectorTrack
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FTTVectorTrack : public FTTTrackBase
	{
	public:
		unsigned char                                              UnknownData_GFXR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        CurveVector;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.TTLinearColorTrack
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FTTLinearColorTrack : public FTTTrackBase
	{
	public:
		unsigned char                                              UnknownData_WBHZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveLinearColor*                                   CurveLinearColor;                                        // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.TouchInputControl
	 * Size -> 0x0078
	 */
	struct FTouchInputControl
	{
	public:
		class UTexture2D*                                          Image1;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          Image2;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           Center;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           VisualSize;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ThumbSize;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           InteractionSize;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           InputScale;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FKey                                                MainInputKey;                                            // 0x0038(0x0020) Edit
		struct FKey                                                AltInputKey;                                             // 0x0058(0x0020) Edit
	};

	/**
	 * ScriptStruct Engine.VectorDistribution
	 * Size -> 0x0028
	 */
	struct FVectorDistribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Vector4Distribution
	 * Size -> 0x0028
	 */
	struct FVector4Distribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.PlatformInterfaceData
	 * Size -> 0x0030
	 */
	struct FPlatformInterfaceData
	{
	public:
		class FName                                                DataName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPlatformInterfaceDataType                                 Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UI0Y[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntValue;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FloatValue;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LCF2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringValue;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
		class UObject*                                             ObjectValue;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.PlatformInterfaceDelegateResult
	 * Size -> 0x0038
	 */
	struct FPlatformInterfaceDelegateResult
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZDWB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlatformInterfaceData                              Data;                                                    // 0x0008(0x0030)
	};

	/**
	 * ScriptStruct Engine.FastArraySerializerItem
	 * Size -> 0x0008
	 */
	struct FFastArraySerializerItem
	{
	public:
		int32_t                                                    ReplicationID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ReplicationKey;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.FastArraySerializer
	 * Size -> 0x00A8
	 */
	struct FFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_0BGC[0xA8];                                  // 0x0000(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NetObjectPtr
	 * Size -> 0x0014
	 */
	struct FNetObjectPtr
	{
	public:
		unsigned char                                              UnknownData_V8SP[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NetActorPtr
	 * Size -> 0x0014
	 */
	struct FNetActorPtr
	{
	public:
		struct FNetObjectPtr                                       ObjectPtr;                                               // 0x0000(0x0014)
	};

	/**
	 * ScriptStruct Engine.PacketDiscardStats
	 * Size -> 0x0020
	 */
	struct FPacketDiscardStats
	{
	public:
		int32_t                                                    DiscardCounts[0x7];                                      // 0x0000(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BytesDiscarded;                                          // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.RuntimeVectorCurve
	 * Size -> 0x0170
	 */
	struct FRuntimeVectorCurve
	{
	public:
		struct FRichCurve                                          FloatCurves[0x3];                                        // 0x0000(0x0168)
		class UCurveVector*                                        ExternalCurve;                                           // 0x0168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NetSubObjectPtr
	 * Size -> 0x0014
	 */
	struct FNetSubObjectPtr
	{
	public:
		struct FNetObjectPtr                                       SubObject;                                               // 0x0000(0x0014)
	};

	/**
	 * ScriptStruct Engine.ExposedValueCopyRecord
	 * Size -> 0x0070
	 */
	struct FExposedValueCopyRecord
	{
	public:
		class UProperty*                                           SourceProperty;                                          // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SourcePropertyName;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        SourceSubPropertyNames;                                  // 0x0010(0x0010) ZeroConstructor
		int32_t                                                    SourceArrayIndex;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FH1X[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProperty*                                           DestProperty;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DestArrayIndex;                                          // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Size;                                                    // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPostCopyOperation                                         PostCopyOperation;                                       // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FNMY[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoolProperty*                                       CachedBoolSourceProperty;                                // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoolProperty*                                       CachedBoolDestProperty;                                  // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VA2A[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ExposedValueHandler
	 * Size -> 0x0028
	 */
	struct FExposedValueHandler
	{
	public:
		class FName                                                BoundFunction;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FExposedValueCopyRecord>                     CopyRecords;                                             // 0x0008(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_D1WC[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_Base
	 * Size -> 0x0030
	 */
	struct FAnimNode_Base
	{
	public:
		unsigned char                                              UnknownData_AUNE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExposedValueHandler                                EvaluateGraphExposedInputs;                              // 0x0008(0x0028)
	};

	/**
	 * ScriptStruct Engine.InputScaleBias
	 * Size -> 0x0008
	 */
	struct FInputScaleBias
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Bias;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.PoseLinkBase
	 * Size -> 0x0018
	 */
	struct FPoseLinkBase
	{
	public:
		int32_t                                                    LinkID;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RG05[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ComponentSpacePoseLink
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FComponentSpacePoseLink : public FPoseLinkBase
	{	};

	/**
	 * ScriptStruct Engine.IntegralKey
	 * Size -> 0x0008
	 */
	struct FIntegralKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Value;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.IntegralCurve
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	struct FIntegralCurve : public FIndexedCurve
	{
	public:
		TArray<struct FIntegralKey>                                Keys;                                                    // 0x0058(0x0010) Edit, ZeroConstructor
		int32_t                                                    DefaultValue;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseDefaultValueBeforeFirstKey;                          // 0x006C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SHYO[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StringCurveKey
	 * Size -> 0x0018
	 */
	struct FStringCurveKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QYV7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.StringCurve
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	struct FStringCurve : public FIndexedCurve
	{
	public:
		class FString                                              DefaultValue;                                            // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FStringCurveKey>                             Keys;                                                    // 0x0068(0x0010) Edit, EditFixedSize, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.ExposureSettings
	 * Size -> 0x0008
	 */
	struct FExposureSettings
	{
	public:
		int32_t                                                    LogOffset;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFixed;                                                  // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HFZZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.URL
	 * Size -> 0x0070
	 */
	struct FURL
	{
	public:
		class FString                                              Protocol;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              Host;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    Port;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AXN4[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Map;                                                     // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              RedirectURL;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<class FString>                                      Op;                                                      // 0x0048(0x0010) ZeroConstructor
		class FString                                              Portal;                                                  // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    Valid;                                                   // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D2OC[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TickPrerequisite
	 * Size -> 0x0010
	 */
	struct FTickPrerequisite
	{
	public:
		unsigned char                                              UnknownData_QJFB[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Float_NetQuantized
	 * Size -> 0x0004
	 */
	struct FFloat_NetQuantized
	{
	public:
		unsigned char                                              UnknownData_XNZL[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DepthFieldGlowInfo
	 * Size -> 0x0024
	 */
	struct FDepthFieldGlowInfo
	{
	public:
		unsigned char                                              bEnableGlow : 1;                                         // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_QT9K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        GlowColor;                                               // 0x0004(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           GlowOuterRadius;                                         // 0x0014(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           GlowInnerRadius;                                         // 0x001C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.FontRenderInfo
	 * Size -> 0x0028
	 */
	struct FFontRenderInfo
	{
	public:
		unsigned char                                              bClipText : 1;                                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              bEnableShadow : 1;                                       // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_153K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDepthFieldGlowInfo                                 GlowInfo;                                                // 0x0004(0x0024) BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.ComponentReference
	 * Size -> 0x0018
	 */
	struct FComponentReference
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ComponentProperty;                                       // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7QGJ[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DamageEvent
	 * Size -> 0x0010
	 */
	struct FDamageEvent
	{
	public:
		unsigned char                                              UnknownData_ED1I[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.RadialDamageParams
	 * Size -> 0x0014
	 */
	struct FRadialDamageParams
	{
	public:
		float                                                      BaseDamage;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumDamage;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InnerRadius;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OuterRadius;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageFalloff;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.RadialDamageEvent
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FRadialDamageEvent : public FDamageEvent
	{
	public:
		struct FRadialDamageParams                                 Params;                                                  // 0x0010(0x0014)
		struct FVector                                             Origin;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FHitResult>                                  ComponentHits;                                           // 0x0030(0x0010) ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.PointDamageEvent
	 * Size -> 0x0090 (FullSize[0x00A0] - InheritedSize[0x0010])
	 */
	struct FPointDamageEvent : public FDamageEvent
	{
	public:
		float                                                      Damage;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector_NetQuantizeNormal                           ShotDirection;                                           // 0x0014(0x000C)
		struct FHitResult                                          HitInfo;                                                 // 0x0020(0x0080) ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.CollisionMergingSettings
	 * Size -> 0x0001
	 */
	struct FCollisionMergingSettings
	{
	public:
		unsigned char                                              UnknownData_NHMN[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MeshMergingSettings
	 * Size -> 0x0050
	 */
	struct FMeshMergingSettings
	{
	public:
		bool                                                       bGenerateLightMapUV;                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8VX3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TargetLightMapUVChannel;                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TargetLightMapResolution;                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bImportVertexColors;                                     // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPivotPointAtZero;                                       // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bMergePhysicsData;                                       // 0x000E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bMergeMaterials;                                         // 0x000F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bExportNormalMap;                                        // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bExportMetallicMap;                                      // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bExportRoughnessMap;                                     // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bExportSpecularMap;                                      // 0x0013(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MergedMaterialAtlasResolution;                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableCollisionMerging;                                 // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseRelativeTransform;                                   // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bMergeRelativeToFirstComponent;                          // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDuplicateLODs;                                          // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QP14[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              LODScreenSizes;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    LODForCollision;                                         // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GHBU[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              LODReductionPercentTriangles;                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    MaxNumberOfLODs;                                         // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J0O0[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MaterialSimplificationSettings
	 * Size -> 0x0044
	 */
	struct FMaterialSimplificationSettings
	{
	public:
		struct FIntPoint                                           BaseColorMapSize;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bNormalMap;                                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9CTY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           NormalMapSize;                                           // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MetallicConstant;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bMetallicMap;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ET01[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           MetallicMapSize;                                         // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RoughnessConstant;                                       // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRoughnessMap;                                           // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ICRF[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           RoughnessMapSize;                                        // 0x002C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpecularConstant;                                        // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSpecularMap;                                            // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9Z5K[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           SpecularMapSize;                                         // 0x003C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MeshProxySettings
	 * Size -> 0x0070
	 */
	struct FMeshProxySettings
	{
	public:
		int32_t                                                    ScreenSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMaterialSimplificationSettings                     Material;                                                // 0x0004(0x0044) Edit
		int32_t                                                    TextureWidth;                                            // 0x0048(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TextureHeight;                                           // 0x004C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bExportNormalMap;                                        // 0x0050(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bExportMetallicMap;                                      // 0x0051(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bExportRoughnessMap;                                     // 0x0052(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bExportSpecularMap;                                      // 0x0053(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bRecalculateNormals;                                     // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GM7X[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HardAngleThreshold;                                      // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MergeDistance;                                           // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseClippingPlane;                                       // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IO2F[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClippingLevel;                                           // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AxisIndex;                                               // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPlaneNegativeHalfspace;                                 // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OKBS[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PresortedBillboardsParams
	 * Size -> 0x0008
	 */
	struct FPresortedBillboardsParams
	{
	public:
		EPresortedBillboardsMode                                   Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J7H1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumDirections;                                           // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.MeshBuildSettings
	 * Size -> 0x0040
	 */
	struct FMeshBuildSettings
	{
	public:
		bool                                                       bUseMikkTSpace;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRecomputeNormals;                                       // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRecomputeTangents;                                      // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRemoveDegenerates;                                      // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBuildAdjacencyBuffer;                                   // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseFullPrecisionUVs;                                    // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bGenerateLightmapUVs;                                    // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W3PT[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPresortedBillboardsParams                          PresortedBillboardsParams;                               // 0x0008(0x0008) Edit
		int32_t                                                    MinLightmapResolution;                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SrcLightmapIndex;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DstLightmapIndex;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuildScale;                                              // 0x001C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BuildScale3D;                                            // 0x0020(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DistanceFieldResolutionScale;                            // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bGenerateDistanceFieldAsIfTwoSided;                      // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WWRO[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         DistanceFieldReplacementMesh;                            // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.MeshReductionSettings
	 * Size -> 0x0058
	 */
	struct FMeshReductionSettings
	{
	public:
		float                                                      PercentTriangles;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDeviation;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WeldingThreshold;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HardAngleThreshold;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMeshFeatureImportance                                     SilhouetteImportance;                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMeshFeatureImportance                                     TextureImportance;                                       // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMeshFeatureImportance                                     ShadingImportance;                                       // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bActive;                                                 // 0x0013(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRecalculateNormals;                                     // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YW8T[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BaseLODModel;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bGenerateUniqueLightmapUVs;                              // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bKeepSymmetry;                                           // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bVisibilityAided;                                        // 0x001E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCullOccluded;                                           // 0x001F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EMeshFeatureImportance                                     VisibilityAggressiveness;                                // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0UP8[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSimplygonMaterialLODSettings                       MaterialLODSettings;                                     // 0x0028(0x0028) Edit
		EMeshFeatureImportance                                     VertexColorImportance;                                   // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bForceRebuild;                                           // 0x0051(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C9TB[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.POV
	 * Size -> 0x001C
	 */
	struct FPOV
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FOV;                                                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AnimUpdateRateParameters
	 * Size -> 0x0038
	 */
	struct FAnimUpdateRateParameters
	{
	public:
		unsigned char                                              UnknownData_CTST[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UpdateRate;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EvaluationRate;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInterpolateSkippedFrames;                               // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSkipUpdate;                                             // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSkipEvaluation;                                         // 0x000E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N9EA[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TickedPoseOffestTime;                                    // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AdditionalTime;                                          // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HS9L[0x4];                                   // 0x0018(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BaseNonRenderedUpdateRate;                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XFVM[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              BaseVisibleDistanceFactorThesholds;                      // 0x0028(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimSlotDesc
	 * Size -> 0x000C
	 */
	struct FAnimSlotDesc
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumChannels;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AnimSlotInfo
	 * Size -> 0x0018
	 */
	struct FAnimSlotInfo
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              ChannelWeights;                                          // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MTDResult
	 * Size -> 0x0010
	 */
	struct FMTDResult
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Distance;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.OverlapResult
	 * Size -> 0x0018
	 */
	struct FOverlapResult
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class UPrimitiveComponent>                  Component;                                               // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper
		unsigned char                                              UnknownData_VQA2[0x4];                                   // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bBlockingHit : 1;                                        // 0x0014(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_VZXV[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SwarmDebugOptions
	 * Size -> 0x0004
	 */
	struct FSwarmDebugOptions
	{
	public:
		unsigned char                                              bDistributionEnabled : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bForceContentExport : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bInitialized : 1;                                        // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_3WQX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LightmassDebugOptions
	 * Size -> 0x0010
	 */
	struct FLightmassDebugOptions
	{
	public:
		unsigned char                                              bDebugMode : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bStatsEnabled : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bGatherBSPSurfacesAcrossComponents : 1;                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_RJIE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CoplanarTolerance;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bUseImmediateImport : 1;                                 // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bImmediateProcessMappings : 1;                           // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bSortMappings : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bDumpBinaryFiles : 1;                                    // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bDebugMaterials : 1;                                     // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bPadMappings : 1;                                        // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bDebugPaddings : 1;                                      // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bOnlyCalcDebugTexelMappings : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bUseRandomColors : 1;                                    // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bColorBordersGreen : 1;                                  // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bColorByExecutionTime : 1;                               // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_049B[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExecutionTimeDivisor;                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BasedPosition
	 * Size -> 0x0038
	 */
	struct FBasedPosition
	{
	public:
		class AActor*                                              Base;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Position;                                                // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             CachedBaseLocation;                                      // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            CachedBaseRotation;                                      // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             CachedTransPosition;                                     // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.RigidBodyContactInfo
	 * Size -> 0x0030
	 */
	struct FRigidBodyContactInfo
	{
	public:
		struct FVector                                             ContactPosition;                                         // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ContactNormal;                                           // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ContactPenetration;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TAXC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysMaterial[0x2];                                       // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CollisionImpactData
	 * Size -> 0x0028
	 */
	struct FCollisionImpactData
	{
	public:
		TArray<struct FRigidBodyContactInfo>                       ContactInfos;                                            // 0x0000(0x0010) ZeroConstructor
		struct FVector                                             TotalNormalImpulse;                                      // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             TotalFrictionImpulse;                                    // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.RigidBodyState
	 * Size -> 0x0040
	 */
	struct FRigidBodyState
	{
	public:
		struct FVector_NetQuantize100                              Position;                                                // 0x0000(0x000C)
		unsigned char                                              UnknownData_VH41[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quaternion;                                              // 0x0010(0x0010) IsPlainOldData, NoDestructor
		struct FVector_NetQuantize100                              LinVel;                                                  // 0x0020(0x000C)
		struct FVector_NetQuantize100                              AngVel;                                                  // 0x002C(0x000C)
		unsigned char                                              Flags;                                                   // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_04YC[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EditedDocumentInfo
	 * Size -> 0x0018
	 */
	struct FEditedDocumentInfo
	{
	public:
		class UObject*                                             EditedObject;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           SavedViewOffset;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SavedZoomAmount;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YQKN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BPInterfaceDescription
	 * Size -> 0x0018
	 */
	struct FBPInterfaceDescription
	{
	public:
		class UClass*                                              Interface;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class UEdGraph*>                                    Graphs;                                                  // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.BPVariableDescription
	 * Size -> 0x00E0
	 */
	struct FBPVariableDescription
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               VarGuid;                                                 // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FEdGraphPinType                                     VarType;                                                 // 0x0018(0x0050) Edit
		class FString                                              FriendlyName;                                            // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FText                                                Category;                                                // 0x0078(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_P5NM[0x20];                                  // 0x0090(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint64_t                                                   PropertyFlags;                                           // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RepNotifyFunc;                                           // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBPVariableMetaDataEntry>                    MetaDataArray;                                           // 0x00C0(0x0010) Edit, ZeroConstructor
		class FString                                              DefaultValue;                                            // 0x00D0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.MemberReference
	 * Size -> 0x0038
	 */
	struct FMemberReference
	{
	public:
		class UObject*                                             MemberParent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class FString                                              MemberScope;                                             // 0x0008(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash
		class FName                                                MemberName;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FGuid                                               MemberGuid;                                              // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		bool                                                       bSelfContext;                                            // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		bool                                                       bWasDeprecated;                                          // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_71Z2[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LatentActionManager
	 * Size -> 0x00F0
	 */
	struct FLatentActionManager
	{
	public:
		unsigned char                                              UnknownData_9Q38[0xF0];                                  // 0x0000(0x00F0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EndClothSimulationFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FEndClothSimulationFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_KPNZ[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StartClothSimulationFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FStartClothSimulationFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_40B5[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EndPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FEndPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_MT8U[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StartPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FStartPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_Y8NR[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LevelViewportInfo
	 * Size -> 0x0020
	 */
	struct FLevelViewportInfo
	{
	public:
		struct FVector                                             CamPosition;                                             // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            CamRotation;                                             // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CamOrthoZoom;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CamUpdated;                                              // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ITNH[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LevelSimplificationDetails
	 * Size -> 0x00AC
	 */
	struct FLevelSimplificationDetails
	{
	public:
		bool                                                       bCreatePackagePerAsset;                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D5V9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProxyPixelSize;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMaterialSimplificationSettings                     StaticMeshMaterial;                                      // 0x0008(0x0044) Edit
		bool                                                       bOverrideLandscapeExportLOD;                             // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BW2I[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LandscapeExportLOD;                                      // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMaterialSimplificationSettings                     LandscapeMaterial;                                       // 0x0054(0x0044) Edit
		bool                                                       bRemoveDownwardFacingTriangles;                          // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6DB5[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CullAngleThreshold;                                      // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBakeFoliageToLandscape;                                 // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBakeGrassToLandscape;                                   // 0x00A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bGenerateMeshNormalMap;                                  // 0x00A2(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bGenerateMeshMetallicMap;                                // 0x00A3(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bGenerateMeshRoughnessMap;                               // 0x00A4(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bGenerateMeshSpecularMap;                                // 0x00A5(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bGenerateLandscapeNormalMap;                             // 0x00A6(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bGenerateLandscapeMetallicMap;                           // 0x00A7(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bGenerateLandscapeRoughnessMap;                          // 0x00A8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bGenerateLandscapeSpecularMap;                           // 0x00A9(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_04K4[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StreamableTextureInstance
	 * Size -> 0x0014
	 */
	struct FStreamableTextureInstance
	{
	public:
		unsigned char                                              UnknownData_N5NK[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DynamicTextureInstance
	 * Size -> 0x0014 (FullSize[0x0028] - InheritedSize[0x0014])
	 */
	struct FDynamicTextureInstance : public FStreamableTextureInstance
	{
	public:
		unsigned char                                              UnknownData_TVAS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Texture;                                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAttached;                                               // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VDSZ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OriginalRadius;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NameCurveKey
	 * Size -> 0x000C
	 */
	struct FNameCurveKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Value;                                                   // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NameCurve
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FNameCurve : public FIndexedCurve
	{
	public:
		TArray<struct FNameCurveKey>                               Keys;                                                    // 0x0058(0x0010) Edit, EditFixedSize, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MergedCollisionActorsSimplification
	 * Size -> 0x000C
	 */
	struct FMergedCollisionActorsSimplification
	{
	public:
		struct FCollisionMergingSettings                           MergeCollisionSettings;                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_MZ1C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxBoundRadius;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    MinNumberOfComponentsToMerge;                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.HierarchicalSimplification
	 * Size -> 0x00D8
	 */
	struct FHierarchicalSimplification
	{
	public:
		bool                                                       bSimplifyMesh;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AUVE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawDistance;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      DesiredBoundRadius;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      DesiredFillingPercentage;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    MinNumberOfActorsToBuild;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FMeshProxySettings                                  ProxySetting;                                            // 0x0014(0x0070) Edit, AdvancedDisplay
		unsigned char                                              UnknownData_A87G[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeshMergingSettings                                MergeSetting;                                            // 0x0088(0x0050) Edit, AdvancedDisplay
	};

	/**
	 * ScriptStruct Engine.NavGraphEdge
	 * Size -> 0x0018
	 */
	struct FNavGraphEdge
	{
	public:
		unsigned char                                              UnknownData_K8ZG[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SpriteCategoryInfo
	 * Size -> 0x0078
	 */
	struct FSpriteCategoryInfo
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DisplayName;                                             // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_YMWS[0x20];                                  // 0x0020(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                Description;                                             // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_C7N1[0x20];                                  // 0x0058(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Engine.TriIndices
	 * Size -> 0x000C
	 */
	struct FTriIndices
	{
	public:
		int32_t                                                    v0;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    v1;                                                      // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    v2;                                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.TriMeshCollisionData
	 * Size -> 0x0038
	 */
	struct FTriMeshCollisionData
	{
	public:
		TArray<struct FVector>                                     Vertices;                                                // 0x0000(0x0010) ZeroConstructor, Transient
		TArray<struct FTriIndices>                                 Indices;                                                 // 0x0010(0x0010) ZeroConstructor, Transient
		unsigned char                                              bFlipNormals : 1;                                        // 0x0020(0x0001) BIT_FIELD Transient, NoDestructor
		unsigned char                                              UnknownData_THIH[0x17];                                  // 0x0021(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PreviewAttachedObjectPair
	 * Size -> 0x0030
	 */
	struct FPreviewAttachedObjectPair
	{
	public:
		TAssetPtr<class UObject>                                   AttachedObject;                                          // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_E82R[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UObject*                                             Object;                                                  // 0x0020(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AttachedTo;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.PreviewAssetAttachContainer
	 * Size -> 0x0010
	 */
	struct FPreviewAssetAttachContainer
	{
	public:
		TArray<struct FPreviewAttachedObjectPair>                  AttachedObjects;                                         // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MorphTargetMap
	 * Size -> 0x0010
	 */
	struct FMorphTargetMap
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMorphTarget*                                        MorphTarget;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BoneMirrorExport
	 * Size -> 0x0014
	 */
	struct FBoneMirrorExport
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SourceBoneName;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAxis                                                      BoneFlipAxis;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6VCD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationGroupReference
	 * Size -> 0x000C
	 */
	struct FAnimationGroupReference
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimGroupRole                                             GroupRole;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1JXS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimExtractContext
	 * Size -> 0x0008
	 */
	struct FAnimExtractContext
	{
	public:
		bool                                                       bExtractRootMotion;                                      // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_13J4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentTime;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.SmartNameMapping
	 * Size -> 0x0068
	 */
	struct FSmartNameMapping
	{
	public:
		unsigned char                                              UnknownData_CP0W[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NameMapping
	 * Size -> 0x0010
	 */
	struct FNameMapping
	{
	public:
		class FName                                                NodeName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BoneName;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.RigConfiguration
	 * Size -> 0x0018
	 */
	struct FRigConfiguration
	{
	public:
		class URig*                                                Rig;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FNameMapping>                                BoneMappingTable;                                        // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.BoneReductionSetting
	 * Size -> 0x0010
	 */
	struct FBoneReductionSetting
	{
	public:
		TArray<class FName>                                        BonesToRemove;                                           // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.ReferencePose
	 * Size -> 0x0018
	 */
	struct FReferencePose
	{
	public:
		class FName                                                PoseName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTransform>                                  ReferencePose;                                           // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimNotifyTrack
	 * Size -> 0x0028
	 */
	struct FAnimNotifyTrack
	{
	public:
		class FName                                                TrackName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TrackColor;                                              // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_71XM[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.VectorCurve
	 * Size -> 0x0168 (FullSize[0x0180] - InheritedSize[0x0018])
	 */
	struct FVectorCurve : public FAnimCurveBase
	{
	public:
		struct FRichCurve                                          FloatCurves[0x3];                                        // 0x0018(0x0168)
	};

	/**
	 * ScriptStruct Engine.TransformCurve
	 * Size -> 0x0480 (FullSize[0x0498] - InheritedSize[0x0018])
	 */
	struct FTransformCurve : public FAnimCurveBase
	{
	public:
		struct FVectorCurve                                        TranslationCurve;                                        // 0x0018(0x0180)
		struct FVectorCurve                                        RotationCurve;                                           // 0x0198(0x0180)
		struct FVectorCurve                                        ScaleCurve;                                              // 0x0318(0x0180)
	};

	/**
	 * ScriptStruct Engine.SkeletalMeshComponentPreClothTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSkeletalMeshComponentPreClothTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_ELEY[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.RootMotionExtractionStep
	 * Size -> 0x0010
	 */
	struct FRootMotionExtractionStep
	{
	public:
		class UAnimSequence*                                       AnimSequence;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartPosition;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndPosition;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AlphaBlend
	 * Size -> 0x0030
	 */
	struct FAlphaBlend
	{
	public:
		EAlphaBlendOption                                          BlendOption;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IMW6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeginValue;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredValue;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendTime;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         CustomCurve;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlphaLerp;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      AlphaBlend;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      AlphaTarget;                                             // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      BlendTimeRemaining;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      BlendedValue;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_BRQ3[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationTransitionRule
	 * Size -> 0x0010
	 */
	struct FAnimationTransitionRule
	{
	public:
		class FName                                                RuleToExecute;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TransitionReturnVal;                                     // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JGTJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TransitionIndex;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AnimationState
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAnimationState : public FAnimationStateBase
	{
	public:
		TArray<struct FAnimationTransitionRule>                    Transitions;                                             // 0x0008(0x0010) ZeroConstructor
		int32_t                                                    StateRootNodeIndex;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StartNotify;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EndNotify;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FullyBlendedNotify;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.SlotEvaluationPose
	 * Size -> 0x0048
	 */
	struct FSlotEvaluationPose
	{
	public:
		EAdditiveAnimationType                                     AdditiveType;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4AXU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XRIZ[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PerBoneBlendWeight
	 * Size -> 0x0008
	 */
	struct FPerBoneBlendWeight
	{
	public:
		int32_t                                                    SourceIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeight;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.PerBoneBlendWeights
	 * Size -> 0x0010
	 */
	struct FPerBoneBlendWeights
	{
	public:
		TArray<struct FPerBoneBlendWeight>                         BoneBlendWeights;                                        // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.A2Pose
	 * Size -> 0x0010
	 */
	struct FA2Pose
	{
	public:
		TArray<struct FTransform>                                  Bones;                                                   // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.A2CSPose
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FA2CSPose : public FA2Pose
	{
	public:
		unsigned char                                              UnknownData_UNBK[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      ComponentSpaceFlags;                                     // 0x0018(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimMontageInstance
	 * Size -> 0x00A0
	 */
	struct FAnimMontageInstance
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredWeight;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weight;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendTime;                                               // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultBlendTimeMultiplier;                              // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            NextSections;                                            // 0x0018(0x0010) ZeroConstructor
		TArray<int32_t>                                            PrevSections;                                            // 0x0028(0x0010) ZeroConstructor
		bool                                                       bPlaying;                                                // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FA5E[0x2F];                                  // 0x0039(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimNotifyEvent>                            ActiveStateBranchingPoints;                              // 0x0068(0x0010) ZeroConstructor, Transient, ContainsInstancedReference
		float                                                      Position;                                                // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRate;                                                // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9ORS[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FogVolumeInfo
	 * Size -> 0x0130
	 */
	struct FFogVolumeInfo
	{
	public:
		class UFogVolumeComponent*                                 Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YQIX[0xF8];                                  // 0x0008(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            VolumeTexture;                                           // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            MeshFogVolumeTexture;                                    // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6RVL[0x20];                                  // 0x0110(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.WaterSimPlane
	 * Size -> 0x0030
	 */
	struct FWaterSimPlane
	{
	public:
		class UClass*                                              WaterId;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UObject*                                             WaterOwner;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPlane                                              NonFFTPlane;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseFFT;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bActive;                                                 // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J75Q[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FFTBasePlaneHeight;                                      // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1UMV[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BatchedPoint
	 * Size -> 0x0028
	 */
	struct FBatchedPoint
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Color;                                                   // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PointSize;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RemainingLifeTime;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DepthPriority;                                           // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0QKS[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BatchedLine
	 * Size -> 0x0034
	 */
	struct FBatchedLine
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             End;                                                     // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Thickness;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RemainingLifeTime;                                       // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DepthPriority;                                           // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KLL6[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AssetEditorOrbitCameraPosition
	 * Size -> 0x0028
	 */
	struct FAssetEditorOrbitCameraPosition
	{
	public:
		bool                                                       bIsSet;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L4F4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CamOrbitPoint;                                           // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             CamOrbitZoom;                                            // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            CamOrbitRotation;                                        // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MeshSectionInfoMap
	 * Size -> 0x0050
	 */
	struct FMeshSectionInfoMap
	{
	public:
		unsigned char                                              UnknownData_F82A[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MeshSectionInfo
	 * Size -> 0x0008
	 */
	struct FMeshSectionInfo
	{
	public:
		int32_t                                                    MaterialIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableCollision;                                        // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCastShadow;                                             // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9B0Y[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StaticMeshSourceModel
	 * Size -> 0x00F8
	 */
	struct FStaticMeshSourceModel
	{
	public:
		struct FMeshBuildSettings                                  BuildSettings;                                           // 0x0000(0x0040) Edit
		struct FMeshReductionSettings                              ReductionSettings;                                       // 0x0040(0x0058) Edit
		struct FSimplygonRemeshingSettings                         RemeshingSettings;                                       // 0x0098(0x0050) Edit
		int32_t                                                    OverriddenLightMapRes;                                   // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LODDistance;                                             // 0x00EC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenSize;                                              // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDeviation;                                            // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.StaticMeshOptimizationSettings
	 * Size -> 0x001C
	 */
	struct FStaticMeshOptimizationSettings
	{
	public:
		EOptimizationType                                          ReductionMethod;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZMT2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NumOfTrianglesPercentage;                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDeviationPercentage;                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WeldingThreshold;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRecalcNormals;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8Z3S[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NormalsThreshold;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SilhouetteImportance;                                    // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TextureImportance;                                       // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ShadingImportance;                                       // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MT6Z[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TexturePlatformData
	 * Size -> 0x0028
	 */
	struct FTexturePlatformData
	{
	public:
		unsigned char                                              UnknownData_00H8[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TextureSource
	 * Size -> 0x0080
	 */
	struct FTextureSource
	{
	public:
		unsigned char                                              UnknownData_RMVN[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ClusterNode
	 * Size -> 0x0028
	 */
	struct FClusterNode
	{
	public:
		struct FVector                                             BoundMin;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FirstChild;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoundMax;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    LastChild;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FirstInstance;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastInstance;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.MobileInstancedStaticMeshLOD
	 * Size -> 0x0008
	 */
	struct FMobileInstancedStaticMeshLOD
	{
	public:
		float                                                      LODReduction;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceToLOD;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CompressedTrack
	 * Size -> 0x0038
	 */
	struct FCompressedTrack
	{
	public:
		TArray<unsigned char>                                      ByteStream;                                              // 0x0000(0x0010) ZeroConstructor
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor
		float                                                      Mins[0x3];                                               // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Ranges[0x3];                                             // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CurveTrack
	 * Size -> 0x0018
	 */
	struct FCurveTrack
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              CurveWeights;                                            // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.RawAnimSequenceTrack
	 * Size -> 0x0030
	 */
	struct FRawAnimSequenceTrack
	{
	public:
		TArray<struct FVector>                                     PosKeys;                                                 // 0x0000(0x0010) ZeroConstructor
		TArray<struct FQuat>                                       RotKeys;                                                 // 0x0010(0x0010) ZeroConstructor
		TArray<struct FVector>                                     ScaleKeys;                                               // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimSequenceTrackContainer
	 * Size -> 0x0020
	 */
	struct FAnimSequenceTrackContainer
	{
	public:
		TArray<struct FRawAnimSequenceTrack>                       AnimationTracks;                                         // 0x0000(0x0010) ZeroConstructor
		TArray<class FName>                                        TrackNames;                                              // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.GridBlendSample
	 * Size -> 0x001C
	 */
	struct FGridBlendSample
	{
	public:
		struct FEditorElement                                      GridElement;                                             // 0x0000(0x0018)
		float                                                      BlendWeight;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AssetImportInfo
	 * Size -> 0x0001
	 */
	struct FAssetImportInfo
	{
	public:
		unsigned char                                              UnknownData_C7LN[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimParentNodeAssetOverride
	 * Size -> 0x0018
	 */
	struct FAnimParentNodeAssetOverride
	{
	public:
		class UAnimationAsset*                                     NewAsset;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               ParentNodeGuid;                                          // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DataTableCategoryHandle
	 * Size -> 0x0018
	 */
	struct FDataTableCategoryHandle
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ColumnName;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RowContents;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.DataTableRowHandle
	 * Size -> 0x0010
	 */
	struct FDataTableRowHandle
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RowName;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BlueprintDebugData
	 * Size -> 0x0001
	 */
	struct FBlueprintDebugData
	{
	public:
		unsigned char                                              UnknownData_DR89[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PointerToUberGraphFrame
	 * Size -> 0x0008
	 */
	struct FPointerToUberGraphFrame
	{
	public:
		unsigned char                                              UnknownData_CK67[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DebuggingInfoForSingleFunction
	 * Size -> 0x0140
	 */
	struct FDebuggingInfoForSingleFunction
	{
	public:
		unsigned char                                              UnknownData_DMOH[0x140];                                 // 0x0000(0x0140) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NodeToCodeAssociation
	 * Size -> 0x0014
	 */
	struct FNodeToCodeAssociation
	{
	public:
		unsigned char                                              UnknownData_KF31[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimBlueprintDebugData
	 * Size -> 0x0001
	 */
	struct FAnimBlueprintDebugData
	{
	public:
		unsigned char                                              UnknownData_8TYX[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationFrameSnapshot
	 * Size -> 0x0001
	 */
	struct FAnimationFrameSnapshot
	{
	public:
		unsigned char                                              UnknownData_DUNR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StateMachineDebugData
	 * Size -> 0x00B0
	 */
	struct FStateMachineDebugData
	{
	public:
		unsigned char                                              UnknownData_11V4[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.WrappedStringElement
	 * Size -> 0x0018
	 */
	struct FWrappedStringElement
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FVector2D                                           LineExtent;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TextSizingParameters
	 * Size -> 0x0028
	 */
	struct FTextSizingParameters
	{
	public:
		float                                                      DrawX;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrawY;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrawXL;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrawYL;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           Scaling;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UFont*                                               DrawFont;                                                // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           SpacingAdjust;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CanvasIcon
	 * Size -> 0x0018
	 */
	struct FCanvasIcon
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      U;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      V;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UL;                                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VL;                                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.FuncStatEntry
	 * Size -> 0x0020
	 */
	struct FFuncStatEntry
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		uint64_t                                                   RPCId;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   Count;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OSAJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SpikeStatEntry
	 * Size -> 0x0018
	 */
	struct FSpikeStatEntry
	{
	public:
		TArray<struct FFuncStatEntry>                              WorstRPCs;                                               // 0x0000(0x0010) ZeroConstructor
		uint32_t                                                   TotalRPCCount;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SpikeDetected;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RFYN[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.RPCStatEntry
	 * Size -> 0x0060
	 */
	struct FRPCStatEntry
	{
	public:
		unsigned char                                              UnknownData_9QZ1[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AccumulatedPayloadInKB;                                  // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeIntervalInSec;                                       // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSpikeStatEntry                                     WorstSpike;                                              // 0x0040(0x0018)
		uint32_t                                                   RPCCount;                                                // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WGNI[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.RPCStats
	 * Size -> 0x00C0
	 */
	struct FRPCStats
	{
	public:
		struct FRPCStatEntry                                       Entries[0x2];                                            // 0x0000(0x00C0)
	};

	/**
	 * ScriptStruct Engine.FuncStatHolder
	 * Size -> 0x0028
	 */
	struct FFuncStatHolder
	{
	public:
		unsigned char                                              UnknownData_ATKP[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AutoCompleteNode
	 * Size -> 0x0028
	 */
	struct FAutoCompleteNode
	{
	public:
		int32_t                                                    IndexChar;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O3H9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            AutoCompleteListIndices;                                 // 0x0008(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_WWST[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.RuntimeCurveLinearColor
	 * Size -> 0x01E8
	 */
	struct FRuntimeCurveLinearColor
	{
	public:
		struct FRichCurve                                          ColorCurves[0x4];                                        // 0x0000(0x01E0)
		class UCurveLinearColor*                                   ExternalCurve;                                           // 0x01E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CurveTableRowHandle
	 * Size -> 0x0010
	 */
	struct FCurveTableRowHandle
	{
	public:
		class UCurveTable*                                         CurveTable;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RowName;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.GraphReference
	 * Size -> 0x0020
	 */
	struct FGraphReference
	{
	public:
		class UEdGraph*                                            MacroGraph;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UBlueprint*                                          GraphBlueprint;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FGuid                                               GraphGuid;                                               // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
	};

	/**
	 * ScriptStruct Engine.EdGraphSchemaAction
	 * Size -> 0x00C8
	 */
	struct FEdGraphSchemaAction
	{
	public:
		unsigned char                                              UnknownData_W41W[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                MenuDescription;                                         // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_MPNU[0x20];                                  // 0x0020(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              TooltipDescription;                                      // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FText                                                Category;                                                // 0x0050(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_11PS[0x20];                                  // 0x0068(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                Keywords;                                                // 0x0088(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_79Z6[0x20];                                  // 0x00A0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    Grouping;                                                // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SectionID;                                               // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.EdGraphSchemaAction_NewNode
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
	{
	public:
		class UEdGraphNode*                                        NodeTemplate;                                            // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ScreenMessageString
	 * Size -> 0x0030
	 */
	struct FScreenMessageString
	{
	public:
		uint64_t                                                   Key;                                                     // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ScreenMessage;                                           // 0x0008(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash
		struct FColor                                              DisplayColor;                                            // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      TimeToDisplay;                                           // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentTimeDisplayed;                                    // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4XRW[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FullyLoadedPackagesInfo
	 * Size -> 0x0038
	 */
	struct FFullyLoadedPackagesInfo
	{
	public:
		EFullyLoadPackageType                                      FullyLoadType;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_94OA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Tag;                                                     // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<class FName>                                        PackagesToLoad;                                          // 0x0018(0x0010) ZeroConstructor
		TArray<class UObject*>                                     LoadedObjects;                                           // 0x0028(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.LevelStreamingStatus
	 * Size -> 0x0010
	 */
	struct FLevelStreamingStatus
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bShouldBeLoaded : 1;                                     // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bShouldBeVisible : 1;                                    // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_RYYO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   LODIndex;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.NamedNetDriver
	 * Size -> 0x0010
	 */
	struct FNamedNetDriver
	{
	public:
		class UNetDriver*                                          NetDriver;                                               // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_981Y[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.WorldContext
	 * Size -> 0x0298
	 */
	struct FWorldContext
	{
	public:
		unsigned char                                              UnknownData_7D51[0xE0];                                  // 0x0000(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FURL                                                LastURL;                                                 // 0x00E0(0x0070)
		struct FURL                                                LastRemoteURL;                                           // 0x0150(0x0070)
		class UPendingNetGame*                                     PendingNetGame;                                          // 0x01C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FFullyLoadedPackagesInfo>                    PackagesToFullyLoad;                                     // 0x01C8(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_MR5I[0x10];                                  // 0x01D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULevel*>                                      LoadedLevelsForPendingMapChange;                         // 0x01E8(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_IW8E[0x18];                                  // 0x01F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObjectReferencer*>                           ObjectReferencers;                                       // 0x0210(0x0010) ZeroConstructor
		TArray<struct FLevelStreamingStatus>                       PendingLevelStreamingStatusUpdates;                      // 0x0220(0x0010) ZeroConstructor
		class UGameViewportClient*                                 GameViewport;                                            // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGameInstance*                                       OwningGameInstance;                                      // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FNamedNetDriver>                             ActiveNetDrivers;                                        // 0x0240(0x0010) ZeroConstructor, Transient
		unsigned char                                              UnknownData_GIGI[0x48];                                  // 0x0250(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ActiveHapticFeedbackEffect
	 * Size -> 0x0010
	 */
	struct FActiveHapticFeedbackEffect
	{
	public:
		class UHapticFeedbackEffect*                               HapticEffect;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3SSJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PoseLink
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FPoseLink : public FPoseLinkBase
	{	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKBase
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_HIKBase : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             HIKSettings;                                             // 0x0030(0x0018) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.HIKElements
	 * Size -> 0x0058
	 */
	struct FHIKElements
	{
	public:
		unsigned char                                              UnknownData_63HT[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpEdSelKey
	 * Size -> 0x0018
	 */
	struct FInterpEdSelKey
	{
	public:
		class UInterpGroup*                                        Group;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInterpTrack*                                        Track;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    KeyIndex;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnsnappedPosition;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.CameraPreviewInfo
	 * Size -> 0x0030
	 */
	struct FCameraPreviewInfo
	{
	public:
		class UClass*                                              PawnClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAnimSequence*                                       AnimSeq;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x0010(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		class APawn*                                               PawnInst;                                                // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.SubTrackGroup
	 * Size -> 0x0028
	 */
	struct FSubTrackGroup
	{
	public:
		class FString                                              GroupName;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<int32_t>                                            TrackIndices;                                            // 0x0010(0x0010) ZeroConstructor
		unsigned char                                              bIsCollapsed : 1;                                        // 0x0020(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bIsSelected : 1;                                         // 0x0020(0x0001) BIT_FIELD Transient, NoDestructor
		unsigned char                                              UnknownData_U30G[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SupportedSubTrackInfo
	 * Size -> 0x0020
	 */
	struct FSupportedSubTrackInfo
	{
	public:
		class UClass*                                              SupportedClass;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FString                                              SubTrackName;                                            // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    GroupIndex;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I8MB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ClientReceiveData
	 * Size -> 0x0040
	 */
	struct FClientReceiveData
	{
	public:
		class APlayerController*                                   LocalPC;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MessageType;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MessageIndex;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BEAE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageString;                                           // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
		class APlayerState*                                        RelatedPlayerState_2;                                    // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlayerState*                                        RelatedPlayerState_3;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             OptionalObject;                                          // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ParticleCurvePair
	 * Size -> 0x0018
	 */
	struct FParticleCurvePair
	{
	public:
		class FString                                              CurveName;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class UObject*                                             CurveObject;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.BeamTargetData
	 * Size -> 0x000C
	 */
	struct FBeamTargetData
	{
	public:
		class FName                                                TargetName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetPercentage;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ParticleSystemReplayFrame
	 * Size -> 0x0010
	 */
	struct FParticleSystemReplayFrame
	{
	public:
		unsigned char                                              UnknownData_JV5G[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ParticleEmitterReplayFrame
	 * Size -> 0x0010
	 */
	struct FParticleEmitterReplayFrame
	{
	public:
		unsigned char                                              UnknownData_QF87[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundNodeEditorData
	 * Size -> 0x0008
	 */
	struct FSoundNodeEditorData
	{
	public:
		unsigned char                                              UnknownData_8942[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StreamedAudioPlatformData
	 * Size -> 0x0020
	 */
	struct FStreamedAudioPlatformData
	{
	public:
		unsigned char                                              UnknownData_2LHT[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundClassEditorData
	 * Size -> 0x0008
	 */
	struct FSoundClassEditorData
	{
	public:
		unsigned char                                              UnknownData_JJTQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationRecordingSettings
	 * Size -> 0x000C
	 */
	struct FAnimationRecordingSettings
	{
	public:
		bool                                                       bRecordInWorldSpace;                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRemoveRootAnimation;                                    // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAutoSaveAsset;                                          // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XMMF[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SampleRate;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Length;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AnimNode_ApplyAdditive
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FAnimNode_ApplyAdditive : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Base;                                                    // 0x0030(0x0018) Edit, BlueprintVisible
		struct FPoseLink                                           Additive;                                                // 0x0048(0x0018) Edit, BlueprintVisible
		float                                                      Alpha;                                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0064(0x0008) Edit, BlueprintVisible
		unsigned char                                              UnknownData_784N[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_AssetPlayerBase
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
	{
	public:
		bool                                                       bIgnoreForRelevancyTest;                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UIXU[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendWeight;                                             // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      InternalTimeAccumulator;                                 // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_LL4X[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendListBase
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	struct FAnimNode_BlendListBase : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   BlendPose;                                               // 0x0030(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
		TArray<float>                                              BlendTime;                                               // 0x0040(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
		EAlphaBlendOption                                          BlendType;                                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GM7B[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomBlendCurve;                                        // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAlphaBlend>                                 Blends;                                                  // 0x0060(0x0010) ZeroConstructor
		TArray<float>                                              BlendWeights;                                            // 0x0070(0x0010) ZeroConstructor, Protected
		TArray<float>                                              RemainingBlendTimes;                                     // 0x0080(0x0010) ZeroConstructor, Protected
		int32_t                                                    LastActiveChildIndex;                                    // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_6COY[0x14];                                  // 0x0094(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendListByBool
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
	{
	public:
		bool                                                       bActiveValue;                                            // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M52T[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendListByEnum
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
	{
	public:
		TArray<int32_t>                                            EnumToPoseIndex;                                         // 0x00A8(0x0010) ZeroConstructor
		unsigned char                                              ActiveEnumValue;                                         // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CQ8R[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendListByInt
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
	{
	public:
		int32_t                                                    ActiveChildIndex;                                        // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_REZB[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendListByObject
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FAnimNode_BlendListByObject : public FAnimNode_BlendListBase
	{
	public:
		class UClass*                                              ActiveTypeValue;                                         // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class UClass*>                                      ObjectToPoseIndex;                                       // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendSpacePlayer
	 * Size -> 0x00D0 (FullSize[0x0110] - InheritedSize[0x0040])
	 */
	struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
	{
	public:
		float                                                      X;                                                       // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Y;                                                       // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Z;                                                       // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRate;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLoop;                                                   // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_20SI[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GroupIndex;                                              // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimGroupRole                                             GroupRole;                                               // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RNNF[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlendFilter                                        BlendFilter;                                             // 0x0068(0x0090) Protected
		TArray<struct FBlendSampleData>                            BlendSampleDataCache;                                    // 0x00F8(0x0010) ZeroConstructor, Protected
		unsigned char                                              UnknownData_JM6H[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendSpaceEvaluator
	 * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
	 */
	struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
	{
	public:
		float                                                      NormalizedTime;                                          // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I8Y5[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKFloorContact
	 * Size -> 0x0078 (FullSize[0x00C0] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKFloorContact : public FAnimNode_HIKBase
	{
	public:
		bool                                                       FeetContact;                                             // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HandsContact;                                            // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FingersContact;                                          // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ToesContact;                                             // 0x004B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EHIKFeetContactType                                        FeetContactType;                                         // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHIKHandsContactType                                       HandsContactType;                                        // 0x004D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P605[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceUp;                                              // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceDown;                                            // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NbRays;                                                  // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootRadius;                                              // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTime;                                               // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Smoothing;                                               // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCollisionResponseContainer                         OverrideRaycastCollisionResponse;                        // 0x0068(0x0020) Edit, BlueprintVisible
		float                                                      FeetHeight;                                              // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeetBack;                                                // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeetMiddle;                                              // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeetFront;                                               // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeetInSide;                                              // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeetOutSide;                                             // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsHeight;                                             // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsBack;                                               // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsMiddle;                                             // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsFront;                                              // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsInSide;                                             // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsOutSide;                                            // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N58S[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKLookAt
	 * Size -> 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKLookAt : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TargetPosition;                                          // 0x004C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ChestContribution;                                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       XYOnly;                                                  // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EHIKLookAtLimits                                           Limits;                                                  // 0x005D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UEB4[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LimitsHorizontalAngle;                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LimitsVerticalAngle;                                     // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActivationSpeed;                                         // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetPositionSpeed;                                     // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHIKLookAtInterpolation                                    InterpolationMode;                                       // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZS57[0x17];                                  // 0x0071(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKOffset
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKOffset : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReachT;                                                  // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Translation;                                             // 0x0050(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EHIKEffector                                               Effector;                                                // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHIKEffectorSpace                                          EffectorSpace;                                           // 0x005D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4EBJ[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKPin
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKPin : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PinTStrength;                                            // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PinRStrength;                                            // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHIKEffector                                               Effector;                                                // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JQBJ[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKPlant
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKPlant : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HipsLevel;                                               // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectionDistance;                                      // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PullFeetInsteadOfAnkles;                                 // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsQuadruped;                                             // 0x0055(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NEKA[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChestLevel;                                              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PullHandsInsteadOfWrists;                                // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7KQV[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKPull
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKPull : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHIKEffector                                               Effector;                                                // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A334[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKReach
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKReach : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReachT;                                                  // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReachR;                                                  // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Translation;                                             // 0x0054(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FQuat                                               Orientation;                                             // 0x0060(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		EHIKEffector                                               Effector;                                                // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHIKEffectorSpace                                          EffectorSpace;                                           // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4FRG[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentBone;                                              // 0x0074(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1XUE[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKReachRotator
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKReachRotator : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReachT;                                                  // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReachR;                                                  // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Translation;                                             // 0x0054(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Orientation;                                             // 0x0060(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EHIKEffector                                               Effector;                                                // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHIKEffectorSpace                                          EffectorSpace;                                           // 0x006D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XE0N[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKRelativePlant
	 * Size -> 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKRelativePlant : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Depth;                                                   // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HipsRotationFactor;                                      // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChestRotationFactor;                                     // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceUp;                                              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceDown;                                            // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NbRays;                                                  // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootRadius;                                              // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCollisionResponseContainer                         OverrideRaycastCollisionResponse;                        // 0x0068(0x0020) Edit, BlueprintVisible
		float                                                      DeltaTime;                                               // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Smoothing;                                               // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DWRF[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKRelativePlantAndFloorContact
	 * Size -> 0x0088 (FullSize[0x00D0] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKRelativePlantAndFloorContact : public FAnimNode_HIKBase
	{
	public:
		bool                                                       FeetContact;                                             // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HandsContact;                                            // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FingersContact;                                          // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ToesContact;                                             // 0x004B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EHIKFeetContactType                                        FeetContactType;                                         // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHIKHandsContactType                                       HandsContactType;                                        // 0x004D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_81F2[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Depth;                                                   // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HipsRotationFactor;                                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChestRotationFactor;                                     // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceUp;                                              // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceDown;                                            // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NbRays;                                                  // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootRadius;                                              // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTime;                                               // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Smoothing;                                               // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCollisionResponseContainer                         OverrideRaycastCollisionResponse;                        // 0x0078(0x0020) Edit, BlueprintVisible
		float                                                      FeetHeight;                                              // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeetBack;                                                // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeetMiddle;                                              // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeetFront;                                               // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeetInSide;                                              // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeetOutSide;                                             // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsHeight;                                             // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsBack;                                               // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsMiddle;                                             // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsFront;                                              // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsInSide;                                             // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsOutSide;                                            // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CD56[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKResist
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKResist : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHIKEffector                                               Effector;                                                // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GMI8[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKSetProperty
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKSetProperty : public FAnimNode_HIKBase
	{
	public:
		EHIKProperty                                               Property;                                                // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X6XJ[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKSolve
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKSolve : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UU4W[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FComponentSpacePoseLink                             InputFKPose;                                             // 0x0050(0x0018) Edit, BlueprintVisible
		bool                                                       enablePullEngine;                                        // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       enableBodyPartSolving;                                   // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       enableLODSolver;                                         // 0x006A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       enableLegsSNS;                                           // 0x006B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       enableArmsSNS;                                           // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       boneLengthFromInputPose;                                 // 0x006D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveLeftShoulder;                               // 0x006E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveRightShoulder;                              // 0x006F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveLeftArm;                                    // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveRightArm;                                   // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveLeftLeg;                                    // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveRightLeg;                                   // 0x0073(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveLeftHand;                                   // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveRightHand;                                  // 0x0075(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveLeftFoot;                                   // 0x0076(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveRightFoot;                                  // 0x0077(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveHead;                                       // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bodyPartSolveSpine;                                      // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       checkOutputPoseContainsNaNs;                             // 0x007A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B3PF[0x5];                                   // 0x007B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HIKTest
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FAnimNode_HIKTest : public FAnimNode_HIKBase
	{
	public:
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Param;                                                   // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Intensity;                                               // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MU5B[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_LayeredBoneBlend
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0030(0x0018) Edit, BlueprintVisible
		TArray<struct FPoseLink>                                   BlendPoses;                                              // 0x0048(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
		TArray<struct FInputBlendPose>                             LayerSetup;                                              // 0x0058(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
		TArray<float>                                              BlendWeights;                                            // 0x0068(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
		bool                                                       bMeshSpaceRotationBlend;                                 // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ECurveBlendOption                                          CurveBlendOption;                                        // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E38M[0x26];                                  // 0x007A(0x0026) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_MultiWayBlend
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FAnimNode_MultiWayBlend : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   Poses;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              DesiredAlphas;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bAdditiveNode;                                           // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bNormalizeAlpha;                                         // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WKZG[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0054(0x0008) Edit, BlueprintVisible
		unsigned char                                              UnknownData_GJPA[0x14];                                  // 0x005C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_MeshSpaceRefPose
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
	{	};

	/**
	 * ScriptStruct Engine.AnimNode_RefPose
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAnimNode_RefPose : public FAnimNode_Base
	{
	public:
		ERefPoseType                                               RefPoseType;                                             // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6FLK[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_Root
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_Root : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Result;                                                  // 0x0030(0x0018) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.AnimNode_RotateRootBone
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	struct FAnimNode_RotateRootBone : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0030(0x0018) Edit, BlueprintVisible
		float                                                      Pitch;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Yaw;                                                     // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            MeshToComponent;                                         // 0x0050(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PJZV[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_RotationOffsetBlendSpace
	 * Size -> 0x0018 (FullSize[0x0128] - InheritedSize[0x0110])
	 */
	struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0110(0x0018) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.AnimNode_SaveCachedPose
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	struct FAnimNode_SaveCachedPose : public FAnimNode_Base
	{
	public:
		int16_t                                                    LastInitializedContextCounter;                           // 0x0030(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int16_t                                                    LastCacheBonesContextCounter;                            // 0x0032(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int16_t                                                    LastUpdatedContextCounter;                               // 0x0034(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int16_t                                                    LastEvaluatedContextCounter;                             // 0x0036(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPoseLink                                           Pose;                                                    // 0x0038(0x0018) Edit, BlueprintVisible
		unsigned char                                              UnknownData_S8WG[0x40];                                  // 0x0050(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_SequenceEvaluator
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
	{
	public:
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExplicitTime;                                            // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ADND[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_SequencePlayer
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
	{
	public:
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLoopAnimation;                                          // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KU91[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GroupIndex;                                              // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimGroupRole                                             GroupRole;                                               // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TM2R[0xB];                                   // 0x0055(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_Slot
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	struct FAnimNode_Slot : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0030(0x0018) Edit, BlueprintVisible
		class FName                                                SlotName;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C7MR[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    LastSlotNodeInitializationCounter;                       // 0x0058(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W085[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_StateMachine
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	struct FAnimNode_StateMachine : public FAnimNode_Base
	{
	public:
		int32_t                                                    StateMachineIndexInClass;                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxTransitionsPerFrame;                                  // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DK1D[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentState;                                            // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      ElapsedTime;                                             // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_LEDB[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationPotentialTransition
	 * Size -> 0x0010
	 */
	struct FAnimationPotentialTransition
	{
	public:
		unsigned char                                              UnknownData_J2WJ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationActiveTransitionEntry
	 * Size -> 0x0090
	 */
	struct FAnimationActiveTransitionEntry
	{
	public:
		unsigned char                                              UnknownData_SNBU[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
	{
	public:
		EEvaluatorDataSource                                       DataSource;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEvaluatorMode                                             EvaluatorMode;                                           // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4Q6U[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FramesToCachePose;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EG26[0x40];                                  // 0x0038(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CacheFramesRemaining;                                    // 0x0078(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2U4S[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_TransitionResult
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FAnimNode_TransitionResult : public FAnimNode_Base
	{
	public:
		bool                                                       bCanEnterTransition;                                     // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_28UT[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationNode_TwoWayBlend
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FAnimationNode_TwoWayBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           A;                                                       // 0x0030(0x0018) Edit, BlueprintVisible
		struct FPoseLink                                           B;                                                       // 0x0048(0x0018) Edit, BlueprintVisible
		float                                                      Alpha;                                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0064(0x0008) Edit, BlueprintVisible
		unsigned char                                              UnknownData_7QQX[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_UseCachedPose
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_UseCachedPose : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           LinkToCachingNode;                                       // 0x0030(0x0018)
	};

	/**
	 * ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           LocalPose;                                               // 0x0030(0x0018) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0030(0x0018) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.DummySpacerCameraTypes
	 * Size -> 0x0001
	 */
	struct FDummySpacerCameraTypes
	{
	public:
		unsigned char                                              UnknownData_LPNJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NetTimeStampCalculator
	 * Size -> 0x0070
	 */
	struct FNetTimeStampCalculator
	{
	public:
		unsigned char                                              UnknownData_N8DP[0x6A];                                  // 0x0000(0x006A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   TimesWrapped;                                            // 0x006A(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint16_t                                                   PackedTimeStamp;                                         // 0x006C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DJEZ[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StreamableManager
	 * Size -> 0x00C0
	 */
	struct FStreamableManager
	{
	public:
		unsigned char                                              UnknownData_W6UW[0xC0];                                  // 0x0000(0x00C0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ServerMigrationTelemetryFailedData
	 * Size -> 0x0010
	 */
	struct FServerMigrationTelemetryFailedData
	{
	public:
		class FString                                              Stage;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ServerMigrationTelemetryActorData
	 * Size -> 0x0028
	 */
	struct FServerMigrationTelemetryActorData
	{
	public:
		TAssetPtr<class UClass>                                    ActorClass;                                              // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_9NY9[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    Count;                                                   // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SOLS[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ServerMigrationTelemetrySucceededData
	 * Size -> 0x0020
	 */
	struct FServerMigrationTelemetrySucceededData
	{
	public:
		TArray<struct FServerMigrationTelemetryActorData>          ActorDetails;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		float                                                      TotalTime;                                               // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumClients;                                              // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumActorsMigrated;                                       // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ActorSerialisationBytes;                                 // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Engine.ReplicatedPhysicsState
	 * Size -> 0x0050
	 */
	struct FReplicatedPhysicsState
	{
	public:
		class UPrimitiveComponent*                                 MovementBase;                                            // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AttachParent;                                            // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRepMovement                                        ReplicatedMovement;                                      // 0x0010(0x0038)
		bool                                                       IsAttached;                                              // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FVFP[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.RepTransform
	 * Size -> 0x0018
	 */
	struct FRepTransform
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ReplicatedTransformState
	 * Size -> 0x0030
	 */
	struct FReplicatedTransformState
	{
	public:
		class USceneComponent*                                     MovementBase;                                            // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AttachParent;                                            // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRepTransform                                       ReplicatedMovement;                                      // 0x0010(0x0018)
		bool                                                       IsAttached;                                              // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9TLP[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkelMeshMergeMorphTarget
	 * Size -> 0x000C
	 */
	struct FSkelMeshMergeMorphTarget
	{
	public:
		unsigned char                                              UnknownData_88NQ[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
