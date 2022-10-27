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
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdatePacketLoss
	 */
	struct UBP_NetworkStatusUI_C_UpdatePacketLoss_Params
	{
	public:
		float                                                      InPktLoss;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutPktLoss;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdateSize
	 */
	struct UBP_NetworkStatusUI_C_UpdateSize_Params
	{
	public:
		unsigned char                                              NewPosition;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdateIncomingPacketRate
	 */
	struct UBP_NetworkStatusUI_C_UpdateIncomingPacketRate_Params
	{
	public:
		int32_t                                                    InRate;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdatePing
	 */
	struct UBP_NetworkStatusUI_C_UpdatePing_Params
	{
	public:
		float                                                      Ping;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdateSeverityColor
	 */
	struct UBP_NetworkStatusUI_C_UpdateSeverityColor_Params
	{
	public:
		class UImage*                                              ImagePanel;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCritical;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetLowServerFPSStatusVisibility
	 */
	struct UBP_NetworkStatusUI_C_GetLowServerFPSStatusVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetPacketLossStatusVisibility
	 */
	struct UBP_NetworkStatusUI_C_GetPacketLossStatusVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetLatencyStatusVisibility
	 */
	struct UBP_NetworkStatusUI_C_GetLatencyStatusVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetDisconnectedStatusVisibility
	 */
	struct UBP_NetworkStatusUI_C_GetDisconnectedStatusVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.Construct
	 */
	struct UBP_NetworkStatusUI_C_Construct_Params
	{	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.OnNetTimingOutUpdate
	 */
	struct UBP_NetworkStatusUI_C_OnNetTimingOutUpdate_Params
	{
	public:
		bool                                                       bTimingOut;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.OnStatsUpdated
	 */
	struct UBP_NetworkStatusUI_C_OnStatsUpdated_Params
	{
	public:
		struct FClientNetStats                                     Stats;                                                   // 0x0000(0x002C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.OnPlatformConnectionStatusChanged
	 */
	struct UBP_NetworkStatusUI_C_OnPlatformConnectionStatusChanged_Params
	{
	public:
		bool                                                       bConnected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.ExecuteUbergraph_BP_NetworkStatusUI
	 */
	struct UBP_NetworkStatusUI_C_ExecuteUbergraph_BP_NetworkStatusUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
