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
	 * Function StatsCollector.CustomStatsCollector.SetTickEnabled
	 */
	struct UCustomStatsCollector_SetTickEnabled_Params
	{
	public:
		bool                                                       bInEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StatsCollector.CustomStatsCollector.OnSequanceLevelUnloaded
	 */
	struct UCustomStatsCollector_OnSequanceLevelUnloaded_Params
	{	};

	/**
	 * Function StatsCollector.CustomStatsCollector.OnSequanceLevelStopped
	 */
	struct UCustomStatsCollector_OnSequanceLevelStopped_Params
	{	};

	/**
	 * Function StatsCollector.CustomStatsCollector.OnSequanceLevelLoaded
	 */
	struct UCustomStatsCollector_OnSequanceLevelLoaded_Params
	{	};

	/**
	 * Function StatsCollector.CustomStatsCollector.OnAutotestLevelUnloaded
	 */
	struct UCustomStatsCollector_OnAutotestLevelUnloaded_Params
	{	};

	/**
	 * Function StatsCollector.CustomStatsCollector.OnAutotestLevelLoaded
	 */
	struct UCustomStatsCollector_OnAutotestLevelLoaded_Params
	{	};

	/**
	 * Function StatsCollector.CustomStatsCollector.NewFrame
	 */
	struct UCustomStatsCollector_NewFrame_Params
	{
	public:
		int64_t                                                    targetFrame;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StatsCollector.FPSCounterWidget.UpdateFrameCount
	 */
	struct UFPSCounterWidget_UpdateFrameCount_Params
	{
	public:
		class UTextBlock*                                          FPSTextBlock;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextBlock*                                          MAX_FPSTextBlock;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextBlock*                                          AVR_FPSTextBlock;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StatsCollector.FPSCounterWidget.GetMaxFPS
	 */
	struct UFPSCounterWidget_GetMaxFPS_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StatsCollector.FPSCounterWidget.GetCurrentFPS
	 */
	struct UFPSCounterWidget_GetCurrentFPS_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StatsCollector.FPSCounterWidget.GetAvrFPS
	 */
	struct UFPSCounterWidget_GetAvrFPS_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
