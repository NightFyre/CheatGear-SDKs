#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetUpdateContentTimer
	 */
	struct UMonitoredWindowsContent_C_GetUpdateContentTimer_Params
	{
	public:
		struct FTimerHandle                                        updateContentTimer;                                      // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsBCUDataInitialized
	 */
	struct UMonitoredWindowsContent_C_IsBCUDataInitialized_Params
	{
	public:
		bool                                                       IsBCUDataInitialized;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmSwitchedOff
	 */
	struct UMonitoredWindowsContent_C_NotifyParentOnAlarmSwitchedOff_Params
	{	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmRaised
	 */
	struct UMonitoredWindowsContent_C_NotifyParentOnAlarmRaised_Params
	{	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsPrisonerLifeComponentValid
	 */
	struct UMonitoredWindowsContent_C_IsPrisonerLifeComponentValid_Params
	{
	public:
		bool                                                       isLifeComponentValid;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetPrisoner
	 */
	struct UMonitoredWindowsContent_C_GetPrisoner_Params
	{
	public:
		class APrisoner*                                           Prisoner;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetDefaultPrisonerToMonitor
	 */
	struct UMonitoredWindowsContent_C_SetDefaultPrisonerToMonitor_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MTCE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetPrisonerToMonitor
	 */
	struct UMonitoredWindowsContent_C_SetPrisonerToMonitor_Params
	{
	public:
		class APrisoner*                                           Prisoner;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetDefaultPrisoner
	 */
	struct UMonitoredWindowsContent_C_GetDefaultPrisoner_Params
	{
	public:
		class APrisoner*                                           Prisoner;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.OnPrisonerSet
	 */
	struct UMonitoredWindowsContent_C_OnPrisonerSet_Params
	{	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.UpdateContent
	 */
	struct UMonitoredWindowsContent_C_UpdateContent_Params
	{	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.Construct
	 */
	struct UMonitoredWindowsContent_C_Construct_Params
	{	};

	/**
	 * Function MonitoredWindowsContent.MonitoredWindowsContent_C.ExecuteUbergraph_MonitoredWindowsContent
	 */
	struct UMonitoredWindowsContent_C_ExecuteUbergraph_MonitoredWindowsContent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
