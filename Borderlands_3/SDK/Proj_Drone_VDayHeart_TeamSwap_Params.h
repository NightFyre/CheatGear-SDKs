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
	 * Function Proj_Drone_VDayHeart_TeamSwap.Proj_Drone_VDayHeart_TeamSwap_C.UserConstructionScript
	 */
	struct AProj_Drone_VDayHeart_TeamSwap_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Drone_VDayHeart_TeamSwap.Proj_Drone_VDayHeart_TeamSwap_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire
	 */
	struct AProj_Drone_VDayHeart_TeamSwap_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Drone_VDayHeart_TeamSwap.Proj_Drone_VDayHeart_TeamSwap_C.ExecuteUbergraph_Proj_Drone_VDayHeart_TeamSwap
	 */
	struct AProj_Drone_VDayHeart_TeamSwap_C_ExecuteUbergraph_Proj_Drone_VDayHeart_TeamSwap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
