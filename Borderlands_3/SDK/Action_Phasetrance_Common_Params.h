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
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AssembleActivationCombo
	 */
	struct UAction_Phasetrance_Common_C_AssembleActivationCombo_Params
	{
	public:
		struct FPhaseTranceActivationComboData                     ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.PlayPhaseTranceHandEffects
	 */
	struct UAction_Phasetrance_Common_C_PlayPhaseTranceHandEffects_Params
	{	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillReactDialogue
	 */
	struct UAction_Phasetrance_Common_C_TriggerActionSkillReactDialogue_Params
	{	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillUseDialogue
	 */
	struct UAction_Phasetrance_Common_C_TriggerActionSkillUseDialogue_Params
	{	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.Cleanup
	 */
	struct UAction_Phasetrance_Common_C_Cleanup_Params
	{	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnEnd
	 */
	struct UAction_Phasetrance_Common_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_48KS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerEnd
	 */
	struct UAction_Phasetrance_Common_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_64M2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryEffectComponents
	 */
	struct UAction_Phasetrance_Common_C_AN_TryEffectComponents_Params
	{	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerBegin
	 */
	struct UAction_Phasetrance_Common_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnBegin
	 */
	struct UAction_Phasetrance_Common_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryImpulse
	 */
	struct UAction_Phasetrance_Common_C_AN_TryImpulse_Params
	{	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryNova
	 */
	struct UAction_Phasetrance_Common_C_AN_TryNova_Params
	{	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove3pGhostArms
	 */
	struct UAction_Phasetrance_Common_C_AN_Remove3pGhostArms_Params
	{	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove1pGhostArms
	 */
	struct UAction_Phasetrance_Common_C_AN_Remove1pGhostArms_Params
	{	};

	/**
	 * Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.ExecuteUbergraph_Action_Phasetrance_Common
	 */
	struct UAction_Phasetrance_Common_C_ExecuteUbergraph_Action_Phasetrance_Common_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
