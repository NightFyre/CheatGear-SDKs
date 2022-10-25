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
	 * Function BPDuelTotem.BPDuelTotem_C.FinalizeCombatants
	 */
	struct ABPDuelTotem_C_FinalizeCombatants_Params
	{	};

	/**
	 * Function BPDuelTotem.BPDuelTotem_C.SetCombatant
	 */
	struct ABPDuelTotem_C_SetCombatant_Params
	{
	public:
		class AOakCharacter_Player*                                Combatant;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGbxSkeletalMeshComponent*                           SceneSkMesh;                                             // 0x0008(0x0008)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPDuelTotem.BPDuelTotem_C.UserConstructionScript
	 */
	struct ABPDuelTotem_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPDuelTotem.BPDuelTotem_C.Timeline_0__FinishedFunc
	 */
	struct ABPDuelTotem_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BPDuelTotem.BPDuelTotem_C.Timeline_0__UpdateFunc
	 */
	struct ABPDuelTotem_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BPDuelTotem.BPDuelTotem_C.OnDuelStateChanged
	 */
	struct ABPDuelTotem_C_OnDuelStateChanged_Params
	{
	public:
		EPotentialDuelState                                        NewDuelState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPDuelTotem.BPDuelTotem_C.UpdateCombatants
	 */
	struct ABPDuelTotem_C_UpdateCombatants_Params
	{
	public:
		TArray<class AOakCharacter_Player*>                        Players;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BPDuelTotem.BPDuelTotem_C.OnDestroyTotem
	 */
	struct ABPDuelTotem_C_OnDestroyTotem_Params
	{
	public:
		EDuelTotemDestroyReason                                    TheDestroyReason;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPDuelTotem.BPDuelTotem_C.ReceiveBeginPlay
	 */
	struct ABPDuelTotem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPDuelTotem.BPDuelTotem_C.OnAcceptedPlayersChanged
	 */
	struct ABPDuelTotem_C_OnAcceptedPlayersChanged_Params
	{	};

	/**
	 * Function BPDuelTotem.BPDuelTotem_C.ExecuteUbergraph_BPDuelTotem
	 */
	struct ABPDuelTotem_C_ExecuteUbergraph_BPDuelTotem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
