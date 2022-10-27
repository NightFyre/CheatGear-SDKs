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
	 * Function BP_OSSStatus.BP_OSSStatus_C.GetPlatformIcon
	 */
	struct UBP_OSSStatus_C_GetPlatformIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OSSStatus.BP_OSSStatus_C.UpdateAnimationFade
	 */
	struct UBP_OSSStatus_C_UpdateAnimationFade_Params
	{	};

	/**
	 * Function BP_OSSStatus.BP_OSSStatus_C.Get_HorizNewWorldBox_ToolTipWidget
	 */
	struct UBP_OSSStatus_C_Get_HorizNewWorldBox_ToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OSSStatus.BP_OSSStatus_C.Get_HorizPlatformBox_ToolTipWidget
	 */
	struct UBP_OSSStatus_C_Get_HorizPlatformBox_ToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OSSStatus.BP_OSSStatus_C.GenerateTooltip
	 */
	struct UBP_OSSStatus_C_GenerateTooltip_Params
	{
	public:
		bool                                                       bPlatform;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2CRK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ToolTipText;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OSSStatus.BP_OSSStatus_C.SetState
	 */
	struct UBP_OSSStatus_C_SetState_Params
	{
	public:
		bool                                                       bPlatformState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EOSSNetworkState                                           NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OSSStatus.BP_OSSStatus_C.OnNewWorldStateUpdated
	 */
	struct UBP_OSSStatus_C_OnNewWorldStateUpdated_Params
	{
	public:
		EOSSNetworkState                                           OldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOSSNetworkState                                           NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OSSStatus.BP_OSSStatus_C.OnPlatformStateUpdated
	 */
	struct UBP_OSSStatus_C_OnPlatformStateUpdated_Params
	{
	public:
		EOSSNetworkState                                           OldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOSSNetworkState                                           NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OSSStatus.BP_OSSStatus_C.Construct
	 */
	struct UBP_OSSStatus_C_Construct_Params
	{	};

	/**
	 * Function BP_OSSStatus.BP_OSSStatus_C.CustomNewWorldState
	 */
	struct UBP_OSSStatus_C_CustomNewWorldState_Params
	{
	public:
		EOSSNetworkState                                           NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OSSStatus.BP_OSSStatus_C.ExecuteUbergraph_BP_OSSStatus
	 */
	struct UBP_OSSStatus_C_ExecuteUbergraph_BP_OSSStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
