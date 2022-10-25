#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged
	 */
	struct ADrawDebugService_OnRep_PersistentShapeChanged_Params
	{	};

	/**
	 * Function AthenaDebug.DrawDebugService.OnRep_IsDrawDebugActiveChanged
	 */
	struct ADrawDebugService_OnRep_IsDrawDebugActiveChanged_Params
	{	};

	/**
	 * Function AthenaDebug.DrawDebugService.Multicast_ClearGroup
	 */
	struct ADrawDebugService_Multicast_ClearGroup_Params
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaDebug.DrawDebugService.Multicast_AddStrings
	 */
	struct ADrawDebugService_Multicast_AddStrings_Params
	{
	public:
		TArray<struct FDrawDebugItemString>                        Strings;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function AthenaDebug.DrawDebugService.Multicast_AddSpheres
	 */
	struct ADrawDebugService_Multicast_AddSpheres_Params
	{
	public:
		TArray<struct FDrawDebugItemSphere>                        Spheres;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function AthenaDebug.DrawDebugService.Multicast_AddSectors
	 */
	struct ADrawDebugService_Multicast_AddSectors_Params
	{
	public:
		TArray<struct FDrawDebugItemSector>                        Sectors;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function AthenaDebug.DrawDebugService.Multicast_AddLines
	 */
	struct ADrawDebugService_Multicast_AddLines_Params
	{
	public:
		TArray<struct FDrawDebugItemLine>                          Lines;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function AthenaDebug.DrawDebugService.Multicast_AddCapsules
	 */
	struct ADrawDebugService_Multicast_AddCapsules_Params
	{
	public:
		TArray<struct FDrawDebugItemCapsule>                       Capsules;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function AthenaDebug.DrawDebugService.Multicast_AddBoxes
	 */
	struct ADrawDebugService_Multicast_AddBoxes_Params
	{
	public:
		TArray<struct FDrawDebugItemBox>                           Boxes;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
