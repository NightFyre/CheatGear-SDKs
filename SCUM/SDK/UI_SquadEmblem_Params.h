#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_SquadEmblem.UI_SquadEmblem_C.GetEmblemData
	 */
	struct UUI_SquadEmblem_C_GetEmblemData_Params
	{
	public:
		struct FConZSquadEmblem                                    Data;                                                    // 0x0000(0x0008)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_SquadEmblem.UI_SquadEmblem_C.SetEmblemData
	 */
	struct UUI_SquadEmblem_C_SetEmblemData_Params
	{
	public:
		struct FConZSquadEmblem                                    Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_SquadEmblem.UI_SquadEmblem_C.PreConstruct
	 */
	struct UUI_SquadEmblem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SquadEmblem.UI_SquadEmblem_C.ExecuteUbergraph_UI_SquadEmblem
	 */
	struct UUI_SquadEmblem_C_ExecuteUbergraph_UI_SquadEmblem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
