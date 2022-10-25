#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_ServerDetails.WBP_ServerDetails_C.UpdateServerMetaData
	 */
	struct UWBP_ServerDetails_C_UpdateServerMetaData_Params
	{
	public:
		struct FServerInfo                                         ServerInfo;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ServerDetails.WBP_ServerDetails_C.UpdateServerData
	 */
	struct UWBP_ServerDetails_C_UpdateServerData_Params
	{
	public:
		struct FServerInfo                                         ServerInfo;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ServerDetails.WBP_ServerDetails_C.SetupServerDetails
	 */
	struct UWBP_ServerDetails_C_SetupServerDetails_Params
	{
	public:
		struct FServerInfo                                         ServerInfo;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ServerDetails.WBP_ServerDetails_C.BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ServerDetails_C_BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ServerDetails.WBP_ServerDetails_C.ExecuteUbergraph_WBP_ServerDetails
	 */
	struct UWBP_ServerDetails_C_ExecuteUbergraph_WBP_ServerDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ServerDetails.WBP_ServerDetails_C.OnJoinServerBtnClicked__DelegateSignature
	 */
	struct UWBP_ServerDetails_C_OnJoinServerBtnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
