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
	 * Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.DetermineValidRailAttachments
	 */
	struct UWBP_FirearmCustomisation_C_DetermineValidRailAttachments_Params
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.GetRiserWarningVis
	 */
	struct UWBP_FirearmCustomisation_C_GetRiserWarningVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddEntries
	 */
	struct UWBP_FirearmCustomisation_C_AddEntries_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FPrimaryAssetId>                             ItemAssetIdList;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.Construct
	 */
	struct UWBP_FirearmCustomisation_C_Construct_Params
	{	};

	/**
	 * Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddSights
	 */
	struct UWBP_FirearmCustomisation_C_AddSights_Params
	{	};

	/**
	 * Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddRailAdapter
	 */
	struct UWBP_FirearmCustomisation_C_AddRailAdapter_Params
	{	};

	/**
	 * Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.GenerateRailAttachmentLists
	 */
	struct UWBP_FirearmCustomisation_C_GenerateRailAttachmentLists_Params
	{	};

	/**
	 * Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddMuzzleDevices
	 */
	struct UWBP_FirearmCustomisation_C_AddMuzzleDevices_Params
	{	};

	/**
	 * Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddMagazines
	 */
	struct UWBP_FirearmCustomisation_C_AddMagazines_Params
	{	};

	/**
	 * Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.ExecuteUbergraph_WBP_FirearmCustomisation
	 */
	struct UWBP_FirearmCustomisation_C_ExecuteUbergraph_WBP_FirearmCustomisation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
