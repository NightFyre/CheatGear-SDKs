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
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.GeNetInfoVis
	 */
	struct UWBP_StatOverlay_C_GeNetInfoVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.GetFPSVIS
	 */
	struct UWBP_StatOverlay_C_GetFPSVIS_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextOutLossPercentage
	 */
	struct UWBP_StatOverlay_C_GetTextOutLossPercentage_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextOutPacketsPerSecond
	 */
	struct UWBP_StatOverlay_C_GetTextOutPacketsPerSecond_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextOutKiloBytesPerSecond
	 */
	struct UWBP_StatOverlay_C_GetTextOutKiloBytesPerSecond_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextInLossPercentage
	 */
	struct UWBP_StatOverlay_C_GetTextInLossPercentage_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextInPacketsPerSecond
	 */
	struct UWBP_StatOverlay_C_GetTextInPacketsPerSecond_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextInKiloBytesPerSecond
	 */
	struct UWBP_StatOverlay_C_GetTextInKiloBytesPerSecond_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextPing
	 */
	struct UWBP_StatOverlay_C_GetTextPing_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextFPS
	 */
	struct UWBP_StatOverlay_C_GetTextFPS_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.Tick
	 */
	struct UWBP_StatOverlay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StatOverlay.WBP_StatOverlay_C.ExecuteUbergraph_WBP_StatOverlay
	 */
	struct UWBP_StatOverlay_C_ExecuteUbergraph_WBP_StatOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5IKS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
