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
	 * Function ChecklistMaps.NamedChecklistEventActionData.EventsSource
	 */
	struct UNamedChecklistEventActionData_EventsSource_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function ChecklistMaps.ChecklistMap.RefreshContents
	 */
	struct AChecklistMap_RefreshContents_Params
	{	};

	/**
	 * Function ChecklistMaps.ChecklistMap.OnTextCanvasUpdate
	 */
	struct AChecklistMap_OnTextCanvasUpdate_Params
	{
	public:
		class UCanvas*                                             Canvas;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChecklistMaps.ChecklistMap.OnRep_Contents
	 */
	struct AChecklistMap_OnRep_Contents_Params
	{
	public:
		struct FChecklistMapContents                               InPreviousContents;                                      // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
