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
	 * Function BP_Minimap_Origin.BP_Minimap_Origin_C.Get2dPosition
	 */
	struct ABP_Minimap_Origin_C_Get2dPosition_Params
	{
	public:
		struct FVector                                             SourceLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWantSideView;                                           // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EGSH[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           OutCanvasPosition;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Minimap_Origin.BP_Minimap_Origin_C.SaveImageToDisk
	 */
	struct ABP_Minimap_Origin_C_SaveImageToDisk_Params
	{	};

	/**
	 * Function BP_Minimap_Origin.BP_Minimap_Origin_C.SetupCaptureComp
	 */
	struct ABP_Minimap_Origin_C_SetupCaptureComp_Params
	{	};

	/**
	 * Function BP_Minimap_Origin.BP_Minimap_Origin_C.Setup
	 */
	struct ABP_Minimap_Origin_C_Setup_Params
	{	};

	/**
	 * Function BP_Minimap_Origin.BP_Minimap_Origin_C.UserConstructionScript
	 */
	struct ABP_Minimap_Origin_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
