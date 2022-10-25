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
	 * Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672
	 */
	struct UPassiveSkill_Operative_DuctTapeMod_C_GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672
	 */
	struct UPassiveSkill_Operative_DuctTapeMod_C_GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.OnActivated
	 */
	struct UPassiveSkill_Operative_DuctTapeMod_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponReloadEnded
	 */
	struct UPassiveSkill_Operative_DuctTapeMod_C_DuctTape_OnWeaponReloadEnded_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponUsed
	 */
	struct UPassiveSkill_Operative_DuctTapeMod_C_DuctTape_OnWeaponUsed_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod
	 */
	struct UPassiveSkill_Operative_DuctTapeMod_C_ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7UVA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
