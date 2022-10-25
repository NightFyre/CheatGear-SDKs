#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_TextWithActions.BP_TextWithActions_C.UpdateTextWithActions
	 */
	struct UBP_TextWithActions_C_UpdateTextWithActions_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FLessonInputAction>                          InActions;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TextWithActions.BP_TextWithActions_C.PreConstruct
	 */
	struct UBP_TextWithActions_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TextWithActions.BP_TextWithActions_C.Construct
	 */
	struct UBP_TextWithActions_C_Construct_Params
	{	};

	/**
	 * Function BP_TextWithActions.BP_TextWithActions_C.ExecuteUbergraph_BP_TextWithActions
	 */
	struct UBP_TextWithActions_C_ExecuteUbergraph_BP_TextWithActions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
