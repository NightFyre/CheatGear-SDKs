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
	 * Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddEntry
	 */
	struct UWBP_PlatformCustomisation_C_AddEntry_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FPrimaryAssetId>                             ItemAssetIdList;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bDoNotSort;                                              // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KXQE[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.Construct
	 */
	struct UWBP_PlatformCustomisation_C_Construct_Params
	{	};

	/**
	 * Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddAmmunition
	 */
	struct UWBP_PlatformCustomisation_C_AddAmmunition_Params
	{	};

	/**
	 * Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddGrenades
	 */
	struct UWBP_PlatformCustomisation_C_AddGrenades_Params
	{	};

	/**
	 * Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddEquipment
	 */
	struct UWBP_PlatformCustomisation_C_AddEquipment_Params
	{	};

	/**
	 * Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.ExecuteUbergraph_WBP_PlatformCustomisation
	 */
	struct UWBP_PlatformCustomisation_C_ExecuteUbergraph_WBP_PlatformCustomisation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
