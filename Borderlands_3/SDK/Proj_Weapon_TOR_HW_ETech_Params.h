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
	 * Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.UserConstructionScript
	 */
	struct AProj_Weapon_TOR_HW_ETech_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_Weapon_MAL_SG_Wisp
	 */
	struct AProj_Weapon_TOR_HW_ETech_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_Weapon_MAL_SG_Wisp_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VOQZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.ReceiveDestroyed
	 */
	struct AProj_Weapon_TOR_HW_ETech_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.ReceiveBeginPlay
	 */
	struct AProj_Weapon_TOR_HW_ETech_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.RainDeath
	 */
	struct AProj_Weapon_TOR_HW_ETech_C_RainDeath_Params
	{	};

	/**
	 * Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.OnExplode
	 */
	struct AProj_Weapon_TOR_HW_ETech_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_ETech
	 */
	struct AProj_Weapon_TOR_HW_ETech_C_ExecuteUbergraph_Proj_Weapon_TOR_HW_ETech_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
