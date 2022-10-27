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
	 * Function FerretBlueprint.MemFerretBlueprintInterface.StopTracking
	 */
	struct UMemFerretBlueprintInterface_StopTracking_Params
	{	};

	/**
	 * Function FerretBlueprint.MemFerretBlueprintInterface.StopAndSave
	 */
	struct UMemFerretBlueprintInterface_StopAndSave_Params
	{
	public:
		class FString                                              FileName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function FerretBlueprint.MemFerretBlueprintInterface.StopAllocTracking
	 */
	struct UMemFerretBlueprintInterface_StopAllocTracking_Params
	{	};

	/**
	 * Function FerretBlueprint.MemFerretBlueprintInterface.StartTracking
	 */
	struct UMemFerretBlueprintInterface_StartTracking_Params
	{	};

	/**
	 * Function FerretBlueprint.MemFerretBlueprintInterface.Snapshot
	 */
	struct UMemFerretBlueprintInterface_Snapshot_Params
	{
	public:
		class FString                                              FileName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ShouldClearData;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3Q8P[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function FerretBlueprint.MemFerretBlueprintInterface.SetMemoryStatCollectionInterval
	 */
	struct UMemFerretBlueprintInterface_SetMemoryStatCollectionInterval_Params
	{
	public:
		float                                                      CollectionInterval;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FerretBlueprint.MemFerretBlueprintInterface.Reset
	 */
	struct UMemFerretBlueprintInterface_Reset_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
