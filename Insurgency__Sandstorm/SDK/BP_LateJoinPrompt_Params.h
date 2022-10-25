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
	 * Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.SetUsingController
	 */
	struct UBP_LateJoinPrompt_C_SetUsingController_Params
	{
	public:
		bool                                                       UsingController;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            Key;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HD9Q[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.JoinMatch
	 */
	struct UBP_LateJoinPrompt_C_JoinMatch_Params
	{	};

	/**
	 * Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.ShouldBeVisibleForLatejoin
	 */
	struct UBP_LateJoinPrompt_C_ShouldBeVisibleForLatejoin_Params
	{
	public:
		bool                                                       bShouldBeVisible;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K9CT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.ShouldBeVisibleForMatchmaking
	 */
	struct UBP_LateJoinPrompt_C_ShouldBeVisibleForMatchmaking_Params
	{
	public:
		bool                                                       bShouldBeVisible;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.GetOverallVisibility
	 */
	struct UBP_LateJoinPrompt_C_GetOverallVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.Construct
	 */
	struct UBP_LateJoinPrompt_C_Construct_Params
	{	};

	/**
	 * Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.BndEvt__BtnJoin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_LateJoinPrompt_C_BndEvt__BtnJoin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.ExecuteUbergraph_BP_LateJoinPrompt
	 */
	struct UBP_LateJoinPrompt_C_ExecuteUbergraph_BP_LateJoinPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LKDH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
