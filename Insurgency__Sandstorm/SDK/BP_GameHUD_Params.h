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
	 * Function BP_GameHUD.BP_GameHUD_C.DoCreateRoundVictory
	 */
	struct UBP_GameHUD_C_DoCreateRoundVictory_Params
	{
	public:
		struct FPlayerRoundOverData                                UIData;                                                  // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UWidget*                                             ReturnValue;                                             // 0x00B8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameHUD.BP_GameHUD_C.DoCreateDamageIndicator
	 */
	struct UBP_GameHUD_C_DoCreateDamageIndicator_Params
	{
	public:
		struct FVector                                             HitSource;                                               // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameHUD.BP_GameHUD_C.OnQueueObjectiveBriefing
	 */
	struct UBP_GameHUD_C_OnQueueObjectiveBriefing_Params
	{	};

	/**
	 * Function BP_GameHUD.BP_GameHUD_C.OnExitSpawnZone
	 */
	struct UBP_GameHUD_C_OnExitSpawnZone_Params
	{	};

	/**
	 * Function BP_GameHUD.BP_GameHUD_C.DoMapVoteStarted
	 */
	struct UBP_GameHUD_C_DoMapVoteStarted_Params
	{	};

	/**
	 * Function BP_GameHUD.BP_GameHUD_C.ToggleResupplyVisibility
	 */
	struct UBP_GameHUD_C_ToggleResupplyVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameHUD.BP_GameHUD_C.OnInGameMenuVisibleDelegate
	 */
	struct UBP_GameHUD_C_OnInGameMenuVisibleDelegate_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameHUD.BP_GameHUD_C.Construct
	 */
	struct UBP_GameHUD_C_Construct_Params
	{	};

	/**
	 * Function BP_GameHUD.BP_GameHUD_C.ExecuteUbergraph_BP_GameHUD
	 */
	struct UBP_GameHUD_C_ExecuteUbergraph_BP_GameHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OWE0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
