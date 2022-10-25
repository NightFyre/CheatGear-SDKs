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
	 * Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.GetRatioSafe
	 */
	struct UBP_Profile_OverviewStats_C_GetRatioSafe_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    B;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.PopulateFromPage
	 */
	struct UBP_Profile_OverviewStats_C_PopulateFromPage_Params
	{
	public:
		struct FSandstormPlayerProfilePage                         StatPage;                                                // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.DelegateOnXPUpdated
	 */
	struct UBP_Profile_OverviewStats_C_DelegateOnXPUpdated_Params
	{
	public:
		int64_t                                                    Experience;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.Construct
	 */
	struct UBP_Profile_OverviewStats_C_Construct_Params
	{	};

	/**
	 * Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.UpdateWeaponIcon
	 */
	struct UBP_Profile_OverviewStats_C_UpdateWeaponIcon_Params
	{
	public:
		class FString                                              WeaponName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.ExecuteUbergraph_BP_Profile_OverviewStats
	 */
	struct UBP_Profile_OverviewStats_C_ExecuteUbergraph_BP_Profile_OverviewStats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
