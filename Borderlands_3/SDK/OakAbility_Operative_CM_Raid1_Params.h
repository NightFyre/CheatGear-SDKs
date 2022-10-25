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
	 * Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnActivated
	 */
	struct UOakAbility_Operative_CM_Raid1_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStartSliding
	 */
	struct UOakAbility_Operative_CM_Raid1_C_OnStartSliding_Params
	{	};

	/**
	 * Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStopSliding
	 */
	struct UOakAbility_Operative_CM_Raid1_C_OnStopSliding_Params
	{
	public:
		struct FSlideEndedDetails                                  Details;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StartClassModBonus
	 */
	struct UOakAbility_Operative_CM_Raid1_C_StartClassModBonus_Params
	{	};

	/**
	 * Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StopClassModBonus
	 */
	struct UOakAbility_Operative_CM_Raid1_C_StopClassModBonus_Params
	{	};

	/**
	 * Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.ExecuteUbergraph_OakAbility_Operative_CM_Raid1
	 */
	struct UOakAbility_Operative_CM_Raid1_C_ExecuteUbergraph_OakAbility_Operative_CM_Raid1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LAGW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
