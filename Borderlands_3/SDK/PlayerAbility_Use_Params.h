#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.StopGiveUpInner
	 */
	struct UPlayerAbility_Use_C_StopGiveUpInner_Params
	{	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.StartGiveUpInner
	 */
	struct UPlayerAbility_Use_C_StartGiveUpInner_Params
	{	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.GetFFYLComponent
	 */
	struct UPlayerAbility_Use_C_GetFFYLComponent_Params
	{
	public:
		class UFightForYourLifeComponent*                          res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.FlushLatentUses
	 */
	struct UPlayerAbility_Use_C_FlushLatentUses_Params
	{	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.GetUseComponent
	 */
	struct UPlayerAbility_Use_C_GetUseComponent_Params
	{
	public:
		class UUseComponent*                                       res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.StopUseInner
	 */
	struct UPlayerAbility_Use_C_StopUseInner_Params
	{
	public:
		EUsabilityType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_78LO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.StartUseInner
	 */
	struct UPlayerAbility_Use_C_StartUseInner_Params
	{
	public:
		EUsabilityType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I005[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_14
	 */
	struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_14_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_13
	 */
	struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_13_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_12
	 */
	struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_12_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_11
	 */
	struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_11_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_10
	 */
	struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_10_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_9
	 */
	struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_9_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_ExitSeat_K2Node_GbxInputActionEvent_Discrete_8
	 */
	struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_ExitSeat_K2Node_GbxInputActionEvent_Discrete_8_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.OnPaused
	 */
	struct UPlayerAbility_Use_C_OnPaused_Params
	{	};

	/**
	 * Function PlayerAbility_Use.PlayerAbility_Use_C.ExecuteUbergraph_PlayerAbility_Use
	 */
	struct UPlayerAbility_Use_C_ExecuteUbergraph_PlayerAbility_Use_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q07N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
