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
	 * Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.PlayFadeOut
	 */
	struct UWBP_AmmoCheckIndicator_C_PlayFadeOut_Params
	{	};

	/**
	 * Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.Collapse
	 */
	struct UWBP_AmmoCheckIndicator_C_Collapse_Params
	{	};

	/**
	 * Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.DisplayAmmoCheck
	 */
	struct UWBP_AmmoCheckIndicator_C_DisplayAmmoCheck_Params
	{
	public:
		class FText                                                AmmoCheckText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          AmmoCheckIcon;                                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DisplayTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShowInterdiction;                                       // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.ExecuteUbergraph_WBP_AmmoCheckIndicator
	 */
	struct UWBP_AmmoCheckIndicator_C_ExecuteUbergraph_WBP_AmmoCheckIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
