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
	 * Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.UpdateProgress
	 */
	struct UBP_Widget_ModDownloadProgress_C_UpdateProgress_Params
	{	};

	/**
	 * Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.Construct
	 */
	struct UBP_Widget_ModDownloadProgress_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.OnDownloadStart
	 */
	struct UBP_Widget_ModDownloadProgress_C_OnDownloadStart_Params
	{
	public:
		struct FModObject                                          Mod;                                                     // 0x0000(0x02D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.OnDownloadQueueFinished
	 */
	struct UBP_Widget_ModDownloadProgress_C_OnDownloadQueueFinished_Params
	{	};

	/**
	 * Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.Tick
	 */
	struct UBP_Widget_ModDownloadProgress_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.ExecuteUbergraph_BP_Widget_ModDownloadProgress
	 */
	struct UBP_Widget_ModDownloadProgress_C_ExecuteUbergraph_BP_Widget_ModDownloadProgress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
