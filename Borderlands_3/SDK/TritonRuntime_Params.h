#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function TritonRuntime.TritonAcousticDataComponent.VisualizeMaterials
	 */
	struct UTritonAcousticDataComponent_VisualizeMaterials_Params
	{	};

	/**
	 * Function TritonRuntime.TritonAcousticDataComponent.UpdateProbeLocations
	 */
	struct UTritonAcousticDataComponent_UpdateProbeLocations_Params
	{	};

	/**
	 * Function TritonRuntime.TritonAcousticDataComponent.RefreshCachedVoxelData
	 */
	struct UTritonAcousticDataComponent_RefreshCachedVoxelData_Params
	{	};

	/**
	 * Function TritonRuntime.TritonAcousticDataComponent.BuildFallbackAcousticData
	 */
	struct UTritonAcousticDataComponent_BuildFallbackAcousticData_Params
	{	};

	/**
	 * Function TritonRuntime.TritonAcousticDataComponent.AuditProbeLocations
	 */
	struct UTritonAcousticDataComponent_AuditProbeLocations_Params
	{	};

	/**
	 * Function TritonRuntime.TritonProbeLocationProvider.FindProbeLocations
	 */
	struct ATritonProbeLocationProvider_FindProbeLocations_Params
	{
	public:
		struct FBoxSphereBounds                                    WorldBoxSphere;                                          // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9M56[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAudioOcclusionVoxelDataProvider*                    GeoVoxels;                                               // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioOcclusionVoxelDataProvider*                    NavVoxels;                                               // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     out_ResultProbeLocations;                                // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
