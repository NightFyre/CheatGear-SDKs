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
	 * Function WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C.AddEntry
	 */
	struct UWBP_Heltmet_Customisation_C_AddEntry_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FPrimaryAssetId>                             ItemAssetIdList;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C.Construct
	 */
	struct UWBP_Heltmet_Customisation_C_Construct_Params
	{	};

	/**
	 * Function WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C.ExecuteUbergraph_WBP_Heltmet_Customisation
	 */
	struct UWBP_Heltmet_Customisation_C_ExecuteUbergraph_WBP_Heltmet_Customisation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
