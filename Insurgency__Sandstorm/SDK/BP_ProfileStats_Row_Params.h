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
	 * Function BP_ProfileStats_Row.BP_ProfileStats_Row_C.SetValue
	 */
	struct UBP_ProfileStats_Row_C_SetValue_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileStats_Row.BP_ProfileStats_Row_C.PreConstruct
	 */
	struct UBP_ProfileStats_Row_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileStats_Row.BP_ProfileStats_Row_C.Construct
	 */
	struct UBP_ProfileStats_Row_C_Construct_Params
	{	};

	/**
	 * Function BP_ProfileStats_Row.BP_ProfileStats_Row_C.ExecuteUbergraph_BP_ProfileStats_Row
	 */
	struct UBP_ProfileStats_Row_C_ExecuteUbergraph_BP_ProfileStats_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
