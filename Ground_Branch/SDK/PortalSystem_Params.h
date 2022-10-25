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
	 * Function PortalSystem.PortalSystemManager.RegisterOccluder
	 */
	struct APortalSystemManager_RegisterOccluder_Params
	{
	public:
		class UPortalSystemOccluderComponent*                      occluder;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PortalSystem.PortalSystemManager.RebuildPortalSystemData
	 */
	struct APortalSystemManager_RebuildPortalSystemData_Params
	{
	public:
		bool                                                       fromBeginPlay;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PortalSystem.PortalSystemManager.OnZonesVisibilityChanged
	 */
	struct APortalSystemManager_OnZonesVisibilityChanged_Params
	{
	public:
		TArray<class APortalSystemZone*>                           zonesNewlyEnabled;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class APortalSystemZone*>                           zonesNewlyDisabled;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PortalSystem.PortalSystemManager.NotifyLightMoved
	 */
	struct APortalSystemManager_NotifyLightMoved_Params
	{
	public:
		class ULightComponent*                                     LightComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PortalSystem.PortalSystemManager.GetPortalSystemManagerInstance
	 */
	struct APortalSystemManager_GetPortalSystemManagerInstance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APortalSystemManager*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PortalSystem.PortalSystemManager.ForceUpdatePortalSystem
	 */
	struct APortalSystemManager_ForceUpdatePortalSystem_Params
	{	};

	/**
	 * Function PortalSystem.PortalSystemManager.AddLightFromActor
	 */
	struct APortalSystemManager_AddLightFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PortalSystem.PortalSystemManager.AddLight
	 */
	struct APortalSystemManager_AddLight_Params
	{
	public:
		class ULightComponent*                                     LightComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PortalSystem.PortalSystemZone.OnZoneVisibilityChange
	 */
	struct APortalSystemZone_OnZoneVisibilityChange_Params
	{
	public:
		bool                                                       newVisibility;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PortalSystem.PortalSystemZone.IsZoneVisible
	 */
	struct APortalSystemZone_IsZoneVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PortalSystem.PortalSystemZone.ContainPoint
	 */
	struct APortalSystemZone_ContainPoint_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
