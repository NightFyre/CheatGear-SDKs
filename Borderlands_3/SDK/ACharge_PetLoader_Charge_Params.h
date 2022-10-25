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
	 * Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnLoop
	 */
	struct UACharge_PetLoader_Charge_C_OnLoop_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.AttackCommandUsed
	 */
	struct UACharge_PetLoader_Charge_C_AttackCommandUsed_Params
	{	};

	/**
	 * Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.StrikeDamage
	 */
	struct UACharge_PetLoader_Charge_C_StrikeDamage_Params
	{	};

	/**
	 * Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnStrike
	 */
	struct UACharge_PetLoader_Charge_C_OnStrike_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnHitWall
	 */
	struct UACharge_PetLoader_Charge_C_OnHitWall_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerEnd
	 */
	struct UACharge_PetLoader_Charge_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DXFL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerBegin
	 */
	struct UACharge_PetLoader_Charge_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.CallAttackCommandUsed
	 */
	struct UACharge_PetLoader_Charge_C_CallAttackCommandUsed_Params
	{	};

	/**
	 * Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.ExecuteUbergraph_ACharge_PetLoader_Charge
	 */
	struct UACharge_PetLoader_Charge_C_ExecuteUbergraph_ACharge_PetLoader_Charge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
