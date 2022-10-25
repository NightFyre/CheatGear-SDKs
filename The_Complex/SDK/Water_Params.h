#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Water.BuoyancyComponent.OnPontoonExitedWater
	 */
	struct UBuoyancyComponent_OnPontoonExitedWater_Params
	{
	public:
		struct FSphericalPontoon                                   Pontoon;                                                 // 0x0000(0x02D0)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.BuoyancyComponent.OnPontoonEnteredWater
	 */
	struct UBuoyancyComponent_OnPontoonEnteredWater_Params
	{
	public:
		struct FSphericalPontoon                                   Pontoon;                                                 // 0x0000(0x02D0)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.BuoyancyComponent.IsOverlappingWaterBody
	 */
	struct UBuoyancyComponent_IsOverlappingWaterBody_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.BuoyancyComponent.IsInWaterBody
	 */
	struct UBuoyancyComponent_IsInWaterBody_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
	 */
	struct UBuoyancyComponent_GetLastWaterSurfaceInfo_Params
	{
	public:
		struct FVector                                             OutWaterPlaneLocation;                                   // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWaterPlaneNormal;                                     // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWaterSurfacePosition;                                 // 0x0030(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutWaterDepth;                                           // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutWaterBodyIdx;                                         // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWaterVelocity;                                        // 0x0050(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents
	 */
	struct UBuoyancyComponent_GetCurrentWaterBodyComponents_Params
	{
	public:
		TArray<class UWaterBodyComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.BuoyancyManager.GetBuoyancyComponentManager
	 */
	struct ABuoyancyManager_GetBuoyancyComponentManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABuoyancyManager*                                    Manager;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
	 */
	struct UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Params
	{
	public:
		TArray<struct FGerstnerWave>                               OutWaves;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent
	 */
	struct UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWaterBodyComponent*                                 WaterBodyComponent;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
	 */
	struct UNiagaraWaterFunctionLibrary_SetWaterBody_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AWaterBody*                                          WaterBody;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.SetWaterWaves
	 */
	struct AWaterBody_SetWaterWaves_Params
	{
	public:
		class UWaterWavesBase*                                     InWaterWaves;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.SetWaterMaterial
	 */
	struct AWaterBody_SetWaterMaterial_Params
	{
	public:
		class UMaterialInterface*                                  InMaterial;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.OnWaterBodyChanged
	 */
	struct AWaterBody_OnWaterBodyChanged_Params
	{
	public:
		bool                                                       bShapeOrPositionChanged;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWeightmapSettingsChanged;                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey
	 */
	struct AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Params
	{
	public:
		float                                                      InKey;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_57LY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetWaterVelocityAtSplineInputKey
	 */
	struct AWaterBody_GetWaterVelocityAtSplineInputKey_Params
	{
	public:
		float                                                      InKey;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetWaterSpline
	 */
	struct AWaterBody_GetWaterSpline_Params
	{
	public:
		class UWaterSplineComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetWaterMaterialInstance
	 */
	struct AWaterBody_GetWaterMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetWaterBodyType
	 */
	struct AWaterBody_GetWaterBodyType_Params
	{
	public:
		EWaterBodyType                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetWaterBodyComponent
	 */
	struct AWaterBody_GetWaterBodyComponent_Params
	{
	public:
		class UWaterBodyComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
	 */
	struct AWaterBody_GetRiverToOceanTransitionMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
	 */
	struct AWaterBody_GetRiverToLakeTransitionMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetIslands
	 */
	struct AWaterBody_GetIslands_Params
	{
	public:
		TArray<class AWaterBodyIsland*>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetExclusionVolumes
	 */
	struct AWaterBody_GetExclusionVolumes_Params
	{
	public:
		TArray<class AWaterBodyExclusionVolume*>                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetAudioIntensityAtSplineInputKey
	 */
	struct AWaterBody_GetAudioIntensityAtSplineInputKey_Params
	{
	public:
		float                                                      InKey;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.OnWaterBodyChanged
	 */
	struct UWaterBodyComponent_OnWaterBodyChanged_Params
	{
	public:
		bool                                                       bShapeOrPositionChanged;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWeightmapSettingsChanged;                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetWaterWaves
	 */
	struct UWaterBodyComponent_GetWaterWaves_Params
	{
	public:
		class UWaterWavesBase*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey
	 */
	struct UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Params
	{
	public:
		float                                                      InKey;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation
	 */
	struct UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWaterSurfaceLocation;                                 // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWaterSurfaceNormal;                                   // 0x0030(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWaterVelocity;                                        // 0x0048(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutWaterDepth;                                           // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeDepth;                                           // 0x0064(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetWaterSpline
	 */
	struct UWaterBodyComponent_GetWaterSpline_Params
	{
	public:
		class UWaterSplineComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetWaterMaterialInstance
	 */
	struct UWaterBodyComponent_GetWaterMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetWaterMaterial
	 */
	struct UWaterBodyComponent_GetWaterMaterial_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetWaterBodyActor
	 */
	struct UWaterBodyComponent_GetWaterBodyActor_Params
	{
	public:
		class AWaterBody*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance
	 */
	struct UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetStandardRenderableComponents
	 */
	struct UWaterBodyComponent_GetStandardRenderableComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance
	 */
	struct UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance
	 */
	struct UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetMaxWaveHeight
	 */
	struct UWaterBodyComponent_GetMaxWaveHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetIslands
	 */
	struct UWaterBodyComponent_GetIslands_Params
	{
	public:
		TArray<class AWaterBodyIsland*>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetExclusionVolumes
	 */
	struct UWaterBodyComponent_GetExclusionVolumes_Params
	{
	public:
		TArray<class AWaterBodyExclusionVolume*>                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyComponent.GetCollisionComponents
	 */
	struct UWaterBodyComponent_GetCollisionComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBodyIsland.GetWaterSpline
	 */
	struct AWaterBodyIsland_GetWaterSpline_Params
	{
	public:
		class UWaterSplineComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterMeshComponent.IsEnabled
	 */
	struct UWaterMeshComponent_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.SetOceanFloodHeight
	 */
	struct UWaterSubsystem_SetOceanFloodHeight_Params
	{
	public:
		float                                                      InFloodHeight;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.PrintToWaterLog
	 */
	struct UWaterSubsystem_PrintToWaterLog_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWarning;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.IsWaterRenderingEnabled
	 */
	struct UWaterSubsystem_IsWaterRenderingEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
	 */
	struct UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
	 */
	struct UWaterSubsystem_IsShallowWaterSimulationEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.GetWaterTimeSeconds
	 */
	struct UWaterSubsystem_GetWaterTimeSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
	 */
	struct UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
	 */
	struct UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
	 */
	struct UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
	 */
	struct UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.GetOceanTotalHeight
	 */
	struct UWaterSubsystem_GetOceanTotalHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.GetOceanFloodHeight
	 */
	struct UWaterSubsystem_GetOceanFloodHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.GetOceanBaseHeight
	 */
	struct UWaterSubsystem_GetOceanBaseHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterSubsystem.GetCameraUnderwaterDepth
	 */
	struct UWaterSubsystem_GetCameraUnderwaterDepth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
