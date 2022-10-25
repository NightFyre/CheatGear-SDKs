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
	 * Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.UserConstructionScript
	 */
	struct AProj_WhiskeyTangoFoxtrotIED_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnExplode
	 */
	struct AProj_WhiskeyTangoFoxtrotIED_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitWorld
	 */
	struct AProj_WhiskeyTangoFoxtrotIED_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitEnemy
	 */
	struct AProj_WhiskeyTangoFoxtrotIED_C_OnHitEnemy_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ReceiveBeginPlay
	 */
	struct AProj_WhiskeyTangoFoxtrotIED_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED
	 */
	struct AProj_WhiskeyTangoFoxtrotIED_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WC4Q[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED
	 */
	struct AProj_WhiskeyTangoFoxtrotIED_C_ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
