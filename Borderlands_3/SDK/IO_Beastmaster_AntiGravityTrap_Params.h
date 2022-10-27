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
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.InitTrapMods
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_InitTrapMods_Params
	{	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.CanConfuseEnemy
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_CanConfuseEnemy_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N1KK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.CanKnockUpEnemy
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_CanKnockUpEnemy_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AC2S[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SetupEmitters
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_SetupEmitters_Params
	{	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.UserConstructionScript
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_UserConstructionScript_Params
	{	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.KnockupTarget
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_KnockupTarget_Params
	{	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.TrapOnActionSkillEnd
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_TrapOnActionSkillEnd_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ReceiveDestroyed
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.FindAntiGravTargets
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_FindAntiGravTargets_Params
	{	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ConfuseTargets
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_ConfuseTargets_Params
	{	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SetTrapEndCondition
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_SetTrapEndCondition_Params
	{	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.DestroyTrap
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_DestroyTrap_Params
	{	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SpawnMod5Loot
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_SpawnMod5Loot_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ReceiveBeginPlay
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap_Params
	{
	public:
		struct FUseEvent                                           UseEvent;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap
	 */
	struct AIO_Beastmaster_AntiGravityTrap_C_ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
