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
	 * Function GbxNav.GbxNavComponent.TryMoving
	 */
	struct UGbxNavComponent_TryMoving_Params
	{
	public:
		float                                                      fDuration;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavComponent.SetPathFindingData
	 */
	struct UGbxNavComponent_SetPathFindingData_Params
	{
	public:
		class UHavokPathFindingData*                               NewPathFindingData;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavComponent.ResetPathFindingData
	 */
	struct UGbxNavComponent_ResetPathFindingData_Params
	{	};

	/**
	 * Function GbxNav.GbxNavComponent.GetPathFindingData
	 */
	struct UGbxNavComponent_GetPathFindingData_Params
	{
	public:
		class UHavokPathFindingData*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.AIVehicleFlightComponent.OnRep_FlightState
	 */
	struct UAIVehicleFlightComponent_OnRep_FlightState_Params
	{	};

	/**
	 * Function GbxNav.GbxAnimStateManager_AINav.Owner_PostBeginPlay
	 */
	struct UGbxAnimStateManager_AINav_Owner_PostBeginPlay_Params
	{	};

	/**
	 * Function GbxNav.GbxNavBlueprintLibrary.SetAINavPathType
	 */
	struct UGbxNavBlueprintLibrary_SetAINavPathType_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxPathType                                               PathType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavBlueprintLibrary.ResourceUnlockAvoidance
	 */
	struct UGbxNavBlueprintLibrary_ResourceUnlockAvoidance_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Reason;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavBlueprintLibrary.ResourceLockAvoidance
	 */
	struct UGbxNavBlueprintLibrary_ResourceLockAvoidance_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Reason;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavBlueprintLibrary.ForceNavMeshLayer
	 */
	struct UGbxNavBlueprintLibrary_ForceNavMeshLayer_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxNavMeshLayer*                                    ForcedNavMeshLayer;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPointForActor
	 */
	struct UGbxNavBlueprintLibrary_FindNavMeshPointForActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Point;                                                   // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Result;                                                  // 0x0018(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPoint
	 */
	struct UGbxNavBlueprintLibrary_FindNavMeshPoint_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Point;                                                   // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Result;                                                  // 0x0018(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M0X5[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxNavMeshLayer*                                    Layer;                                                   // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavBoxComponent.DoAutoResize
	 */
	struct UGbxNavBoxComponent_DoAutoResize_Params
	{	};

	/**
	 * Function GbxNav.GbxNavMeshPainter.SetPainterEnabled
	 */
	struct AGbxNavMeshPainter_SetPainterEnabled_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavMeshPainter.IsPainterEnabled
	 */
	struct AGbxNavMeshPainter_IsPainterEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavMeshPainterComponent.SetPainterEnabled
	 */
	struct UGbxNavMeshPainterComponent_SetPainterEnabled_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavMeshPainterComponent.SetPainterAlwaysEnabled
	 */
	struct UGbxNavMeshPainterComponent_SetPainterAlwaysEnabled_Params
	{
	public:
		bool                                                       bNewAlwaysEnabled;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.GbxNavMeshPainterComponent.ResetToStatic
	 */
	struct UGbxNavMeshPainterComponent_ResetToStatic_Params
	{	};

	/**
	 * Function GbxNav.GbxNavMeshPainterComponent.IsPainterEnabled
	 */
	struct UGbxNavMeshPainterComponent_IsPainterEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.HavokNavObstacleComponent.UnlockObstacle
	 */
	struct UHavokNavObstacleComponent_UnlockObstacle_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.HavokNavObstacleComponent.LockObstacle
	 */
	struct UHavokNavObstacleComponent_LockObstacle_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.HavokUserEdgeActor.SetEdgeEnabled
	 */
	struct AHavokUserEdgeActor_SetEdgeEnabled_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.HavokUserEdgeActor.IsEdgeEnabled
	 */
	struct AHavokUserEdgeActor_IsEdgeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.HavokUserEdgeComponent.SetEdgeEnabled
	 */
	struct UHavokUserEdgeComponent_SetEdgeEnabled_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.HavokUserEdgeComponent.IsEdgeEnabled
	 */
	struct UHavokUserEdgeComponent_IsEdgeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.HavokUserEdgeComponent.AnchorDestroyed
	 */
	struct UHavokUserEdgeComponent_AnchorDestroyed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxNav.HavokUserEdgePreviewComponent.OnBlueprintCompiled
	 */
	struct UHavokUserEdgePreviewComponent_OnBlueprintCompiled_Params
	{
	public:
		class UBlueprint*                                          BP;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
