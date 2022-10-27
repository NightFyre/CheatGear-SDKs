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
	 * Function BP_Loading_ModeRule.BP_Loading_ModeRule_C.AlterData
	 */
	struct UBP_Loading_ModeRule_C_AlterData_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Loading_ModeRule.BP_Loading_ModeRule_C.Construct
	 */
	struct UBP_Loading_ModeRule_C_Construct_Params
	{	};

	/**
	 * Function BP_Loading_ModeRule.BP_Loading_ModeRule_C.PreConstruct
	 */
	struct UBP_Loading_ModeRule_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Loading_ModeRule.BP_Loading_ModeRule_C.ExecuteUbergraph_BP_Loading_ModeRule
	 */
	struct UBP_Loading_ModeRule_C_ExecuteUbergraph_BP_Loading_ModeRule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
