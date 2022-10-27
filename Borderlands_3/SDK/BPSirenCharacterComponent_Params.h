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
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.GetPhaseFlareSpawnLocation
	 */
	struct UBPSirenCharacterComponent_C_GetPhaseFlareSpawnLocation_Params
	{
	public:
		struct FVector                                             res;                                                     // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseFlareSpawnLocation
	 */
	struct UBPSirenCharacterComponent_C_SetPhaseFlareSpawnLocation_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.Start3rdPersonArmFade
	 */
	struct UBPSirenCharacterComponent_C_Start3rdPersonArmFade_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInstant;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartTattoFade
	 */
	struct UBPSirenCharacterComponent_C_StartTattoFade_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetArmElement
	 */
	struct UBPSirenCharacterComponent_C_SetArmElement_Params
	{
	public:
		EPhaseTranceElementalType                                  NewElement;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartArmMaterialInstanceFade
	 */
	struct UBPSirenCharacterComponent_C_StartArmMaterialInstanceFade_Params
	{
	public:
		class UMaterialInstance*                                   NewInstance;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ReceiveBeginPlay
	 */
	struct UBPSirenCharacterComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnActionSkillActivated
	 */
	struct UBPSirenCharacterComponent_C_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnRushEventHappened
	 */
	struct UBPSirenCharacterComponent_C_OnRushEventHappened_Params
	{	};

	/**
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseCastMeshActive
	 */
	struct UBPSirenCharacterComponent_C_SetPhaseCastMeshActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ExecuteUbergraph_BPSirenCharacterComponent
	 */
	struct UBPSirenCharacterComponent_C_ExecuteUbergraph_BPSirenCharacterComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PSV4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
