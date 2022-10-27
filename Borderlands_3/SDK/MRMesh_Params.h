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
	 * Function MRMesh.MeshReconstructorBase.StopReconstruction
	 */
	struct UMeshReconstructorBase_StopReconstruction_Params
	{	};

	/**
	 * Function MRMesh.MeshReconstructorBase.StartReconstruction
	 */
	struct UMeshReconstructorBase_StartReconstruction_Params
	{	};

	/**
	 * Function MRMesh.MeshReconstructorBase.PauseReconstruction
	 */
	struct UMeshReconstructorBase_PauseReconstruction_Params
	{	};

	/**
	 * Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	 */
	struct UMeshReconstructorBase_IsReconstructionStarted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	 */
	struct UMeshReconstructorBase_IsReconstructionPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	 */
	struct UMeshReconstructorBase_DisconnectMRMesh_Params
	{	};

	/**
	 * Function MRMesh.MeshReconstructorBase.ConnectMRMesh
	 */
	struct UMeshReconstructorBase_ConnectMRMesh_Params
	{
	public:
		class UMRMeshComponent*                                    Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.IsConnected
	 */
	struct UMRMeshComponent_IsConnected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	 */
	struct UMRMeshComponent_ForceNavMeshUpdate_Params
	{	};

	/**
	 * Function MRMesh.MRMeshComponent.Clear
	 */
	struct UMRMeshComponent_Clear_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
