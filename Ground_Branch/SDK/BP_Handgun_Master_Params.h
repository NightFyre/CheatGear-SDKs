#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_Handgun_Master.BP_Handgun_Master_C.GetWeaponsPositionTransitionTime
	 */
	struct ABP_Handgun_Master_C_GetWeaponsPositionTransitionTime_Params
	{
	public:
		EGBWeaponPosition                                          FromPosition;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGBWeaponPosition                                          ToPosition;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UJLJ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Handgun_Master.BP_Handgun_Master_C.LockOnEmpty
	 */
	struct ABP_Handgun_Master_C_LockOnEmpty_Params
	{
	public:
		bool                                                       bShouldLock;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_06SK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Handgun_Master.BP_Handgun_Master_C.SetEquipInfo
	 */
	struct ABP_Handgun_Master_C_SetEquipInfo_Params
	{
	public:
		unsigned char                                              OutSwitchType;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHandsRequired                                             OutHandsRequired;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Handgun_Master.BP_Handgun_Master_C.PositionAlphaMet
	 */
	struct ABP_Handgun_Master_C_PositionAlphaMet_Params
	{	};

	/**
	 * Function BP_Handgun_Master.BP_Handgun_Master_C.ReceiveBeginPlay
	 */
	struct ABP_Handgun_Master_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Handgun_Master.BP_Handgun_Master_C.ExecuteUbergraph_BP_Handgun_Master
	 */
	struct ABP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1DNO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
