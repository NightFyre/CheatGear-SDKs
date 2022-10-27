#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
		struct FSphericalPontoon                                   Pontoon;                                                 // 0x0000(0x0140)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.BuoyancyComponent.OnPontoonEnteredWater
	 */
	struct UBuoyancyComponent_OnPontoonEnteredWater_Params
	{
	public:
		struct FSphericalPontoon                                   Pontoon;                                                 // 0x0000(0x0140)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
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
		struct FVector                                             OutWaterPlaneLocation;                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWaterPlaneNormal;                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWaterSurfacePosition;                                 // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutWaterDepth;                                           // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutWaterBodyIdx;                                         // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWaterVelocity;                                        // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function Water.WaterBody.OnWaterBodyChanged
	 */
	struct AWaterBody_OnWaterBodyChanged_Params
	{
	public:
		bool                                                       bShapeOrPositionChanged;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWeightmapSettingsChanged;                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function Water.WaterBody.GetWaterMaterial
	 */
	struct AWaterBody_GetWaterMaterial_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance
	 */
	struct AWaterBody_GetUnderwaterPostProcessMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function Water.WaterBody.GetMaxWaveHeight
	 */
	struct AWaterBody_GetMaxWaveHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
