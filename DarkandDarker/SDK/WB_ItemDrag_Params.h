#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_ItemDrag.WB_ItemDrag_C.OnFinishedSoundDataLoad
	 */
	struct UWB_ItemDrag_C_OnFinishedSoundDataLoad_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemDrag.WB_ItemDrag_C.PreConstruct
	 */
	struct UWB_ItemDrag_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemDrag.WB_ItemDrag_C.Construct
	 */
	struct UWB_ItemDrag_C_Construct_Params
	{	};

	/**
	 * Function WB_ItemDrag.WB_ItemDrag_C.ExecuteUbergraph_WB_ItemDrag
	 */
	struct UWB_ItemDrag_C_ExecuteUbergraph_WB_ItemDrag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
