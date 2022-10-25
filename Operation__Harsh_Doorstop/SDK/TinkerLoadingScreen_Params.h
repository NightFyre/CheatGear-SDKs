#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function TinkerLoadingScreen.LoadingScreenWidgetInterface.SetLoadingScreenDescription
	 */
	struct ULoadingScreenWidgetInterface_SetLoadingScreenDescription_Params
	{
	public:
		struct FLoadingScreenDescription                           Description;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TinkerLoadingScreen.LoadingScreenWidgetInterface.SetLevelLoadData
	 */
	struct ULoadingScreenWidgetInterface_SetLevelLoadData_Params
	{
	public:
		struct FLoadScreenLevelData                                LevelData;                                               // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
